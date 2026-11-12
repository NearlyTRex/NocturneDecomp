; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_cross_cpp_FUN_005a7950(void)
;
;
; Called Functions:
;   core_cross.cpp_CSimpleCross_ctor_FUN_005a7980
;   crt_memory.c_operator_new_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x828                          ; 005a7950
        ;   Label: core_cross.cpp_FUN_005a7950
    CALL crt_memory.c_operator_new_FUN_005b8be2 ; 005a7955
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005b8be2()
    ADD ESP,0x4                         ; 005a795a
    TEST EAX,EAX                        ; 005a795d
    JNZ 0x005a7962                      ; 005a795f
        ;   XREF to: 005a7962 (CONDITIONAL_JUMP)  ; LAB_005a7962
    RET                                 ; 005a7961
    PUSH EAX                            ; 005a7962
        ;   Label: LAB_005a7962
    CALL core_cross.cpp_CSimpleCross_ctor_FUN_005a7980 ; 005a7963
        ;   XREF to: 005a7980 (UNCONDITIONAL_CALL)  ; CSimpleCross * core_cross.cpp_CSimpleCross_ctor_FUN_005a7980(CSimpleCross * this_ptr)
    ADD ESP,0x4                         ; 005a7968
    RET                                 ; 005a796b

