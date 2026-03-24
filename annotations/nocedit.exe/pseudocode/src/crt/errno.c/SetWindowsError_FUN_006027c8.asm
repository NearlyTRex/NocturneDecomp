; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_errno_c_SetWindowsError_FUN_006027c8(DWORD windows_error_code)
;
; Parameters:
; DWORD            Stack[0x4]:4   windows_error_code
;
; XREF[2]:
;   crt_errno.c_convertWindowsErrorToErrno_FUN_00608390 at 00608396
;   crt_process.c_build_cmdline_FUN_00610258 at 006102ed
;
; Referenced Globals:
;   GET_TLS_FUNC* PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4 = 0060242c
;
; Called Functions:
;   crt_thread.c_GetTLS_FUN_0060242c
;
; *****************************************************************************

section .text

    CALL dword ptr [0x00684ee4]         ; 006027c8 | PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4
        ;   Label: crt_errno.c_SetWindowsError_FUN_006027c8
    MOV EDX,dword ptr [ESP + 0x4]       ; 006027ce
    MOV dword ptr [EAX + 0x8],EDX       ; 006027d2
    RET                                 ; 006027d5

