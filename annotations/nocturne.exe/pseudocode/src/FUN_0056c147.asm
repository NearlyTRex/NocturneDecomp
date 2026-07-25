; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056c147(void)
;
;
; Called Functions:
;   FUN_0056be50
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 0056c147
        ;   Label: FUN_0056c147
    FXCH ST2                            ; 0056c14b
    FSTP extended double ptr [ESP]      ; 0056c14d
    CALL FUN_0056be50                   ; 0056c150
        ;   XREF to: 0056be50 (UNCONDITIONAL_CALL)  ; undefined FUN_0056be50()
    FXCH ST2                            ; 0056c155
    FLD extended double ptr [ESP + 0xc] ; 0056c157
    ADD ESP,0x2c                        ; 0056c15b
    RET                                 ; 0056c15e

