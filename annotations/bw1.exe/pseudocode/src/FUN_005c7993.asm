; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c7993(void)
;
;
; Called Functions:
;   FUN_005c769c
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 005c7993
        ;   Label: FUN_005c7993
    FXCH ST2                            ; 005c7997
    FSTP extended double ptr [ESP]      ; 005c7999
    CALL FUN_005c769c                   ; 005c799c
        ;   XREF to: 005c769c (UNCONDITIONAL_CALL)  ; undefined FUN_005c769c()
    FXCH ST2                            ; 005c79a1
    FLD extended double ptr [ESP + 0xc] ; 005c79a3
    ADD ESP,0x2c                        ; 005c79a7
    RET                                 ; 005c79aa

