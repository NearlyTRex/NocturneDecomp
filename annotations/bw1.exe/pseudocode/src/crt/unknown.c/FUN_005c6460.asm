; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c6460(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005cdaad at 005cdadc
;
; Called Functions:
;   crt_errno.c_setErrno_FUN_005c6450
;
; *****************************************************************************

section .text

    PUSH 0xd                            ; 005c6460
        ;   Label: crt_unknown.c_FUN_005c6460
    CALL crt_errno.c_setErrno_FUN_005c6450 ; 005c6462
        ;   XREF to: 005c6450 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005c6450(int error_code)
    ADD ESP,0x4                         ; 005c6467
    RET                                 ; 005c646a

