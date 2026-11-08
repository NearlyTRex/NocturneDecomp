; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c793b(void)
;
;
; Called Functions:
;   FUN_005c769c
;
; *****************************************************************************

section .text

    ADD ESP,0x2c                        ; 005c793b
        ;   Label: FUN_005c793b
    INT 0x6                             ; 005c793e
    FSTP extended double ptr [ESP]      ; 005c7940
        ;   Label: LAB_005c7940
    FXCH ST2                            ; 005c7943
    FSTP extended double ptr [ESP + 0xc] ; 005c7945
    CALL FUN_005c769c                   ; 005c7949
        ;   XREF to: 005c769c (UNCONDITIONAL_CALL)  ; undefined FUN_005c769c()
    FXCH ST2                            ; 005c794e
    FLD extended double ptr [ESP + 0xc] ; 005c7950
    FXCH ST3                            ; 005c7954
    ADD ESP,0x2c                        ; 005c7956
    RET                                 ; 005c7959

