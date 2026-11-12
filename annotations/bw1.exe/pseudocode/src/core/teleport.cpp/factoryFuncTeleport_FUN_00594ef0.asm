; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTeleport * __cdecl core_teleport_cpp_factoryFuncTeleport_FUN_00594ef0(void)
;
;
; Called Functions:
;   core_teleport.cpp_CTeleport_ctor_FUN_00594f20
;   crt_memory.c_operator_new_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0x168                          ; 00594ef0
        ;   Label: core_teleport.cpp_factoryFuncTeleport_FUN_00594ef0
    CALL crt_memory.c_operator_new_FUN_005c0f32 ; 00594ef5
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005c0f32()
    ADD ESP,0x4                         ; 00594efa
    TEST EAX,EAX                        ; 00594efd
    JNZ 0x00594f02                      ; 00594eff
        ;   XREF to: 00594f02 (CONDITIONAL_JUMP)  ; LAB_00594f02
    RET                                 ; 00594f01
    PUSH EAX                            ; 00594f02
        ;   Label: LAB_00594f02
    CALL core_teleport.cpp_CTeleport_ctor_FUN_00594f20 ; 00594f03
        ;   XREF to: 00594f20 (UNCONDITIONAL_CALL)  ; CTeleport * core_teleport.cpp_CTeleport_ctor_FUN_00594f20(CTeleport * this_ptr)
    ADD ESP,0x4                         ; 00594f08
    RET                                 ; 00594f0b

