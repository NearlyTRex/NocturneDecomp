; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_CNetGame_FUN_00543b30(CNetGame *this_ptr)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00543b30
        ;   Label: core_netgame.cpp_CNetGame_FUN_00543b30
    MOV byte ptr [EAX + 0x4],0x3        ; 00543b34
    MOV dword ptr [EAX],0x9             ; 00543b38
    RET                                 ; 00543b3e

