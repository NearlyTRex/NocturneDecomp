; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_errno_c_setErrno_FUN_005a92c0(int error_code)
;
; Parameters:
; int              Stack[0x4]:4   error_code
;
; XREF[26]:
;   crt_stdio.c_fgetc_FUN_005a32b0 at 005a32f1
;   crt_stdio.c_fputc_FUN_005a5d70 at 005a5dba
;   crt_stdio.c_fread_FUN_005a3890 at 005a38b6
;   crt_stdio.c_fseek_FUN_005a457c at 005a45c2
;   crt_stdio.c_fwrite_FUN_005a48e0 at 005a4906
;   crt_stdlib.c__fullpath_FUN_005a53f0 at 005a541d
;   crt_unknown.c_FUN_005a4140 at 005a4194
;   crt_unknown.c_FUN_005a4404 at 005a4471
;   crt_unknown.c_FUN_005a92d0 at 005a92d2
;   crt_unknown.c_FUN_005a92dc at 005a92de
;   ... and 16 more
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005a7f3c_006079a0 = 005a7f3c
;
; Called Functions:
;   crt_unknown.c_FUN_005a7f3c
;
; *****************************************************************************

section .text

    CALL dword ptr [0x006079a0]         ; 005a92c0 | PTR_crt_unknown.c_FUN_005a7f3c_006079a0
        ;   Label: crt_errno.c_setErrno_FUN_005a92c0
    MOV EDX,dword ptr [ESP + 0x4]       ; 005a92c6
    MOV dword ptr [EAX + 0x4],EDX       ; 005a92ca
    RET                                 ; 005a92cd

