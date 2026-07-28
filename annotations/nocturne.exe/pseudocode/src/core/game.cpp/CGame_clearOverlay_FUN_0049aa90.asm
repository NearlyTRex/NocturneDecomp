; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_clearOverlay_FUN_0049aa90(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_game.cpp_CGame_runGameSession_FUN_0049da10 at 0049dcf6
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0049aa90
        ;   Label: core_game.cpp_CGame_clearOverlay_FUN_0049aa90
    MOV dword ptr [EAX + 0x388],0x0     ; 0049aa94
    MOV dword ptr [EAX + 0x384],0x0     ; 0049aa9e
    RET                                 ; 0049aaa8

