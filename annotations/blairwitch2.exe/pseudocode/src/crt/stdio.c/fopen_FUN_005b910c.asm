; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_stdio_c_fopen_FUN_005b910c(undefined4 param_1,undefined4 param_2)
;
;
; XREF[23]:
;   cockpit_pkbitmap.cpp_FUN_00516de0 at 00516def
;   core_game.cpp_FUN_004bb9b0 at 004bba8a
;   core_game.cpp_FUN_004bbf70 at 004bc2ee
;   core_game.cpp_FUN_004bc840 at 004bc8c3
;   core_main.c_initializeGameSystems_FUN_004e46c0 at 004e46f7
;   core_podmain.cpp_FUN_0051c000 at 0051c019
;   engine_console.cpp_FUN_00436710 at 004367a7
;   engine_dosio.cpp_FUN_00460c70 at 00460cca
;   engine_ini.cpp_CIni_getProfileString_FUN_004d8180 at 004d81a7
;   engine_ini.cpp_CIni_writeProfileString_FUN_004d8530 at 004d8591
;   ... and 13 more
;
; Called Functions:
;   crt_unknown.c_FUN_005b90b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b910c
        ;   Label: crt_stdio.c_fopen_FUN_005b910c
    PUSH 0x0                            ; 005b910d
    MOV EDX,dword ptr [ESP + 0x10]      ; 005b910f
    PUSH EDX                            ; 005b9113
    MOV EBX,dword ptr [ESP + 0x10]      ; 005b9114
    PUSH EBX                            ; 005b9118
    CALL crt_unknown.c_FUN_005b90b0     ; 005b9119
        ;   XREF to: 005b90b0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b90b0()
    ADD ESP,0xc                         ; 005b911e
    POP EBX                             ; 005b9121
    RET                                 ; 005b9122

