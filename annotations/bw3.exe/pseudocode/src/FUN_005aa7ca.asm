; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005aa7ca(void)
;
;
; Called Functions:
;   FUN_005aa50c
;
; *****************************************************************************

section .text

    ADD ESP,0x2c                        ; 005aa7ca
        ;   Label: FUN_005aa7ca
    INT 0x6                             ; 005aa7cd
    FXCH ST3                            ; 005aa7cf
        ;   Label: LAB_005aa7cf
    FSTP extended double ptr [ESP + 0xc] ; 005aa7d1
    FXCH ST2                            ; 005aa7d5
    FLD ST0                             ; 005aa7d7
    FSTP extended double ptr [ESP]      ; 005aa7d9
    FSTP extended double ptr [ESP + 0x20] ; 005aa7dc
    CALL FUN_005aa50c                   ; 005aa7e0
        ;   XREF to: 005aa50c (UNCONDITIONAL_CALL)  ; undefined FUN_005aa50c()
    FXCH ST2                            ; 005aa7e5
    FLD extended double ptr [ESP + 0x20] ; 005aa7e7
    ADD ESP,0x2c                        ; 005aa7eb
    RET                                 ; 005aa7ee

