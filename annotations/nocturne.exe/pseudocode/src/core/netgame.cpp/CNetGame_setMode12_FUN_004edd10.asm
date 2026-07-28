; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_netgame_cpp_CNetGame_setMode12_FUN_004edd10(void)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004edd10
        ;   Label: core_netgame.cpp_CNetGame_setMode12_FUN_004edd10
    MOV byte ptr [EAX + 0x4],0xc        ; 004edd14
    MOV dword ptr [EAX],0x9             ; 004edd18
    RET                                 ; 004edd1e

