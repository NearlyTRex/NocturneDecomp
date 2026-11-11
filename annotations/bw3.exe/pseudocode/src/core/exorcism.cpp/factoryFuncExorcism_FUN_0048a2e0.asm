; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_exorcism_cpp_factoryFuncExorcism_FUN_0048a2e0(void)
;
;
; Called Functions:
;   core_exorcism.cpp_CExorcism_ctor_FUN_0048a310
;   crt_memory.c_operator_new_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0x62c                          ; 0048a2e0
        ;   Label: core_exorcism.cpp_factoryFuncExorcism_FUN_0048a2e0
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 0048a2e5
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 0048a2ea
    TEST EAX,EAX                        ; 0048a2ed
    JNZ 0x0048a2f2                      ; 0048a2ef
        ;   XREF to: 0048a2f2 (CONDITIONAL_JUMP)  ; LAB_0048a2f2
    RET                                 ; 0048a2f1
    PUSH EAX                            ; 0048a2f2
        ;   Label: LAB_0048a2f2
    CALL core_exorcism.cpp_CExorcism_ctor_FUN_0048a310 ; 0048a2f3
        ;   XREF to: 0048a310 (UNCONDITIONAL_CALL)  ; CExorcism * core_exorcism.cpp_CExorcism_ctor_FUN_0048a310(CExorcism * this_ptr)
    ADD ESP,0x4                         ; 0048a2f8
    RET                                 ; 0048a2fb

