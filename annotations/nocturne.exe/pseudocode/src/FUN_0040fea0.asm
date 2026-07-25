; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040fea0(void)
;
;
; Called Functions:
;   FUN_0040fed0
;   FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x2d4                          ; 0040fea0
        ;   Label: FUN_0040fea0
    CALL FUN_0056497c                   ; 0040fea5
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined FUN_0056497c()
    ADD ESP,0x4                         ; 0040feaa
    TEST EAX,EAX                        ; 0040fead
    JNZ 0x0040feb2                      ; 0040feaf
        ;   XREF to: 0040feb2 (CONDITIONAL_JUMP)  ; LAB_0040feb2
    RET                                 ; 0040feb1
    PUSH EAX                            ; 0040feb2
        ;   Label: LAB_0040feb2
    CALL FUN_0040fed0                   ; 0040feb3
        ;   XREF to: 0040fed0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040fed0()
    ADD ESP,0x4                         ; 0040feb8
    RET                                 ; 0040febb

