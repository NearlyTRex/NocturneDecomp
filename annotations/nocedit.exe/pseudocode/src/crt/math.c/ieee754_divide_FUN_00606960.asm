; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl float10 crt_math.c_ieee754_divide_FUN_00606960(float10 dividend, float10 divisor)
;
;
; XREF[43]:
;   crt_math.c_dispatch_divide_FUN_00606aaf at 00606abc
;   crt_math.c_pentiumFdivpWorkaround_FUN_00606f13 at 00606f1d
;   crt_unknown.c_FUN_00606ad0 at 00606ad7
;   crt_unknown.c_FUN_00606aeb at 00606afa
;   crt_unknown.c_FUN_00606b07 at 00606b0e
;   crt_unknown.c_FUN_00606b17 at 00606b1e
;   crt_unknown.c_FUN_00606b2b at 00606b32
;   crt_unknown.c_FUN_00606b3b at 00606b4a
;   crt_unknown.c_FUN_00606b60 at 00606b69
;   crt_unknown.c_FUN_00606b7f at 00606b90
;   ... and 33 more
;
; Referenced Globals:
;   byte[16] g_IEEE754ExponentClassTable
;   float g_IEEE754NormalScaleFactor = 0.9375
;   float g_IEEE754SubnormalScaleFactor = 1.0625
;   float g_IEEE754RenormScaleFactor = 9.223372E+18
;
; *****************************************************************************

