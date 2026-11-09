; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_00517bd0(float param_1,float param_2,float param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_005e902b
;   undefined4 DAT_01d224c0
;   undefined4 DAT_01d25f38
;   undefined4 DAT_01d25f3c
;   undefined4 DAT_01d25f40
;   undefined4 DAT_01d25f44
;
; Called Functions:
;   crt_math.c_round_FUN_005c03a0
;
; *****************************************************************************

section .text

    SUB ESP,0x10                        ; 00517bd0
        ;   Label: engine_mini3d.cpp_FUN_00517bd0
    FLD float ptr [0x005e902b]          ; 00517bd3 | DAT_005e902b
    FLD float ptr [ESP + 0x14]          ; 00517bd9
    FMUL ST1                            ; 00517bdd
    FLD float ptr [ESP + 0x18]          ; 00517bdf
    FMUL ST2                            ; 00517be3
    FLD float ptr [ESP + 0x1c]          ; 00517be5
    FMUL ST3                            ; 00517be9
    FLD float ptr [0x01d224c0]          ; 00517beb | DAT_01d224c0
    MOV EAX,dword ptr [ESP + 0x14]      ; 00517bf1
    FMULP ST4                           ; 00517bf5
    MOV [0x01d25f38],EAX                ; 00517bf7 | DAT_01d25f38
    FXCH ST2                            ; 00517bfc
    CALL crt_math.c_round_FUN_005c03a0  ; 00517bfe
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH                                ; 00517c03
    CALL crt_math.c_round_FUN_005c03a0  ; 00517c05
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH ST3                            ; 00517c0a
    CALL crt_math.c_round_FUN_005c03a0  ; 00517c0c
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    MOV EAX,dword ptr [ESP + 0x18]      ; 00517c11
    FXCH                                ; 00517c15
    FISTP dword ptr [ESP]               ; 00517c17
    FISTP dword ptr [ESP + 0xc]         ; 00517c1a
    MOV [0x01d25f3c],EAX                ; 00517c1e | DAT_01d25f3c
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00517c23
    MOV EDX,dword ptr [ESP + 0xc]       ; 00517c27
    MOV [0x01d25f40],EAX                ; 00517c2b | DAT_01d25f40
    MOV EAX,dword ptr [ESP]             ; 00517c30
    SHL EDX,0x18                        ; 00517c33
    SHL EAX,0x10                        ; 00517c36
    FXCH                                ; 00517c39
    FISTP dword ptr [ESP + 0x4]         ; 00517c3b
    OR EDX,EAX                          ; 00517c3f
    MOV EAX,dword ptr [ESP + 0x4]       ; 00517c41
    CALL crt_math.c_round_FUN_005c03a0  ; 00517c45
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    SHL EAX,0x8                         ; 00517c4a
    FISTP dword ptr [ESP + 0x8]         ; 00517c4d
    OR EAX,EDX                          ; 00517c51
    MOV EDX,dword ptr [ESP + 0x8]       ; 00517c53
    OR EDX,EAX                          ; 00517c57
    MOV dword ptr [0x01d25f44],EDX      ; 00517c59 | DAT_01d25f44
    ADD ESP,0x10                        ; 00517c5f
    RET                                 ; 00517c62

