; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void crt_math.c_set_range_error_errno_FUN_006027ac(void)
;
;
; XREF[4]:
;   crt_math.c_ldexp_FUN_00600002 at 0060006a
;   crt_math.c_report_math_error_FUN_0060e2e5 at 0060e31b
;   crt_string.c_strtod_main_FUN_00605d5d at 00605e33
;   crt_unknown.c_FUN_0060eb57 at 0060eb58
;
; Called Functions:
;   crt_errno.c_setErrno_FUN_00602790
;
; *****************************************************************************

section .text

    PUSH 0xe                            ; 006027ac
        ;   Label: crt_math.c_set_range_error_errno_FUN_006027ac
    CALL crt_errno.c_setErrno_FUN_00602790 ; 006027ae
        ;   XREF to: 00602790 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_00602790(int error_code)
    ADD ESP,0x4                         ; 006027b3
    RET                                 ; 006027b6

