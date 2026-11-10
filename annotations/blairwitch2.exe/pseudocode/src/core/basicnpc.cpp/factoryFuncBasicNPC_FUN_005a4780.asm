; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_basicnpc_cpp_factoryFuncBasicNPC_FUN_005a4780(void)
;
;
; Called Functions:
;   core_basicnpc.cpp_CBasicNPC_ctor_FUN_005a47b0
;   crt_unknown.c_debugAllocTracked1_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x11850                        ; 005a4780
        ;   Label: core_basicnpc.cpp_factoryFuncBasicNPC_FUN_005a4780
    CALL crt_unknown.c_debugAllocTracked1_FUN_005b8be2 ; 005a4785
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005b8be2()
    ADD ESP,0x4                         ; 005a478a
    TEST EAX,EAX                        ; 005a478d
    JNZ 0x005a4792                      ; 005a478f
        ;   XREF to: 005a4792 (CONDITIONAL_JUMP)  ; LAB_005a4792
    RET                                 ; 005a4791
    PUSH EAX                            ; 005a4792
        ;   Label: LAB_005a4792
    CALL core_basicnpc.cpp_CBasicNPC_ctor_FUN_005a47b0 ; 005a4793
        ;   XREF to: 005a47b0 (UNCONDITIONAL_CALL)  ; CBasicNPC * core_basicnpc.cpp_CBasicNPC_ctor_FUN_005a47b0(CBasicNPC * this_ptr)
    ADD ESP,0x4                         ; 005a4798
    RET                                 ; 005a479b

