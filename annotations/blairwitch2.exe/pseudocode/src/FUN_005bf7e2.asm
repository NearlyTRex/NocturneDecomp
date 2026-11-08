; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005bf7e2(void)
;
;
; Called Functions:
;   FUN_005bf3dc
;
; *****************************************************************************

section .text

    ADD ESP,0x2c                        ; 005bf7e2
        ;   Label: FUN_005bf7e2
    INT 0x6                             ; 005bf7e5
    FXCH ST5                            ; 005bf7e7
        ;   Label: LAB_005bf7e7
    FSTP extended double ptr [ESP + 0xc] ; 005bf7e9
    FXCH ST4                            ; 005bf7ed
    FLD ST0                             ; 005bf7ef
    FSTP extended double ptr [ESP]      ; 005bf7f1
    FSTP extended double ptr [ESP + 0x20] ; 005bf7f4
    CALL FUN_005bf3dc                   ; 005bf7f8
        ;   XREF to: 005bf3dc (UNCONDITIONAL_CALL)  ; undefined FUN_005bf3dc()
    FXCH ST4                            ; 005bf7fd
    FLD extended double ptr [ESP + 0x20] ; 005bf7ff
    ADD ESP,0x2c                        ; 005bf803
    RET                                 ; 005bf806

