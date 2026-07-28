; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_math_c_set_range_error_errno_FUN_00568e9c(void)
;
;
; XREF[2]:
;   crt_math.c_report_math_error_FUN_00572a35 at 00572a6b
;   crt_string.c_strtod_main_FUN_0056f852 at 0056f892
;
; Called Functions:
;   crt_errno.c_setErrno_FUN_00568e80
;
; *****************************************************************************

section .text

    PUSH 0xe                            ; 00568e9c
        ;   Label: crt_math.c_set_range_error_errno_FUN_00568e9c
    CALL crt_errno.c_setErrno_FUN_00568e80 ; 00568e9e
        ;   XREF to: 00568e80 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_00568e80(int error_code)
    ADD ESP,0x4                         ; 00568ea3
    RET                                 ; 00568ea6

