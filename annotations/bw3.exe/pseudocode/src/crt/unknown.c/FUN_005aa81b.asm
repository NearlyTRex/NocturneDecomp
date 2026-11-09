; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005aa81b(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005aa50c
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 005aa81b
        ;   Label: crt_unknown.c_FUN_005aa81b
    FXCH ST2                            ; 005aa81f
    FSTP extended double ptr [ESP]      ; 005aa821
    CALL crt_unknown.c_FUN_005aa50c     ; 005aa824
        ;   XREF to: 005aa50c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aa50c()
    FXCH ST2                            ; 005aa829
    ADD ESP,0x2c                        ; 005aa82b
    RET                                 ; 005aa82e

