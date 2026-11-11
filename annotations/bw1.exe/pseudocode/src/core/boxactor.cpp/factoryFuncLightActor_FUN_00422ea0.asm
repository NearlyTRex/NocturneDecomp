; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_boxactor_cpp_factoryFuncLightActor_FUN_00422ea0(void)
;
;
; Called Functions:
;   core_boxactor.cpp_CLightActor_ctor_FUN_00422ed0
;   crt_memory.c_operator_new_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0x3684                         ; 00422ea0
        ;   Label: core_boxactor.cpp_factoryFuncLightActor_FUN_00422ea0
    CALL crt_memory.c_operator_new_FUN_005c0f32 ; 00422ea5
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005c0f32()
    ADD ESP,0x4                         ; 00422eaa
    TEST EAX,EAX                        ; 00422ead
    JNZ 0x00422eb2                      ; 00422eaf
        ;   XREF to: 00422eb2 (CONDITIONAL_JUMP)  ; LAB_00422eb2
    RET                                 ; 00422eb1
    PUSH EAX                            ; 00422eb2
        ;   Label: LAB_00422eb2
    CALL core_boxactor.cpp_CLightActor_ctor_FUN_00422ed0 ; 00422eb3
        ;   XREF to: 00422ed0 (UNCONDITIONAL_CALL)  ; CLightActor * core_boxactor.cpp_CLightActor_ctor_FUN_00422ed0(CLightActor * this_ptr)
    ADD ESP,0x4                         ; 00422eb8
    RET                                 ; 00422ebb

