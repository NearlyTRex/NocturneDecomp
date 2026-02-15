; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_moon_cpp_CMoon_isAnimationFirstHalf_FUN_0052a3f0(CMoon *this_ptr)
;
; Parameters:
; CMoon *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_menu.cpp_renderMenuAndGetChoice_FUN_00510000 at 0051008e
;
; Referenced Globals:
;   double DOUBLE_00639fc9 = 30
;   float g_MoonAnimationTimer
;
; *****************************************************************************

section .text

    FLD float ptr [0x02f381e4]          ; 0052a3f0 | g_MoonAnimationTimer
        ;   Label: core_moon.cpp_CMoon_isAnimationFirstHalf_FUN_0052a3f0
    FCOMP double ptr [0x00639fc9]       ; 0052a3f6 | DOUBLE_00639fc9
    FNSTSW AX                           ; 0052a3fc
    SAHF                                ; 0052a3fe
    JC 0x0052a404                       ; 0052a3ff
        ;   XREF to: 0052a404 (CONDITIONAL_JUMP)  ; LAB_0052a404
    XOR EAX,EAX                         ; 0052a401
    RET                                 ; 0052a403
    MOV EAX,0x1                         ; 0052a404
        ;   Label: LAB_0052a404
    RET                                 ; 0052a409

