; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_errno_c_setErrno_FUN_00568e80(int error_code)
;
; Parameters:
; int              Stack[0x4]:4   error_code
;
; XREF[28]:
;   crt_errno.c_convertWindowsErrorToErrno_FUN_0056c6d0 at 0056c6f1
;   crt_io.c_close_FUN_00568a50 at 00568a69
;   crt_io.c_getFileStat_FUN_0056c864 at 0056c898
;   crt_io.c_tell_FUN_0056bc10 at 0056bc24
;   crt_io.c_write_FUN_0057301c at 00573036
;   crt_math.c_set_domain_error_errno_FUN_00568e90 at 00568e92
;   crt_math.c_set_range_error_errno_FUN_00568e9c at 00568e9e
;   crt_stdio.c_CreateFileImpl_FUN_0056b960 at 0056b976
;   crt_stdio.c___allocfp_FUN_00568560 at 0056860a
;   crt_stdio.c_fgetc_FUN_00564570 at 005645b1
;   ... and 18 more
;
; Referenced Globals:
;   void* PTR_crt_thread.c_GetTLS_FUN_005671dc_005c1abc = 005671dc
;
; Called Functions:
;   crt_thread.c_GetTLS_FUN_005671dc
;
; *****************************************************************************

section .text

    CALL dword ptr [0x005c1abc]         ; 00568e80 | PTR_crt_thread.c_GetTLS_FUN_005671dc_005c1abc
        ;   Label: crt_errno.c_setErrno_FUN_00568e80
    MOV EDX,dword ptr [ESP + 0x4]       ; 00568e86
    MOV dword ptr [EAX + 0x4],EDX       ; 00568e8a
    RET                                 ; 00568e8d

