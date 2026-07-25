; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056c3c3(void)
;
;
; Called Functions:
;   FUN_0056be50
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP]      ; 0056c3c3
        ;   Label: FUN_0056c3c3
    FXCH ST6                            ; 0056c3c6
    FSTP extended double ptr [ESP + 0xc] ; 0056c3c8
    CALL FUN_0056be50                   ; 0056c3cc
        ;   XREF to: 0056be50 (UNCONDITIONAL_CALL)  ; undefined FUN_0056be50()
    FXCH ST6                            ; 0056c3d1
    ADD ESP,0x2c                        ; 0056c3d3
    RET                                 ; 0056c3d6

