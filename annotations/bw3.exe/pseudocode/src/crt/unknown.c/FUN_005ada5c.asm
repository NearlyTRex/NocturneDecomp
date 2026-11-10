; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005ada5c(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005adc24 at 005adcca
;
; Called Functions:
;   crt_unknown.c_FUN_005ad934
;
; *****************************************************************************

section .text

    PUSH 0x2d261a0                      ; 005ada5c
        ;   Label: crt_unknown.c_FUN_005ada5c
    CALL crt_unknown.c_FUN_005ad934     ; 005ada61
        ;   XREF to: 005ad934 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ad934()
    ADD ESP,0x4                         ; 005ada66
    RET                                 ; 005ada69

