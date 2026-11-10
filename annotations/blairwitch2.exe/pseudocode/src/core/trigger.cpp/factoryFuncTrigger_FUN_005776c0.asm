; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_trigger_cpp_factoryFuncTrigger_FUN_005776c0(void)
;
;
; Called Functions:
;   core_trigger.cpp_CTrigger_ctor_FUN_005776f0
;   crt_unknown.c_debugAllocTracked1_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x4d0                          ; 005776c0
        ;   Label: core_trigger.cpp_factoryFuncTrigger_FUN_005776c0
    CALL crt_unknown.c_debugAllocTracked1_FUN_005b8be2 ; 005776c5
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005b8be2()
    ADD ESP,0x4                         ; 005776ca
    TEST EAX,EAX                        ; 005776cd
    JNZ 0x005776d2                      ; 005776cf
        ;   XREF to: 005776d2 (CONDITIONAL_JUMP)  ; LAB_005776d2
    RET                                 ; 005776d1
    PUSH EAX                            ; 005776d2
        ;   Label: LAB_005776d2
    CALL core_trigger.cpp_CTrigger_ctor_FUN_005776f0 ; 005776d3
        ;   XREF to: 005776f0 (UNCONDITIONAL_CALL)  ; CTrigger * core_trigger.cpp_CTrigger_ctor_FUN_005776f0(CTrigger * this_ptr)
    ADD ESP,0x4                         ; 005776d8
    RET                                 ; 005776db

