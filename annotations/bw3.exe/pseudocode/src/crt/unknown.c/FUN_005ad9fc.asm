; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005ad9fc(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005adc24 at 005adc92
;
; Called Functions:
;   crt_unknown.c_FUN_005ad934
;
; *****************************************************************************

section .text

    PUSH 0x2d25b70                      ; 005ad9fc
        ;   Label: crt_unknown.c_FUN_005ad9fc
    CALL crt_unknown.c_FUN_005ad934     ; 005ada01
        ;   XREF to: 005ad934 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ad934()
    ADD ESP,0x4                         ; 005ada06
    RET                                 ; 005ada09

