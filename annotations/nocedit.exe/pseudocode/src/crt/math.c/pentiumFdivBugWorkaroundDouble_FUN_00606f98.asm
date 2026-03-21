; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float10 __fpustack crt_math_c_pentiumFdivBugWorkaroundDouble_FUN_00606f98(float10 param0,double param1)
;
; Parameters:
; double           Stack[0x4]:8   param1
;
; Called Functions:
;   crt_math.c_pentiumFdivpWorkaround_FUN_00606f13
;
; *****************************************************************************

section .text

    PUSH EAX                            ; 00606f98
        ;   Label: crt_math.c_pentiumFdivBugWorkaroundDouble_FUN_00606f98
    MOV EAX,dword ptr [ESP + 0xc]       ; 00606f99
    AND EAX,0x7ff00000                  ; 00606f9d
    CMP EAX,0x7ff00000                  ; 00606fa2
    JZ 0x00606fdc                       ; 00606fa7
        ;   XREF to: 00606fdc (CONDITIONAL_JUMP)  ; LAB_00606fdc
    FNSTSW AX                           ; 00606fa9
    AND EAX,0x3800                      ; 00606fab
    JZ 0x00606fbf                       ; 00606fb0
        ;   XREF to: 00606fbf (CONDITIONAL_JUMP)  ; LAB_00606fbf
    FLD double ptr [ESP + 0x8]          ; 00606fb2
    CALL crt_math.c_pentiumFdivpWorkaround_FUN_00606f13 ; 00606fb6
        ;   XREF to: 00606f13 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_pentiumFdivpWorkaround_FUN_00606f13(float10 dividend, float10 divisor)
    POP EAX                             ; 00606fbb
    RET 0x8                             ; 00606fbc
    FXCH                                ; 00606fbf
        ;   Label: LAB_00606fbf
    SUB ESP,0xc                         ; 00606fc1
    FSTP extended double ptr [ESP]      ; 00606fc4
    FLD double ptr [ESP + 0x14]         ; 00606fc7
    CALL crt_math.c_pentiumFdivpWorkaround_FUN_00606f13 ; 00606fcb
        ;   XREF to: 00606f13 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_pentiumFdivpWorkaround_FUN_00606f13(float10 dividend, float10 divisor)
    FLD extended double ptr [ESP]       ; 00606fd0
    FXCH                                ; 00606fd3
    ADD ESP,0xc                         ; 00606fd5
    POP EAX                             ; 00606fd8
    RET 0x8                             ; 00606fd9
    FDIV double ptr [ESP + 0x8]         ; 00606fdc
        ;   Label: LAB_00606fdc
    POP EAX                             ; 00606fe0
    RET 0x8                             ; 00606fe1

