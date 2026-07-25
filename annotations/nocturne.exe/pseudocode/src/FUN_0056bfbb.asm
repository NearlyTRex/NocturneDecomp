; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056bfbb(void)
;
;
; Called Functions:
;   FUN_0056be50
;
; *****************************************************************************

section .text

    ADD ESP,0x2c                        ; 0056bfbb
        ;   Label: FUN_0056bfbb
    INT 0x6                             ; 0056bfbe
    FSTP extended double ptr [ESP]      ; 0056bfc0
        ;   Label: LAB_0056bfc0
    FSTP extended double ptr [ESP + 0xc] ; 0056bfc3
    CALL FUN_0056be50                   ; 0056bfc7
        ;   XREF to: 0056be50 (UNCONDITIONAL_CALL)  ; undefined FUN_0056be50()
    FLD extended double ptr [ESP + 0xc] ; 0056bfcc
    FXCH                                ; 0056bfd0
    ADD ESP,0x2c                        ; 0056bfd2
    RET                                 ; 0056bfd5

