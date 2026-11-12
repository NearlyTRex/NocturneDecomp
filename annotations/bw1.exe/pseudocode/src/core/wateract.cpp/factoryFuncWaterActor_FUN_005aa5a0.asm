; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CWaterActor * __cdecl core_wateract_cpp_factoryFuncWaterActor_FUN_005aa5a0(void)
;
;
; Called Functions:
;   core_wateract.cpp_CWaterActor_ctor_FUN_005aa5d0
;   crt_memory.c_operator_new_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0x2b238                        ; 005aa5a0
        ;   Label: core_wateract.cpp_factoryFuncWaterActor_FUN_005aa5a0
    CALL crt_memory.c_operator_new_FUN_005c0f32 ; 005aa5a5
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005c0f32()
    ADD ESP,0x4                         ; 005aa5aa
    TEST EAX,EAX                        ; 005aa5ad
    JNZ 0x005aa5b2                      ; 005aa5af
        ;   XREF to: 005aa5b2 (CONDITIONAL_JUMP)  ; LAB_005aa5b2
    RET                                 ; 005aa5b1
    PUSH EAX                            ; 005aa5b2
        ;   Label: LAB_005aa5b2
    CALL core_wateract.cpp_CWaterActor_ctor_FUN_005aa5d0 ; 005aa5b3
        ;   XREF to: 005aa5d0 (UNCONDITIONAL_CALL)  ; CWaterActor * core_wateract.cpp_CWaterActor_ctor_FUN_005aa5d0(CWaterActor * this_ptr)
    ADD ESP,0x4                         ; 005aa5b8
    RET                                 ; 005aa5bb

