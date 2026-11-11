; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_flamegun_cpp_factoryFuncFlameThrower_FUN_004b9590(void)
;
;
; Called Functions:
;   core_flamegun.cpp_CFlameThrower_ctor_FUN_004b95c0
;   crt_memory.c_operator_new_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0x588                          ; 004b9590
        ;   Label: core_flamegun.cpp_factoryFuncFlameThrower_FUN_004b9590
    CALL crt_memory.c_operator_new_FUN_005c0f32 ; 004b9595
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005c0f32()
    ADD ESP,0x4                         ; 004b959a
    TEST EAX,EAX                        ; 004b959d
    JNZ 0x004b95a2                      ; 004b959f
        ;   XREF to: 004b95a2 (CONDITIONAL_JUMP)  ; LAB_004b95a2
    RET                                 ; 004b95a1
    PUSH EAX                            ; 004b95a2
        ;   Label: LAB_004b95a2
    CALL core_flamegun.cpp_CFlameThrower_ctor_FUN_004b95c0 ; 004b95a3
        ;   XREF to: 004b95c0 (UNCONDITIONAL_CALL)  ; CFlameThrower * core_flamegun.cpp_CFlameThrower_ctor_FUN_004b95c0(CFlameThrower * this_ptr)
    ADD ESP,0x4                         ; 004b95a8
    RET                                 ; 004b95ab

