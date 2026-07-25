; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b2730(void)
;
;
; Called Functions:
;   FUN_004b2760
;   FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x570                          ; 004b2730
        ;   Label: FUN_004b2730
    CALL FUN_0056497c                   ; 004b2735
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined FUN_0056497c()
    ADD ESP,0x4                         ; 004b273a
    TEST EAX,EAX                        ; 004b273d
    JNZ 0x004b2742                      ; 004b273f
        ;   XREF to: 004b2742 (CONDITIONAL_JUMP)  ; LAB_004b2742
    RET                                 ; 004b2741
    PUSH EAX                            ; 004b2742
        ;   Label: LAB_004b2742
    CALL FUN_004b2760                   ; 004b2743
        ;   XREF to: 004b2760 (UNCONDITIONAL_CALL)  ; undefined FUN_004b2760()
    ADD ESP,0x4                         ; 004b2748
    RET                                 ; 004b274b

