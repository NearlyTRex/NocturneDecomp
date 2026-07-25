; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056c217(void)
;
;
; Called Functions:
;   FUN_0056be50
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 0056c217
        ;   Label: FUN_0056c217
    FXCH ST4                            ; 0056c21b
    FLD ST0                             ; 0056c21d
    FSTP extended double ptr [ESP]      ; 0056c21f
    FSTP extended double ptr [ESP + 0x20] ; 0056c222
    CALL FUN_0056be50                   ; 0056c226
        ;   XREF to: 0056be50 (UNCONDITIONAL_CALL)  ; undefined FUN_0056be50()
    FXCH ST4                            ; 0056c22b
    FLD extended double ptr [ESP + 0x20] ; 0056c22d
    FXCH ST5                            ; 0056c231
    ADD ESP,0x2c                        ; 0056c233
    RET                                 ; 0056c236

