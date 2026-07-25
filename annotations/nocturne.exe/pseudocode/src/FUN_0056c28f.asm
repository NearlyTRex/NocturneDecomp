; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056c28f(void)
;
;
; Called Functions:
;   FUN_0056be50
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 0056c28f
        ;   Label: FUN_0056c28f
    FXCH ST4                            ; 0056c293
    FSTP extended double ptr [ESP]      ; 0056c295
    CALL FUN_0056be50                   ; 0056c298
        ;   XREF to: 0056be50 (UNCONDITIONAL_CALL)  ; undefined FUN_0056be50()
    FXCH ST4                            ; 0056c29d
    FLD extended double ptr [ESP + 0xc] ; 0056c29f
    ADD ESP,0x2c                        ; 0056c2a3
    RET                                 ; 0056c2a6

