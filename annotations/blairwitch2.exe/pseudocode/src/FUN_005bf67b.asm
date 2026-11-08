; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005bf67b(void)
;
;
; Called Functions:
;   FUN_005bf3dc
;
; *****************************************************************************

section .text

    ADD ESP,0x2c                        ; 005bf67b
        ;   Label: FUN_005bf67b
    INT 0x6                             ; 005bf67e
    FSTP extended double ptr [ESP]      ; 005bf680
        ;   Label: LAB_005bf680
    FXCH ST2                            ; 005bf683
    FSTP extended double ptr [ESP + 0xc] ; 005bf685
    CALL FUN_005bf3dc                   ; 005bf689
        ;   XREF to: 005bf3dc (UNCONDITIONAL_CALL)  ; undefined FUN_005bf3dc()
    FXCH ST2                            ; 005bf68e
    FLD extended double ptr [ESP + 0xc] ; 005bf690
    FXCH ST3                            ; 005bf694
    ADD ESP,0x2c                        ; 005bf696
    RET                                 ; 005bf699

