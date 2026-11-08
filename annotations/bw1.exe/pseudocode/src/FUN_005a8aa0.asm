; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a8aa0(void)
;
;
; Called Functions:
;   FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x7c2ff8                       ; 005a8aa0
        ;   Label: FUN_005a8aa0
    PUSH 0x4                            ; 005a8aa5
    PUSH 0x625c68                       ; 005a8aa7
    PUSH 0x5a8ad0                       ; 005a8aac
    PUSH 0x5f90fe                       ; 005a8ab1
    PUSH 0x2c8af70                      ; 005a8ab6
    CALL FUN_0040c160                   ; 005a8abb
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c160()
    ADD ESP,0x18                        ; 005a8ac0
    RET                                 ; 005a8ac3

