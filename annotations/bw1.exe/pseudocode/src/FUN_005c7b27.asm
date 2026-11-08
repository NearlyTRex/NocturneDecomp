; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c7b27(void)
;
;
; Called Functions:
;   FUN_005c769c
;
; *****************************************************************************

section .text

    ADD ESP,0x2c                        ; 005c7b27
        ;   Label: FUN_005c7b27
    INT 0x6                             ; 005c7b2a
    FSTP extended double ptr [ESP]      ; 005c7b2c
        ;   Label: LAB_005c7b2c
    FXCH ST5                            ; 005c7b2f
    FSTP extended double ptr [ESP + 0xc] ; 005c7b31
    CALL FUN_005c769c                   ; 005c7b35
        ;   XREF to: 005c769c (UNCONDITIONAL_CALL)  ; undefined FUN_005c769c()
    FXCH ST5                            ; 005c7b3a
    FLD extended double ptr [ESP + 0xc] ; 005c7b3c
    FXCH ST6                            ; 005c7b40
    ADD ESP,0x2c                        ; 005c7b42
    RET                                 ; 005c7b45

