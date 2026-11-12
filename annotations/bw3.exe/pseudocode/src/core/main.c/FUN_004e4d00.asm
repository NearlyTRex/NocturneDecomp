; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 core_main_c_FUN_004e4d00(void)
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[1]:
;   core_main.c_FUN_004e44e0 at 004e45c2
;
; Referenced Globals:
;   undefined4 DAT_005c6eba
;   undefined4 DAT_005c6ebe
;   undefined4 DAT_005c6ec2
;
; Called Functions:
;   crt_math.c_round_FUN_005a3120
;
; *****************************************************************************

section .text

    SUB ESP,0xc                         ; 004e4d00
        ;   Label: core_main.c_FUN_004e4d00
    XOR ECX,ECX                         ; 004e4d03
    XOR EDX,EDX                         ; 004e4d05
    FLD double ptr [0x005c6ec2]         ; 004e4d07 | DAT_005c6ec2
    FLD float ptr [0x005c6ebe]          ; 004e4d0d | DAT_005c6ebe
    FLD float ptr [0x005c6eba]          ; 004e4d13 | DAT_005c6eba
    MOV dword ptr [ESP + 0x8],EDX       ; 004e4d19
        ;   Label: LAB_004e4d19
    FILD dword ptr [ESP + 0x8]          ; 004e4d1d
    FMUL ST1                            ; 004e4d21
    FMUL ST2                            ; 004e4d23
    FLD ST0                             ; 004e4d25
    FSIN                                ; 004e4d27
    FXCH                                ; 004e4d29
    FCOS                                ; 004e4d2b
    FXCH                                ; 004e4d2d
    FMUL ST4                            ; 004e4d2f
    FXCH                                ; 004e4d31
    FMUL ST4                            ; 004e4d33
    ADD ECX,0x4                         ; 004e4d35
    FXCH                                ; 004e4d38
    CALL crt_math.c_round_FUN_005a3120  ; 004e4d3a
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x8]         ; 004e4d3f
    CALL crt_math.c_round_FUN_005a3120  ; 004e4d43
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    MOV EAX,dword ptr [ESP + 0x8]       ; 004e4d48
    FISTP dword ptr [ESP + 0x8]         ; 004e4d4c
    MOV dword ptr [ECX + 0x1d71e38],EAX ; 004e4d50
    MOV EAX,dword ptr [ESP + 0x8]       ; 004e4d56
    INC EDX                             ; 004e4d5a
    MOV dword ptr [ECX + 0x1d7223c],EAX ; 004e4d5b
    CMP EDX,0x101                       ; 004e4d61
    JL 0x004e4d19                       ; 004e4d67
        ;   XREF to: 004e4d19 (CONDITIONAL_JUMP)  ; LAB_004e4d19
    FSTP ST0                            ; 004e4d69
    FSTP ST0                            ; 004e4d6b
    FSTP ST0                            ; 004e4d6d
    ADD ESP,0xc                         ; 004e4d6f
    LEA EAX,[EAX]                       ; 004e4d72
    LEA EDX,[EDX]                       ; 004e4d78
    MOV EAX,EAX                         ; 004e4d7e

