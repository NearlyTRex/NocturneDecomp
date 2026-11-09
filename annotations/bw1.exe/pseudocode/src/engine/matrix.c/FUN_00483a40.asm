; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_matrix_c_FUN_00483a40(undefined4 param_1,float *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005db3bc
;
; Called Functions:
;   crt_math.c_round_FUN_005c03a0
;   engine_light.cpp_setDirectionalLightVector_FUN_004ffa90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00483a40
        ;   Label: engine_matrix.c_FUN_00483a40
    SUB ESP,0x8                         ; 00483a41
    MOV EAX,dword ptr [ESP + 0x14]      ; 00483a44
    FLD double ptr [0x005db3bc]         ; 00483a48 | DAT_005db3bc
    FLD float ptr [EAX + 0x8]           ; 00483a4e
    FMUL ST1                            ; 00483a51
    FLD float ptr [EAX + 0x4]           ; 00483a53
    FMUL ST2                            ; 00483a56
    FLD float ptr [EAX]                 ; 00483a58
    FMULP ST3                           ; 00483a5a
    FXCH                                ; 00483a5c
    CALL crt_math.c_round_FUN_005c03a0  ; 00483a5e
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH                                ; 00483a63
    CALL crt_math.c_round_FUN_005c03a0  ; 00483a65
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH                                ; 00483a6a
    FISTP dword ptr [ESP]               ; 00483a6c
    FISTP dword ptr [ESP + 0x4]         ; 00483a6f
    MOV EDX,dword ptr [ESP]             ; 00483a73
    MOV ECX,dword ptr [ESP + 0x4]       ; 00483a76
    PUSH EDX                            ; 00483a7a
    CALL crt_math.c_round_FUN_005c03a0  ; 00483a7b
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    PUSH ECX                            ; 00483a80
    FISTP dword ptr [ESP + 0xc]         ; 00483a81
    MOV EBX,dword ptr [ESP + 0xc]       ; 00483a85
    PUSH EBX                            ; 00483a89
    CALL engine_light.cpp_setDirectionalLightVector_FUN_004ffa90 ; 00483a8a
        ;   XREF to: 004ffa90 (UNCONDITIONAL_CALL)  ; void engine_light.cpp_setDirectionalLightVector_FUN_004ffa90(int dir_x, int dir_y, int dir_z)
    ADD ESP,0xc                         ; 00483a8f
    ADD ESP,0x8                         ; 00483a92
    POP EBX                             ; 00483a95
    RET                                 ; 00483a96

