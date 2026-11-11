; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_trigger_cpp_factoryFuncTrigger_FUN_0059af80(void)
;
;
; Called Functions:
;   core_trigger.cpp_CTrigger_ctor_FUN_0059afb0
;   crt_memory.c_operator_new_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0x374                          ; 0059af80
        ;   Label: core_trigger.cpp_factoryFuncTrigger_FUN_0059af80
    CALL crt_memory.c_operator_new_FUN_005c0f32 ; 0059af85
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005c0f32()
    ADD ESP,0x4                         ; 0059af8a
    TEST EAX,EAX                        ; 0059af8d
    JNZ 0x0059af92                      ; 0059af8f
        ;   XREF to: 0059af92 (CONDITIONAL_JUMP)  ; LAB_0059af92
    RET                                 ; 0059af91
    PUSH EAX                            ; 0059af92
        ;   Label: LAB_0059af92
    CALL core_trigger.cpp_CTrigger_ctor_FUN_0059afb0 ; 0059af93
        ;   XREF to: 0059afb0 (UNCONDITIONAL_CALL)  ; CTrigger * core_trigger.cpp_CTrigger_ctor_FUN_0059afb0(CTrigger * this_ptr)
    ADD ESP,0x4                         ; 0059af98
    RET                                 ; 0059af9b

