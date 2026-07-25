; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056c1d7(void)
;
;
; Called Functions:
;   FUN_0056be50
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP]      ; 0056c1d7
        ;   Label: FUN_0056c1d7
    FXCH ST3                            ; 0056c1da
    FSTP extended double ptr [ESP + 0xc] ; 0056c1dc
    CALL FUN_0056be50                   ; 0056c1e0
        ;   XREF to: 0056be50 (UNCONDITIONAL_CALL)  ; undefined FUN_0056be50()
    FXCH ST3                            ; 0056c1e5
    ADD ESP,0x2c                        ; 0056c1e7
    RET                                 ; 0056c1ea

