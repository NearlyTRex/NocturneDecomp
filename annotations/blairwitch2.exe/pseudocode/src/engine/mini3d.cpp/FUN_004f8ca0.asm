; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004f8ca0(float param_1,float param_2,float param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_005ddfe4
;   undefined4 DAT_01d09860
;   undefined4 DAT_01d0d2d8
;   undefined4 DAT_01d0d2dc
;   undefined4 DAT_01d0d2e0
;   undefined4 DAT_01d0d2e4
;
; Called Functions:
;   crt_math.c_round_FUN_005b7ff0
;
; *****************************************************************************

section .text

    SUB ESP,0x10                        ; 004f8ca0
        ;   Label: engine_mini3d.cpp_FUN_004f8ca0
    FLD float ptr [0x005ddfe4]          ; 004f8ca3 | DAT_005ddfe4
    FLD float ptr [ESP + 0x14]          ; 004f8ca9
    FMUL ST1                            ; 004f8cad
    FLD float ptr [ESP + 0x18]          ; 004f8caf
    FMUL ST2                            ; 004f8cb3
    FLD float ptr [ESP + 0x1c]          ; 004f8cb5
    FMUL ST3                            ; 004f8cb9
    FLD float ptr [0x01d09860]          ; 004f8cbb | DAT_01d09860
    MOV EAX,dword ptr [ESP + 0x14]      ; 004f8cc1
    FMULP ST4                           ; 004f8cc5
    MOV [0x01d0d2d8],EAX                ; 004f8cc7 | DAT_01d0d2d8
    FXCH ST2                            ; 004f8ccc
    CALL crt_math.c_round_FUN_005b7ff0  ; 004f8cce
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH                                ; 004f8cd3
    CALL crt_math.c_round_FUN_005b7ff0  ; 004f8cd5
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH ST3                            ; 004f8cda
    CALL crt_math.c_round_FUN_005b7ff0  ; 004f8cdc
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    MOV EAX,dword ptr [ESP + 0x18]      ; 004f8ce1
    FXCH                                ; 004f8ce5
    FISTP dword ptr [ESP]               ; 004f8ce7
    FISTP dword ptr [ESP + 0xc]         ; 004f8cea
    MOV [0x01d0d2dc],EAX                ; 004f8cee | DAT_01d0d2dc
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004f8cf3
    MOV EDX,dword ptr [ESP + 0xc]       ; 004f8cf7
    MOV [0x01d0d2e0],EAX                ; 004f8cfb | DAT_01d0d2e0
    MOV EAX,dword ptr [ESP]             ; 004f8d00
    SHL EDX,0x18                        ; 004f8d03
    SHL EAX,0x10                        ; 004f8d06
    FXCH                                ; 004f8d09
    FISTP dword ptr [ESP + 0x4]         ; 004f8d0b
    OR EDX,EAX                          ; 004f8d0f
    MOV EAX,dword ptr [ESP + 0x4]       ; 004f8d11
    CALL crt_math.c_round_FUN_005b7ff0  ; 004f8d15
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    SHL EAX,0x8                         ; 004f8d1a
    FISTP dword ptr [ESP + 0x8]         ; 004f8d1d
    OR EAX,EDX                          ; 004f8d21
    MOV EDX,dword ptr [ESP + 0x8]       ; 004f8d23
    OR EDX,EAX                          ; 004f8d27
    MOV dword ptr [0x01d0d2e4],EDX      ; 004f8d29 | DAT_01d0d2e4
    ADD ESP,0x10                        ; 004f8d2f
    RET                                 ; 004f8d32

