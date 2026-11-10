; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_emitter_cpp_factoryFuncEmitter_FUN_004867b0(void)
;
;
; Called Functions:
;   core_emitter.cpp_CEmitter_ctor_FUN_004867e0
;   crt_unknown.c_debugAllocTracked1_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x61c                          ; 004867b0
        ;   Label: core_emitter.cpp_factoryFuncEmitter_FUN_004867b0
    CALL crt_unknown.c_debugAllocTracked1_FUN_005b8be2 ; 004867b5
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005b8be2()
    ADD ESP,0x4                         ; 004867ba
    TEST EAX,EAX                        ; 004867bd
    JNZ 0x004867c2                      ; 004867bf
        ;   XREF to: 004867c2 (CONDITIONAL_JUMP)  ; LAB_004867c2
    RET                                 ; 004867c1
    PUSH EAX                            ; 004867c2
        ;   Label: LAB_004867c2
    CALL core_emitter.cpp_CEmitter_ctor_FUN_004867e0 ; 004867c3
        ;   XREF to: 004867e0 (UNCONDITIONAL_CALL)  ; CEmitter * core_emitter.cpp_CEmitter_ctor_FUN_004867e0(CEmitter * this_ptr)
    ADD ESP,0x4                         ; 004867c8
    RET                                 ; 004867cb

