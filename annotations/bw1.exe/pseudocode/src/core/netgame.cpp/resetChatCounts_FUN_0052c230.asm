; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_resetChatCounts_FUN_0052c230(void)
;
;
; Referenced Globals:
;   int g_INT_01d51db4
;   int g_INT_01d6dfb8
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 0052c230
        ;   Label: core_netgame.cpp_resetChatCounts_FUN_0052c230
    MOV dword ptr [0x01d6dfb8],EDX      ; 0052c232 | g_INT_01d6dfb8
    MOV dword ptr [0x01d51db4],EDX      ; 0052c238 | g_INT_01d51db4
    RET                                 ; 0052c23e

