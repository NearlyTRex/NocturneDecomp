; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_00517c70(float param_1,float param_2,float param_3,float param_4)
;
;
; Referenced Globals:
;   undefined4 DAT_005e902f
;   undefined4 DAT_01c50948
;   undefined4 DAT_01d224c0
;   undefined4 DAT_01d22548
;   undefined4 DAT_01d2254c
;   undefined4 DAT_01d22550
;   undefined4 DAT_01d25f38
;   undefined4 DAT_01d25f3c
;   undefined4 DAT_01d25f40
;   undefined4 DAT_01d25f44
;   undefined4 DAT_02c83448
;
; Called Functions:
;   crt_math.c_round_FUN_005c03a0
;
; *****************************************************************************

section .text

    SUB ESP,0x10                        ; 00517c70
        ;   Label: engine_mini3d.cpp_FUN_00517c70
    MOV EAX,dword ptr [ESP + 0x18]      ; 00517c73
    MOV [0x01d25f38],EAX                ; 00517c77 | DAT_01d25f38
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00517c7c
    MOV [0x01d25f3c],EAX                ; 00517c80 | DAT_01d25f3c
    MOV EAX,dword ptr [ESP + 0x20]      ; 00517c85
    FLD float ptr [0x01d224c0]          ; 00517c89 | DAT_01d224c0
    MOV [0x01d25f40],EAX                ; 00517c8f | DAT_01d25f40
    FCOMP float ptr [ESP + 0x14]        ; 00517c94
    FNSTSW AX                           ; 00517c98
    SAHF                                ; 00517c9a
    JZ 0x00517cb9                       ; 00517c9b
        ;   XREF to: 00517cb9 (CONDITIONAL_JUMP)  ; LAB_00517cb9
    MOV EAX,dword ptr [ESP + 0x14]      ; 00517c9d
    MOV EDX,dword ptr [0x02c83448]      ; 00517ca1 | DAT_02c83448
    MOV [0x01d224c0],EAX                ; 00517ca7 | DAT_01d224c0
    TEST EDX,EDX                        ; 00517cac
    JZ 0x00517cb9                       ; 00517cae
        ;   XREF to: 00517cb9 (CONDITIONAL_JUMP)  ; LAB_00517cb9
    CMP dword ptr [0x01c50948],0x0      ; 00517cb0 | DAT_01c50948
    JNZ 0x00517d2c                      ; 00517cb7
        ;   XREF to: 00517d2c (CONDITIONAL_JUMP)  ; LAB_00517d2c
    FLD float ptr [0x005e902f]          ; 00517cb9 | DAT_005e902f
        ;   Label: LAB_00517cb9
    FLD float ptr [ESP + 0x18]          ; 00517cbf
    FMUL ST1                            ; 00517cc3
    FLD float ptr [ESP + 0x1c]          ; 00517cc5
    FMUL ST2                            ; 00517cc9
    FLD float ptr [ESP + 0x20]          ; 00517ccb
    FMUL ST3                            ; 00517ccf
    FLD float ptr [ESP + 0x14]          ; 00517cd1
    FMULP ST4                           ; 00517cd5
    FXCH ST2                            ; 00517cd7
    CALL crt_math.c_round_FUN_005c03a0  ; 00517cd9
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH                                ; 00517cde
    CALL crt_math.c_round_FUN_005c03a0  ; 00517ce0
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH ST3                            ; 00517ce5
    CALL crt_math.c_round_FUN_005c03a0  ; 00517ce7
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH                                ; 00517cec
    FISTP dword ptr [ESP]               ; 00517cee
    FISTP dword ptr [ESP + 0xc]         ; 00517cf1
    MOV EAX,dword ptr [ESP + 0xc]       ; 00517cf5
    MOV EDX,dword ptr [ESP]             ; 00517cf9
    SHL EAX,0x18                        ; 00517cfc
    SHL EDX,0x10                        ; 00517cff
    FXCH                                ; 00517d02
    FISTP dword ptr [ESP + 0x4]         ; 00517d04
    OR EDX,EAX                          ; 00517d08
    MOV EAX,dword ptr [ESP + 0x4]       ; 00517d0a
    CALL crt_math.c_round_FUN_005c03a0  ; 00517d0e
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    SHL EAX,0x8                         ; 00517d13
    FISTP dword ptr [ESP + 0x8]         ; 00517d16
    OR EAX,EDX                          ; 00517d1a
    MOV EDX,dword ptr [ESP + 0x8]       ; 00517d1c
    OR EDX,EAX                          ; 00517d20
    MOV dword ptr [0x01d25f44],EDX      ; 00517d22 | DAT_01d25f44
    ADD ESP,0x10                        ; 00517d28
    RET                                 ; 00517d2b
    PUSH EAX                            ; 00517d2c
        ;   Label: LAB_00517d2c
    PUSH dword ptr [0x01d22550]         ; 00517d2d | DAT_01d22550
    PUSH dword ptr [0x01d2254c]         ; 00517d33 | DAT_01d2254c
    PUSH dword ptr [0x01d22548]         ; 00517d39 | DAT_01d22548
    CALL dword ptr [0x02c83448]         ; 00517d3f | DAT_02c83448
    ADD ESP,0x10                        ; 00517d45
    JMP 0x00517cb9                      ; 00517d48
        ;   XREF to: 00517cb9 (UNCONDITIONAL_JUMP)  ; LAB_00517cb9

