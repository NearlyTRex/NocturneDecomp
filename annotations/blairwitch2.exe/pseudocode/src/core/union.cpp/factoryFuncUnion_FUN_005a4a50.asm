; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_union_cpp_factoryFuncUnion_FUN_005a4a50(void)
;
;
; Called Functions:
;   core_union.cpp_CUnion_ctor_FUN_005a4a80
;   crt_memory.c_operator_new_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x11864                        ; 005a4a50
        ;   Label: core_union.cpp_factoryFuncUnion_FUN_005a4a50
    CALL crt_memory.c_operator_new_FUN_005b8be2 ; 005a4a55
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005b8be2()
    ADD ESP,0x4                         ; 005a4a5a
    TEST EAX,EAX                        ; 005a4a5d
    JNZ 0x005a4a62                      ; 005a4a5f
        ;   XREF to: 005a4a62 (CONDITIONAL_JUMP)  ; LAB_005a4a62
    RET                                 ; 005a4a61
    PUSH EAX                            ; 005a4a62
        ;   Label: LAB_005a4a62
    CALL core_union.cpp_CUnion_ctor_FUN_005a4a80 ; 005a4a63
        ;   XREF to: 005a4a80 (UNCONDITIONAL_CALL)  ; CUnion * core_union.cpp_CUnion_ctor_FUN_005a4a80(CUnion * this_ptr)
    ADD ESP,0x4                         ; 005a4a68
    RET                                 ; 005a4a6b

