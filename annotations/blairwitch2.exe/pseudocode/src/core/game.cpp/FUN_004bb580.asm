; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_game_cpp_FUN_004bb580(int param_1)
;
;
; XREF[1]:
;   core_script.cpp_FUN_00522350 at 00527caa
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004bb580
        ;   Label: core_game.cpp_FUN_004bb580
    MOV dword ptr [EAX + 0xb14],0x0     ; 004bb584
    MOV dword ptr [EAX + 0xaf4],0x0     ; 004bb58e
    MOV dword ptr [EAX + 0xb04],0x0     ; 004bb598
    RET                                 ; 004bb5a2

