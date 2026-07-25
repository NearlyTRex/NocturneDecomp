; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056c2fa(void)
;
;
; Called Functions:
;   FUN_0056be50
;
; *****************************************************************************

section .text

    ADD ESP,0x2c                        ; 0056c2fa
        ;   Label: FUN_0056c2fa
    INT 0x6                             ; 0056c2fd
    FXCH ST6                            ; 0056c2ff
        ;   Label: LAB_0056c2ff
    FSTP extended double ptr [ESP + 0xc] ; 0056c301
    FXCH ST5                            ; 0056c305
    FLD ST0                             ; 0056c307
    FSTP extended double ptr [ESP]      ; 0056c309
    FSTP extended double ptr [ESP + 0x20] ; 0056c30c
    CALL FUN_0056be50                   ; 0056c310
        ;   XREF to: 0056be50 (UNCONDITIONAL_CALL)  ; undefined FUN_0056be50()
    FXCH ST5                            ; 0056c315
    FLD extended double ptr [ESP + 0x20] ; 0056c317
    ADD ESP,0x2c                        ; 0056c31b
    RET                                 ; 0056c31e

