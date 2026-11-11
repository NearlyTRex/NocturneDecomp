; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_baron_cpp_factoryFuncBaronWeapon_FUN_00410430(void)
;
;
; Called Functions:
;   core_baron.cpp_CBaronWeapon_ctor_FUN_00410460
;   crt_memory.c_operator_new_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0x57c                          ; 00410430
        ;   Label: core_baron.cpp_factoryFuncBaronWeapon_FUN_00410430
    CALL crt_memory.c_operator_new_FUN_005c0f32 ; 00410435
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005c0f32()
    ADD ESP,0x4                         ; 0041043a
    TEST EAX,EAX                        ; 0041043d
    JNZ 0x00410442                      ; 0041043f
        ;   XREF to: 00410442 (CONDITIONAL_JUMP)  ; LAB_00410442
    RET                                 ; 00410441
    PUSH EAX                            ; 00410442
        ;   Label: LAB_00410442
    CALL core_baron.cpp_CBaronWeapon_ctor_FUN_00410460 ; 00410443
        ;   XREF to: 00410460 (UNCONDITIONAL_CALL)  ; CBaronWeapon * core_baron.cpp_CBaronWeapon_ctor_FUN_00410460(CBaronWeapon * this_ptr)
    ADD ESP,0x4                         ; 00410448
    RET                                 ; 0041044b

