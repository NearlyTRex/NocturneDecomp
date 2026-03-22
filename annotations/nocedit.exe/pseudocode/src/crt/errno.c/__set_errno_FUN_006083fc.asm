; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; DWORD __cdecl crt_errno_c___set_errno_FUN_006083fc(void)
;
;
; XREF[20]:
;   crt_io.c__findfirst_FUN_006021f0 at 00602210
;   crt_io.c__findnext_FUN_00602300 at 0060231d
;   crt_io.c__utime_FUN_00608160 at 0060818e
;   crt_io.c_access_FUN_0060c9f0 at 0060c9ff
;   crt_io.c_chdir_FUN_006012a0 at 006012ae
;   crt_io.c_chsize_FUN_00600cf0 at 00600d81
;   crt_io.c_getFileStat_FUN_00607e64 at 00607f99
;   crt_io.c_tell_FUN_00606720 at 00606776
;   crt_io.c_write_FUN_006084ec at 006087c2
;   crt_process.c_spawn_FUN_006105a0 at 006106a0
;   ... and 10 more
;
; Referenced Globals:
;   GET_LAST_ERROR_FUNC* g_GetLastErrorFunc = 00211f22
;
; Called Functions:
;   crt_errno.c_convertWindowsErrorToErrno_FUN_00608390
;   GetLastError
;
; *****************************************************************************

section .text

    CALL dword ptr CS:[0x6115a4]        ; 006083fc | g_GetLastErrorFunc
        ;   Label: crt_errno.c___set_errno_FUN_006083fc
    PUSH EAX                            ; 00608403
    CALL crt_errno.c_convertWindowsErrorToErrno_FUN_00608390 ; 00608404
        ;   XREF to: 00608390 (UNCONDITIONAL_CALL)  ; int crt_errno.c_convertWindowsErrorToErrno_FUN_00608390(DWORD windows_error)
    ADD ESP,0x4                         ; 00608409
    RET                                 ; 0060840c

