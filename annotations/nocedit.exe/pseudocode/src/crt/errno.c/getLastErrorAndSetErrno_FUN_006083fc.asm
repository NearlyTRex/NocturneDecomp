; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl DWORD crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc(void)
;
;
; XREF[22]:
;   crt_file.c_create_directory_FUN_00600e10 at 00600e20
;   crt_file.c_setReadonlyAttribute_FUN_00600c30 at 00600c43
;   crt_io.c_chdir_FUN_006012a0 at 006012ae
;   crt_io.c_check_file_access_FUN_0060c9f0 at 0060c9ff
;   crt_io.c_findFirstFileWrapper_FUN_006021f0 at 00602210
;   crt_io.c_findNextFileWrapper_FUN_00602300 at 0060231d
;   crt_io.c_ftruncate_FUN_00600cf0 at 00600d81
;   crt_io.c_getcwd_FUN_00608d20 at 00608d4c
;   crt_io.c_realpath_FUN_00601140 at 006011e7
;   crt_io.c_stat_FUN_00607e64 at 00607f99
;   ... and 12 more
;
; Referenced Globals:
;   GetLastError* GetLastError = 00211f22
;
; Called Functions:
;   crt_errno.c_convertWindowsErrorToErrno_FUN_00608390
;   GetLastError
;
; *****************************************************************************

section .text

    CALL dword ptr CS:[0x6115a4]        ; 006083fc | GetLastError
        ;   Label: crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc
    PUSH EAX                            ; 00608403
    CALL crt_errno.c_convertWindowsErrorToErrno_FUN_00608390 ; 00608404
        ;   XREF to: 00608390 (UNCONDITIONAL_CALL)  ; int crt_errno.c_convertWindowsErrorToErrno_FUN_00608390(DWORD windows_error)
    ADD ESP,0x4                         ; 00608409
    RET                                 ; 0060840c

