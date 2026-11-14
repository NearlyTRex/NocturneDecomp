; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005ada2c(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005adc24 at 005adc46
;
; Called Functions:
;   crt_unknown.c_FUN_005ad8d0
;
; *****************************************************************************

section .text

    PUSH 0x2d26190                      ; 005ada2c
        ;   Label: crt_unknown.c_FUN_005ada2c
    CALL crt_unknown.c_FUN_005ad8d0     ; 005ada31
        ;   XREF to: 005ad8d0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ad8d0()
    ADD ESP,0x4                         ; 005ada36
    RET                                 ; 005ada39

