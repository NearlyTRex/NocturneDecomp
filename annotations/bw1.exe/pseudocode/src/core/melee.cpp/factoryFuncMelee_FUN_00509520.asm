; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_melee_cpp_factoryFuncMelee_FUN_00509520(void)
;
;
; Called Functions:
;   core_melee.cpp_CMelee_ctor_FUN_00509550
;   crt_unknown.c_debugAllocTracked1_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0x6cc                          ; 00509520
        ;   Label: core_melee.cpp_factoryFuncMelee_FUN_00509520
    CALL crt_unknown.c_debugAllocTracked1_FUN_005c0f32 ; 00509525
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005c0f32()
    ADD ESP,0x4                         ; 0050952a
    TEST EAX,EAX                        ; 0050952d
    JNZ 0x00509532                      ; 0050952f
        ;   XREF to: 00509532 (CONDITIONAL_JUMP)  ; LAB_00509532
    RET                                 ; 00509531
    PUSH EAX                            ; 00509532
        ;   Label: LAB_00509532
    CALL core_melee.cpp_CMelee_ctor_FUN_00509550 ; 00509533
        ;   XREF to: 00509550 (UNCONDITIONAL_CALL)  ; CMelee * core_melee.cpp_CMelee_ctor_FUN_00509550(CMelee * this_ptr)
    ADD ESP,0x4                         ; 00509538
    RET                                 ; 0050953b

