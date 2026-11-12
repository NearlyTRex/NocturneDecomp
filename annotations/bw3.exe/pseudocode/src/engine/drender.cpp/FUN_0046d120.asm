; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_drender_cpp_FUN_0046d120(undefined4 param_1,float *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005bc553
;
; Called Functions:
;   crt_math.c_round_FUN_005a3120
;   engine_light.cpp_setDirectionalLightVector_FUN_004e0b50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046d120
        ;   Label: engine_drender.cpp_FUN_0046d120
    SUB ESP,0x8                         ; 0046d121
    MOV EAX,dword ptr [ESP + 0x14]      ; 0046d124
    FLD double ptr [0x005bc553]         ; 0046d128 | DAT_005bc553
    FLD float ptr [EAX + 0x8]           ; 0046d12e
    FMUL ST1                            ; 0046d131
    FLD float ptr [EAX + 0x4]           ; 0046d133
    FMUL ST2                            ; 0046d136
    FLD float ptr [EAX]                 ; 0046d138
    FMULP ST3                           ; 0046d13a
    FXCH                                ; 0046d13c
    CALL crt_math.c_round_FUN_005a3120  ; 0046d13e
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH                                ; 0046d143
    CALL crt_math.c_round_FUN_005a3120  ; 0046d145
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH                                ; 0046d14a
    FISTP dword ptr [ESP]               ; 0046d14c
    FISTP dword ptr [ESP + 0x4]         ; 0046d14f
    MOV EDX,dword ptr [ESP]             ; 0046d153
    MOV ECX,dword ptr [ESP + 0x4]       ; 0046d156
    PUSH EDX                            ; 0046d15a
    CALL crt_math.c_round_FUN_005a3120  ; 0046d15b
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    PUSH ECX                            ; 0046d160
    FISTP dword ptr [ESP + 0xc]         ; 0046d161
    MOV EBX,dword ptr [ESP + 0xc]       ; 0046d165
    PUSH EBX                            ; 0046d169
    CALL engine_light.cpp_setDirectionalLightVector_FUN_004e0b50 ; 0046d16a
        ;   XREF to: 004e0b50 (UNCONDITIONAL_CALL)  ; void engine_light.cpp_setDirectionalLightVector_FUN_004e0b50(int dir_x, int dir_y, int dir_z)
    ADD ESP,0xc                         ; 0046d16f
    ADD ESP,0x8                         ; 0046d172
    POP EBX                             ; 0046d175
    RET                                 ; 0046d176

