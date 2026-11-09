; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_matrix_c_FUN_0046b540(undefined4 param_1,float *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005d15c3
;
; Called Functions:
;   crt_math.c_round_FUN_005b7ff0
;   engine_light.cpp_setDirectionalLightVector_FUN_004e2600
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046b540
        ;   Label: engine_matrix.c_FUN_0046b540
    SUB ESP,0x8                         ; 0046b541
    MOV EAX,dword ptr [ESP + 0x14]      ; 0046b544
    FLD double ptr [0x005d15c3]         ; 0046b548 | DAT_005d15c3
    FLD float ptr [EAX + 0x8]           ; 0046b54e
    FMUL ST1                            ; 0046b551
    FLD float ptr [EAX + 0x4]           ; 0046b553
    FMUL ST2                            ; 0046b556
    FLD float ptr [EAX]                 ; 0046b558
    FMULP ST3                           ; 0046b55a
    FXCH                                ; 0046b55c
    CALL crt_math.c_round_FUN_005b7ff0  ; 0046b55e
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH                                ; 0046b563
    CALL crt_math.c_round_FUN_005b7ff0  ; 0046b565
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH                                ; 0046b56a
    FISTP dword ptr [ESP]               ; 0046b56c
    FISTP dword ptr [ESP + 0x4]         ; 0046b56f
    MOV EDX,dword ptr [ESP]             ; 0046b573
    MOV ECX,dword ptr [ESP + 0x4]       ; 0046b576
    PUSH EDX                            ; 0046b57a
    CALL crt_math.c_round_FUN_005b7ff0  ; 0046b57b
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    PUSH ECX                            ; 0046b580
    FISTP dword ptr [ESP + 0xc]         ; 0046b581
    MOV EBX,dword ptr [ESP + 0xc]       ; 0046b585
    PUSH EBX                            ; 0046b589
    CALL engine_light.cpp_setDirectionalLightVector_FUN_004e2600 ; 0046b58a
        ;   XREF to: 004e2600 (UNCONDITIONAL_CALL)  ; void engine_light.cpp_setDirectionalLightVector_FUN_004e2600(int dir_x, int dir_y, int dir_z)
    ADD ESP,0xc                         ; 0046b58f
    ADD ESP,0x8                         ; 0046b592
    POP EBX                             ; 0046b595
    RET                                 ; 0046b596

