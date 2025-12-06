; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallRegister HANDLE crt_stdio.c_GetConsoleInputHandle_FUN_0060ce30(void)
;
;
; XREF[1]:
;   crt_stdio.c_DrainConsoleInputAndSetup_FUN_0060b3f8 at 0060b43b
;
; Referenced Globals:
;   HANDLE g_ConsoleInputHandle = ffffffff
;
; Called Functions:
;   crt_stdio.c_InitializeConsoleHandles_FUN_0060cdbc
;
; *****************************************************************************

section .text

    CALL crt_stdio.c_InitializeConsoleHandles_FUN_0060cdbc ; 0060ce30 | void crt_stdio.c_InitializeConsoleHandles_FUN_0060cdbc()
        ;   Label: crt_stdio.c_GetConsoleInputHandle_FUN_0060ce30
        ;   XREF to: 0060cdbc (UNCONDITIONAL_CALL)
    MOV EAX,[0x006854fc]                ; 0060ce35 | HANDLE g_ConsoleInputHandle
    RET                                 ; 0060ce3a

