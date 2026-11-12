; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_prye_cpp_factoryFuncPrye_FUN_00517f50(void)
;
;
; Called Functions:
;   core_prye.cpp_CPrye_ctor_FUN_00517f80
;   crt_memory.c_operator_new_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0x20d04                        ; 00517f50
        ;   Label: core_prye.cpp_factoryFuncPrye_FUN_00517f50
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 00517f55
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 00517f5a
    TEST EAX,EAX                        ; 00517f5d
    JNZ 0x00517f62                      ; 00517f5f
        ;   XREF to: 00517f62 (CONDITIONAL_JUMP)  ; LAB_00517f62
    RET                                 ; 00517f61
    PUSH EAX                            ; 00517f62
        ;   Label: LAB_00517f62
    CALL core_prye.cpp_CPrye_ctor_FUN_00517f80 ; 00517f63
        ;   XREF to: 00517f80 (UNCONDITIONAL_CALL)  ; CPrye * core_prye.cpp_CPrye_ctor_FUN_00517f80(CPrye * this_ptr)
    ADD ESP,0x4                         ; 00517f68
    RET                                 ; 00517f6b

