; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049dfa0(void)
;
;
; Called Functions:
;   FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x2c99738                      ; 0049dfa0
        ;   Label: FUN_0049dfa0
    PUSH 0x1                            ; 0049dfa5
    PUSH 0x61b454                       ; 0049dfa7
    PUSH 0x49dfd0                       ; 0049dfac
    PUSH 0x5dc89f                       ; 0049dfb1
    PUSH 0x1c3f5f0                      ; 0049dfb6
    CALL FUN_0040c160                   ; 0049dfbb
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c160()
    ADD ESP,0x18                        ; 0049dfc0
    RET                                 ; 0049dfc3

