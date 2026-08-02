; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ThreadData * __cdecl crt_thread_c_GetTLS_FUN_005671dc(void)
;
;
; XREF[17]:
;   crt_errno.c_SetWindowsError_FUN_00568eb8 at 00568eb8
;   crt_errno.c__errno_FUN_0056f1a0 at 0056f1a0
;   crt_errno.c_setErrno_FUN_00568e80 at 00568e80
;   crt_exception.c_RemoveExceptionHandler_FUN_0056ef24 at 0056ef24
;   crt_exception.c_installExceptionHandler_FUN_0056eed8 at 0056eedd
;   crt_signal.c_getSignalHandler_FUN_00571564 at 0057157c
;   crt_signal.c_setSignalHandler_FUN_00571510 at 00571543
;   crt_stack.c_GetStackUsage_FUN_00571150 at 00571151
;   crt_startup.cpp_InitializeWinAppRuntime_FUN_00567458 at 00567477
;   crt_stdio.c_fwrite_FUN_00563a50 at 00563b2f
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

