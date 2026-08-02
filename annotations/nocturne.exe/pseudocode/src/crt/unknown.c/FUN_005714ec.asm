; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; HANDLE __cdecl crt_unknown_c_FUN_005714ec(void)
;
;
; XREF[2]:
;   crt_exception.c_TopLevelExceptionFilter_FUN_0056ead4 at 0056eaf3
;   crt_stdio.c_WriteConsoleChar_FUN_0056fc30 at 0056fc69
;
; Referenced Globals:
;   undefined4 DAT_005c20d4
;
; Called Functions:
;   crt_stdio.c_InitializeConsoleHandles_FUN_0057146c
;
; *****************************************************************************

section .text

    CALL crt_stdio.c_InitializeConsoleHandles_FUN_0057146c ; 005714ec
        ;   XREF to: 0057146c (UNCONDITIONAL_CALL)  ; void crt_stdio.c_InitializeConsoleHandles_FUN_0057146c()
        ;   Label: crt_unknown.c_FUN_005714ec
    MOV EAX,[0x005c20d4]                ; 005714f1 | DAT_005c20d4
    RET                                 ; 005714f6

