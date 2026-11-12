; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_hpbox_cpp_factoryFuncParticleBox_FUN_005ac770(void)
;
;
; Called Functions:
;   core_hpbox.cpp_CParticleBox_ctor_FUN_005ac7a0
;   crt_memory.c_operator_new_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x7d8                          ; 005ac770
        ;   Label: core_hpbox.cpp_factoryFuncParticleBox_FUN_005ac770
    CALL crt_memory.c_operator_new_FUN_005b8be2 ; 005ac775
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005b8be2()
    ADD ESP,0x4                         ; 005ac77a
    TEST EAX,EAX                        ; 005ac77d
    JNZ 0x005ac782                      ; 005ac77f
        ;   XREF to: 005ac782 (CONDITIONAL_JUMP)  ; LAB_005ac782
    RET                                 ; 005ac781
    PUSH EAX                            ; 005ac782
        ;   Label: LAB_005ac782
    CALL core_hpbox.cpp_CParticleBox_ctor_FUN_005ac7a0 ; 005ac783
        ;   XREF to: 005ac7a0 (UNCONDITIONAL_CALL)  ; CParticleBox * core_hpbox.cpp_CParticleBox_ctor_FUN_005ac7a0(CParticleBox * this_ptr)
    ADD ESP,0x4                         ; 005ac788
    RET                                 ; 005ac78b

