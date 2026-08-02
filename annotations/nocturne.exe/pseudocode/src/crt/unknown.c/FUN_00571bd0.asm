; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_00571bd0(void)
;
;
; XREF[2]:
;   crt_unknown.c_FUN_0056f9c4 at 0056f9ca
;   crt_unknown.c_FUN_0056fa00 at 0056fa09
;
; Referenced Globals:
;   void* PTR_crt_thread.c_GetTLS_FUN_005671dc_005c1abc = 005671dc
;
; *****************************************************************************

section .text

    CALL dword ptr [0x005c1abc]         ; 00571bd0 | PTR_crt_thread.c_GetTLS_FUN_005671dc_005c1abc
        ;   Label: crt_unknown.c_FUN_00571bd0
    ADD EAX,0xc6                        ; 00571bd6
    RET                                 ; 00571bdb

