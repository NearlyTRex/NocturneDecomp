; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_bodypart_cpp_FUN_0041b080(float *param_1)
;
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 0041b080
        ;   Label: core_bodypart.cpp_FUN_0041b080
    SUB ESP,0xc                         ; 0041b081
    MOV ECX,dword ptr [ESP + 0x14]      ; 0041b084
    MOV EAX,ESI                         ; 0041b088
    LEA EDX,[ECX + 0xc]                 ; 0041b08a
    MOV EDI,ESI                         ; 0041b08d
    FLD float ptr [EDX]                 ; 0041b08f
    FLD float ptr [EDX + 0x4]           ; 0041b091
    FLD float ptr [EDX + 0x8]           ; 0041b094
    MOV ESI,ESP                         ; 0041b097
    FXCH ST2                            ; 0041b099
    FSUB float ptr [ECX]                ; 0041b09b
    FXCH                                ; 0041b09d
    FSUB float ptr [ECX + 0x4]          ; 0041b09f
    FXCH ST2                            ; 0041b0a2
    FSUB float ptr [ECX + 0x8]          ; 0041b0a4
    FXCH                                ; 0041b0a7
    FSTP float ptr [ESP]                ; 0041b0a9
    FXCH                                ; 0041b0ac
    FSTP float ptr [ESP + 0x4]          ; 0041b0ae
    FSTP float ptr [ESP + 0x8]          ; 0041b0b2
    MOVSD ES:EDI,ESI                    ; 0041b0b6
    MOVSD ES:EDI,ESI                    ; 0041b0b7
    MOVSD ES:EDI,ESI                    ; 0041b0b8
    ADD ESP,0xc                         ; 0041b0b9
    POP EDI                             ; 0041b0bc
    RET                                 ; 0041b0bd

