; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005aa997(void)
;
;
; Called Functions:
;   FUN_005aa50c
;
; *****************************************************************************

section .text

    ADD ESP,0x2c                        ; 005aa997
        ;   Label: FUN_005aa997
    INT 0x6                             ; 005aa99a
    FSTP extended double ptr [ESP]      ; 005aa99c
        ;   Label: LAB_005aa99c
    FXCH ST5                            ; 005aa99f
    FSTP extended double ptr [ESP + 0xc] ; 005aa9a1
    CALL FUN_005aa50c                   ; 005aa9a5
        ;   XREF to: 005aa50c (UNCONDITIONAL_CALL)  ; undefined FUN_005aa50c()
    FXCH ST5                            ; 005aa9aa
    FLD extended double ptr [ESP + 0xc] ; 005aa9ac
    FXCH ST6                            ; 005aa9b0
    ADD ESP,0x2c                        ; 005aa9b2
    RET                                 ; 005aa9b5

