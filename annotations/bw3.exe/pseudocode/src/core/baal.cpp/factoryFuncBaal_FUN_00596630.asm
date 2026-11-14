; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBaal * __cdecl core_baal_cpp_factoryFuncBaal_FUN_00596630(void)
;
;
; Called Functions:
;   core_baal.cpp_CBaal_ctor_FUN_00596660
;   crt_memory.c_operator_new_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0xd0bc                         ; 00596630
        ;   Label: core_baal.cpp_factoryFuncBaal_FUN_00596630
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 00596635
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 0059663a
    TEST EAX,EAX                        ; 0059663d
    JNZ 0x00596642                      ; 0059663f
        ;   XREF to: 00596642 (CONDITIONAL_JUMP)  ; LAB_00596642
    RET                                 ; 00596641
    PUSH EAX                            ; 00596642
        ;   Label: LAB_00596642
    CALL core_baal.cpp_CBaal_ctor_FUN_00596660 ; 00596643
        ;   XREF to: 00596660 (UNCONDITIONAL_CALL)  ; CBaal * core_baal.cpp_CBaal_ctor_FUN_00596660(CBaal * this_ptr)
    ADD ESP,0x4                         ; 00596648
    RET                                 ; 0059664b

