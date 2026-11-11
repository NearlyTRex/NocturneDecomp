; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_trap_cpp_factoryFuncTrap_FUN_00599ce0(void)
;
;
; Called Functions:
;   core_trap.cpp_CTrap_ctor_FUN_00599d10
;   crt_memory.c_operator_new_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0x2dc                          ; 00599ce0
        ;   Label: core_trap.cpp_factoryFuncTrap_FUN_00599ce0
    CALL crt_memory.c_operator_new_FUN_005c0f32 ; 00599ce5
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005c0f32()
    ADD ESP,0x4                         ; 00599cea
    TEST EAX,EAX                        ; 00599ced
    JNZ 0x00599cf2                      ; 00599cef
        ;   XREF to: 00599cf2 (CONDITIONAL_JUMP)  ; LAB_00599cf2
    RET                                 ; 00599cf1
    PUSH EAX                            ; 00599cf2
        ;   Label: LAB_00599cf2
    CALL core_trap.cpp_CTrap_ctor_FUN_00599d10 ; 00599cf3
        ;   XREF to: 00599d10 (UNCONDITIONAL_CALL)  ; CTrap * core_trap.cpp_CTrap_ctor_FUN_00599d10(CTrap * this_ptr)
    ADD ESP,0x4                         ; 00599cf8
    RET                                 ; 00599cfb

