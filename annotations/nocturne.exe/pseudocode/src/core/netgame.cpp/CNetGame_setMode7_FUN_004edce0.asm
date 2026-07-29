; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_CNetGame_setMode7_FUN_004edce0(CNetGame *this_ptr)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004edce0
        ;   Label: core_netgame.cpp_CNetGame_setMode7_FUN_004edce0
    MOV byte ptr [EAX + 0x4],0x7        ; 004edce4
    MOV dword ptr [EAX],0x9             ; 004edce8
    RET                                 ; 004edcee

