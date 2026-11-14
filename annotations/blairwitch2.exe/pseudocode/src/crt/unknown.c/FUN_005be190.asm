; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005be190(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c57ad at 005c57dc
;
; Called Functions:
;   crt_errno.c_setErrno_FUN_005be180
;
; *****************************************************************************

section .text

    PUSH 0xd                            ; 005be190
        ;   Label: crt_unknown.c_FUN_005be190
    CALL crt_errno.c_setErrno_FUN_005be180 ; 005be192
        ;   XREF to: 005be180 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005be180(int error_code)
    ADD ESP,0x4                         ; 005be197
    RET                                 ; 005be19a

