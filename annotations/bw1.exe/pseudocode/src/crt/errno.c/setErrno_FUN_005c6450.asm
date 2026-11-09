; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_errno_c_setErrno_FUN_005c6450(int error_code)
;
; Parameters:
; int              Stack[0x4]:4   error_code
;
; XREF[26]:
;   crt_stdio.c_fgetc_FUN_005c0530 at 005c0571
;   crt_stdio.c_fputc_FUN_005c2f00 at 005c2f4a
;   crt_stdio.c_fread_FUN_005c0b10 at 005c0b36
;   crt_stdio.c_fseek_FUN_005c170c at 005c1752
;   crt_stdio.c_fwrite_FUN_005c1a70 at 005c1a96
;   crt_stdlib.c__fullpath_FUN_005c2500 at 005c252d
;   crt_unknown.c_FUN_005c12d0 at 005c1324
;   crt_unknown.c_FUN_005c1594 at 005c1601
;   crt_unknown.c_FUN_005c6460 at 005c6462
;   crt_unknown.c_FUN_005c646c at 005c646e
;   ... and 16 more
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005c50cc_006265fc = 005c50cc
;
; Called Functions:
;   crt_unknown.c_FUN_005c50cc
;
; *****************************************************************************

section .text

    CALL dword ptr [0x006265fc]         ; 005c6450 | PTR_crt_unknown.c_FUN_005c50cc_006265fc
        ;   Label: crt_errno.c_setErrno_FUN_005c6450
    MOV EDX,dword ptr [ESP + 0x4]       ; 005c6456
    MOV dword ptr [EAX + 0x4],EDX       ; 005c645a
    RET                                 ; 005c645d

