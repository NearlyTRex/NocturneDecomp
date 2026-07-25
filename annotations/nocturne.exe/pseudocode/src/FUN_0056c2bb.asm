; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056c2bb(void)
;
;
; Called Functions:
;   FUN_0056be50
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 0056c2bb
        ;   Label: FUN_0056c2bb
    FXCH ST5                            ; 0056c2bf
    FLD ST0                             ; 0056c2c1
    FSTP extended double ptr [ESP]      ; 0056c2c3
    FSTP extended double ptr [ESP + 0x20] ; 0056c2c6
    CALL FUN_0056be50                   ; 0056c2ca
        ;   XREF to: 0056be50 (UNCONDITIONAL_CALL)  ; undefined FUN_0056be50()
    FXCH ST5                            ; 0056c2cf
    FLD extended double ptr [ESP + 0x20] ; 0056c2d1
    FXCH ST6                            ; 0056c2d5
    ADD ESP,0x2c                        ; 0056c2d7
    RET                                 ; 0056c2da

