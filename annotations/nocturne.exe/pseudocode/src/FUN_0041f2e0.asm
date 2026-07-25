; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0041f2e0(void)
;
;
; Called Functions:
;   core_boxactor.cpp_CLightActor_ctor_FUN_0041f310
;   FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x3670                         ; 0041f2e0
        ;   Label: FUN_0041f2e0
    CALL FUN_0056497c                   ; 0041f2e5
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined FUN_0056497c()
    ADD ESP,0x4                         ; 0041f2ea
    TEST EAX,EAX                        ; 0041f2ed
    JNZ 0x0041f2f2                      ; 0041f2ef
        ;   XREF to: 0041f2f2 (CONDITIONAL_JUMP)  ; LAB_0041f2f2
    RET                                 ; 0041f2f1
    PUSH EAX                            ; 0041f2f2
        ;   Label: LAB_0041f2f2
    CALL core_boxactor.cpp_CLightActor_ctor_FUN_0041f310 ; 0041f2f3
        ;   XREF to: 0041f310 (UNCONDITIONAL_CALL)  ; undefined core_boxactor.cpp_CLightActor_ctor_FUN_0041f310()
    ADD ESP,0x4                         ; 0041f2f8
    RET                                 ; 0041f2fb

