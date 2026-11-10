; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_shadow_cpp_FUN_00545f00(void)
;
;
; Called Functions:
;   core_shadow.cpp_CSpiritShadow_ctor_FUN_00545f30
;   crt_unknown.c_debugAllocTracked1_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0xd0e8                         ; 00545f00
        ;   Label: core_shadow.cpp_FUN_00545f00
    CALL crt_unknown.c_debugAllocTracked1_FUN_005a3cb2 ; 00545f05
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005a3cb2()
    ADD ESP,0x4                         ; 00545f0a
    TEST EAX,EAX                        ; 00545f0d
    JNZ 0x00545f12                      ; 00545f0f
        ;   XREF to: 00545f12 (CONDITIONAL_JUMP)  ; LAB_00545f12
    RET                                 ; 00545f11
    PUSH EAX                            ; 00545f12
        ;   Label: LAB_00545f12
    CALL core_shadow.cpp_CSpiritShadow_ctor_FUN_00545f30 ; 00545f13
        ;   XREF to: 00545f30 (UNCONDITIONAL_CALL)  ; CSpiritShadow * core_shadow.cpp_CSpiritShadow_ctor_FUN_00545f30(CSpiritShadow * this_ptr)
    ADD ESP,0x4                         ; 00545f18
    RET                                 ; 00545f1b

