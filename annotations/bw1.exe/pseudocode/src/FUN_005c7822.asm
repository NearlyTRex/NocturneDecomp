; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c7822(void)
;
;
; Called Functions:
;   FUN_005c769c
;
; *****************************************************************************

section .text

    ADD ESP,0x2c                        ; 005c7822
        ;   Label: FUN_005c7822
    INT 0x6                             ; 005c7825
    FXCH                                ; 005c7827
        ;   Label: LAB_005c7827
    FSTP extended double ptr [ESP + 0xc] ; 005c7829
    FLD ST0                             ; 005c782d
    FSTP extended double ptr [ESP]      ; 005c782f
    FSTP extended double ptr [ESP + 0x20] ; 005c7832
    CALL FUN_005c769c                   ; 005c7836
        ;   XREF to: 005c769c (UNCONDITIONAL_CALL)  ; undefined FUN_005c769c()
    FLD extended double ptr [ESP + 0x20] ; 005c783b
    ADD ESP,0x2c                        ; 005c783f
    RET                                 ; 005c7842

