; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_chain_cpp_FUN_0042b720(void)
;
;
; Called Functions:
;   core_chain.cpp_CChain_ctor_FUN_0042b750
;   crt_unknown.c_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x570                          ; 0042b720
        ;   Label: core_chain.cpp_FUN_0042b720
    CALL crt_unknown.c_FUN_0056497c     ; 0042b725
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056497c()
    ADD ESP,0x4                         ; 0042b72a
    TEST EAX,EAX                        ; 0042b72d
    JNZ 0x0042b732                      ; 0042b72f
        ;   XREF to: 0042b732 (CONDITIONAL_JUMP)  ; LAB_0042b732
    RET                                 ; 0042b731
    PUSH EAX                            ; 0042b732
        ;   Label: LAB_0042b732
    CALL core_chain.cpp_CChain_ctor_FUN_0042b750 ; 0042b733
        ;   XREF to: 0042b750 (UNCONDITIONAL_CALL)  ; undefined core_chain.cpp_CChain_ctor_FUN_0042b750()
    ADD ESP,0x4                         ; 0042b738
    RET                                 ; 0042b73b

