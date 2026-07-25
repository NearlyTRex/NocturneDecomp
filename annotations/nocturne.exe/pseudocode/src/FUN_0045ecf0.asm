; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0045ecf0(void)
;
;
; Referenced Globals:
;   undefined4 SUB_0045ed00
;
; *****************************************************************************

section .text

    PUSH 0x1b4d738                      ; 0045ecf0
        ;   Label: FUN_0045ecf0
    CALL 0x0045ed00                     ; 0045ecf5
        ;   XREF to: 0045ed00 (UNCONDITIONAL_CALL)  ; SUB_0045ed00
    ADD ESP,0x4                         ; 0045ecfa
    RET                                 ; 0045ecfd

