; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b0b10(void)
;
;
; Called Functions:
;   core_grave.cpp_CGrave_ctor_FUN_004b0b40
;   FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x3a8                          ; 004b0b10
        ;   Label: FUN_004b0b10
    CALL FUN_0056497c                   ; 004b0b15
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined FUN_0056497c()
    ADD ESP,0x4                         ; 004b0b1a
    TEST EAX,EAX                        ; 004b0b1d
    JNZ 0x004b0b22                      ; 004b0b1f
        ;   XREF to: 004b0b22 (CONDITIONAL_JUMP)  ; LAB_004b0b22
    RET                                 ; 004b0b21
    PUSH EAX                            ; 004b0b22
        ;   Label: LAB_004b0b22
    CALL core_grave.cpp_CGrave_ctor_FUN_004b0b40 ; 004b0b23
        ;   XREF to: 004b0b40 (UNCONDITIONAL_CALL)  ; undefined core_grave.cpp_CGrave_ctor_FUN_004b0b40()
    ADD ESP,0x4                         ; 004b0b28
    RET                                 ; 004b0b2b

