; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_baron_cpp_factoryFuncBaron_FUN_0040f1e0(void)
;
;
; Called Functions:
;   core_baron.cpp_CBaron_ctor_FUN_0040f210
;   crt_unknown.c_debugAllocTracked1_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0x200ac                        ; 0040f1e0
        ;   Label: core_baron.cpp_factoryFuncBaron_FUN_0040f1e0
    CALL crt_unknown.c_debugAllocTracked1_FUN_005c0f32 ; 0040f1e5
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005c0f32()
    ADD ESP,0x4                         ; 0040f1ea
    TEST EAX,EAX                        ; 0040f1ed
    JNZ 0x0040f1f2                      ; 0040f1ef
        ;   XREF to: 0040f1f2 (CONDITIONAL_JUMP)  ; LAB_0040f1f2
    RET                                 ; 0040f1f1
    PUSH EAX                            ; 0040f1f2
        ;   Label: LAB_0040f1f2
    CALL core_baron.cpp_CBaron_ctor_FUN_0040f210 ; 0040f1f3
        ;   XREF to: 0040f210 (UNCONDITIONAL_CALL)  ; CBaron * core_baron.cpp_CBaron_ctor_FUN_0040f210(CBaron * this_ptr)
    ADD ESP,0x4                         ; 0040f1f8
    RET                                 ; 0040f1fb

