; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005bf886(void)
;
;
; Called Functions:
;   FUN_005bf3dc
;
; *****************************************************************************

section .text

    ADD ESP,0x2c                        ; 005bf886
        ;   Label: FUN_005bf886
    INT 0x6                             ; 005bf889
    FXCH ST6                            ; 005bf88b
        ;   Label: LAB_005bf88b
    FSTP extended double ptr [ESP + 0xc] ; 005bf88d
    FXCH ST5                            ; 005bf891
    FLD ST0                             ; 005bf893
    FSTP extended double ptr [ESP]      ; 005bf895
    FSTP extended double ptr [ESP + 0x20] ; 005bf898
    CALL FUN_005bf3dc                   ; 005bf89c
        ;   XREF to: 005bf3dc (UNCONDITIONAL_CALL)  ; undefined FUN_005bf3dc()
    FXCH ST5                            ; 005bf8a1
    FLD extended double ptr [ESP + 0x20] ; 005bf8a3
    ADD ESP,0x2c                        ; 005bf8a7
    RET                                 ; 005bf8aa

