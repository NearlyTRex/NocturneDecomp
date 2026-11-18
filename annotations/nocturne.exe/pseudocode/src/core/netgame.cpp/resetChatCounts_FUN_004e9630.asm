; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __edx core_netgame_cpp_resetChatCounts_FUN_004e9630(int count)
;
;
; Referenced Globals:
;   int g_ChatHistoryCount
;   int g_ChatOutCount
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 004e9630
        ;   Label: core_netgame.cpp_resetChatCounts_FUN_004e9630
    MOV dword ptr [0x01d06610],EDX      ; 004e9632 | g_ChatOutCount
    MOV dword ptr [0x01cea40c],EDX      ; 004e9638 | g_ChatHistoryCount
    RET                                 ; 004e963e

