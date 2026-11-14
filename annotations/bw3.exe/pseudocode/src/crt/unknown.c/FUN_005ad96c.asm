; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005ad96c(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005adc24 at 005adc41
;
; Called Functions:
;   crt_unknown.c_FUN_005ad934
;
; *****************************************************************************

section .text

    PUSH 0x2d25a50                      ; 005ad96c
        ;   Label: crt_unknown.c_FUN_005ad96c
    CALL crt_unknown.c_FUN_005ad934     ; 005ad971
        ;   XREF to: 005ad934 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ad934()
    ADD ESP,0x4                         ; 005ad976
    RET                                 ; 005ad979

