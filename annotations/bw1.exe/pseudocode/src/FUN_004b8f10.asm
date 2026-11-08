; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b8f10(void)
;
;
; Called Functions:
;   FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x7c2ff8                       ; 004b8f10
        ;   Label: FUN_004b8f10
    PUSH 0x1                            ; 004b8f15
    PUSH 0x61d184                       ; 004b8f17
    PUSH 0x4b8f40                       ; 004b8f1c
    PUSH 0x5df777                       ; 004b8f21
    PUSH 0x1cc414c                      ; 004b8f26
    CALL FUN_0040c160                   ; 004b8f2b
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c160()
    ADD ESP,0x18                        ; 004b8f30
    RET                                 ; 004b8f33

