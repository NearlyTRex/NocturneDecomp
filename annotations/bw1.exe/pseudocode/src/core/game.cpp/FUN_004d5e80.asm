; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_game_cpp_FUN_004d5e80(void)
;
;
; XREF[1]:
;   core_game.cpp_CGame_runGameSession_FUN_004cf5e0 at 004d0105
;
; Referenced Globals:
;   undefined4 DAT_01cd0c7c
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 004d5e80
        ;   Label: core_game.cpp_FUN_004d5e80
    MOV dword ptr [0x01cd0c7c],EDX      ; 004d5e82 | DAT_01cd0c7c
    RET                                 ; 004d5e88

