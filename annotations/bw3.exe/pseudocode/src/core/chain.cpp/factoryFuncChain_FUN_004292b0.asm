; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_chain_cpp_factoryFuncChain_FUN_004292b0(void)
;
;
; Called Functions:
;   core_chain.cpp_CChain_ctor_FUN_004292e0
;   crt_unknown.c_debugAllocTracked1_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0x578                          ; 004292b0
        ;   Label: core_chain.cpp_factoryFuncChain_FUN_004292b0
    CALL crt_unknown.c_debugAllocTracked1_FUN_005a3cb2 ; 004292b5
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005a3cb2()
    ADD ESP,0x4                         ; 004292ba
    TEST EAX,EAX                        ; 004292bd
    JNZ 0x004292c2                      ; 004292bf
        ;   XREF to: 004292c2 (CONDITIONAL_JUMP)  ; LAB_004292c2
    RET                                 ; 004292c1
    PUSH EAX                            ; 004292c2
        ;   Label: LAB_004292c2
    CALL core_chain.cpp_CChain_ctor_FUN_004292e0 ; 004292c3
        ;   XREF to: 004292e0 (UNCONDITIONAL_CALL)  ; CChain * core_chain.cpp_CChain_ctor_FUN_004292e0(CChain * this_ptr)
    ADD ESP,0x4                         ; 004292c8
    RET                                 ; 004292cb

