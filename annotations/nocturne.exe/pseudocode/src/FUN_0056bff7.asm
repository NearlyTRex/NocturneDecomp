; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056bff7(void)
;
;
; Called Functions:
;   FUN_0056be50
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP]      ; 0056bff7
        ;   Label: FUN_0056bff7
    FSTP extended double ptr [ESP + 0xc] ; 0056bffa
    CALL FUN_0056be50                   ; 0056bffe
        ;   XREF to: 0056be50 (UNCONDITIONAL_CALL)  ; undefined FUN_0056be50()
    ADD ESP,0x2c                        ; 0056c003
    RET                                 ; 0056c006

