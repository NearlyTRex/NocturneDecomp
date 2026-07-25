; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056c2a7(void)
;
;
; Called Functions:
;   FUN_0056be50
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 0056c2a7
        ;   Label: FUN_0056c2a7
    FXCH ST4                            ; 0056c2ab
    FSTP extended double ptr [ESP]      ; 0056c2ad
    CALL FUN_0056be50                   ; 0056c2b0
        ;   XREF to: 0056be50 (UNCONDITIONAL_CALL)  ; undefined FUN_0056be50()
    FXCH ST4                            ; 0056c2b5
    ADD ESP,0x2c                        ; 0056c2b7
    RET                                 ; 0056c2ba

