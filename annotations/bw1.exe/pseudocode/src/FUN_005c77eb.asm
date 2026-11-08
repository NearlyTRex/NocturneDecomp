; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c77eb(void)
;
;
; Called Functions:
;   FUN_005c769c
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 005c77eb
        ;   Label: FUN_005c77eb
    FLD ST0                             ; 005c77ef
    FSTP extended double ptr [ESP]      ; 005c77f1
    FSTP extended double ptr [ESP + 0x20] ; 005c77f4
    CALL FUN_005c769c                   ; 005c77f8
        ;   XREF to: 005c769c (UNCONDITIONAL_CALL)  ; undefined FUN_005c769c()
    FLD extended double ptr [ESP + 0x20] ; 005c77fd
    FXCH                                ; 005c7801
    ADD ESP,0x2c                        ; 005c7803
    RET                                 ; 005c7806

