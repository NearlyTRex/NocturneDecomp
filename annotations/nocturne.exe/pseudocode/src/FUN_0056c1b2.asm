; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056c1b2(void)
;
;
; Called Functions:
;   FUN_0056be50
;
; *****************************************************************************

section .text

    ADD ESP,0x2c                        ; 0056c1b2
        ;   Label: FUN_0056c1b2
    INT 0x6                             ; 0056c1b5
    FXCH ST4                            ; 0056c1b7
        ;   Label: LAB_0056c1b7
    FSTP extended double ptr [ESP + 0xc] ; 0056c1b9
    FXCH ST3                            ; 0056c1bd
    FLD ST0                             ; 0056c1bf
    FSTP extended double ptr [ESP]      ; 0056c1c1
    FSTP extended double ptr [ESP + 0x20] ; 0056c1c4
    CALL FUN_0056be50                   ; 0056c1c8
        ;   XREF to: 0056be50 (UNCONDITIONAL_CALL)  ; undefined FUN_0056be50()
    FXCH ST3                            ; 0056c1cd
    FLD extended double ptr [ESP + 0x20] ; 0056c1cf
    ADD ESP,0x2c                        ; 0056c1d3
    RET                                 ; 0056c1d6

