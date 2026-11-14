; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CImp * __cdecl core_imp_cpp_factoryFuncImp_FUN_004d66d0(void)
;
;
; Called Functions:
;   core_imp.cpp_CImp_ctor_FUN_004d6700
;   crt_memory.c_operator_new_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0xd08c                         ; 004d66d0
        ;   Label: core_imp.cpp_factoryFuncImp_FUN_004d66d0
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 004d66d5
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 004d66da
    TEST EAX,EAX                        ; 004d66dd
    JNZ 0x004d66e2                      ; 004d66df
        ;   XREF to: 004d66e2 (CONDITIONAL_JUMP)  ; LAB_004d66e2
    RET                                 ; 004d66e1
    PUSH EAX                            ; 004d66e2
        ;   Label: LAB_004d66e2
    CALL core_imp.cpp_CImp_ctor_FUN_004d6700 ; 004d66e3
        ;   XREF to: 004d6700 (UNCONDITIONAL_CALL)  ; CImp * core_imp.cpp_CImp_ctor_FUN_004d6700(CImp * this_ptr)
    ADD ESP,0x4                         ; 004d66e8
    RET                                 ; 004d66eb

