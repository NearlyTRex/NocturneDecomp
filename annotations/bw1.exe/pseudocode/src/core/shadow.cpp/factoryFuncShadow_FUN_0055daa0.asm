; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_shadow_cpp_factoryFuncShadow_FUN_0055daa0(void)
;
;
; Called Functions:
;   core_shadow.cpp_CShadow_ctor_FUN_0055dad0
;   crt_unknown.c_debugAllocTracked1_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0xc314                         ; 0055daa0
        ;   Label: core_shadow.cpp_factoryFuncShadow_FUN_0055daa0
    CALL crt_unknown.c_debugAllocTracked1_FUN_005c0f32 ; 0055daa5
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005c0f32()
    ADD ESP,0x4                         ; 0055daaa
    TEST EAX,EAX                        ; 0055daad
    JNZ 0x0055dab2                      ; 0055daaf
        ;   XREF to: 0055dab2 (CONDITIONAL_JUMP)  ; LAB_0055dab2
    RET                                 ; 0055dab1
    PUSH EAX                            ; 0055dab2
        ;   Label: LAB_0055dab2
    CALL core_shadow.cpp_CShadow_ctor_FUN_0055dad0 ; 0055dab3
        ;   XREF to: 0055dad0 (UNCONDITIONAL_CALL)  ; CShadow * core_shadow.cpp_CShadow_ctor_FUN_0055dad0(CShadow * this_ptr)
    ADD ESP,0x4                         ; 0055dab8
    RET                                 ; 0055dabb

