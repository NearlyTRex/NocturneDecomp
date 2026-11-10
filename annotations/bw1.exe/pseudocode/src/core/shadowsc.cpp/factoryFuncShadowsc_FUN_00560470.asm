; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_shadowsc_cpp_factoryFuncShadowsc_FUN_00560470(void)
;
;
; Called Functions:
;   core_shadowsc.cpp_CShadowsc_ctor_FUN_005604a0
;   crt_unknown.c_debugAllocTracked1_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0xc29c                         ; 00560470
        ;   Label: core_shadowsc.cpp_factoryFuncShadowsc_FUN_00560470
    CALL crt_unknown.c_debugAllocTracked1_FUN_005c0f32 ; 00560475
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005c0f32()
    ADD ESP,0x4                         ; 0056047a
    TEST EAX,EAX                        ; 0056047d
    JNZ 0x00560482                      ; 0056047f
        ;   XREF to: 00560482 (CONDITIONAL_JUMP)  ; LAB_00560482
    RET                                 ; 00560481
    PUSH EAX                            ; 00560482
        ;   Label: LAB_00560482
    CALL core_shadowsc.cpp_CShadowsc_ctor_FUN_005604a0 ; 00560483
        ;   XREF to: 005604a0 (UNCONDITIONAL_CALL)  ; CShadowsc * core_shadowsc.cpp_CShadowsc_ctor_FUN_005604a0(CShadowsc * this_ptr)
    ADD ESP,0x4                         ; 00560488
    RET                                 ; 0056048b

