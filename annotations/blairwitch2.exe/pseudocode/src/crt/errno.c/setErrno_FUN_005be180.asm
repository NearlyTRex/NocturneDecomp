; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_errno_c_setErrno_FUN_005be180(int error_code)
;
; Parameters:
; int              Stack[0x4]:4   error_code
;
; XREF[26]:
;   crt_stdio.c_fgetc_FUN_005b8180 at 005b81c1
;   crt_stdio.c_fputc_FUN_005bab40 at 005bab8a
;   crt_stdio.c_fread_FUN_005b87c0 at 005b87e6
;   crt_stdio.c_fseek_FUN_005b929c at 005b92e2
;   crt_stdio.c_fwrite_FUN_005b9690 at 005b96b6
;   crt_stdlib.c__fullpath_FUN_005ba120 at 005ba14d
;   crt_unknown.c_FUN_005b8e60 at 005b8eb4
;   crt_unknown.c_FUN_005b9124 at 005b9191
;   crt_unknown.c_FUN_005be190 at 005be192
;   crt_unknown.c_FUN_005be19c at 005be19e
;   ... and 16 more
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005bcdfc_0061f2a4 = 005bcdfc
;
; Called Functions:
;   crt_unknown.c_FUN_005bcdfc
;
; *****************************************************************************

section .text

    CALL dword ptr [0x0061f2a4]         ; 005be180 | PTR_crt_unknown.c_FUN_005bcdfc_0061f2a4
        ;   Label: crt_errno.c_setErrno_FUN_005be180
    MOV EDX,dword ptr [ESP + 0x4]       ; 005be186
    MOV dword ptr [EAX + 0x4],EDX       ; 005be18a
    RET                                 ; 005be18d

