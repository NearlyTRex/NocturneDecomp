; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056c0ef(void)
;
;
; Called Functions:
;   FUN_0056be50
;
; *****************************************************************************

section .text

    ADD ESP,0x2c                        ; 0056c0ef
        ;   Label: FUN_0056c0ef
    INT 0x6                             ; 0056c0f2
    FSTP extended double ptr [ESP]      ; 0056c0f4
        ;   Label: LAB_0056c0f4
    FXCH ST2                            ; 0056c0f7
    FSTP extended double ptr [ESP + 0xc] ; 0056c0f9
    CALL FUN_0056be50                   ; 0056c0fd
        ;   XREF to: 0056be50 (UNCONDITIONAL_CALL)  ; undefined FUN_0056be50()
    FXCH ST2                            ; 0056c102
    FLD extended double ptr [ESP + 0xc] ; 0056c104
    FXCH ST3                            ; 0056c108
    ADD ESP,0x2c                        ; 0056c10a
    RET                                 ; 0056c10d

