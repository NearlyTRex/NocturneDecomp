; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_game_cpp_FUN_004bb090(void)
;
;
; XREF[1]:
;   core_game.cpp_FUN_004b6170 at 004b6bdd
;
; Referenced Globals:
;   undefined4 DAT_01cb80e0
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 004bb090
        ;   Label: core_game.cpp_FUN_004bb090
    MOV dword ptr [0x01cb80e0],EDX      ; 004bb092 | DAT_01cb80e0
    RET                                 ; 004bb098

