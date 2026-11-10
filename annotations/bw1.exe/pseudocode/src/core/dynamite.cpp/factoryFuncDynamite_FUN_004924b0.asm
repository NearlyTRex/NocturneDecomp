; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dynamite_cpp_factoryFuncDynamite_FUN_004924b0(void)
;
;
; Called Functions:
;   core_dynamite.cpp_CDynamite_ctor_FUN_004924e0
;   crt_unknown.c_debugAllocTracked1_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0x58c                          ; 004924b0
        ;   Label: core_dynamite.cpp_factoryFuncDynamite_FUN_004924b0
    CALL crt_unknown.c_debugAllocTracked1_FUN_005c0f32 ; 004924b5
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005c0f32()
    ADD ESP,0x4                         ; 004924ba
    TEST EAX,EAX                        ; 004924bd
    JNZ 0x004924c2                      ; 004924bf
        ;   XREF to: 004924c2 (CONDITIONAL_JUMP)  ; LAB_004924c2
    RET                                 ; 004924c1
    PUSH EAX                            ; 004924c2
        ;   Label: LAB_004924c2
    CALL core_dynamite.cpp_CDynamite_ctor_FUN_004924e0 ; 004924c3
        ;   XREF to: 004924e0 (UNCONDITIONAL_CALL)  ; CDynamite * core_dynamite.cpp_CDynamite_ctor_FUN_004924e0(CDynamite * this_ptr)
    ADD ESP,0x4                         ; 004924c8
    RET                                 ; 004924cb

