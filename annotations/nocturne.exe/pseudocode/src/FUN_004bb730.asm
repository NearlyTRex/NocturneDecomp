; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004bb730(void)
;
;
; Called Functions:
;   FUN_004bb760
;   FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0xbd5c                         ; 004bb730
        ;   Label: FUN_004bb730
    CALL FUN_0056497c                   ; 004bb735
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined FUN_0056497c()
    ADD ESP,0x4                         ; 004bb73a
    TEST EAX,EAX                        ; 004bb73d
    JNZ 0x004bb742                      ; 004bb73f
        ;   XREF to: 004bb742 (CONDITIONAL_JUMP)  ; LAB_004bb742
    RET                                 ; 004bb741
    PUSH EAX                            ; 004bb742
        ;   Label: LAB_004bb742
    CALL FUN_004bb760                   ; 004bb743
        ;   XREF to: 004bb760 (UNCONDITIONAL_CALL)  ; undefined FUN_004bb760()
    ADD ESP,0x4                         ; 004bb748
    RET                                 ; 004bb74b

