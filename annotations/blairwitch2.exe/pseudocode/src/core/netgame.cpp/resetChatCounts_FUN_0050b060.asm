; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_resetChatCounts_FUN_0050b060(void)
;
;
; Referenced Globals:
;   int g_INT_01d34e4c
;   int g_INT_01d51050
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 0050b060
        ;   Label: core_netgame.cpp_resetChatCounts_FUN_0050b060
    MOV dword ptr [0x01d51050],EDX      ; 0050b062 | g_INT_01d51050
    MOV dword ptr [0x01d34e4c],EDX      ; 0050b068 | g_INT_01d34e4c
    RET                                 ; 0050b06e

