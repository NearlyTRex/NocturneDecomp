; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __watcallStack crt_stdio_c_remove_FUN_005657c0(char *filename)
;
; Parameters:
; char *           Stack[0x4]:4   filename
;
; XREF[6]:
;   core_game.cpp_CGame_FUN_004a3b90 at 004a3bba
;   core_game.cpp_CGame_FUN_004a4170 at 004a417f
;   core_netgame.cpp_CNetGame_init_FUN_004e9910 at 004e9917
;   crt_unknown.c_fclose_FUN_005634b0 at 00563569
;   engine_console.cpp_CConsole_reset_FUN_0043ae00 at 0043ae31
;   engine_ini.cpp_CIni_writeProfileString_FUN_004bd480 at 004bd659
;
; Called Functions:
;   crt_unknown.c_FUN_0056bbf0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005657c0
        ;   Label: crt_stdio.c_remove_FUN_005657c0
    PUSH EDX                            ; 005657c4
    CALL crt_unknown.c_FUN_0056bbf0     ; 005657c5
        ;   XREF to: 0056bbf0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_FUN_0056bbf0(char * filename)
    ADD ESP,0x4                         ; 005657ca
    RET                                 ; 005657cd

