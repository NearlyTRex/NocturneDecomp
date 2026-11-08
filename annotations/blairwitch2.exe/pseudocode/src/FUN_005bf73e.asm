; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005bf73e(void)
;
;
; Called Functions:
;   FUN_005bf3dc
;
; *****************************************************************************

section .text

    ADD ESP,0x2c                        ; 005bf73e
        ;   Label: FUN_005bf73e
    INT 0x6                             ; 005bf741
    FXCH ST4                            ; 005bf743
        ;   Label: LAB_005bf743
    FSTP extended double ptr [ESP + 0xc] ; 005bf745
    FXCH ST3                            ; 005bf749
    FLD ST0                             ; 005bf74b
    FSTP extended double ptr [ESP]      ; 005bf74d
    FSTP extended double ptr [ESP + 0x20] ; 005bf750
    CALL FUN_005bf3dc                   ; 005bf754
        ;   XREF to: 005bf3dc (UNCONDITIONAL_CALL)  ; undefined FUN_005bf3dc()
    FXCH ST3                            ; 005bf759
    FLD extended double ptr [ESP + 0x20] ; 005bf75b
    ADD ESP,0x2c                        ; 005bf75f
    RET                                 ; 005bf762

