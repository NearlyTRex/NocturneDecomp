; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_level_cpp_CLevelLoader_reset_FUN_004dfc40(CLevelLoader *this_ptr)
;
; Parameters:
; CLevelLoader *   Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_game.cpp_CGame_runGameSession_FUN_004b7f90 at 004b8359
;   core_level.cpp_staticInit_FUN_004dfc10 at 004dfc15
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004dfc40
        ;   Label: core_level.cpp_CLevelLoader_reset_FUN_004dfc40
    MOV dword ptr [EAX + 0xc],0x0       ; 004dfc44
    RET                                 ; 004dfc4b

