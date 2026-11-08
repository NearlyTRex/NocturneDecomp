; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ea2d0(void)
;
;
; Called Functions:
;   FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x7c2ff8                       ; 004ea2d0
        ;   Label: FUN_004ea2d0
    PUSH 0x3                            ; 004ea2d5
    PUSH 0x61ef08                       ; 004ea2d7
    PUSH 0x4ea300                       ; 004ea2dc
    PUSH 0x5e45a5                       ; 004ea2e1
    PUSH 0x1d06a58                      ; 004ea2e6
    CALL FUN_0040c160                   ; 004ea2eb
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c160()
    ADD ESP,0x18                        ; 004ea2f0
    RET                                 ; 004ea2f3

