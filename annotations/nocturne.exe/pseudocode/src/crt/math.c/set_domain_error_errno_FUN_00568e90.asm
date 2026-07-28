; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_math_c_set_domain_error_errno_FUN_00568e90(void)
;
;
; XREF[1]:
;   crt_math.c_report_math_error_FUN_00572a35 at 00572a64
;
; Called Functions:
;   crt_errno.c_setErrno_FUN_00568e80
;
; *****************************************************************************

section .text

    PUSH 0xd                            ; 00568e90
        ;   Label: crt_math.c_set_domain_error_errno_FUN_00568e90
    CALL crt_errno.c_setErrno_FUN_00568e80 ; 00568e92
        ;   XREF to: 00568e80 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_00568e80(int error_code)
    ADD ESP,0x4                         ; 00568e97
    RET                                 ; 00568e9a

