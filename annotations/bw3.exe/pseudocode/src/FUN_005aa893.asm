; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005aa893(void)
;
;
; Called Functions:
;   FUN_005aa50c
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP]      ; 005aa893
        ;   Label: FUN_005aa893
    FXCH ST3                            ; 005aa896
    FSTP extended double ptr [ESP + 0xc] ; 005aa898
    CALL FUN_005aa50c                   ; 005aa89c
        ;   XREF to: 005aa50c (UNCONDITIONAL_CALL)  ; undefined FUN_005aa50c()
    FXCH ST3                            ; 005aa8a1
    ADD ESP,0x2c                        ; 005aa8a3
    RET                                 ; 005aa8a6

