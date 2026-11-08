; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a4a20(void)
;
;
; Called Functions:
;   FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x26685c8                      ; 005a4a20
        ;   Label: FUN_005a4a20
    PUSH 0x1                            ; 005a4a25
    PUSH 0x61eb70                       ; 005a4a27
    PUSH 0x5a4a50                       ; 005a4a2c
    PUSH 0x5f041a                       ; 005a4a31
    PUSH 0x2668604                      ; 005a4a36
    CALL FUN_0040c450                   ; 005a4a3b
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c450()
    ADD ESP,0x18                        ; 005a4a40
    RET                                 ; 005a4a43

