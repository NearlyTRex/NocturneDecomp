; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005aa86e(void)
;
;
; Called Functions:
;   FUN_005aa50c
;
; *****************************************************************************

section .text

    ADD ESP,0x2c                        ; 005aa86e
        ;   Label: FUN_005aa86e
    INT 0x6                             ; 005aa871
    FXCH ST4                            ; 005aa873
        ;   Label: LAB_005aa873
    FSTP extended double ptr [ESP + 0xc] ; 005aa875
    FXCH ST3                            ; 005aa879
    FLD ST0                             ; 005aa87b
    FSTP extended double ptr [ESP]      ; 005aa87d
    FSTP extended double ptr [ESP + 0x20] ; 005aa880
    CALL FUN_005aa50c                   ; 005aa884
        ;   XREF to: 005aa50c (UNCONDITIONAL_CALL)  ; undefined FUN_005aa50c()
    FXCH ST3                            ; 005aa889
    FLD extended double ptr [ESP + 0x20] ; 005aa88b
    ADD ESP,0x2c                        ; 005aa88f
    RET                                 ; 005aa892

