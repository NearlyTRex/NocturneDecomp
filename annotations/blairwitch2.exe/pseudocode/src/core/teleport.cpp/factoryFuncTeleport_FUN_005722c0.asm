; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_teleport_cpp_factoryFuncTeleport_FUN_005722c0(void)
;
;
; Called Functions:
;   core_teleport.cpp_CTeleport_ctor_FUN_005722f0
;   crt_memory.c_operator_new_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x2c4                          ; 005722c0
        ;   Label: core_teleport.cpp_factoryFuncTeleport_FUN_005722c0
    CALL crt_memory.c_operator_new_FUN_005b8be2 ; 005722c5
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005b8be2()
    ADD ESP,0x4                         ; 005722ca
    TEST EAX,EAX                        ; 005722cd
    JNZ 0x005722d2                      ; 005722cf
        ;   XREF to: 005722d2 (CONDITIONAL_JUMP)  ; LAB_005722d2
    RET                                 ; 005722d1
    PUSH EAX                            ; 005722d2
        ;   Label: LAB_005722d2
    CALL core_teleport.cpp_CTeleport_ctor_FUN_005722f0 ; 005722d3
        ;   XREF to: 005722f0 (UNCONDITIONAL_CALL)  ; CTeleport * core_teleport.cpp_CTeleport_ctor_FUN_005722f0(CTeleport * this_ptr)
    ADD ESP,0x4                         ; 005722d8
    RET                                 ; 005722db

