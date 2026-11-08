; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004df0e0(void)
;
;
; Called Functions:
;   FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x7bbff8                       ; 004df0e0
        ;   Label: FUN_004df0e0
    PUSH 0x3                            ; 004df0e5
    PUSH 0x617dbc                       ; 004df0e7
    PUSH 0x4df110                       ; 004df0ec
    PUSH 0x5dbba6                       ; 004df0f1
    PUSH 0x1d02f48                      ; 004df0f6
    CALL FUN_0040c450                   ; 004df0fb
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c450()
    ADD ESP,0x18                        ; 004df100
    RET                                 ; 004df103

