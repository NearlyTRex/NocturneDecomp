; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_spirindi_cpp_factoryFuncSpiritIndian_FUN_00599f30(void)
;
;
; Called Functions:
;   core_spirindi.cpp_CSpiritIndian_ctor_FUN_00599f60
;   crt_unknown.c_debugAllocTracked1_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0x34da4                        ; 00599f30
        ;   Label: core_spirindi.cpp_factoryFuncSpiritIndian_FUN_00599f30
    CALL crt_unknown.c_debugAllocTracked1_FUN_005a3cb2 ; 00599f35
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005a3cb2()
    ADD ESP,0x4                         ; 00599f3a
    TEST EAX,EAX                        ; 00599f3d
    JNZ 0x00599f42                      ; 00599f3f
        ;   XREF to: 00599f42 (CONDITIONAL_JUMP)  ; LAB_00599f42
    RET                                 ; 00599f41
    PUSH EAX                            ; 00599f42
        ;   Label: LAB_00599f42
    CALL core_spirindi.cpp_CSpiritIndian_ctor_FUN_00599f60 ; 00599f43
        ;   XREF to: 00599f60 (UNCONDITIONAL_CALL)  ; CSpiritIndian * core_spirindi.cpp_CSpiritIndian_ctor_FUN_00599f60(CSpiritIndian * this_ptr)
    ADD ESP,0x4                         ; 00599f48
    RET                                 ; 00599f4b

