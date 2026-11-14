; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CChain * __cdecl core_chain_cpp_factoryFuncChain_FUN_005b46f0(void)
;
;
; Called Functions:
;   core_chain.cpp_CChain_ctor_FUN_005b4720
;   crt_memory.c_operator_new_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x578                          ; 005b46f0
        ;   Label: core_chain.cpp_factoryFuncChain_FUN_005b46f0
    CALL crt_memory.c_operator_new_FUN_005b8be2 ; 005b46f5
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005b8be2()
    ADD ESP,0x4                         ; 005b46fa
    TEST EAX,EAX                        ; 005b46fd
    JNZ 0x005b4702                      ; 005b46ff
        ;   XREF to: 005b4702 (CONDITIONAL_JUMP)  ; LAB_005b4702
    RET                                 ; 005b4701
    PUSH EAX                            ; 005b4702
        ;   Label: LAB_005b4702
    CALL core_chain.cpp_CChain_ctor_FUN_005b4720 ; 005b4703
        ;   XREF to: 005b4720 (UNCONDITIONAL_CALL)  ; CChain * core_chain.cpp_CChain_ctor_FUN_005b4720(CChain * this_ptr)
    ADD ESP,0x4                         ; 005b4708
    RET                                 ; 005b470b

