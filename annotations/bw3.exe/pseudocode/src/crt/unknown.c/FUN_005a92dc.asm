; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005a92dc(void)
;
;
; XREF[3]:
;   crt_unknown.c_FUN_005ad0f2 at 005ad132
;   unkafter_2d.cpp_FUN_005b0611 at 005b0e5c
;   unkafter_2d.cpp_FUN_005b083d at 005b0873
;
; Called Functions:
;   crt_errno.c_setErrno_FUN_005a92c0
;
; *****************************************************************************

section .text

    PUSH 0xe                            ; 005a92dc
        ;   Label: crt_unknown.c_FUN_005a92dc
    CALL crt_errno.c_setErrno_FUN_005a92c0 ; 005a92de
        ;   XREF to: 005a92c0 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005a92c0(int error_code)
    ADD ESP,0x4                         ; 005a92e3
    RET                                 ; 005a92e6

