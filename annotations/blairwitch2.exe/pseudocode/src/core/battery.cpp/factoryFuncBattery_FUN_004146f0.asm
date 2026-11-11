; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_battery_cpp_factoryFuncBattery_FUN_004146f0(void)
;
;
; Called Functions:
;   core_battery.cpp_CBattery_ctor_FUN_00414720
;   crt_memory.c_operator_new_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x43c                          ; 004146f0
        ;   Label: core_battery.cpp_factoryFuncBattery_FUN_004146f0
    CALL crt_memory.c_operator_new_FUN_005b8be2 ; 004146f5
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005b8be2()
    ADD ESP,0x4                         ; 004146fa
    TEST EAX,EAX                        ; 004146fd
    JNZ 0x00414702                      ; 004146ff
        ;   XREF to: 00414702 (CONDITIONAL_JUMP)  ; LAB_00414702
    RET                                 ; 00414701
    PUSH EAX                            ; 00414702
        ;   Label: LAB_00414702
    CALL core_battery.cpp_CBattery_ctor_FUN_00414720 ; 00414703
        ;   XREF to: 00414720 (UNCONDITIONAL_CALL)  ; CBattery * core_battery.cpp_CBattery_ctor_FUN_00414720(CBattery * this_ptr)
    ADD ESP,0x4                         ; 00414708
    RET                                 ; 0041470b

