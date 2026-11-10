; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_emitter_cpp_factoryFuncEmitter_FUN_004879b0(void)
;
;
; Called Functions:
;   core_emitter.cpp_CEmitter_ctor_FUN_004879e0
;   crt_unknown.c_debugAllocTracked1_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0x4c0                          ; 004879b0
        ;   Label: core_emitter.cpp_factoryFuncEmitter_FUN_004879b0
    CALL crt_unknown.c_debugAllocTracked1_FUN_005a3cb2 ; 004879b5
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005a3cb2()
    ADD ESP,0x4                         ; 004879ba
    TEST EAX,EAX                        ; 004879bd
    JNZ 0x004879c2                      ; 004879bf
        ;   XREF to: 004879c2 (CONDITIONAL_JUMP)  ; LAB_004879c2
    RET                                 ; 004879c1
    PUSH EAX                            ; 004879c2
        ;   Label: LAB_004879c2
    CALL core_emitter.cpp_CEmitter_ctor_FUN_004879e0 ; 004879c3
        ;   XREF to: 004879e0 (UNCONDITIONAL_CALL)  ; CEmitter * core_emitter.cpp_CEmitter_ctor_FUN_004879e0(CEmitter * this_ptr)
    ADD ESP,0x4                         ; 004879c8
    RET                                 ; 004879cb

