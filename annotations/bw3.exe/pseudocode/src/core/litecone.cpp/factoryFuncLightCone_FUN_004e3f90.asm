; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_litecone_cpp_factoryFuncLightCone_FUN_004e3f90(void)
;
;
; Called Functions:
;   core_litecone.cpp_CLightCone_ctor_FUN_004e3fc0
;   crt_unknown.c_debugAllocTracked1_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0x22c                          ; 004e3f90
        ;   Label: core_litecone.cpp_factoryFuncLightCone_FUN_004e3f90
    CALL crt_unknown.c_debugAllocTracked1_FUN_005a3cb2 ; 004e3f95
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005a3cb2()
    ADD ESP,0x4                         ; 004e3f9a
    TEST EAX,EAX                        ; 004e3f9d
    JNZ 0x004e3fa2                      ; 004e3f9f
        ;   XREF to: 004e3fa2 (CONDITIONAL_JUMP)  ; LAB_004e3fa2
    RET                                 ; 004e3fa1
    PUSH EAX                            ; 004e3fa2
        ;   Label: LAB_004e3fa2
    CALL core_litecone.cpp_CLightCone_ctor_FUN_004e3fc0 ; 004e3fa3
        ;   XREF to: 004e3fc0 (UNCONDITIONAL_CALL)  ; CLightCone * core_litecone.cpp_CLightCone_ctor_FUN_004e3fc0(CLightCone * this_ptr)
    ADD ESP,0x4                         ; 004e3fa8
    RET                                 ; 004e3fab

