; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_armour_cpp_factoryFuncArmour_FUN_0040e9b0(void)
;
;
; Called Functions:
;   core_armour.cpp_CArmour_ctor_FUN_0040e9e0
;   crt_memory.c_operator_new_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0xc2cc                         ; 0040e9b0
        ;   Label: core_armour.cpp_factoryFuncArmour_FUN_0040e9b0
    CALL crt_memory.c_operator_new_FUN_005c0f32 ; 0040e9b5
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005c0f32()
    ADD ESP,0x4                         ; 0040e9ba
    TEST EAX,EAX                        ; 0040e9bd
    JNZ 0x0040e9c2                      ; 0040e9bf
        ;   XREF to: 0040e9c2 (CONDITIONAL_JUMP)  ; LAB_0040e9c2
    RET                                 ; 0040e9c1
    PUSH EAX                            ; 0040e9c2
        ;   Label: LAB_0040e9c2
    CALL core_armour.cpp_CArmour_ctor_FUN_0040e9e0 ; 0040e9c3
        ;   XREF to: 0040e9e0 (UNCONDITIONAL_CALL)  ; CArmour * core_armour.cpp_CArmour_ctor_FUN_0040e9e0(CArmour * this_ptr)
    ADD ESP,0x4                         ; 0040e9c8
    RET                                 ; 0040e9cb

