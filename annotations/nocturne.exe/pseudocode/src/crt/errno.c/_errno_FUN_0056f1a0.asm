; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * __cdecl crt_errno_c__errno_FUN_0056f1a0(void)
;
;
; XREF[1]:
;   FUN_00568690 at 005686e6
;
; Referenced Globals:
;   void* PTR_crt_thread.c_GetTLS_FUN_005671dc_005c1abc = 005671dc
;
; Called Functions:
;   crt_thread.c_GetTLS_FUN_005671dc
;
; *****************************************************************************

section .text

    CALL dword ptr [0x005c1abc]         ; 0056f1a0 | PTR_crt_thread.c_GetTLS_FUN_005671dc_005c1abc
        ;   Label: crt_errno.c__errno_FUN_0056f1a0
    ADD EAX,0x4                         ; 0056f1a6
    RET                                 ; 0056f1a9

