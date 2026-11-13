; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CLightPis * __cdecl core_lightpis_cpp_factoryFuncLightPis_FUN_005015e0(void)
;
;
; Called Functions:
;   core_lightpis.cpp_CLightPis_ctor_FUN_00501610
;   crt_memory.c_operator_new_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0x598                          ; 005015e0
        ;   Label: core_lightpis.cpp_factoryFuncLightPis_FUN_005015e0
    CALL crt_memory.c_operator_new_FUN_005c0f32 ; 005015e5
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005c0f32()
    ADD ESP,0x4                         ; 005015ea
    TEST EAX,EAX                        ; 005015ed
    JNZ 0x005015f2                      ; 005015ef
        ;   XREF to: 005015f2 (CONDITIONAL_JUMP)  ; LAB_005015f2
    RET                                 ; 005015f1
    PUSH EAX                            ; 005015f2
        ;   Label: LAB_005015f2
    CALL core_lightpis.cpp_CLightPis_ctor_FUN_00501610 ; 005015f3
        ;   XREF to: 00501610 (UNCONDITIONAL_CALL)  ; CLightPis * core_lightpis.cpp_CLightPis_ctor_FUN_00501610(CLightPis * this_ptr)
    ADD ESP,0x4                         ; 005015f8
    RET                                 ; 005015fb

