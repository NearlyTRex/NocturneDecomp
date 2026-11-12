; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_shadow_cpp_factoryFuncShadow_FUN_0053c1d0(void)
;
;
; Called Functions:
;   core_shadow.cpp_CShadow_ctor_FUN_0053c200
;   crt_memory.c_operator_new_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x10b80                        ; 0053c1d0
        ;   Label: core_shadow.cpp_factoryFuncShadow_FUN_0053c1d0
    CALL crt_memory.c_operator_new_FUN_005b8be2 ; 0053c1d5
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005b8be2()
    ADD ESP,0x4                         ; 0053c1da
    TEST EAX,EAX                        ; 0053c1dd
    JNZ 0x0053c1e2                      ; 0053c1df
        ;   XREF to: 0053c1e2 (CONDITIONAL_JUMP)  ; LAB_0053c1e2
    RET                                 ; 0053c1e1
    PUSH EAX                            ; 0053c1e2
        ;   Label: LAB_0053c1e2
    CALL core_shadow.cpp_CShadow_ctor_FUN_0053c200 ; 0053c1e3
        ;   XREF to: 0053c200 (UNCONDITIONAL_CALL)  ; CShadow * core_shadow.cpp_CShadow_ctor_FUN_0053c200(CShadow * this_ptr)
    ADD ESP,0x4                         ; 0053c1e8
    RET                                 ; 0053c1eb

