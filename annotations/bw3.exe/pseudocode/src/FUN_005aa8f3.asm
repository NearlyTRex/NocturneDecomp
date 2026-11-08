; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005aa8f3(void)
;
;
; Called Functions:
;   FUN_005aa50c
;
; *****************************************************************************

section .text

    ADD ESP,0x2c                        ; 005aa8f3
        ;   Label: FUN_005aa8f3
    INT 0x6                             ; 005aa8f6
    FSTP extended double ptr [ESP]      ; 005aa8f8
        ;   Label: LAB_005aa8f8
    FXCH ST4                            ; 005aa8fb
    FSTP extended double ptr [ESP + 0xc] ; 005aa8fd
    CALL FUN_005aa50c                   ; 005aa901
        ;   XREF to: 005aa50c (UNCONDITIONAL_CALL)  ; undefined FUN_005aa50c()
    FXCH ST4                            ; 005aa906
    FLD extended double ptr [ESP + 0xc] ; 005aa908
    FXCH ST5                            ; 005aa90c
    ADD ESP,0x2c                        ; 005aa90e
    RET                                 ; 005aa911

