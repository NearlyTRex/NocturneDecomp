; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_bodypart_cpp_FUN_00416cb0(float *param_1)
;
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00416cb0
        ;   Label: core_bodypart.cpp_FUN_00416cb0
    SUB ESP,0xc                         ; 00416cb1
    MOV ECX,dword ptr [ESP + 0x14]      ; 00416cb4
    MOV EAX,ESI                         ; 00416cb8
    LEA EDX,[ECX + 0xc]                 ; 00416cba
    MOV EDI,ESI                         ; 00416cbd
    FLD float ptr [EDX]                 ; 00416cbf
    FLD float ptr [EDX + 0x4]           ; 00416cc1
    FLD float ptr [EDX + 0x8]           ; 00416cc4
    MOV ESI,ESP                         ; 00416cc7
    FXCH ST2                            ; 00416cc9
    FSUB float ptr [ECX]                ; 00416ccb
    FXCH                                ; 00416ccd
    FSUB float ptr [ECX + 0x4]          ; 00416ccf
    FXCH ST2                            ; 00416cd2
    FSUB float ptr [ECX + 0x8]          ; 00416cd4
    FXCH                                ; 00416cd7
    FSTP float ptr [ESP]                ; 00416cd9
    FXCH                                ; 00416cdc
    FSTP float ptr [ESP + 0x4]          ; 00416cde
    FSTP float ptr [ESP + 0x8]          ; 00416ce2
    MOVSD ES:EDI,ESI                    ; 00416ce6
    MOVSD ES:EDI,ESI                    ; 00416ce7
    MOVSD ES:EDI,ESI                    ; 00416ce8
    ADD ESP,0xc                         ; 00416ce9
    POP EDI                             ; 00416cec
    RET                                 ; 00416ced

