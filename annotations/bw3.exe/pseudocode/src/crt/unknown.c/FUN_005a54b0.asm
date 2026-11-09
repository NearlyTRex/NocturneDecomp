; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __watcallStack crt_unknown_c_FUN_005a54b0(char *filename)
;
; Parameters:
; char *           Stack[0x4]:4   filename
;
; XREF[6]:
;   core_game.cpp_FUN_004bda10 at 004bda26
;   core_game.cpp_FUN_004bdfb0 at 004bdfbf
;   core_netgame.cpp_CNetGame_init_FUN_00503e20 at 00503e27
;   crt_stdio.c_fclose_FUN_005a3bc0 at 005a3c79
;   engine_ini.cpp_CIni_writeProfileString_FUN_004d8640 at 004d8819
;   unkafter_dosio.cpp_FUN_00466220 at 00466225
;
; Called Functions:
;   crt_unknown.c_FUN_005acbc0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a54b0
        ;   Label: crt_unknown.c_FUN_005a54b0
    PUSH EDX                            ; 005a54b4
    CALL crt_unknown.c_FUN_005acbc0     ; 005a54b5
        ;   XREF to: 005acbc0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005acbc0()
    ADD ESP,0x4                         ; 005a54ba
    RET                                 ; 005a54bd

