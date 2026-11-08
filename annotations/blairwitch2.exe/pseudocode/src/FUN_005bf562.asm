; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005bf562(void)
;
;
; Called Functions:
;   FUN_005bf3dc
;
; *****************************************************************************

section .text

    ADD ESP,0x2c                        ; 005bf562
        ;   Label: FUN_005bf562
    INT 0x6                             ; 005bf565
    FXCH                                ; 005bf567
        ;   Label: LAB_005bf567
    FSTP extended double ptr [ESP + 0xc] ; 005bf569
    FLD ST0                             ; 005bf56d
    FSTP extended double ptr [ESP]      ; 005bf56f
    FSTP extended double ptr [ESP + 0x20] ; 005bf572
    CALL FUN_005bf3dc                   ; 005bf576
        ;   XREF to: 005bf3dc (UNCONDITIONAL_CALL)  ; undefined FUN_005bf3dc()
    FLD extended double ptr [ESP + 0x20] ; 005bf57b
    ADD ESP,0x2c                        ; 005bf57f
    RET                                 ; 005bf582

