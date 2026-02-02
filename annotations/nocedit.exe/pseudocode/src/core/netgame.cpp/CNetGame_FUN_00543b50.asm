; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_netgame_cpp_CNetGame_FUN_00543b50(CNetGame *this_ptr)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00543b50
        ;   Label: core_netgame.cpp_CNetGame_FUN_00543b50
    MOV byte ptr [EAX + 0x4],0x6        ; 00543b54
    MOV dword ptr [EAX],0x109           ; 00543b58
    RET                                 ; 00543b5e

