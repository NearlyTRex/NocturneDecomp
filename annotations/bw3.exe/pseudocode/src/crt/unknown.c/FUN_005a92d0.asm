; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005a92d0(void)
;
;
; XREF[1]:
;   unkafter_2d.cpp_FUN_005b083d at 005b086c
;
; Called Functions:
;   crt_errno.c_setErrno_FUN_005a92c0
;
; *****************************************************************************

section .text

    PUSH 0xd                            ; 005a92d0
        ;   Label: crt_unknown.c_FUN_005a92d0
    CALL crt_errno.c_setErrno_FUN_005a92c0 ; 005a92d2
        ;   XREF to: 005a92c0 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005a92c0(int error_code)
    ADD ESP,0x4                         ; 005a92d7
    RET                                 ; 005a92da

