; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c7ac7(void)
;
;
; Called Functions:
;   FUN_005c769c
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP]      ; 005c7ac7
        ;   Label: FUN_005c7ac7
    FXCH ST4                            ; 005c7aca
    FSTP extended double ptr [ESP + 0xc] ; 005c7acc
    CALL FUN_005c769c                   ; 005c7ad0
        ;   XREF to: 005c769c (UNCONDITIONAL_CALL)  ; undefined FUN_005c769c()
    FXCH ST4                            ; 005c7ad5
    ADD ESP,0x2c                        ; 005c7ad7
    RET                                 ; 005c7ada

