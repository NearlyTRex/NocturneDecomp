; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CConstruct * __cdecl core_construc_cpp_factoryFuncConstruct_FUN_004423f0(void)
;
;
; Called Functions:
;   core_construc.cpp_CConstruct_ctor_FUN_00442420
;   crt_memory.c_operator_new_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0xd860                         ; 004423f0
        ;   Label: core_construc.cpp_factoryFuncConstruct_FUN_004423f0
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 004423f5
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 004423fa
    TEST EAX,EAX                        ; 004423fd
    JNZ 0x00442402                      ; 004423ff
        ;   XREF to: 00442402 (CONDITIONAL_JUMP)  ; LAB_00442402
    RET                                 ; 00442401
    PUSH EAX                            ; 00442402
        ;   Label: LAB_00442402
    CALL core_construc.cpp_CConstruct_ctor_FUN_00442420 ; 00442403
        ;   XREF to: 00442420 (UNCONDITIONAL_CALL)  ; CConstruct * core_construc.cpp_CConstruct_ctor_FUN_00442420(CConstruct * this_ptr)
    ADD ESP,0x4                         ; 00442408
    RET                                 ; 0044240b

