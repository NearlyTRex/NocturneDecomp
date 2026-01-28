; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl crt_math_c_set_domain_error_errno_FUN_006027a0(void)
;
;
; XREF[1]:
;   crt_math.c_report_math_error_FUN_0060e2e5 at 0060e314
;
; Called Functions:
;   crt_errno.c_setErrno_FUN_00602790
;
; *****************************************************************************

section .text

    PUSH 0xd                            ; 006027a0
        ;   Label: crt_math.c_set_domain_error_errno_FUN_006027a0
    CALL crt_errno.c_setErrno_FUN_00602790 ; 006027a2
        ;   XREF to: 00602790 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_00602790(int error_code)
    ADD ESP,0x4                         ; 006027a7
    RET                                 ; 006027aa

