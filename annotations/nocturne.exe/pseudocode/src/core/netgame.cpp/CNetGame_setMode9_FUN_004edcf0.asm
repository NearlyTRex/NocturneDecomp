; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_CNetGame_setMode9_FUN_004edcf0(CNetGame *this_ptr)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004edcf0
        ;   Label: core_netgame.cpp_CNetGame_setMode9_FUN_004edcf0
    MOV byte ptr [EAX + 0x4],0x9        ; 004edcf4
    MOV dword ptr [EAX],0x9             ; 004edcf8
    RET                                 ; 004edcfe

