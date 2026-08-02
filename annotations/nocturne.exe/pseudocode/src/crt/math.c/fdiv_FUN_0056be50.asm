; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float10 __fpustack_safe crt_math_c_fdiv_FUN_0056be50(float10 dividend,float10 divisor)
;
;
; XREF[45]:
;   crt_math.c_dispatch_divide_FUN_0056bf9f at 0056bfac
;   crt_math.c_fdiv_thunk_FUN_0056c007 at 0056c00e
;   crt_math.c_fdiv_thunk_FUN_0056c0a3 at 0056c0ac
;   crt_math.c_fdiv_thunk_FUN_0056c1eb at 0056c1f4
;   crt_math.c_fdiv_thunk_FUN_0056c28f at 0056c298
;   crt_math.c_fdiv_thunk_FUN_0056c333 at 0056c33c
;   crt_math.c_fdiv_thunk_FUN_0056c3d7 at 0056c3e0
;   crt_math.c_pentiumFdivpWorkaround_FUN_0056c403 at 0056c40d
;   crt_unknown.c_FUN_0056bfc0 at 0056bfc7
;   crt_unknown.c_FUN_0056bfdb at 0056bfea
;   ... and 35 more
;
; Referenced Globals:
;   undefined4 DAT_005c3f68
;   undefined4 DAT_005c3f78
;   undefined4 DAT_005c3f7c
;   undefined4 DAT_005c3f80
;
; *****************************************************************************

