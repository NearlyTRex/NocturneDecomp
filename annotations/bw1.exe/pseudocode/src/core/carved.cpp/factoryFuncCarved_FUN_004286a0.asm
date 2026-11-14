; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CCarved * __cdecl core_carved_cpp_factoryFuncCarved_FUN_004286a0(void)
;
;
; Called Functions:
;   core_carved.cpp_CCarved_ctor_FUN_004286d0
;   crt_memory.c_operator_new_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0xc2f4                         ; 004286a0
        ;   Label: core_carved.cpp_factoryFuncCarved_FUN_004286a0
    CALL crt_memory.c_operator_new_FUN_005c0f32 ; 004286a5
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005c0f32()
    ADD ESP,0x4                         ; 004286aa
    TEST EAX,EAX                        ; 004286ad
    JNZ 0x004286b2                      ; 004286af
        ;   XREF to: 004286b2 (CONDITIONAL_JUMP)  ; LAB_004286b2
    RET                                 ; 004286b1
    PUSH EAX                            ; 004286b2
        ;   Label: LAB_004286b2
    CALL core_carved.cpp_CCarved_ctor_FUN_004286d0 ; 004286b3
        ;   XREF to: 004286d0 (UNCONDITIONAL_CALL)  ; CCarved * core_carved.cpp_CCarved_ctor_FUN_004286d0(CCarved * this_ptr)
    ADD ESP,0x4                         ; 004286b8
    RET                                 ; 004286bb

