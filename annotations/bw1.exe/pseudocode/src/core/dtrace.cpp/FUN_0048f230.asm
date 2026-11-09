; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dtrace_cpp_FUN_0048f230(int param_1)
;
;
; XREF[3]:
;   core_dskybox.cpp_FUN_00486900 at 00486968
;   core_water.cpp_CWater_calculateVisibleTiles_FUN_005a9a40 at 005a9ac4
;   core_weather.cpp_CWeather_createLightningStrike_FUN_005ae580 at 005ae60c
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 0048f230
        ;   Label: core_dtrace.cpp_FUN_0048f230
    SUB ESP,0xc                         ; 0048f231
    MOV EAX,ESI                         ; 0048f234
    MOV ESI,dword ptr [ESP + 0x14]      ; 0048f236
    MOV EDI,ESP                         ; 0048f23a
    LEA ESI,[ESI + 0x1c]                ; 0048f23c
    MOVSD ES:EDI,ESI                    ; 0048f23f
    MOVSD ES:EDI,ESI                    ; 0048f240
    MOVSD ES:EDI,ESI                    ; 0048f241
    MOV ESI,ESP                         ; 0048f242
    MOV EDI,EAX                         ; 0048f244
    MOVSD ES:EDI,ESI                    ; 0048f246
    MOVSD ES:EDI,ESI                    ; 0048f247
    MOVSD ES:EDI,ESI                    ; 0048f248
    ADD ESP,0xc                         ; 0048f249
    POP EDI                             ; 0048f24c
    RET                                 ; 0048f24d