section .text

    FLD extended double ptr [ESP + 0x10] ; 0056be50
        ;   Label: crt_math.c_fdiv_FUN_0056be50
    FLD extended double ptr [ESP + 0x4] ; 0056be54
    MOV EAX,dword ptr [ESP + 0x8]       ; 0056be58
        ;   Label: LAB_0056be58
    ADD EAX,EAX                         ; 0056be5c
    JNC 0x0056beea                      ; 0056be5e
        ;   XREF to: 0056beea (CONDITIONAL_JUMP)  ; LAB_0056beea
    XOR EAX,0xe000000                   ; 0056be64
    TEST EAX,0xe000000                  ; 0056be69
    JZ 0x0056be73                       ; 0056be6e
        ;   XREF to: 0056be73 (CONDITIONAL_JUMP)  ; LAB_0056be73
    FDIVP                               ; 0056be70
    RET                                 ; 0056be72
    SHR EAX,0x1c                        ; 0056be73
        ;   Label: LAB_0056be73
    CMP byte ptr [EAX + 0x5c3f68],0x0   ; 0056be76 | DAT_005c3f68
    JNZ 0x0056be82                      ; 0056be7d
        ;   XREF to: 0056be82 (CONDITIONAL_JUMP)  ; LAB_0056be82
    FDIVP                               ; 0056be7f
    RET                                 ; 0056be81
    MOV EAX,dword ptr [ESP + 0xc]       ; 0056be82
        ;   Label: LAB_0056be82
    AND EAX,0x7fff                      ; 0056be86
    JZ 0x0056bef4                       ; 0056be8b
        ;   XREF to: 0056bef4 (CONDITIONAL_JUMP)  ; LAB_0056bef4
    CMP EAX,0x7fff                      ; 0056be8d
    JZ 0x0056bef4                       ; 0056be92
        ;   XREF to: 0056bef4 (CONDITIONAL_JUMP)  ; LAB_0056bef4
    FNSTCW word ptr [ESP + 0x1c]        ; 0056be94
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0056be98
    OR EAX,0x33f                        ; 0056be9c
    AND EAX,0xf3ff                      ; 0056bea1
    MOV dword ptr [ESP + 0x20],EAX      ; 0056bea6
    FLDCW word ptr [ESP + 0x20]         ; 0056beaa
    MOV EAX,dword ptr [ESP + 0x18]      ; 0056beae
    AND EAX,0x7fff                      ; 0056beb2
    CMP EAX,0x1                         ; 0056beb7
    JZ 0x0056bed3                       ; 0056beba
        ;   XREF to: 0056bed3 (CONDITIONAL_JUMP)  ; LAB_0056bed3
    FMUL float ptr [0x005c3f78]         ; 0056bebc | DAT_005c3f78
    FXCH                                ; 0056bec2
    FMUL float ptr [0x005c3f78]         ; 0056bec4 | DAT_005c3f78
    FXCH                                ; 0056beca
    FLDCW word ptr [ESP + 0x1c]         ; 0056becc
    FDIVP                               ; 0056bed0
    RET                                 ; 0056bed2
    FMUL float ptr [0x005c3f7c]         ; 0056bed3 | DAT_005c3f7c
        ;   Label: LAB_0056bed3
    FXCH                                ; 0056bed9
    FMUL float ptr [0x005c3f7c]         ; 0056bedb | DAT_005c3f7c
    FXCH                                ; 0056bee1
    FLDCW word ptr [ESP + 0x1c]         ; 0056bee3
    FDIVP                               ; 0056bee7
    RET                                 ; 0056bee9
    MOV EAX,dword ptr [ESP + 0x4]       ; 0056beea
        ;   Label: LAB_0056beea
    OR EAX,dword ptr [ESP + 0x8]        ; 0056beee
    JNZ 0x0056bef7                      ; 0056bef2
        ;   XREF to: 0056bef7 (CONDITIONAL_JUMP)  ; LAB_0056bef7
    FDIVP                               ; 0056bef4
        ;   Label: LAB_0056bef4
    RET                                 ; 0056bef6
    MOV EAX,dword ptr [ESP + 0xc]       ; 0056bef7
        ;   Label: LAB_0056bef7
    AND EAX,0x7fff                      ; 0056befb
    JNZ 0x0056bef4                      ; 0056bf00
        ;   XREF to: 0056bef4 (CONDITIONAL_JUMP)  ; LAB_0056bef4
    FNSTCW word ptr [ESP + 0x1c]        ; 0056bf02
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0056bf06
    OR EAX,0x33f                        ; 0056bf0a
    AND EAX,0xf3ff                      ; 0056bf0f
    MOV dword ptr [ESP + 0x20],EAX      ; 0056bf14
    FLDCW word ptr [ESP + 0x20]         ; 0056bf18
    MOV EAX,dword ptr [ESP + 0x18]      ; 0056bf1c
    AND EAX,0x7fff                      ; 0056bf20
    JZ 0x0056bf38                       ; 0056bf25
        ;   XREF to: 0056bf38 (CONDITIONAL_JUMP)  ; LAB_0056bf38
    CMP EAX,0x7fff                      ; 0056bf27
    JZ 0x0056bf60                       ; 0056bf2c
        ;   XREF to: 0056bf60 (CONDITIONAL_JUMP)  ; LAB_0056bf60
    MOV EAX,dword ptr [ESP + 0x14]      ; 0056bf2e
    ADD EAX,EAX                         ; 0056bf32
    JNC 0x0056bf60                      ; 0056bf34
        ;   XREF to: 0056bf60 (CONDITIONAL_JUMP)  ; LAB_0056bf60
    JMP 0x0056bf40                      ; 0056bf36
        ;   XREF to: 0056bf40 (UNCONDITIONAL_JUMP)  ; LAB_0056bf40
    MOV EAX,dword ptr [ESP + 0x14]      ; 0056bf38
        ;   Label: LAB_0056bf38
    ADD EAX,EAX                         ; 0056bf3c
    JC 0x0056bf60                       ; 0056bf3e
        ;   XREF to: 0056bf60 (CONDITIONAL_JUMP)  ; LAB_0056bf60
    FXCH                                ; 0056bf40
        ;   Label: LAB_0056bf40
    FSTP ST0                            ; 0056bf42
    FLD ST0                             ; 0056bf44
    FMUL float ptr [0x005c3f80]         ; 0056bf46 | DAT_005c3f80
    FSTP extended double ptr [ESP + 0x4] ; 0056bf4c
    FLD extended double ptr [ESP + 0x10] ; 0056bf50
    FXCH                                ; 0056bf54
    WAIT                                ; 0056bf56
    FLDCW word ptr [ESP + 0x1c]         ; 0056bf57
    JMP 0x0056be58                      ; 0056bf5b
        ;   XREF to: 0056be58 (UNCONDITIONAL_JUMP)  ; LAB_0056be58
    FLDCW word ptr [ESP + 0x1c]         ; 0056bf60
        ;   Label: LAB_0056bf60
    FDIVP                               ; 0056bf64
    RET                                 ; 0056bf66

