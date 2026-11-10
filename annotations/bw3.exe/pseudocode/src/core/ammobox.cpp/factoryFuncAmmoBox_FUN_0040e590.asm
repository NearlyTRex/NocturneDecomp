; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_ammobox_cpp_factoryFuncAmmoBox_FUN_0040e590(void)
;
;
; Called Functions:
;   core_ammobox.cpp_CAmmoBox_ctor_FUN_0040e5c0
;   crt_unknown.c_debugAllocTracked1_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0x34c                          ; 0040e590
        ;   Label: core_ammobox.cpp_factoryFuncAmmoBox_FUN_0040e590
    CALL crt_unknown.c_debugAllocTracked1_FUN_005a3cb2 ; 0040e595
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005a3cb2()
    ADD ESP,0x4                         ; 0040e59a
    TEST EAX,EAX                        ; 0040e59d
    JNZ 0x0040e5a2                      ; 0040e59f
        ;   XREF to: 0040e5a2 (CONDITIONAL_JUMP)  ; LAB_0040e5a2
    RET                                 ; 0040e5a1
    PUSH EAX                            ; 0040e5a2
        ;   Label: LAB_0040e5a2
    CALL core_ammobox.cpp_CAmmoBox_ctor_FUN_0040e5c0 ; 0040e5a3
        ;   XREF to: 0040e5c0 (UNCONDITIONAL_CALL)  ; CAmmoBox * core_ammobox.cpp_CAmmoBox_ctor_FUN_0040e5c0(CAmmoBox * this_ptr)
    ADD ESP,0x4                         ; 0040e5a8
    RET                                 ; 0040e5ab

