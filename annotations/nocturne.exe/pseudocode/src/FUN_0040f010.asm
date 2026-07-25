; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040f010(void)
;
;
; Called Functions:
;   FUN_0040f040
;   FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x344                          ; 0040f010
        ;   Label: FUN_0040f010
    CALL FUN_0056497c                   ; 0040f015
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined FUN_0056497c()
    ADD ESP,0x4                         ; 0040f01a
    TEST EAX,EAX                        ; 0040f01d
    JNZ 0x0040f022                      ; 0040f01f
        ;   XREF to: 0040f022 (CONDITIONAL_JUMP)  ; LAB_0040f022
    RET                                 ; 0040f021
    PUSH EAX                            ; 0040f022
        ;   Label: LAB_0040f022
    CALL FUN_0040f040                   ; 0040f023
        ;   XREF to: 0040f040 (UNCONDITIONAL_CALL)  ; undefined FUN_0040f040()
    ADD ESP,0x4                         ; 0040f028
    RET                                 ; 0040f02b

