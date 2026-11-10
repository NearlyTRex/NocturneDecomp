; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dtrace_cpp_FUN_00477db0(int param_1)
;
;
; XREF[3]:
;   core_dskybox.cpp_renderSkyDome_FUN_0046f480 at 0046f4e8
;   core_water.cpp_CWater_calculateVisibleTiles_FUN_00577290 at 00577314
;   core_weather.cpp_FUN_0057c2e0 at 0057c652
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00477db0
        ;   Label: core_dtrace.cpp_FUN_00477db0
    SUB ESP,0xc                         ; 00477db1
    MOV EAX,ESI                         ; 00477db4
    MOV ESI,dword ptr [ESP + 0x14]      ; 00477db6
    MOV EDI,ESP                         ; 00477dba
    LEA ESI,[ESI + 0x1c]                ; 00477dbc
    MOVSD ES:EDI,ESI                    ; 00477dbf
    MOVSD ES:EDI,ESI                    ; 00477dc0
    MOVSD ES:EDI,ESI                    ; 00477dc1
    MOV ESI,ESP                         ; 00477dc2
    MOV EDI,EAX                         ; 00477dc4
    MOVSD ES:EDI,ESI                    ; 00477dc6
    MOVSD ES:EDI,ESI                    ; 00477dc7
    MOVSD ES:EDI,ESI                    ; 00477dc8
    ADD ESP,0xc                         ; 00477dc9
    POP EDI                             ; 00477dcc
    RET                                 ; 00477dcd

