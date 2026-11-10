; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005ada0c(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005adc24 at 005adc8d
;
; Called Functions:
;   crt_unknown.c_FUN_005ad8d0
;
; *****************************************************************************

section .text

    PUSH 0x2d25a60                      ; 005ada0c
        ;   Label: crt_unknown.c_FUN_005ada0c
    CALL crt_unknown.c_FUN_005ad8d0     ; 005ada11
        ;   XREF to: 005ad8d0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ad8d0()
    ADD ESP,0x4                         ; 005ada16
    RET                                 ; 005ada19

