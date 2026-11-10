; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005ada4c(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005adc24 at 005adcdf
;
; Called Functions:
;   crt_unknown.c_FUN_005ad8d0
;
; *****************************************************************************

section .text

    PUSH 0x2d261a0                      ; 005ada4c
        ;   Label: crt_unknown.c_FUN_005ada4c
    CALL crt_unknown.c_FUN_005ad8d0     ; 005ada51
        ;   XREF to: 005ad8d0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ad8d0()
    ADD ESP,0x4                         ; 005ada56
    RET                                 ; 005ada59

