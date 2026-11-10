; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_shotgun_cpp_factoryFuncShadowsc_FUN_00546290(void)
;
;
; Called Functions:
;   core_shotgun.cpp_CShadowsc_ctor_FUN_005462c0
;   crt_unknown.c_debugAllocTracked1_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0xd06c                         ; 00546290
        ;   Label: core_shotgun.cpp_factoryFuncShadowsc_FUN_00546290
    CALL crt_unknown.c_debugAllocTracked1_FUN_005a3cb2 ; 00546295
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005a3cb2()
    ADD ESP,0x4                         ; 0054629a
    TEST EAX,EAX                        ; 0054629d
    JNZ 0x005462a2                      ; 0054629f
        ;   XREF to: 005462a2 (CONDITIONAL_JUMP)  ; LAB_005462a2
    RET                                 ; 005462a1
    PUSH EAX                            ; 005462a2
        ;   Label: LAB_005462a2
    CALL core_shotgun.cpp_CShadowsc_ctor_FUN_005462c0 ; 005462a3
        ;   XREF to: 005462c0 (UNCONDITIONAL_CALL)  ; CShadowsc * core_shotgun.cpp_CShadowsc_ctor_FUN_005462c0(CShadowsc * this_ptr)
    ADD ESP,0x4                         ; 005462a8
    RET                                 ; 005462ab

