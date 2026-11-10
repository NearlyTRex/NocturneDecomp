; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_pendulum_cpp_factoryFuncPendulum_FUN_0050dcd0(void)
;
;
; Called Functions:
;   core_pendulum.cpp_CPendulum_ctor_FUN_0050dd00
;   crt_unknown.c_debugAllocTracked1_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0x444                          ; 0050dcd0
        ;   Label: core_pendulum.cpp_factoryFuncPendulum_FUN_0050dcd0
    CALL crt_unknown.c_debugAllocTracked1_FUN_005a3cb2 ; 0050dcd5
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005a3cb2()
    ADD ESP,0x4                         ; 0050dcda
    TEST EAX,EAX                        ; 0050dcdd
    JNZ 0x0050dce2                      ; 0050dcdf
        ;   XREF to: 0050dce2 (CONDITIONAL_JUMP)  ; LAB_0050dce2
    RET                                 ; 0050dce1
    PUSH EAX                            ; 0050dce2
        ;   Label: LAB_0050dce2
    CALL core_pendulum.cpp_CPendulum_ctor_FUN_0050dd00 ; 0050dce3
        ;   XREF to: 0050dd00 (UNCONDITIONAL_CALL)  ; CPendulum * core_pendulum.cpp_CPendulum_ctor_FUN_0050dd00(CPendulum * this_ptr)
    ADD ESP,0x4                         ; 0050dce8
    RET                                 ; 0050dceb

