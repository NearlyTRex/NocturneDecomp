; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c7b7f(void)
;
;
; Called Functions:
;   FUN_005c769c
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 005c7b7f
        ;   Label: FUN_005c7b7f
    FXCH ST5                            ; 005c7b83
    FSTP extended double ptr [ESP]      ; 005c7b85
    CALL FUN_005c769c                   ; 005c7b88
        ;   XREF to: 005c769c (UNCONDITIONAL_CALL)  ; undefined FUN_005c769c()
    FXCH ST5                            ; 005c7b8d
    FLD extended double ptr [ESP + 0xc] ; 005c7b8f
    ADD ESP,0x2c                        ; 005c7b93
    RET                                 ; 005c7b96

