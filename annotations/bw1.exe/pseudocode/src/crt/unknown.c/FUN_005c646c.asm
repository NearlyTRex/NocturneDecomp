; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c646c(void)
;
;
; XREF[3]:
;   crt_unknown.c_FUN_005ca282 at 005ca2c2
;   crt_unknown.c_FUN_005cdaad at 005cdae3
;   crt_unknown.c_ldexp_FUN_005cd881 at 005ce0cc
;
; Called Functions:
;   crt_errno.c_setErrno_FUN_005c6450
;
; *****************************************************************************

section .text

    PUSH 0xe                            ; 005c646c
        ;   Label: crt_unknown.c_FUN_005c646c
    CALL crt_errno.c_setErrno_FUN_005c6450 ; 005c646e
        ;   XREF to: 005c6450 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005c6450(int error_code)
    ADD ESP,0x4                         ; 005c6473
    RET                                 ; 005c6476

