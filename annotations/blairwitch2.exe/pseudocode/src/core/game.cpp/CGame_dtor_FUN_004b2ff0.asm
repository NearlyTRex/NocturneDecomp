; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CGame * __cdecl core_game_cpp_CGame_dtor_FUN_004b2ff0(CGame *this_ptr,uint flags)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004b2ff0
        ;   Label: core_game.cpp_CGame_dtor_FUN_004b2ff0
    MOV dword ptr [EAX + 0xb1c],0x5f7574 ; 004b2ff4
    RET                                 ; 004b2ffe

