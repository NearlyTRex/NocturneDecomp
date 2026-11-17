; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_resetIrisFade_FUN_004bd470(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_game.cpp_CGame_runGameSession_FUN_004b7f90 at 004b8ad5
;
; Referenced Globals:
;   int g_INT_01d22c84
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 004bd470
        ;   Label: core_game.cpp_CGame_resetIrisFade_FUN_004bd470
    MOV dword ptr [0x01d22c84],EDX      ; 004bd472 | g_INT_01d22c84
    RET                                 ; 004bd478

