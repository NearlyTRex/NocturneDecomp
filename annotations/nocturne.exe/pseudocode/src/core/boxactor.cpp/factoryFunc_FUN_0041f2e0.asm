; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CLightActor * __cdecl core_boxactor_cpp_factoryFunc_FUN_0041f2e0(void)
;
;
; Called Functions:
;   core_boxactor.cpp_CLightActor_ctor_FUN_0041f310
;   crt_unknown.c_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x3670                         ; 0041f2e0
        ;   Label: core_boxactor.cpp_factoryFunc_FUN_0041f2e0
    CALL crt_unknown.c_FUN_0056497c     ; 0041f2e5
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056497c()
    ADD ESP,0x4                         ; 0041f2ea
    TEST EAX,EAX                        ; 0041f2ed
    JNZ 0x0041f2f2                      ; 0041f2ef
        ;   XREF to: 0041f2f2 (CONDITIONAL_JUMP)  ; LAB_0041f2f2
    RET                                 ; 0041f2f1
    PUSH EAX                            ; 0041f2f2
        ;   Label: LAB_0041f2f2
    CALL core_boxactor.cpp_CLightActor_ctor_FUN_0041f310 ; 0041f2f3
        ;   XREF to: 0041f310 (UNCONDITIONAL_CALL)  ; CLightActor * core_boxactor.cpp_CLightActor_ctor_FUN_0041f310(CLightActor * this_ptr)
    ADD ESP,0x4                         ; 0041f2f8
    RET                                 ; 0041f2fb

