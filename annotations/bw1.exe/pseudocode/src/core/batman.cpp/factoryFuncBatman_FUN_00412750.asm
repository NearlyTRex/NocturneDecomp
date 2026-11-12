; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBatman * __cdecl core_batman_cpp_factoryFuncBatman_FUN_00412750(void)
;
;
; Called Functions:
;   core_batman.cpp_CBatman_ctor_FUN_00412780
;   crt_memory.c_operator_new_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0xc328                         ; 00412750
        ;   Label: core_batman.cpp_factoryFuncBatman_FUN_00412750
    CALL crt_memory.c_operator_new_FUN_005c0f32 ; 00412755
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005c0f32()
    ADD ESP,0x4                         ; 0041275a
    TEST EAX,EAX                        ; 0041275d
    JNZ 0x00412762                      ; 0041275f
        ;   XREF to: 00412762 (CONDITIONAL_JUMP)  ; LAB_00412762
    RET                                 ; 00412761
    PUSH EAX                            ; 00412762
        ;   Label: LAB_00412762
    CALL core_batman.cpp_CBatman_ctor_FUN_00412780 ; 00412763
        ;   XREF to: 00412780 (UNCONDITIONAL_CALL)  ; CBatman * core_batman.cpp_CBatman_ctor_FUN_00412780(CBatman * this_ptr)
    ADD ESP,0x4                         ; 00412768
    RET                                 ; 0041276b

