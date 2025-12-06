; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void crt_errno.c_setErrno_FUN_00602790(int error_code)
;
; Parameters:
; int              Stack[0x4]:4   error_code
;
; XREF[32]:
;   crt_errno.c_convertWindowsErrorToErrno_FUN_00608390 at 006083ca
;   crt_io.c_close_FUN_00609bd0 at 00609be9
;   crt_io.c_close_handle_safe_FUN_0060c2e0 at 0060c2f4
;   crt_io.c_ftruncate_FUN_00600cf0 at 00600d0d
;   crt_io.c_get_handle_FUN_006109f0 at 00610a02
;   crt_io.c_getcwd_FUN_00608d20 at 00608d8b
;   crt_io.c_realpath_FUN_00601140 at 0060116d
;   crt_io.c_stat_FUN_00607e64 at 00607e98
;   crt_io.c_tell_FUN_00606720 at 00606734
;   crt_io.c_write_FUN_006084ec at 00608880
;   ... and 22 more
;
; Referenced Globals:
;   GET_TLS_FUNC* PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4 = 0060242c
;
; Called Functions:
;   crt_thread.c_GetTLS_FUN_0060242c
;
; *****************************************************************************

section .text

    CALL dword ptr [0x00684ee4]         ; 00602790 | GET_TLS_FUNC * PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4
        ;   Label: crt_errno.c_setErrno_FUN_00602790
    MOV EDX,dword ptr [ESP + 0x4]       ; 00602796
    MOV dword ptr [EAX + 0x4],EDX       ; 0060279a
    RET                                 ; 0060279d

