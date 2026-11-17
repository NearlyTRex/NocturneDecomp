; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_resetChatCounts_FUN_0050b060(void)
;
;
; Referenced Globals:
;   int g_ChatHistoryCount
;   int g_ChatOutCount
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 0050b060
        ;   Label: core_netgame.cpp_resetChatCounts_FUN_0050b060
    MOV dword ptr [0x01d51050],EDX      ; 0050b062 | g_ChatOutCount
    MOV dword ptr [0x01d34e4c],EDX      ; 0050b068 | g_ChatHistoryCount
    RET                                 ; 0050b06e

