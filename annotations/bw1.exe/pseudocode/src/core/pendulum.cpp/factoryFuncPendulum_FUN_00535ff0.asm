; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_pendulum_cpp_factoryFuncPendulum_FUN_00535ff0(void)
;
;
; Called Functions:
;   core_pendulum.cpp_CPendulum_ctor_FUN_00536020
;   crt_memory.c_operator_new_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0x444                          ; 00535ff0
        ;   Label: core_pendulum.cpp_factoryFuncPendulum_FUN_00535ff0
    CALL crt_memory.c_operator_new_FUN_005c0f32 ; 00535ff5
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005c0f32()
    ADD ESP,0x4                         ; 00535ffa
    TEST EAX,EAX                        ; 00535ffd
    JNZ 0x00536002                      ; 00535fff
        ;   XREF to: 00536002 (CONDITIONAL_JUMP)  ; LAB_00536002
    RET                                 ; 00536001
    PUSH EAX                            ; 00536002
        ;   Label: LAB_00536002
    CALL core_pendulum.cpp_CPendulum_ctor_FUN_00536020 ; 00536003
        ;   XREF to: 00536020 (UNCONDITIONAL_CALL)  ; CPendulum * core_pendulum.cpp_CPendulum_ctor_FUN_00536020(CPendulum * this_ptr)
    ADD ESP,0x4                         ; 00536008
    RET                                 ; 0053600b