section .text

    FLD extended double ptr [ESP + 0x10] ; 00606960
        ;   Label: crt_math.c_ieee754_divide_FUN_00606960
    FLD extended double ptr [ESP + 0x4] ; 00606964
    MOV EAX,dword ptr [ESP + 0x8]       ; 00606968
        ;   Label: LAB_00606968
    ADD EAX,EAX                         ; 0060696c
    JNC 0x006069fa                      ; 0060696e | LAB_006069fa
        ;   XREF to: 006069fa (CONDITIONAL_JUMP)
    XOR EAX,0xe000000                   ; 00606974
    TEST EAX,0xe000000                  ; 00606979
    JZ 0x00606983                       ; 0060697e | LAB_00606983
        ;   XREF to: 00606983 (CONDITIONAL_JUMP)
    FDIVP                               ; 00606980
    RET                                 ; 00606982
    SHR EAX,0x1c                        ; 00606983
        ;   Label: LAB_00606983
    CMP byte ptr [EAX + 0x6873b8],0x0   ; 00606986 | byte[16] g_IEEE754ExponentClassTable
    JNZ 0x00606992                      ; 0060698d | LAB_00606992
        ;   XREF to: 00606992 (CONDITIONAL_JUMP)
    FDIVP                               ; 0060698f
    RET                                 ; 00606991
    MOV EAX,dword ptr [ESP + 0xc]       ; 00606992
        ;   Label: LAB_00606992
    AND EAX,0x7fff                      ; 00606996
    JZ 0x00606a04                       ; 0060699b | LAB_00606a04
        ;   XREF to: 00606a04 (CONDITIONAL_JUMP)
    CMP EAX,0x7fff                      ; 0060699d
    JZ 0x00606a04                       ; 006069a2 | LAB_00606a04
        ;   XREF to: 00606a04 (CONDITIONAL_JUMP)
    FNSTCW word ptr [ESP + 0x1c]        ; 006069a4
    MOV EAX,dword ptr [ESP + 0x1c]      ; 006069a8
    OR EAX,0x33f                        ; 006069ac
    AND EAX,0xf3ff                      ; 006069b1
    MOV dword ptr [ESP + 0x20],EAX      ; 006069b6
    FLDCW word ptr [ESP + 0x20]         ; 006069ba
    MOV EAX,dword ptr [ESP + 0x18]      ; 006069be
    AND EAX,0x7fff                      ; 006069c2
    CMP EAX,0x1                         ; 006069c7
    JZ 0x006069e3                       ; 006069ca | LAB_006069e3
        ;   XREF to: 006069e3 (CONDITIONAL_JUMP)
    FMUL float ptr [0x006873c8]         ; 006069cc | float g_IEEE754NormalScaleFactor
    FXCH                                ; 006069d2
    FMUL float ptr [0x006873c8]         ; 006069d4 | float g_IEEE754NormalScaleFactor
    FXCH                                ; 006069da
    FLDCW word ptr [ESP + 0x1c]         ; 006069dc
    FDIVP                               ; 006069e0
    RET                                 ; 006069e2
    FMUL float ptr [0x006873cc]         ; 006069e3 | float g_IEEE754SubnormalScaleFactor
        ;   Label: LAB_006069e3
    FXCH                                ; 006069e9
    FMUL float ptr [0x006873cc]         ; 006069eb | float g_IEEE754SubnormalScaleFactor
    FXCH                                ; 006069f1
    FLDCW word ptr [ESP + 0x1c]         ; 006069f3
    FDIVP                               ; 006069f7
    RET                                 ; 006069f9
    MOV EAX,dword ptr [ESP + 0x4]       ; 006069fa
        ;   Label: LAB_006069fa
    OR EAX,dword ptr [ESP + 0x8]        ; 006069fe
    JNZ 0x00606a07                      ; 00606a02 | LAB_00606a07
        ;   XREF to: 00606a07 (CONDITIONAL_JUMP)
    FDIVP                               ; 00606a04
        ;   Label: LAB_00606a04
    RET                                 ; 00606a06
    MOV EAX,dword ptr [ESP + 0xc]       ; 00606a07
        ;   Label: LAB_00606a07
    AND EAX,0x7fff                      ; 00606a0b
    JNZ 0x00606a04                      ; 00606a10 | LAB_00606a04
        ;   XREF to: 00606a04 (CONDITIONAL_JUMP)
    FNSTCW word ptr [ESP + 0x1c]        ; 00606a12
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00606a16
    OR EAX,0x33f                        ; 00606a1a
    AND EAX,0xf3ff                      ; 00606a1f
    MOV dword ptr [ESP + 0x20],EAX      ; 00606a24
    FLDCW word ptr [ESP + 0x20]         ; 00606a28
    MOV EAX,dword ptr [ESP + 0x18]      ; 00606a2c
    AND EAX,0x7fff                      ; 00606a30
    JZ 0x00606a48                       ; 00606a35 | LAB_00606a48
        ;   XREF to: 00606a48 (CONDITIONAL_JUMP)
    CMP EAX,0x7fff                      ; 00606a37
    JZ 0x00606a70                       ; 00606a3c | LAB_00606a70
        ;   XREF to: 00606a70 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x14]      ; 00606a3e
    ADD EAX,EAX                         ; 00606a42
    JNC 0x00606a70                      ; 00606a44 | LAB_00606a70
        ;   XREF to: 00606a70 (CONDITIONAL_JUMP)
    JMP 0x00606a50                      ; 00606a46 | LAB_00606a50
        ;   XREF to: 00606a50 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x14]      ; 00606a48
        ;   Label: LAB_00606a48
    ADD EAX,EAX                         ; 00606a4c
    JC 0x00606a70                       ; 00606a4e | LAB_00606a70
        ;   XREF to: 00606a70 (CONDITIONAL_JUMP)
    FXCH                                ; 00606a50
        ;   Label: LAB_00606a50
    FSTP ST0                            ; 00606a52
    FLD ST0                             ; 00606a54
    FMUL float ptr [0x006873d0]         ; 00606a56 | float g_IEEE754RenormScaleFactor
    FSTP extended double ptr [ESP + 0x4] ; 00606a5c
    FLD extended double ptr [ESP + 0x10] ; 00606a60
    FXCH                                ; 00606a64
    WAIT                                ; 00606a66
    FLDCW word ptr [ESP + 0x1c]         ; 00606a67
    JMP 0x00606968                      ; 00606a6b | LAB_00606968
        ;   XREF to: 00606968 (UNCONDITIONAL_JUMP)
    FLDCW word ptr [ESP + 0x1c]         ; 00606a70
        ;   Label: LAB_00606a70
    FDIVP                               ; 00606a74
    RET                                 ; 00606a76

