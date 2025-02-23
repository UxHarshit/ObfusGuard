#ifndef OBFUSCATE_HPP
#define OBFUSCATE_HPP

// Config CONTROL_F_BRANCHING

#pragma region SETTINGS
    #define CONTROL_FLOW_BRANCHING 1
#pragma endregion SETTINGS


// Prevents compiler from inlining forcefully
static volatile char _xax_ = 'a',_xbx_ = 'b',_xcx_ = 'c',_xdx_ = 'd',_xex_ = 'e',_xfx_ = 'f',
                _xgx_ = 'g',_xhx_ = 'h',_xix_ = 'i',_xjx_ = 'j',_xkx_ = 'k',_xlx_ = 'l',_xmx_ = 'm',_xnx_ = 'n',_xox_ = 'o',
                _xpx_ = 'p',_xqx_ = 'q',_xrx_ = 'r',_xsx_ = 's',_xtx_ = 't',_xux_ = 'u',_xvx_ = 'v',_xwx_ = 'w',
                _xxx_ = 'x',_xyx_ = 'y',_xzx_ = 'z';

static volatile int _n_1_ = 1, _n_2_ = 2, _n_3_ = 3, _n_4_ = 4, _n_5_ = 5, _n_6_ = 6, _n_7_ = 7, _n_8_ = 8, _n_9_ = 9;


// Non inlined functions
static __attribute__((noinline)) char __0() { return 0; }
static __attribute__((noinline)) char __1() { return 1; }
static __attribute__((noinline)) char __2() { return 2; }
static __attribute__((noinline)) char __3() { return 3; }
static __attribute__((noinline)) char __4() { return 4; }
static __attribute__((noinline)) char __5() { return 5; }
static __attribute__((noinline)) char __6() { return 6; }
static __attribute__((noinline)) char __7() { return 7; }
static __attribute__((noinline)) char __8() { return 8; }
static __attribute__((noinline)) char __9() { return 9; }

// Randomize function
#define RND(min, max) (rand() % (max - min + 1) + min)

#define _T_R_U_E_ ((((__4() * _n_2_) + (_n_6_ / __3()) + (RND(1,10) % 2)) - (_n_5_ - __2()))/ _n_3_)
#define _F_A_L_S_E_ (((((__5() * _n_3_) + (_n_4_ / __1()) + (RND(1,10) % 3)) - (_n_7_ - __6())) / _n_8_) * __0())

//Control flow functions
#define FUNC_PROCESS(c, b) if(c) { b; }
#define FUNC_TRUE(b) FUNC_PROCESS(_T_R_U_E_, b)
#define FUNC_FALSE(b) FUNC_PROCESS(_F_A_L_S_E_, b)

/*
 * Wrapper function to prevent compiler from inlining
 * @param val - (double) since largest value can be handled
 * */
volatile static __attribute__((noinline)) int proxy_wrap(double val){
    volatile double a = val * ((double)(RND(1,7)) - ((double)_n_3_ * 2));
    FUNC_TRUE(
        FUNC_FALSE(
            a = val * ((double)(RND(1,7)) - ((double)_n_3_ * 2));
        )
        FUNC_TRUE(
            a = val * ((double)(RND(1,7)) - ((double)_n_3_ * 2));
        )
    )
    return (int)a;
}


#if CONTROL_FLOW_BRANCHING
    #define if(cond) \
                if (_T_R_U_E_) \
                    if (proxy_wrap(cond) * _T_R_U_E_ && RND(1,9))
#endif

#endif