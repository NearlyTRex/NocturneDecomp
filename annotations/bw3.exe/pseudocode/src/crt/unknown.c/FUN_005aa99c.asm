; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005aa99c(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005aa50c
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP]      ; 005aa99c
        ;   Label: crt_unknown.c_FUN_005aa99c
    FXCH ST5                            ; 005aa99f
    FSTP extended double ptr [ESP + 0xc] ; 005aa9a1
    CALL crt_unknown.c_FUN_005aa50c     ; 005aa9a5
        ;   XREF to: 005aa50c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aa50c()
    FXCH ST5                            ; 005aa9aa
    FLD extended double ptr [ESP + 0xc] ; 005aa9ac
    FXCH ST6                            ; 005aa9b0
    ADD ESP,0x2c                        ; 005aa9b2
    RET                                 ; 005aa9b5

