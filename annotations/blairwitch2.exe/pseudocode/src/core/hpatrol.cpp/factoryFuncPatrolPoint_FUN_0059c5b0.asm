; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPatrolPoint * __cdecl core_hpatrol_cpp_factoryFuncPatrolPoint_FUN_0059c5b0(void)
;
;
; Called Functions:
;   core_hpatrol.cpp_CPatrolPoint_ctor_FUN_0059c5e0
;   crt_memory.c_operator_new_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x6bc                          ; 0059c5b0
        ;   Label: core_hpatrol.cpp_factoryFuncPatrolPoint_FUN_0059c5b0
    CALL crt_memory.c_operator_new_FUN_005b8be2 ; 0059c5b5
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005b8be2()
    ADD ESP,0x4                         ; 0059c5ba
    TEST EAX,EAX                        ; 0059c5bd
    JNZ 0x0059c5c2                      ; 0059c5bf
        ;   XREF to: 0059c5c2 (CONDITIONAL_JUMP)  ; LAB_0059c5c2
    RET                                 ; 0059c5c1
    PUSH EAX                            ; 0059c5c2
        ;   Label: LAB_0059c5c2
    CALL core_hpatrol.cpp_CPatrolPoint_ctor_FUN_0059c5e0 ; 0059c5c3
        ;   XREF to: 0059c5e0 (UNCONDITIONAL_CALL)  ; CPatrolPoint * core_hpatrol.cpp_CPatrolPoint_ctor_FUN_0059c5e0(CPatrolPoint * this_ptr)
    ADD ESP,0x4                         ; 0059c5c8
    RET                                 ; 0059c5cb

