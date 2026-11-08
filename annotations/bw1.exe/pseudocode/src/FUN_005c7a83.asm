; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c7a83(void)
;
;
; Called Functions:
;   FUN_005c769c
;
; *****************************************************************************

section .text

    ADD ESP,0x2c                        ; 005c7a83
        ;   Label: FUN_005c7a83
    INT 0x6                             ; 005c7a86
    FSTP extended double ptr [ESP]      ; 005c7a88
        ;   Label: LAB_005c7a88
    FXCH ST4                            ; 005c7a8b
    FSTP extended double ptr [ESP + 0xc] ; 005c7a8d
    CALL FUN_005c769c                   ; 005c7a91
        ;   XREF to: 005c769c (UNCONDITIONAL_CALL)  ; undefined FUN_005c769c()
    FXCH ST4                            ; 005c7a96
    FLD extended double ptr [ESP + 0xc] ; 005c7a98
    FXCH ST5                            ; 005c7a9c
    ADD ESP,0x2c                        ; 005c7a9e
    RET                                 ; 005c7aa1

