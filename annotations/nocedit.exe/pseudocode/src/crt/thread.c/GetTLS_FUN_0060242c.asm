; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl ThreadData * __cdecl crt_thread_c_GetTLS_FUN_0060242c(void)
;
;
; XREF[22]:
;   crt_errno.c_SetWindowsError_FUN_006027c8 at 006027c8
;   crt_errno.c_errno_FUN_00601450 at 00601450
;   crt_errno.c_setErrno_FUN_00602790 at 00602790
;   crt_exception.c_RemoveExceptionHandler_FUN_0060abf4 at 0060ac08
;   crt_exception.c_installExceptionHandler_FUN_0060aba8 at 0060abc8
;   crt_process.c_execv_FUN_006101f0 at 0061020c
;   crt_process.c_spawnvp_FUN_0060f39c at 0060f701
;   crt_process.c_spawnvp_with_path_search_FUN_0060e6a0 at 0060e6e7
;   crt_signal.c_getSignalHandler_FUN_0060ceb4 at 0060cecc
;   crt_signal.c_setSignalHandler_FUN_0060ce60 at 0060ce93
;   ... and 12 more
;
; Referenced Globals:
;   void* g_CurrentThreadTlsBlock
;
; *****************************************************************************

section .text

    MOV EAX,[0x03f9b22c]                ; 0060242c | g_CurrentThreadTlsBlock
        ;   Label: crt_thread.c_GetTLS_FUN_0060242c
    LEA EAX,[EAX]                       ; 00602431

