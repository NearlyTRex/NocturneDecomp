; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005ada3c(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005adc24 at 005adc74
;
; Called Functions:
;   crt_unknown.c_FUN_005ad934
;
; *****************************************************************************

section .text

    PUSH 0x2d26190                      ; 005ada3c
        ;   Label: crt_unknown.c_FUN_005ada3c
    CALL crt_unknown.c_FUN_005ad934     ; 005ada41
        ;   XREF to: 005ad934 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ad934()
    ADD ESP,0x4                         ; 005ada46
    RET                                 ; 005ada49

