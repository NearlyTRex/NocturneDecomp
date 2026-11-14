; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CAnvil * __cdecl core_anvil_cpp_factoryFuncAnvil_FUN_0040e5a0(void)
;
;
; Called Functions:
;   core_anvil.cpp_CAnvil_ctor_FUN_0040e5d0
;   crt_memory.c_operator_new_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0x344                          ; 0040e5a0
        ;   Label: core_anvil.cpp_factoryFuncAnvil_FUN_0040e5a0
    CALL crt_memory.c_operator_new_FUN_005c0f32 ; 0040e5a5
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005c0f32()
    ADD ESP,0x4                         ; 0040e5aa
    TEST EAX,EAX                        ; 0040e5ad
    JNZ 0x0040e5b2                      ; 0040e5af
        ;   XREF to: 0040e5b2 (CONDITIONAL_JUMP)  ; LAB_0040e5b2
    RET                                 ; 0040e5b1
    PUSH EAX                            ; 0040e5b2
        ;   Label: LAB_0040e5b2
    CALL core_anvil.cpp_CAnvil_ctor_FUN_0040e5d0 ; 0040e5b3
        ;   XREF to: 0040e5d0 (UNCONDITIONAL_CALL)  ; CAnvil * core_anvil.cpp_CAnvil_ctor_FUN_0040e5d0(CAnvil * this_ptr)
    ADD ESP,0x4                         ; 0040e5b8
    RET                                 ; 0040e5bb

