; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_netgame_cpp_resetChatCounts_FUN_0052c230(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01d51db4
;   undefined4 DAT_01d6dfb8
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 0052c230
        ;   Label: core_netgame.cpp_resetChatCounts_FUN_0052c230
    MOV dword ptr [0x01d6dfb8],EDX      ; 0052c232 | DAT_01d6dfb8
    MOV dword ptr [0x01d51db4],EDX      ; 0052c238 | DAT_01d51db4
    RET                                 ; 0052c23e

