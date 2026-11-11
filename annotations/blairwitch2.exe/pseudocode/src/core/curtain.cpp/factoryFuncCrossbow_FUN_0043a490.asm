; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_curtain_cpp_factoryFuncCrossbow_FUN_0043a490(void)
;
;
; Called Functions:
;   core_crossbow.cpp_CCrossbow_ctor_FUN_0043a4c0
;   crt_memory.c_operator_new_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0xad8                          ; 0043a490
        ;   Label: core_curtain.cpp_factoryFuncCrossbow_FUN_0043a490
    CALL crt_memory.c_operator_new_FUN_005b8be2 ; 0043a495
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005b8be2()
    ADD ESP,0x4                         ; 0043a49a
    TEST EAX,EAX                        ; 0043a49d
    JNZ 0x0043a4a2                      ; 0043a49f
        ;   XREF to: 0043a4a2 (CONDITIONAL_JUMP)  ; LAB_0043a4a2
    RET                                 ; 0043a4a1
    PUSH EAX                            ; 0043a4a2
        ;   Label: LAB_0043a4a2
    CALL core_crossbow.cpp_CCrossbow_ctor_FUN_0043a4c0 ; 0043a4a3
        ;   XREF to: 0043a4c0 (UNCONDITIONAL_CALL)  ; CCrossbow * core_crossbow.cpp_CCrossbow_ctor_FUN_0043a4c0(CCrossbow * this_ptr)
    ADD ESP,0x4                         ; 0043a4a8
    RET                                 ; 0043a4ab

