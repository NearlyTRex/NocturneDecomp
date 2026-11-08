; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005aa9b6(void)
;
;
; Called Functions:
;   FUN_005aa50c
;
; *****************************************************************************

section .text

    ADD ESP,0x2c                        ; 005aa9b6
        ;   Label: FUN_005aa9b6
    INT 0x6                             ; 005aa9b9
    FXCH ST6                            ; 005aa9bb
        ;   Label: LAB_005aa9bb
    FSTP extended double ptr [ESP + 0xc] ; 005aa9bd
    FXCH ST5                            ; 005aa9c1
    FLD ST0                             ; 005aa9c3
    FSTP extended double ptr [ESP]      ; 005aa9c5
    FSTP extended double ptr [ESP + 0x20] ; 005aa9c8
    CALL FUN_005aa50c                   ; 005aa9cc
        ;   XREF to: 005aa50c (UNCONDITIONAL_CALL)  ; undefined FUN_005aa50c()
    FXCH ST5                            ; 005aa9d1
    FLD extended double ptr [ESP + 0x20] ; 005aa9d3
    ADD ESP,0x2c                        ; 005aa9d7
    RET                                 ; 005aa9da

