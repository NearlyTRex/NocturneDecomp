; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005aa8a7(void)
;
;
; Called Functions:
;   FUN_005aa50c
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 005aa8a7
        ;   Label: FUN_005aa8a7
    FXCH ST3                            ; 005aa8ab
    FSTP extended double ptr [ESP]      ; 005aa8ad
    CALL FUN_005aa50c                   ; 005aa8b0
        ;   XREF to: 005aa50c (UNCONDITIONAL_CALL)  ; undefined FUN_005aa50c()
    FXCH ST3                            ; 005aa8b5
    FLD extended double ptr [ESP + 0xc] ; 005aa8b7
    ADD ESP,0x2c                        ; 005aa8bb
    RET                                 ; 005aa8be

