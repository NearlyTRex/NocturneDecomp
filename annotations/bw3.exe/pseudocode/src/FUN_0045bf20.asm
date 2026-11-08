; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0045bf20(void)
;
;
; Called Functions:
;   FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x2d0c118                      ; 0045bf20
        ;   Label: FUN_0045bf20
    PUSH 0x1                            ; 0045bf25
    PUSH 0x5f280c                       ; 0045bf27
    PUSH 0x45bf50                       ; 0045bf2c
    PUSH 0x5bb19e                       ; 0045bf31
    PUSH 0x1549ad4                      ; 0045bf36
    CALL FUN_0040c3a0                   ; 0045bf3b
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c3a0()
    ADD ESP,0x18                        ; 0045bf40
    RET                                 ; 0045bf43

