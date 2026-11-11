; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_necklace_cpp_factoryFuncNecklace_FUN_005ada80(void)
;
;
; Called Functions:
;   core_necklace.cpp_CNecklace_ctor_FUN_005adab0
;   crt_memory.c_operator_new_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x7d4                          ; 005ada80
        ;   Label: core_necklace.cpp_factoryFuncNecklace_FUN_005ada80
    CALL crt_memory.c_operator_new_FUN_005b8be2 ; 005ada85
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005b8be2()
    ADD ESP,0x4                         ; 005ada8a
    TEST EAX,EAX                        ; 005ada8d
    JNZ 0x005ada92                      ; 005ada8f
        ;   XREF to: 005ada92 (CONDITIONAL_JUMP)  ; LAB_005ada92
    RET                                 ; 005ada91
    PUSH EAX                            ; 005ada92
        ;   Label: LAB_005ada92
    CALL core_necklace.cpp_CNecklace_ctor_FUN_005adab0 ; 005ada93
        ;   XREF to: 005adab0 (UNCONDITIONAL_CALL)  ; CNecklace * core_necklace.cpp_CNecklace_ctor_FUN_005adab0(CNecklace * this_ptr)
    ADD ESP,0x4                         ; 005ada98
    RET                                 ; 005ada9b

