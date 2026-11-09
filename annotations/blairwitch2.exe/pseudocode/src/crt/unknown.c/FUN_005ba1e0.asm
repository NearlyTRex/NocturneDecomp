; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __watcallStack crt_unknown_c_FUN_005ba1e0(char *filename)
;
; Parameters:
; char *           Stack[0x4]:4   filename
;
; XREF[6]:
;   core_game.cpp_FUN_004bb9b0 at 004bb9da
;   core_game.cpp_FUN_004bbf70 at 004bbf7f
;   core_netgame.cpp_CNetGame_init_FUN_0050b340 at 0050b347
;   crt_stdio.c_fclose_FUN_005b8af0 at 005b8ba9
;   engine_ini.cpp_CIni_writeProfileString_FUN_004d8530 at 004d8709
;   unkafter_dosio.cpp_FUN_00461440 at 00461445
;
; Called Functions:
;   crt_unknown.c_FUN_005c0fc0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005ba1e0
        ;   Label: crt_unknown.c_FUN_005ba1e0
    PUSH EDX                            ; 005ba1e4
    CALL crt_unknown.c_FUN_005c0fc0     ; 005ba1e5
        ;   XREF to: 005c0fc0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0fc0()
    ADD ESP,0x4                         ; 005ba1ea
    RET                                 ; 005ba1ed

