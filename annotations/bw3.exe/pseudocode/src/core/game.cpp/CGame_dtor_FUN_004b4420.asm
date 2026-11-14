; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CGame * __cdecl core_game_cpp_CGame_dtor_FUN_004b4420(CGame *this_ptr,uint flags)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004b4420
        ;   Label: core_game.cpp_CGame_dtor_FUN_004b4420
    MOV dword ptr [EAX + 0xb8c],0x5e0704 ; 004b4424
    RET                                 ; 004b442e

