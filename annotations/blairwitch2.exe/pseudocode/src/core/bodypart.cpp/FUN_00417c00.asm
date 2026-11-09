; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_bodypart_cpp_FUN_00417c00(float *param_1)
;
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00417c00
        ;   Label: core_bodypart.cpp_FUN_00417c00
    SUB ESP,0xc                         ; 00417c01
    MOV ECX,dword ptr [ESP + 0x14]      ; 00417c04
    MOV EAX,ESI                         ; 00417c08
    LEA EDX,[ECX + 0xc]                 ; 00417c0a
    MOV EDI,ESI                         ; 00417c0d
    FLD float ptr [EDX]                 ; 00417c0f
    FLD float ptr [EDX + 0x4]           ; 00417c11
    FLD float ptr [EDX + 0x8]           ; 00417c14
    MOV ESI,ESP                         ; 00417c17
    FXCH ST2                            ; 00417c19
    FSUB float ptr [ECX]                ; 00417c1b
    FXCH                                ; 00417c1d
    FSUB float ptr [ECX + 0x4]          ; 00417c1f
    FXCH ST2                            ; 00417c22
    FSUB float ptr [ECX + 0x8]          ; 00417c24
    FXCH                                ; 00417c27
    FSTP float ptr [ESP]                ; 00417c29
    FXCH                                ; 00417c2c
    FSTP float ptr [ESP + 0x4]          ; 00417c2e
    FSTP float ptr [ESP + 0x8]          ; 00417c32
    MOVSD ES:EDI,ESI                    ; 00417c36
    MOVSD ES:EDI,ESI                    ; 00417c37
    MOVSD ES:EDI,ESI                    ; 00417c38
    ADD ESP,0xc                         ; 00417c39
    POP EDI                             ; 00417c3c
    RET                                 ; 00417c3d

