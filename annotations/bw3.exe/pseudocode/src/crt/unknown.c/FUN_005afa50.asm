; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_005afa50(void)
;
;
; XREF[2]:
;   crt_unknown.c_FUN_005ad6d8 at 005ad6de
;   crt_unknown.c_FUN_005ad714 at 005ad71d
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005a7f3c_006079a0 = 005a7f3c
;
; *****************************************************************************

section .text

    CALL dword ptr [0x006079a0]         ; 005afa50 | PTR_crt_unknown.c_FUN_005a7f3c_006079a0
        ;   Label: crt_unknown.c_FUN_005afa50
    ADD EAX,0xc6                        ; 005afa56
    RET                                 ; 005afa5b

