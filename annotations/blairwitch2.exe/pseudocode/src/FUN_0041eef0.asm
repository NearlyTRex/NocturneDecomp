; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0041eef0(void)
;
;
; Called Functions:
;   FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x1c264a8                      ; 0041eef0
        ;   Label: FUN_0041eef0
    PUSH 0x1                            ; 0041eef5
    PUSH 0x6099b4                       ; 0041eef7
    PUSH 0x41ef20                       ; 0041eefc
    PUSH 0x5cc901                       ; 0041ef01
    PUSH 0x7bda38                       ; 0041ef06
    CALL FUN_0040c450                   ; 0041ef0b
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c450()
    ADD ESP,0x18                        ; 0041ef10
    RET                                 ; 0041ef13

