; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __watcallStack crt_stdio_c_remove_FUN_005657c0(undefined4 param_1)
;
;
; XREF[6]:
;   FUN_004a3b90 at 004a3bba
;   FUN_004a4170 at 004a417f
;   FUN_005634b0 at 00563569
;   core_netgame.cpp_CNetGame_init_FUN_004e9910 at 004e9917
;   engine_console.cpp_CConsole_reset_FUN_0043ae00 at 0043ae31
;   engine_ini.cpp_CIni_writeProfileString_FUN_004bd480 at 004bd659
;
; Called Functions:
;   FUN_0056bbf0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005657c0
        ;   Label: crt_stdio.c_remove_FUN_005657c0
    PUSH EDX                            ; 005657c4
    CALL FUN_0056bbf0                   ; 005657c5
        ;   XREF to: 0056bbf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0056bbf0()
    ADD ESP,0x4                         ; 005657ca
    RET                                 ; 005657cd

