; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_vehicle_cpp_factoryFuncVehicle_FUN_005a75f0(void)
;
;
; Called Functions:
;   core_vehicle.cpp_CVehicle_ctor_FUN_005a7620
;   crt_unknown.c_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0x1078                         ; 005a75f0
        ;   Label: core_vehicle.cpp_factoryFuncVehicle_FUN_005a75f0
    CALL crt_unknown.c_FUN_005c0f32     ; 005a75f5
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0f32()
    ADD ESP,0x4                         ; 005a75fa
    TEST EAX,EAX                        ; 005a75fd
    JNZ 0x005a7602                      ; 005a75ff
        ;   XREF to: 005a7602 (CONDITIONAL_JUMP)  ; LAB_005a7602
    RET                                 ; 005a7601
    PUSH EAX                            ; 005a7602
        ;   Label: LAB_005a7602
    CALL core_vehicle.cpp_CVehicle_ctor_FUN_005a7620 ; 005a7603
        ;   XREF to: 005a7620 (UNCONDITIONAL_CALL)  ; CVehicle * core_vehicle.cpp_CVehicle_ctor_FUN_005a7620(CVehicle * this_ptr)
    ADD ESP,0x4                         ; 005a7608
    RET                                 ; 005a760b

