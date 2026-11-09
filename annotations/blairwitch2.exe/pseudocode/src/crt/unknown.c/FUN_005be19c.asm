; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005be19c(void)
;
;
; XREF[3]:
;   crt_unknown.c_FUN_005c1f32 at 005c1f72
;   unkafter_2d.cpp_FUN_005c5581 at 005c5dcc
;   unkafter_2d.cpp_FUN_005c57ad at 005c57e3
;
; Called Functions:
;   crt_errno.c_setErrno_FUN_005be180
;
; *****************************************************************************

section .text

    PUSH 0xe                            ; 005be19c
        ;   Label: crt_unknown.c_FUN_005be19c
    CALL crt_errno.c_setErrno_FUN_005be180 ; 005be19e
        ;   XREF to: 005be180 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005be180(int error_code)
    ADD ESP,0x4                         ; 005be1a3
    RET                                 ; 005be1a6

