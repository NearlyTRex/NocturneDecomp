; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ThreadData * __cdecl crt_thread_c_GetTLS_FUN_005671dc(void)
;
;
; XREF[17]:
;   FUN_00568690 at 0056869a
;   FUN_0056d4ab at 0056d4ac
;   FUN_00571858 at 00571861
;   FUN_00573e30 at 00573e8a
;   crt_errno.c_SetWindowsError_FUN_00568eb8 at 00568eb8
;   crt_errno.c__errno_FUN_0056f1a0 at 0056f1a0
;   crt_errno.c_setErrno_FUN_00568e80 at 00568e80
;   crt_exception.c_RemoveExceptionHandler_FUN_0056ef24 at 0056ef24
;   crt_exception.c_installExceptionHandler_FUN_0056eed8 at 0056eedd
;   crt_signal.c_getSignalHandler_FUN_00571564 at 0057157c
;   ... and 7 more
;
; Referenced Globals:
;   undefined4 DAT_02de4e3c
;
; *****************************************************************************

section .text

    MOV EAX,[0x02de4e3c]                ; 005671dc | DAT_02de4e3c
        ;   Label: crt_thread.c_GetTLS_FUN_005671dc
    LEA EAX,[EAX]                       ; 005671e1

