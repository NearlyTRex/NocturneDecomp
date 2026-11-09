; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_battery_cpp_factoryFuncBattery_FUN_004143e0(void)
;
;
; Called Functions:
;   core_battery.cpp_CBattery_ctor_FUN_00414410
;   crt_unknown.c_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0x2e0                          ; 004143e0
        ;   Label: core_battery.cpp_factoryFuncBattery_FUN_004143e0
    CALL crt_unknown.c_FUN_005c0f32     ; 004143e5
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0f32()
    ADD ESP,0x4                         ; 004143ea
    TEST EAX,EAX                        ; 004143ed
    JNZ 0x004143f2                      ; 004143ef
        ;   XREF to: 004143f2 (CONDITIONAL_JUMP)  ; LAB_004143f2
    RET                                 ; 004143f1
    PUSH EAX                            ; 004143f2
        ;   Label: LAB_004143f2
    CALL core_battery.cpp_CBattery_ctor_FUN_00414410 ; 004143f3
        ;   XREF to: 00414410 (UNCONDITIONAL_CALL)  ; CBattery * core_battery.cpp_CBattery_ctor_FUN_00414410(CBattery * this_ptr)
    ADD ESP,0x4                         ; 004143f8
    RET                                 ; 004143fb

