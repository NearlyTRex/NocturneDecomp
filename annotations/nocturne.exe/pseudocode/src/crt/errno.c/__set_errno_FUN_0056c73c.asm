; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; DWORD __cdecl crt_errno_c___set_errno_FUN_0056c73c(void)
;
;
; XREF[18]:
;   FUN_00568f70 at 00569017
;   FUN_00569fb0 at 0056a01c
;   FUN_0056bbf0 at 0056bbfe
;   FUN_0056f170 at 0056f17f
;   crt_io.c__utime_FUN_0056cb60 at 0056cb8e
;   crt_io.c_getFileStat_FUN_0056c864 at 0056c999
;   crt_io.c_tell_FUN_0056bc10 at 0056bc66
;   crt_io.c_write_FUN_0057301c at 005730c2
;   crt_stdio.c_CreateFileImpl_FUN_0056b960 at 0056baf0
;   crt_stdio.c_flushFileBuffers_FUN_0056f1c0 at 0056f204
;   ... and 8 more
;
; Referenced Globals:
;   void* PTR_GetLastError_0057551c = 00175d70
;
; Called Functions:
;   crt_errno.c_convertWindowsErrorToErrno_FUN_0056c6d0
;   GetLastError
;
; *****************************************************************************

section .text

    CALL dword ptr CS:[0x57551c]        ; 0056c73c | PTR_GetLastError_0057551c
        ;   Label: crt_errno.c___set_errno_FUN_0056c73c
    PUSH EAX                            ; 0056c743
    CALL crt_errno.c_convertWindowsErrorToErrno_FUN_0056c6d0 ; 0056c744
        ;   XREF to: 0056c6d0 (UNCONDITIONAL_CALL)  ; int crt_errno.c_convertWindowsErrorToErrno_FUN_0056c6d0(DWORD windows_error)
    ADD ESP,0x4                         ; 0056c749
    RET                                 ; 0056c74c

