; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d0ed0(void)
;
;
; Called Functions:
;   FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x1d65404                      ; 004d0ed0
        ;   Label: FUN_004d0ed0
    PUSH 0x1                            ; 004d0ed5
    PUSH 0x617aa8                       ; 004d0ed7
    PUSH 0x4d0f00                       ; 004d0edc
    PUSH 0x5da0d8                       ; 004d0ee1
    PUSH 0x1cedf90                      ; 004d0ee6
    CALL FUN_0040c450                   ; 004d0eeb
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c450()
    ADD ESP,0x18                        ; 004d0ef0
    RET                                 ; 004d0ef3

