; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c7993(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005c769c
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 005c7993
        ;   Label: crt_unknown.c_FUN_005c7993
    FXCH ST2                            ; 005c7997
    FSTP extended double ptr [ESP]      ; 005c7999
    CALL crt_unknown.c_FUN_005c769c     ; 005c799c
        ;   XREF to: 005c769c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c769c()
    FXCH ST2                            ; 005c79a1
    FLD extended double ptr [ESP + 0xc] ; 005c79a3
    ADD ESP,0x2c                        ; 005c79a7
    RET                                 ; 005c79aa

