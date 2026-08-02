; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; HANDLE __watcallRegister crt_unknown_c_FUN_005714e0(void)
;
;
; XREF[1]:
;   crt_stdio.c_DrainConsoleInputAndSetup_FUN_0056fb98 at 0056fbdb
;
; Referenced Globals:
;   undefined4 DAT_005c20d0
;
; Called Functions:
;   crt_stdio.c_InitializeConsoleHandles_FUN_0057146c
;
; *****************************************************************************

section .text

    CALL crt_stdio.c_InitializeConsoleHandles_FUN_0057146c ; 005714e0
        ;   XREF to: 0057146c (UNCONDITIONAL_CALL)  ; void crt_stdio.c_InitializeConsoleHandles_FUN_0057146c()
        ;   Label: crt_unknown.c_FUN_005714e0
    MOV EAX,[0x005c20d0]                ; 005714e5 | DAT_005c20d0
    RET                                 ; 005714ea

