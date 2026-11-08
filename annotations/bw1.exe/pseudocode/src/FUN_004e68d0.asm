; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e68d0(void)
;
;
; Called Functions:
;   FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x7c2ff8                       ; 004e68d0
        ;   Label: FUN_004e68d0
    PUSH 0x4                            ; 004e68d5
    PUSH 0x61eea8                       ; 004e68d7
    PUSH 0x4e6900                       ; 004e68dc
    PUSH 0x5e418b                       ; 004e68e1
    PUSH 0x1d06904                      ; 004e68e6
    CALL FUN_0040c160                   ; 004e68eb
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c160()
    ADD ESP,0x18                        ; 004e68f0
    RET                                 ; 004e68f3

