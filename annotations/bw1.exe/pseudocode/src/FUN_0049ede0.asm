; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049ede0(void)
;
;
; Called Functions:
;   FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x7c2ff8                       ; 0049ede0
        ;   Label: FUN_0049ede0
    PUSH 0xe                            ; 0049ede5
    PUSH 0x61b46c                       ; 0049ede7
    PUSH 0x49ee10                       ; 0049edec
    PUSH 0x5dc927                       ; 0049edf1
    PUSH 0x1c3f62c                      ; 0049edf6
    CALL FUN_0040c160                   ; 0049edfb
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c160()
    ADD ESP,0x18                        ; 0049ee00
    RET                                 ; 0049ee03

