; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_carved_cpp_factoryFuncCarved_FUN_00425930(void)
;
;
; Called Functions:
;   core_carved.cpp_CCarved_ctor_FUN_00425960
;   crt_memory.c_operator_new_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0xd0dc                         ; 00425930
        ;   Label: core_carved.cpp_factoryFuncCarved_FUN_00425930
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 00425935
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 0042593a
    TEST EAX,EAX                        ; 0042593d
    JNZ 0x00425942                      ; 0042593f
        ;   XREF to: 00425942 (CONDITIONAL_JUMP)  ; LAB_00425942
    RET                                 ; 00425941
    PUSH EAX                            ; 00425942
        ;   Label: LAB_00425942
    CALL core_carved.cpp_CCarved_ctor_FUN_00425960 ; 00425943
        ;   XREF to: 00425960 (UNCONDITIONAL_CALL)  ; CCarved * core_carved.cpp_CCarved_ctor_FUN_00425960(CCarved * this_ptr)
    ADD ESP,0x4                         ; 00425948
    RET                                 ; 0042594b

