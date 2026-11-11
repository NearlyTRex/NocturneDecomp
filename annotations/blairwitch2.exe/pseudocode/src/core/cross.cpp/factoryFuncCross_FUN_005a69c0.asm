; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_cross_cpp_factoryFuncCross_FUN_005a69c0(void)
;
;
; Called Functions:
;   crt_memory.c_operator_new_FUN_005b8be2
;   unkafter_cross.cpp_CCross_ctor_FUN_005a69f0
;
; *****************************************************************************

section .text

    PUSH 0x848                          ; 005a69c0
        ;   Label: core_cross.cpp_factoryFuncCross_FUN_005a69c0
    CALL crt_memory.c_operator_new_FUN_005b8be2 ; 005a69c5
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005b8be2()
    ADD ESP,0x4                         ; 005a69ca
    TEST EAX,EAX                        ; 005a69cd
    JNZ 0x005a69d2                      ; 005a69cf
        ;   XREF to: 005a69d2 (CONDITIONAL_JUMP)  ; LAB_005a69d2
    RET                                 ; 005a69d1
    PUSH EAX                            ; 005a69d2
        ;   Label: LAB_005a69d2
    CALL unkafter_cross.cpp_CCross_ctor_FUN_005a69f0 ; 005a69d3
        ;   XREF to: 005a69f0 (UNCONDITIONAL_CALL)  ; CCross * unkafter_cross.cpp_CCross_ctor_FUN_005a69f0(CCross * this_ptr)
    ADD ESP,0x4                         ; 005a69d8
    RET                                 ; 005a69db

