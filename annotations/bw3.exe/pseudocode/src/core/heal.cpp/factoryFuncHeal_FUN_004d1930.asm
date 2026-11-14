; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CHeal * __cdecl core_heal_cpp_factoryFuncHeal_FUN_004d1930(void)
;
;
; Called Functions:
;   core_heal.cpp_CHeal_ctor_FUN_004d1960
;   crt_memory.c_operator_new_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0x59c                          ; 004d1930
        ;   Label: core_heal.cpp_factoryFuncHeal_FUN_004d1930
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 004d1935
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 004d193a
    TEST EAX,EAX                        ; 004d193d
    JNZ 0x004d1942                      ; 004d193f
        ;   XREF to: 004d1942 (CONDITIONAL_JUMP)  ; LAB_004d1942
    RET                                 ; 004d1941
    PUSH EAX                            ; 004d1942
        ;   Label: LAB_004d1942
    CALL core_heal.cpp_CHeal_ctor_FUN_004d1960 ; 004d1943
        ;   XREF to: 004d1960 (UNCONDITIONAL_CALL)  ; CHeal * core_heal.cpp_CHeal_ctor_FUN_004d1960(CHeal * this_ptr)
    ADD ESP,0x4                         ; 004d1948
    RET                                 ; 004d194b

