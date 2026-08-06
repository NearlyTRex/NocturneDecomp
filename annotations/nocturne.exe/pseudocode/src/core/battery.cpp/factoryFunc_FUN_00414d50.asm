; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBattery * __cdecl core_battery_cpp_factoryFunc_FUN_00414d50(void)
;
;
; Called Functions:
;   core_battery.cpp_CBattery_ctor_FUN_00414d80
;   crt_memory.c_operator_new_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x2d8                          ; 00414d50
        ;   Label: core_battery.cpp_factoryFunc_FUN_00414d50
    CALL crt_memory.c_operator_new_FUN_0056497c ; 00414d55
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; void * crt_memory.c_operator_new_FUN_0056497c(ulong size)
    ADD ESP,0x4                         ; 00414d5a
    TEST EAX,EAX                        ; 00414d5d
    JNZ 0x00414d62                      ; 00414d5f
        ;   XREF to: 00414d62 (CONDITIONAL_JUMP)  ; LAB_00414d62
    RET                                 ; 00414d61
    PUSH EAX                            ; 00414d62
        ;   Label: LAB_00414d62
    CALL core_battery.cpp_CBattery_ctor_FUN_00414d80 ; 00414d63
        ;   XREF to: 00414d80 (UNCONDITIONAL_CALL)  ; CBattery * core_battery.cpp_CBattery_ctor_FUN_00414d80(CBattery * this_ptr)
    ADD ESP,0x4                         ; 00414d68
    RET                                 ; 00414d6b

