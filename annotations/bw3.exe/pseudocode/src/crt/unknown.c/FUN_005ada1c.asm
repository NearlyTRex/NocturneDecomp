; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005ada1c(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005adc24 at 005adcc0
;
; Called Functions:
;   crt_unknown.c_FUN_005ad934
;
; *****************************************************************************

section .text

    PUSH 0x2d25a60                      ; 005ada1c
        ;   Label: crt_unknown.c_FUN_005ada1c
    CALL crt_unknown.c_FUN_005ad934     ; 005ada21
        ;   XREF to: 005ad934 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ad934()
    ADD ESP,0x4                         ; 005ada26
    RET                                 ; 005ada29

