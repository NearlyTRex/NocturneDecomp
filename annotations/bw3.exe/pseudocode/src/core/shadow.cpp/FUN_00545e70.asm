; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_shadow_cpp_FUN_00545e70(void)
;
;
; Called Functions:
;   core_shadow.cpp_CShadowForest_ctor_FUN_00545ea0
;   crt_unknown.c_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0xd0e8                         ; 00545e70
        ;   Label: core_shadow.cpp_FUN_00545e70
    CALL crt_unknown.c_FUN_005a3cb2     ; 00545e75
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3cb2()
    ADD ESP,0x4                         ; 00545e7a
    TEST EAX,EAX                        ; 00545e7d
    JNZ 0x00545e82                      ; 00545e7f
        ;   XREF to: 00545e82 (CONDITIONAL_JUMP)  ; LAB_00545e82
    RET                                 ; 00545e81
    PUSH EAX                            ; 00545e82
        ;   Label: LAB_00545e82
    CALL core_shadow.cpp_CShadowForest_ctor_FUN_00545ea0 ; 00545e83
        ;   XREF to: 00545ea0 (UNCONDITIONAL_CALL)  ; CShadowForest * core_shadow.cpp_CShadowForest_ctor_FUN_00545ea0(CShadowForest * this_ptr)
    ADD ESP,0x4                         ; 00545e88
    RET                                 ; 00545e8b

