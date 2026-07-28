; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_errno_c_setErrno_FUN_00568e80(int error_code)
;
; Parameters:
; int              Stack[0x4]:4   error_code
;
; XREF[28]:
;   FUN_00568690 at 00568765
;   FUN_00568890 at 00568915
;   FUN_00568f70 at 00568f89
;   FUN_00569fb0 at 00569fcd
;   FUN_00570a70 at 00570a84
;   FUN_00571718 at 0057172f
;   crt_errno.c_convertWindowsErrorToErrno_FUN_0056c6d0 at 0056c6f1
;   crt_io.c_close_FUN_00568a50 at 00568a69
;   crt_io.c_getFileStat_FUN_0056c864 at 0056c898
;   crt_io.c_tell_FUN_0056bc10 at 0056bc24
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

