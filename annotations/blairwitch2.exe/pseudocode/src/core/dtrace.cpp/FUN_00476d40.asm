; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dtrace_cpp_FUN_00476d40(int param_1)
;
;
; XREF[3]:
;   core_dskybox.cpp_renderSkyDome_FUN_0046e410 at 0046e478
;   core_water.cpp_CWater_calculateVisibleTiles_FUN_00585e10 at 00585e94
;   core_weather.cpp_CWeather_createLightningStrike_FUN_0058aa30 at 0058aac2
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00476d40
        ;   Label: core_dtrace.cpp_FUN_00476d40
    SUB ESP,0xc                         ; 00476d41
    MOV EAX,ESI                         ; 00476d44
    MOV ESI,dword ptr [ESP + 0x14]      ; 00476d46
    MOV EDI,ESP                         ; 00476d4a
    LEA ESI,[ESI + 0x1c]                ; 00476d4c
    MOVSD ES:EDI,ESI                    ; 00476d4f
    MOVSD ES:EDI,ESI                    ; 00476d50
    MOVSD ES:EDI,ESI                    ; 00476d51
    MOV ESI,ESP                         ; 00476d52
    MOV EDI,EAX                         ; 00476d54
    MOVSD ES:EDI,ESI                    ; 00476d56
    MOVSD ES:EDI,ESI                    ; 00476d57
    MOVSD ES:EDI,ESI                    ; 00476d58
    ADD ESP,0xc                         ; 00476d59
    POP EDI                             ; 00476d5c
    RET                                 ; 00476d5d

