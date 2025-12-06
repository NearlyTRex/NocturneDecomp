; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl HANDLE crt_stdio.c_GetConsoleOutputHandle_FUN_0060ce3c(void)
;
;
; XREF[2]:
;   crt_exception.c_TopLevelExceptionFilter_FUN_0060a7a4 at 0060a7c3
;   crt_stdio.c_WriteConsoleChar_FUN_0060b490 at 0060b4c9
;
; Referenced Globals:
;   HANDLE g_ConsoleOutputHandle = ffffffff
;
; Called Functions:
;   crt_stdio.c_InitializeConsoleHandles_FUN_0060cdbc
;
; *****************************************************************************

section .text

    CALL crt_stdio.c_InitializeConsoleHandles_FUN_0060cdbc ; 0060ce3c | void crt_stdio.c_InitializeConsoleHandles_FUN_0060cdbc()
        ;   Label: crt_stdio.c_GetConsoleOutputHandle_FUN_0060ce3c
        ;   XREF to: 0060cdbc (UNCONDITIONAL_CALL)
    MOV EAX,[0x00685500]                ; 0060ce41 | HANDLE g_ConsoleOutputHandle
    RET                                 ; 0060ce46

