; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_resetChatCounts_FUN_0053f4a2(int count)
;
;
; Referenced Globals:
;   int g_ChatHistoryCount
;   int g_ChatOutCount
;
; *****************************************************************************

section .text

    MOV dword ptr [0x02f98ad0],EDX      ; 0053f4a2 | g_ChatOutCount
        ;   Label: core_netgame.cpp_resetChatCounts_FUN_0053f4a2
    MOV dword ptr [0x02f7c8cc],EDX      ; 0053f4a8 | g_ChatHistoryCount
    RET                                 ; 0053f4ae

