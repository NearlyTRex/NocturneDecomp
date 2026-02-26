; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_CNetGame_setMode7_FUN_00543b60(CNetGame *this_ptr)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00543b60
        ;   Label: core_netgame.cpp_CNetGame_setMode7_FUN_00543b60
    MOV byte ptr [EAX + 0x4],0x7        ; 00543b64
    MOV dword ptr [EAX],0x9             ; 00543b68
    RET                                 ; 00543b6e

