; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_errno_c_SetWindowsError_FUN_00568eb8(DWORD windows_error_code)
;
; Parameters:
; DWORD            Stack[0x4]:4   windows_error_code
;
; XREF[1]:
;   crt_errno.c_convertWindowsErrorToErrno_FUN_0056c6d0 at 0056c6d6
;
; Referenced Globals:
;   void* PTR_crt_thread.c_GetTLS_FUN_005671dc_005c1abc = 005671dc
;
; Called Functions:
;   crt_thread.c_GetTLS_FUN_005671dc
;
; *****************************************************************************

section .text

    CALL dword ptr [0x005c1abc]         ; 00568eb8 | PTR_crt_thread.c_GetTLS_FUN_005671dc_005c1abc
        ;   Label: crt_errno.c_SetWindowsError_FUN_00568eb8
    MOV EDX,dword ptr [ESP + 0x4]       ; 00568ebe
    MOV dword ptr [EAX + 0x8],EDX       ; 00568ec2
    RET                                 ; 00568ec5

