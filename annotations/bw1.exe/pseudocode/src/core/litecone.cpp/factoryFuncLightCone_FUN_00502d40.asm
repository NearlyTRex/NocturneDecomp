; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_litecone_cpp_factoryFuncLightCone_FUN_00502d40(void)
;
;
; Called Functions:
;   core_litecone.cpp_CLightCone_ctor_FUN_00502d70
;   crt_unknown.c_debugAllocTracked1_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0x22c                          ; 00502d40
        ;   Label: core_litecone.cpp_factoryFuncLightCone_FUN_00502d40
    CALL crt_unknown.c_debugAllocTracked1_FUN_005c0f32 ; 00502d45
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005c0f32()
    ADD ESP,0x4                         ; 00502d4a
    TEST EAX,EAX                        ; 00502d4d
    JNZ 0x00502d52                      ; 00502d4f
        ;   XREF to: 00502d52 (CONDITIONAL_JUMP)  ; LAB_00502d52
    RET                                 ; 00502d51
    PUSH EAX                            ; 00502d52
        ;   Label: LAB_00502d52
    CALL core_litecone.cpp_CLightCone_ctor_FUN_00502d70 ; 00502d53
        ;   XREF to: 00502d70 (UNCONDITIONAL_CALL)  ; CLightCone * core_litecone.cpp_CLightCone_ctor_FUN_00502d70(CLightCone * this_ptr)
    ADD ESP,0x4                         ; 00502d58
    RET                                 ; 00502d5b

