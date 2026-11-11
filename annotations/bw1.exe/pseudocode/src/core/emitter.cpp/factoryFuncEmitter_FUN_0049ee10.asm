; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_emitter_cpp_factoryFuncEmitter_FUN_0049ee10(void)
;
;
; Called Functions:
;   core_emitter.cpp_CEmitter_ctor_FUN_0049ee40
;   crt_memory.c_operator_new_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0x4c0                          ; 0049ee10
        ;   Label: core_emitter.cpp_factoryFuncEmitter_FUN_0049ee10
    CALL crt_memory.c_operator_new_FUN_005c0f32 ; 0049ee15
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005c0f32()
    ADD ESP,0x4                         ; 0049ee1a
    TEST EAX,EAX                        ; 0049ee1d
    JNZ 0x0049ee22                      ; 0049ee1f
        ;   XREF to: 0049ee22 (CONDITIONAL_JUMP)  ; LAB_0049ee22
    RET                                 ; 0049ee21
    PUSH EAX                            ; 0049ee22
        ;   Label: LAB_0049ee22
    CALL core_emitter.cpp_CEmitter_ctor_FUN_0049ee40 ; 0049ee23
        ;   XREF to: 0049ee40 (UNCONDITIONAL_CALL)  ; CEmitter * core_emitter.cpp_CEmitter_ctor_FUN_0049ee40(CEmitter * this_ptr)
    ADD ESP,0x4                         ; 0049ee28
    RET                                 ; 0049ee2b

