; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_ammobox_cpp_factoryFuncAmmoBox_FUN_0040e4e0(void)
;
;
; Called Functions:
;   core_ammobox.cpp_CAmmoBox_ctor_FUN_0040e510
;   crt_unknown.c_debugAllocTracked1_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x4a8                          ; 0040e4e0
        ;   Label: core_ammobox.cpp_factoryFuncAmmoBox_FUN_0040e4e0
    CALL crt_unknown.c_debugAllocTracked1_FUN_005b8be2 ; 0040e4e5
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005b8be2()
    ADD ESP,0x4                         ; 0040e4ea
    TEST EAX,EAX                        ; 0040e4ed
    JNZ 0x0040e4f2                      ; 0040e4ef
        ;   XREF to: 0040e4f2 (CONDITIONAL_JUMP)  ; LAB_0040e4f2
    RET                                 ; 0040e4f1
    PUSH EAX                            ; 0040e4f2
        ;   Label: LAB_0040e4f2
    CALL core_ammobox.cpp_CAmmoBox_ctor_FUN_0040e510 ; 0040e4f3
        ;   XREF to: 0040e510 (UNCONDITIONAL_CALL)  ; CAmmoBox * core_ammobox.cpp_CAmmoBox_ctor_FUN_0040e510(CAmmoBox * this_ptr)
    ADD ESP,0x4                         ; 0040e4f8
    RET                                 ; 0040e4fb

