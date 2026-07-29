; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_CNetGame_setModeSyncing_FUN_004edca0(CNetGame *this_ptr)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004edca0
        ;   Label: core_netgame.cpp_CNetGame_setModeSyncing_FUN_004edca0
    MOV byte ptr [EAX + 0x4],0x2        ; 004edca4
    MOV dword ptr [EAX],0x71            ; 004edca8
    RET                                 ; 004edcae

