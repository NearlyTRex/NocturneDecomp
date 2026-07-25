; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f5d60(void)
;
;
; Called Functions:
;   FUN_004f5d90
;   FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x720                          ; 004f5d60
        ;   Label: FUN_004f5d60
    CALL FUN_0056497c                   ; 004f5d65
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined FUN_0056497c()
    ADD ESP,0x4                         ; 004f5d6a
    TEST EAX,EAX                        ; 004f5d6d
    JNZ 0x004f5d72                      ; 004f5d6f
        ;   XREF to: 004f5d72 (CONDITIONAL_JUMP)  ; LAB_004f5d72
    RET                                 ; 004f5d71
    PUSH EAX                            ; 004f5d72
        ;   Label: LAB_004f5d72
    CALL FUN_004f5d90                   ; 004f5d73
        ;   XREF to: 004f5d90 (UNCONDITIONAL_CALL)  ; undefined FUN_004f5d90()
    ADD ESP,0x4                         ; 004f5d78
    RET                                 ; 004f5d7b

