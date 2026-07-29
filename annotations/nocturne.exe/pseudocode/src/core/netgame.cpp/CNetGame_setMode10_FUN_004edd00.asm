; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_CNetGame_setMode10_FUN_004edd00(CNetGame *this_ptr)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004edd00
        ;   Label: core_netgame.cpp_CNetGame_setMode10_FUN_004edd00
    MOV byte ptr [EAX + 0x4],0xa        ; 004edd04
    MOV dword ptr [EAX],0x29            ; 004edd08
    RET                                 ; 004edd0e

