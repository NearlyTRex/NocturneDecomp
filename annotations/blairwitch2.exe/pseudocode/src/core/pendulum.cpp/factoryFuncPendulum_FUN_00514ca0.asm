; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_pendulum_cpp_factoryFuncPendulum_FUN_00514ca0(void)
;
;
; Called Functions:
;   core_pendulum.cpp_CPendulum_ctor_FUN_00514cd0
;   crt_unknown.c_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x5a0                          ; 00514ca0
        ;   Label: core_pendulum.cpp_factoryFuncPendulum_FUN_00514ca0
    CALL crt_unknown.c_FUN_005b8be2     ; 00514ca5
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8be2()
    ADD ESP,0x4                         ; 00514caa
    TEST EAX,EAX                        ; 00514cad
    JNZ 0x00514cb2                      ; 00514caf
        ;   XREF to: 00514cb2 (CONDITIONAL_JUMP)  ; LAB_00514cb2
    RET                                 ; 00514cb1
    PUSH EAX                            ; 00514cb2
        ;   Label: LAB_00514cb2
    CALL core_pendulum.cpp_CPendulum_ctor_FUN_00514cd0 ; 00514cb3
        ;   XREF to: 00514cd0 (UNCONDITIONAL_CALL)  ; CPendulum * core_pendulum.cpp_CPendulum_ctor_FUN_00514cd0(CPendulum * this_ptr)
    ADD ESP,0x4                         ; 00514cb8
    RET                                 ; 00514cbb

