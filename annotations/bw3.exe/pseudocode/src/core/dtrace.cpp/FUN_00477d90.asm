; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dtrace_cpp_FUN_00477d90(int param_1)
;
;
; XREF[3]:
;   core_dskybox.cpp_renderSkyDome_FUN_0046f480 at 0046f4cc
;   core_water.cpp_CWater_calculateVisibleTiles_FUN_00577290 at 005772f2
;   core_weather.cpp_FUN_0057c2e0 at 0057c62d
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00477d90
        ;   Label: core_dtrace.cpp_FUN_00477d90
    SUB ESP,0xc                         ; 00477d91
    MOV EAX,ESI                         ; 00477d94
    MOV ESI,dword ptr [ESP + 0x14]      ; 00477d96
    MOV EDI,ESP                         ; 00477d9a
    LEA ESI,[ESI + 0x10]                ; 00477d9c
    MOVSD ES:EDI,ESI                    ; 00477d9f
    MOVSD ES:EDI,ESI                    ; 00477da0
    MOVSD ES:EDI,ESI                    ; 00477da1
    MOV ESI,ESP                         ; 00477da2
    MOV EDI,EAX                         ; 00477da4
    MOVSD ES:EDI,ESI                    ; 00477da6
    MOVSD ES:EDI,ESI                    ; 00477da7
    MOVSD ES:EDI,ESI                    ; 00477da8
    ADD ESP,0xc                         ; 00477da9
    POP EDI                             ; 00477dac
    RET                                 ; 00477dad

