; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005bf593(void)
;
;
; Called Functions:
;   FUN_005bf3dc
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 005bf593
        ;   Label: FUN_005bf593
    FSTP extended double ptr [ESP]      ; 005bf597
    CALL FUN_005bf3dc                   ; 005bf59a
        ;   XREF to: 005bf3dc (UNCONDITIONAL_CALL)  ; undefined FUN_005bf3dc()
    FLD extended double ptr [ESP + 0xc] ; 005bf59f
    ADD ESP,0x2c                        ; 005bf5a3
    RET                                 ; 005bf5a6

