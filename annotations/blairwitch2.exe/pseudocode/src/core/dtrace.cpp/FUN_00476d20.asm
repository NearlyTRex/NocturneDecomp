; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dtrace_cpp_FUN_00476d20(int param_1)
;
;
; XREF[3]:
;   core_dskybox.cpp_renderSkyDome_FUN_0046e410 at 0046e45c
;   core_water.cpp_CWater_calculateVisibleTiles_FUN_00585e10 at 00585e72
;   core_weather.cpp_CWeather_createLightningStrike_FUN_0058aa30 at 0058aaa3
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00476d20
        ;   Label: core_dtrace.cpp_FUN_00476d20
    SUB ESP,0xc                         ; 00476d21
    MOV EAX,ESI                         ; 00476d24
    MOV ESI,dword ptr [ESP + 0x14]      ; 00476d26
    MOV EDI,ESP                         ; 00476d2a
    LEA ESI,[ESI + 0x10]                ; 00476d2c
    MOVSD ES:EDI,ESI                    ; 00476d2f
    MOVSD ES:EDI,ESI                    ; 00476d30
    MOVSD ES:EDI,ESI                    ; 00476d31
    MOV ESI,ESP                         ; 00476d32
    MOV EDI,EAX                         ; 00476d34
    MOVSD ES:EDI,ESI                    ; 00476d36
    MOVSD ES:EDI,ESI                    ; 00476d37
    MOVSD ES:EDI,ESI                    ; 00476d38
    ADD ESP,0xc                         ; 00476d39
    POP EDI                             ; 00476d3c
    RET                                 ; 00476d3d

