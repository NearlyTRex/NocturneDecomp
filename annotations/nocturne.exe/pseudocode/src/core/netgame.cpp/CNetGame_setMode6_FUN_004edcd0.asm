; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_netgame_cpp_CNetGame_setMode6_FUN_004edcd0(void)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004edcd0
        ;   Label: core_netgame.cpp_CNetGame_setMode6_FUN_004edcd0
    MOV byte ptr [EAX + 0x4],0x6        ; 004edcd4
    MOV dword ptr [EAX],0x109           ; 004edcd8
    RET                                 ; 004edcde

