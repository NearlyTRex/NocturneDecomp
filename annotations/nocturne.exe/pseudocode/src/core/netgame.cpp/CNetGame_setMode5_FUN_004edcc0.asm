; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_netgame_cpp_CNetGame_setMode5_FUN_004edcc0(void)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004edcc0
        ;   Label: core_netgame.cpp_CNetGame_setMode5_FUN_004edcc0
    MOV byte ptr [EAX + 0x4],0x5        ; 004edcc4
    MOV dword ptr [EAX],0x9             ; 004edcc8
    RET                                 ; 004edcce

