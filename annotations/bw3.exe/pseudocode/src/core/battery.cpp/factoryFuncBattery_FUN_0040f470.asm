; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBattery * __cdecl core_battery_cpp_factoryFuncBattery_FUN_0040f470(void)
;
;
; Called Functions:
;   core_battery.cpp_CBattery_ctor_FUN_0040f4a0
;   crt_memory.c_operator_new_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0x2e0                          ; 0040f470
        ;   Label: core_battery.cpp_factoryFuncBattery_FUN_0040f470
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 0040f475
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 0040f47a
    TEST EAX,EAX                        ; 0040f47d
    JNZ 0x0040f482                      ; 0040f47f
        ;   XREF to: 0040f482 (CONDITIONAL_JUMP)  ; LAB_0040f482
    RET                                 ; 0040f481
    PUSH EAX                            ; 0040f482
        ;   Label: LAB_0040f482
    CALL core_battery.cpp_CBattery_ctor_FUN_0040f4a0 ; 0040f483
        ;   XREF to: 0040f4a0 (UNCONDITIONAL_CALL)  ; CBattery * core_battery.cpp_CBattery_ctor_FUN_0040f4a0(CBattery * this_ptr)
    ADD ESP,0x4                         ; 0040f488
    RET                                 ; 0040f48b

