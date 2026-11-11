; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_trigger_cpp_factoryFuncTrigger_FUN_0056df70(void)
;
;
; Called Functions:
;   core_trigger.cpp_CTrigger_ctor_FUN_0056dfa0
;   crt_memory.c_operator_new_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0x374                          ; 0056df70
        ;   Label: core_trigger.cpp_factoryFuncTrigger_FUN_0056df70
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 0056df75
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 0056df7a
    TEST EAX,EAX                        ; 0056df7d
    JNZ 0x0056df82                      ; 0056df7f
        ;   XREF to: 0056df82 (CONDITIONAL_JUMP)  ; LAB_0056df82
    RET                                 ; 0056df81
    PUSH EAX                            ; 0056df82
        ;   Label: LAB_0056df82
    CALL core_trigger.cpp_CTrigger_ctor_FUN_0056dfa0 ; 0056df83
        ;   XREF to: 0056dfa0 (UNCONDITIONAL_CALL)  ; CTrigger * core_trigger.cpp_CTrigger_ctor_FUN_0056dfa0(CTrigger * this_ptr)
    ADD ESP,0x4                         ; 0056df88
    RET                                 ; 0056df8b

