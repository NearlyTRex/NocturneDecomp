; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __watcallStack crt_unknown_c_FUN_005c25c0(char *filename)
;
; Parameters:
; char *           Stack[0x4]:4   filename
;
; XREF[6]:
;   core_game.cpp_FUN_004d6420 at 004d6436
;   core_game.cpp_FUN_004d6990 at 004d699f
;   core_netgame.cpp_CNetGame_init_FUN_0052c520 at 0052c527
;   crt_stdio.c_fclose_FUN_005c0e40 at 005c0ef9
;   engine_ini.cpp_CIni_writeProfileString_FUN_004f4720 at 004f48f9
;   unkafter_dosio.cpp_FUN_00479950 at 00479955
;
; Called Functions:
;   crt_unknown.c_FUN_005c9280
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005c25c0
        ;   Label: crt_unknown.c_FUN_005c25c0
    PUSH EDX                            ; 005c25c4
    CALL crt_unknown.c_FUN_005c9280     ; 005c25c5
        ;   XREF to: 005c9280 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c9280()
    ADD ESP,0x4                         ; 005c25ca
    RET                                 ; 005c25cd

