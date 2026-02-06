; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_game_cpp_CGame_clearOverlay_FUN_004d7f80(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_game.cpp_CGame_runGameSession_FUN_004daf80 at 004db25d
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004d7f80
        ;   Label: core_game.cpp_CGame_clearOverlay_FUN_004d7f80
    MOV dword ptr [EAX + 0x388],0x0     ; 004d7f84
    MOV dword ptr [EAX + 0x384],0x0     ; 004d7f8e
    RET                                 ; 004d7f98

