; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a7ab0(void)
;
;
; Called Functions:
;   FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x26685c8                      ; 005a7ab0
        ;   Label: FUN_005a7ab0
    PUSH 0x1                            ; 005a7ab5
    PUSH 0x61ebd8                       ; 005a7ab7
    PUSH 0x5a7ae0                       ; 005a7abc
    PUSH 0x5f07dc                       ; 005a7ac1
    PUSH 0x2668774                      ; 005a7ac6
    CALL FUN_0040c450                   ; 005a7acb
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c450()
    ADD ESP,0x18                        ; 005a7ad0
    RET                                 ; 005a7ad3

