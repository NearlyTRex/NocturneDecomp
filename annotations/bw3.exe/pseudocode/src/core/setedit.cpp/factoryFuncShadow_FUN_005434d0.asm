; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_setedit_cpp_factoryFuncShadow_FUN_005434d0(void)
;
;
; Called Functions:
;   core_shadow.cpp_CShadow_ctor_FUN_00543500
;   crt_unknown.c_debugAllocTracked1_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0xd0e8                         ; 005434d0
        ;   Label: core_setedit.cpp_factoryFuncShadow_FUN_005434d0
    CALL crt_unknown.c_debugAllocTracked1_FUN_005a3cb2 ; 005434d5
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005a3cb2()
    ADD ESP,0x4                         ; 005434da
    TEST EAX,EAX                        ; 005434dd
    JNZ 0x005434e2                      ; 005434df
        ;   XREF to: 005434e2 (CONDITIONAL_JUMP)  ; LAB_005434e2
    RET                                 ; 005434e1
    PUSH EAX                            ; 005434e2
        ;   Label: LAB_005434e2
    CALL core_shadow.cpp_CShadow_ctor_FUN_00543500 ; 005434e3
        ;   XREF to: 00543500 (UNCONDITIONAL_CALL)  ; CShadow * core_shadow.cpp_CShadow_ctor_FUN_00543500(CShadow * this_ptr)
    ADD ESP,0x4                         ; 005434e8
    RET                                 ; 005434eb

