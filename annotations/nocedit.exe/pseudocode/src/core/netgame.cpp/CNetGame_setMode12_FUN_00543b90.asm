; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_CNetGame_setMode12_FUN_00543b90(CNetGame *this_ptr)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00543b90
        ;   Label: core_netgame.cpp_CNetGame_setMode12_FUN_00543b90
    MOV byte ptr [EAX + 0x4],0xc        ; 00543b94
    MOV dword ptr [EAX],0x9             ; 00543b98
    RET                                 ; 00543b9e

