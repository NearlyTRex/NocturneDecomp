; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_game_cpp_FUN_004c4d50(int param_1)
;
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_00529a70 at 0052e684
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004c4d50
        ;   Label: core_game.cpp_FUN_004c4d50
    MOV EAX,dword ptr [EAX + 0x338]     ; 004c4d54
    RET                                 ; 004c4d5a

