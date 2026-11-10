; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_platfrm_cpp_factoryFuncPlatform_FUN_005393d0(void)
;
;
; Called Functions:
;   core_platfrm.cpp_CPlatform_ctor_FUN_00539400
;   crt_unknown.c_debugAllocTracked1_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0x728                          ; 005393d0
        ;   Label: core_platfrm.cpp_factoryFuncPlatform_FUN_005393d0
    CALL crt_unknown.c_debugAllocTracked1_FUN_005c0f32 ; 005393d5
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005c0f32()
    ADD ESP,0x4                         ; 005393da
    TEST EAX,EAX                        ; 005393dd
    JNZ 0x005393e2                      ; 005393df
        ;   XREF to: 005393e2 (CONDITIONAL_JUMP)  ; LAB_005393e2
    RET                                 ; 005393e1
    PUSH EAX                            ; 005393e2
        ;   Label: LAB_005393e2
    CALL core_platfrm.cpp_CPlatform_ctor_FUN_00539400 ; 005393e3
        ;   XREF to: 00539400 (UNCONDITIONAL_CALL)  ; CPlatform * core_platfrm.cpp_CPlatform_ctor_FUN_00539400(CPlatform * this_ptr)
    ADD ESP,0x4                         ; 005393e8
    RET                                 ; 005393eb

