; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDrone * __cdecl core_drone_cpp_factoryFuncDrone_FUN_00485c20(void)
;
;
; Called Functions:
;   core_drone.cpp_CDrone_ctor_FUN_00485c50
;   crt_memory.c_operator_new_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0xc280                         ; 00485c20
        ;   Label: core_drone.cpp_factoryFuncDrone_FUN_00485c20
    CALL crt_memory.c_operator_new_FUN_005c0f32 ; 00485c25
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005c0f32()
    ADD ESP,0x4                         ; 00485c2a
    TEST EAX,EAX                        ; 00485c2d
    JNZ 0x00485c32                      ; 00485c2f
        ;   XREF to: 00485c32 (CONDITIONAL_JUMP)  ; LAB_00485c32
    RET                                 ; 00485c31
    PUSH EAX                            ; 00485c32
        ;   Label: LAB_00485c32
    CALL core_drone.cpp_CDrone_ctor_FUN_00485c50 ; 00485c33
        ;   XREF to: 00485c50 (UNCONDITIONAL_CALL)  ; CDrone * core_drone.cpp_CDrone_ctor_FUN_00485c50(CDrone * this_ptr)
    ADD ESP,0x4                         ; 00485c38
    RET                                 ; 00485c3b

