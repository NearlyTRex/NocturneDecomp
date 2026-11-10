; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_005c49c0(void)
;
;
; XREF[2]:
;   crt_unknown.c_FUN_005c2568 at 005c256e
;   crt_unknown.c_FUN_005c25a4 at 005c25ad
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005bcdfc_0061f2a4 = 005bcdfc
;
; *****************************************************************************

section .text

    CALL dword ptr [0x0061f2a4]         ; 005c49c0 | PTR_crt_unknown.c_FUN_005bcdfc_0061f2a4
        ;   Label: crt_unknown.c_FUN_005c49c0
    ADD EAX,0xc6                        ; 005c49c6
    RET                                 ; 005c49cb

