; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_moloch_cpp_factoryFuncMoloch_FUN_00501310(void)
;
;
; Called Functions:
;   core_moloch.cpp_CMoloch_ctor_FUN_00501340
;   crt_unknown.c_debugAllocTracked1_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x28604                        ; 00501310
        ;   Label: core_moloch.cpp_factoryFuncMoloch_FUN_00501310
    CALL crt_unknown.c_debugAllocTracked1_FUN_005b8be2 ; 00501315
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005b8be2()
    ADD ESP,0x4                         ; 0050131a
    TEST EAX,EAX                        ; 0050131d
    JNZ 0x00501322                      ; 0050131f
        ;   XREF to: 00501322 (CONDITIONAL_JUMP)  ; LAB_00501322
    RET                                 ; 00501321
    PUSH EAX                            ; 00501322
        ;   Label: LAB_00501322
    CALL core_moloch.cpp_CMoloch_ctor_FUN_00501340 ; 00501323
        ;   XREF to: 00501340 (UNCONDITIONAL_CALL)  ; CMoloch * core_moloch.cpp_CMoloch_ctor_FUN_00501340(CMoloch * this_ptr)
    ADD ESP,0x4                         ; 00501328
    RET                                 ; 0050132b

