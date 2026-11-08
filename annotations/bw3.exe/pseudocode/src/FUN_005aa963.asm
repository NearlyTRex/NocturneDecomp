; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005aa963(void)
;
;
; Called Functions:
;   FUN_005aa50c
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 005aa963
        ;   Label: FUN_005aa963
    FXCH ST4                            ; 005aa967
    FSTP extended double ptr [ESP]      ; 005aa969
    CALL FUN_005aa50c                   ; 005aa96c
        ;   XREF to: 005aa50c (UNCONDITIONAL_CALL)  ; undefined FUN_005aa50c()
    FXCH ST4                            ; 005aa971
    ADD ESP,0x2c                        ; 005aa973
    RET                                 ; 005aa976

