; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_FUN_0053f4a2(void)
;
;
; Referenced Globals:
;   int g_ChatHistoryCount
;   undefined4 DAT_02f98ad0
;
; *****************************************************************************

section .text

    MOV dword ptr [0x02f98ad0],EDX      ; 0053f4a2 | DAT_02f98ad0
        ;   Label: core_netgame.cpp_FUN_0053f4a2
    MOV dword ptr [0x02f7c8cc],EDX      ; 0053f4a8 | g_ChatHistoryCount
    RET                                 ; 0053f4ae

