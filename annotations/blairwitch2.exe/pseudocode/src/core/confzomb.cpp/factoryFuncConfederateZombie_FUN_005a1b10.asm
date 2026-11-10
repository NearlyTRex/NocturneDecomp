; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_confzomb_cpp_factoryFuncConfederateZombie_FUN_005a1b10(void)
;
;
; Called Functions:
;   core_confzomb.cpp_CConfederateZombie_ctor_FUN_005a1b40
;   crt_unknown.c_debugAllocTracked1_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x11858                        ; 005a1b10
        ;   Label: core_confzomb.cpp_factoryFuncConfederateZombie_FUN_005a1b10
    CALL crt_unknown.c_debugAllocTracked1_FUN_005b8be2 ; 005a1b15
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005b8be2()
    ADD ESP,0x4                         ; 005a1b1a
    TEST EAX,EAX                        ; 005a1b1d
    JNZ 0x005a1b22                      ; 005a1b1f
        ;   XREF to: 005a1b22 (CONDITIONAL_JUMP)  ; LAB_005a1b22
    RET                                 ; 005a1b21
    PUSH EAX                            ; 005a1b22
        ;   Label: LAB_005a1b22
    CALL core_confzomb.cpp_CConfederateZombie_ctor_FUN_005a1b40 ; 005a1b23
        ;   XREF to: 005a1b40 (UNCONDITIONAL_CALL)  ; CConfederateZombie * core_confzomb.cpp_CConfederateZombie_ctor_FUN_005a1b40(CConfederateZombie * this_ptr)
    ADD ESP,0x4                         ; 005a1b28
    RET                                 ; 005a1b2b

