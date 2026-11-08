; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a5ae0(void)
;
;
; Called Functions:
;   FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x26685c8                      ; 005a5ae0
        ;   Label: FUN_005a5ae0
    PUSH 0x1                            ; 005a5ae5
    PUSH 0x61eb84                       ; 005a5ae7
    PUSH 0x5a5b10                       ; 005a5aec
    PUSH 0x5f05e2                       ; 005a5af1
    PUSH 0x2668640                      ; 005a5af6
    CALL FUN_0040c450                   ; 005a5afb
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c450()
    ADD ESP,0x18                        ; 005a5b00
    RET                                 ; 005a5b03

