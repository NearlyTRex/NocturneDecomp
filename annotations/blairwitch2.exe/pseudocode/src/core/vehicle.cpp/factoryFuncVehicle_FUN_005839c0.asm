; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_vehicle_cpp_factoryFuncVehicle_FUN_005839c0(void)
;
;
; Called Functions:
;   core_vehicle.cpp_CVehicle_ctor_FUN_005839f0
;   crt_unknown.c_debugAllocTracked1_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x11d4                         ; 005839c0
        ;   Label: core_vehicle.cpp_factoryFuncVehicle_FUN_005839c0
    CALL crt_unknown.c_debugAllocTracked1_FUN_005b8be2 ; 005839c5
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005b8be2()
    ADD ESP,0x4                         ; 005839ca
    TEST EAX,EAX                        ; 005839cd
    JNZ 0x005839d2                      ; 005839cf
        ;   XREF to: 005839d2 (CONDITIONAL_JUMP)  ; LAB_005839d2
    RET                                 ; 005839d1
    PUSH EAX                            ; 005839d2
        ;   Label: LAB_005839d2
    CALL core_vehicle.cpp_CVehicle_ctor_FUN_005839f0 ; 005839d3
        ;   XREF to: 005839f0 (UNCONDITIONAL_CALL)  ; CVehicle * core_vehicle.cpp_CVehicle_ctor_FUN_005839f0(CVehicle * this_ptr)
    ADD ESP,0x4                         ; 005839d8
    RET                                 ; 005839db

