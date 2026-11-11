; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_lever_cpp_factoryFuncLever_FUN_004e00d0(void)
;
;
; Called Functions:
;   core_lever.cpp_CLever_ctor_FUN_004e0100
;   crt_memory.c_operator_new_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0x814                          ; 004e00d0
        ;   Label: core_lever.cpp_factoryFuncLever_FUN_004e00d0
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 004e00d5
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 004e00da
    TEST EAX,EAX                        ; 004e00dd
    JNZ 0x004e00e2                      ; 004e00df
        ;   XREF to: 004e00e2 (CONDITIONAL_JUMP)  ; LAB_004e00e2
    RET                                 ; 004e00e1
    PUSH EAX                            ; 004e00e2
        ;   Label: LAB_004e00e2
    CALL core_lever.cpp_CLever_ctor_FUN_004e0100 ; 004e00e3
        ;   XREF to: 004e0100 (UNCONDITIONAL_CALL)  ; CLever * core_lever.cpp_CLever_ctor_FUN_004e0100(CLever * this_ptr)
    ADD ESP,0x4                         ; 004e00e8
    RET                                 ; 004e00eb

