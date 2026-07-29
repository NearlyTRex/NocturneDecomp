; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_CNetGame_setMode13_FUN_004edd20(CNetGame *this_ptr)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004edd20
        ;   Label: core_netgame.cpp_CNetGame_setMode13_FUN_004edd20
    MOV byte ptr [EAX + 0x4],0xd        ; 004edd24
    MOV dword ptr [EAX],0x9             ; 004edd28
    RET                                 ; 004edd2e

