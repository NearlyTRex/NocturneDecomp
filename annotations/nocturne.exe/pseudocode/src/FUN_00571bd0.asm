; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00571bd0(void)
;
;
; XREF[2]:
;   FUN_0056f9c4 at 0056f9ca
;   FUN_0056fa00 at 0056fa09
;
; Referenced Globals:
;   void* PTR_crt_thread.c_GetTLS_FUN_005671dc_005c1abc = 005671dc
;
; *****************************************************************************

section .text

    CALL dword ptr [0x005c1abc]         ; 00571bd0 | PTR_crt_thread.c_GetTLS_FUN_005671dc_005c1abc
        ;   Label: FUN_00571bd0
    ADD EAX,0xc6                        ; 00571bd6
    RET                                 ; 00571bdb

