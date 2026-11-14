; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CCurtain * __cdecl core_curtain_cpp_factoryFuncCurtain_FUN_0044a1e0(void)
;
;
; Called Functions:
;   core_curtain.cpp_CCurtain_ctor_FUN_0044a210
;   crt_memory.c_operator_new_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0x65b38                        ; 0044a1e0
        ;   Label: core_curtain.cpp_factoryFuncCurtain_FUN_0044a1e0
    CALL crt_memory.c_operator_new_FUN_005c0f32 ; 0044a1e5
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005c0f32()
    ADD ESP,0x4                         ; 0044a1ea
    TEST EAX,EAX                        ; 0044a1ed
    JNZ 0x0044a1f2                      ; 0044a1ef
        ;   XREF to: 0044a1f2 (CONDITIONAL_JUMP)  ; LAB_0044a1f2
    RET                                 ; 0044a1f1
    PUSH EAX                            ; 0044a1f2
        ;   Label: LAB_0044a1f2
    CALL core_curtain.cpp_CCurtain_ctor_FUN_0044a210 ; 0044a1f3
        ;   XREF to: 0044a210 (UNCONDITIONAL_CALL)  ; CCurtain * core_curtain.cpp_CCurtain_ctor_FUN_0044a210(CCurtain * this_ptr)
    ADD ESP,0x4                         ; 0044a1f8
    RET                                 ; 0044a1fb

