; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_keyactor_cpp_factoryFuncKeyActor_FUN_004fc4e0(void)
;
;
; Called Functions:
;   core_keyactor.cpp_CKeyActor_ctor_FUN_004fc510
;   crt_memory.c_operator_new_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0x31c                          ; 004fc4e0
        ;   Label: core_keyactor.cpp_factoryFuncKeyActor_FUN_004fc4e0
    CALL crt_memory.c_operator_new_FUN_005c0f32 ; 004fc4e5
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005c0f32()
    ADD ESP,0x4                         ; 004fc4ea
    TEST EAX,EAX                        ; 004fc4ed
    JNZ 0x004fc4f2                      ; 004fc4ef
        ;   XREF to: 004fc4f2 (CONDITIONAL_JUMP)  ; LAB_004fc4f2
    RET                                 ; 004fc4f1
    PUSH EAX                            ; 004fc4f2
        ;   Label: LAB_004fc4f2
    CALL core_keyactor.cpp_CKeyActor_ctor_FUN_004fc510 ; 004fc4f3
        ;   XREF to: 004fc510 (UNCONDITIONAL_CALL)  ; CKeyActor * core_keyactor.cpp_CKeyActor_ctor_FUN_004fc510(CKeyActor * this_ptr)
    ADD ESP,0x4                         ; 004fc4f8
    RET                                 ; 004fc4fb

