; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_CNetGame_setModeSyncing_FUN_00543b20(CNetGame *this_ptr)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00543b20
        ;   Label: core_netgame.cpp_CNetGame_setModeSyncing_FUN_00543b20
    MOV byte ptr [EAX + 0x4],0x2        ; 00543b24
    MOV dword ptr [EAX],0x71            ; 00543b28
    RET                                 ; 00543b2e

