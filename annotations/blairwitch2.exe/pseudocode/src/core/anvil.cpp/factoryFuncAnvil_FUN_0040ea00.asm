; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CAnvil * __cdecl core_anvil_cpp_factoryFuncAnvil_FUN_0040ea00(void)
;
;
; Called Functions:
;   core_anvil.cpp_CAnvil_ctor_FUN_0040ea30
;   crt_memory.c_operator_new_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x4a0                          ; 0040ea00
        ;   Label: core_anvil.cpp_factoryFuncAnvil_FUN_0040ea00
    CALL crt_memory.c_operator_new_FUN_005b8be2 ; 0040ea05
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005b8be2()
    ADD ESP,0x4                         ; 0040ea0a
    TEST EAX,EAX                        ; 0040ea0d
    JNZ 0x0040ea12                      ; 0040ea0f
        ;   XREF to: 0040ea12 (CONDITIONAL_JUMP)  ; LAB_0040ea12
    RET                                 ; 0040ea11
    PUSH EAX                            ; 0040ea12
        ;   Label: LAB_0040ea12
    CALL core_anvil.cpp_CAnvil_ctor_FUN_0040ea30 ; 0040ea13
        ;   XREF to: 0040ea30 (UNCONDITIONAL_CALL)  ; CAnvil * core_anvil.cpp_CAnvil_ctor_FUN_0040ea30(CAnvil * this_ptr)
    ADD ESP,0x4                         ; 0040ea18
    RET                                 ; 0040ea1b

