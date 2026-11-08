; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005aa692(void)
;
;
; Called Functions:
;   FUN_005aa50c
;
; *****************************************************************************

section .text

    ADD ESP,0x2c                        ; 005aa692
        ;   Label: FUN_005aa692
    INT 0x6                             ; 005aa695
    FXCH                                ; 005aa697
        ;   Label: LAB_005aa697
    FSTP extended double ptr [ESP + 0xc] ; 005aa699
    FLD ST0                             ; 005aa69d
    FSTP extended double ptr [ESP]      ; 005aa69f
    FSTP extended double ptr [ESP + 0x20] ; 005aa6a2
    CALL FUN_005aa50c                   ; 005aa6a6
        ;   XREF to: 005aa50c (UNCONDITIONAL_CALL)  ; undefined FUN_005aa50c()
    FLD extended double ptr [ESP + 0x20] ; 005aa6ab
    ADD ESP,0x2c                        ; 005aa6af
    RET                                 ; 005aa6b2

