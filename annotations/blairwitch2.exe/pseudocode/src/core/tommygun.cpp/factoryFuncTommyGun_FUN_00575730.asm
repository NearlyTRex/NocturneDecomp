; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_tommygun_cpp_factoryFuncTommyGun_FUN_00575730(void)
;
;
; Called Functions:
;   core_tommygun.cpp_CTommyGun_ctor_FUN_00575760
;   crt_memory.c_operator_new_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x6e0                          ; 00575730
        ;   Label: core_tommygun.cpp_factoryFuncTommyGun_FUN_00575730
    CALL crt_memory.c_operator_new_FUN_005b8be2 ; 00575735
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005b8be2()
    ADD ESP,0x4                         ; 0057573a
    TEST EAX,EAX                        ; 0057573d
    JNZ 0x00575742                      ; 0057573f
        ;   XREF to: 00575742 (CONDITIONAL_JUMP)  ; LAB_00575742
    RET                                 ; 00575741
    PUSH EAX                            ; 00575742
        ;   Label: LAB_00575742
    CALL core_tommygun.cpp_CTommyGun_ctor_FUN_00575760 ; 00575743
        ;   XREF to: 00575760 (UNCONDITIONAL_CALL)  ; CTommyGun * core_tommygun.cpp_CTommyGun_ctor_FUN_00575760(CTommyGun * this_ptr)
    ADD ESP,0x4                         ; 00575748
    RET                                 ; 0057574b

