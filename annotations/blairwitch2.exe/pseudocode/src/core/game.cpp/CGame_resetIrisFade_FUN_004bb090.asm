; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_resetIrisFade_FUN_004bb090(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_game.cpp_CGame_runGameSession_FUN_004b6170 at 004b6bdd
;
; Referenced Globals:
;   int g_INT_01cb80e0
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 004bb090
        ;   Label: core_game.cpp_CGame_resetIrisFade_FUN_004bb090
    MOV dword ptr [0x01cb80e0],EDX      ; 004bb092 | g_INT_01cb80e0
    RET                                 ; 004bb098

