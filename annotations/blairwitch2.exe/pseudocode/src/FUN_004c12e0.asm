; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c12e0(void)
;
;
; Called Functions:
;   FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x7bbff8                       ; 004c12e0
        ;   Label: FUN_004c12e0
    PUSH 0x1                            ; 004c12e5
    PUSH 0x616768                       ; 004c12e7
    PUSH 0x4c1310                       ; 004c12ec
    PUSH 0x5d8e62                       ; 004c12f1
    PUSH 0x1cb818c                      ; 004c12f6
    CALL FUN_0040c450                   ; 004c12fb
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c450()
    ADD ESP,0x18                        ; 004c1300
    RET                                 ; 004c1303

