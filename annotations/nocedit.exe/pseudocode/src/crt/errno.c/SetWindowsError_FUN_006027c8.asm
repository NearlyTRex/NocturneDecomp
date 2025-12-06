; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void crt_errno.c_SetWindowsError_FUN_006027c8(DWORD windows_error_code)
;
; Parameters:
; typedef DWORD ulong Stack[0x4]:4   windows_error_code
;
; XREF[4]:
;   crt_errno.c_convertWindowsErrorToErrno_FUN_00608390 at 00608396
;   crt_process.c_build_cmdline_FUN_00610258 at 006102ed
;   crt_process.c_spawnvp_FUN_0060f39c at 0060f5f6
;   crt_process.c_spawnvp_with_path_search_FUN_0060e6a0 at 0060e7a2
;
; Referenced Globals:
;   GET_TLS_FUNC* PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4 = 0060242c
;
; Called Functions:
;   crt_thread.c_GetTLS_FUN_0060242c
;
; *****************************************************************************

section .text

    CALL dword ptr [0x00684ee4]         ; 006027c8 | GET_TLS_FUNC * PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4
        ;   Label: crt_errno.c_SetWindowsError_FUN_006027c8
    MOV EDX,dword ptr [ESP + 0x4]       ; 006027ce
    MOV dword ptr [EAX + 0x8],EDX       ; 006027d2
    RET                                 ; 006027d5

