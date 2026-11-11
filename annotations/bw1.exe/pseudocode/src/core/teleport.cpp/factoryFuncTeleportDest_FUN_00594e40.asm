; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_teleport_cpp_factoryFuncTeleportDest_FUN_00594e40(void)
;
;
; Called Functions:
;   core_teleport.cpp_CTeleportDest_ctor_FUN_00594e70
;   crt_memory.c_operator_new_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0x158                          ; 00594e40
        ;   Label: core_teleport.cpp_factoryFuncTeleportDest_FUN_00594e40
    CALL crt_memory.c_operator_new_FUN_005c0f32 ; 00594e45
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005c0f32()
    ADD ESP,0x4                         ; 00594e4a
    TEST EAX,EAX                        ; 00594e4d
    JNZ 0x00594e52                      ; 00594e4f
        ;   XREF to: 00594e52 (CONDITIONAL_JUMP)  ; LAB_00594e52
    RET                                 ; 00594e51
    PUSH EAX                            ; 00594e52
        ;   Label: LAB_00594e52
    CALL core_teleport.cpp_CTeleportDest_ctor_FUN_00594e70 ; 00594e53
        ;   XREF to: 00594e70 (UNCONDITIONAL_CALL)  ; CTeleportDest * core_teleport.cpp_CTeleportDest_ctor_FUN_00594e70(CTeleportDest * this_ptr)
    ADD ESP,0x4                         ; 00594e58
    RET                                 ; 00594e5b

