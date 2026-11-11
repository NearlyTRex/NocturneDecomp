; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_baron_cpp_factoryFuncBaron_FUN_0040f660(void)
;
;
; Called Functions:
;   core_baron.cpp_CBaron_ctor_FUN_0040f690
;   crt_memory.c_operator_new_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x25740                        ; 0040f660
        ;   Label: core_baron.cpp_factoryFuncBaron_FUN_0040f660
    CALL crt_memory.c_operator_new_FUN_005b8be2 ; 0040f665
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005b8be2()
    ADD ESP,0x4                         ; 0040f66a
    TEST EAX,EAX                        ; 0040f66d
    JNZ 0x0040f672                      ; 0040f66f
        ;   XREF to: 0040f672 (CONDITIONAL_JUMP)  ; LAB_0040f672
    RET                                 ; 0040f671
    PUSH EAX                            ; 0040f672
        ;   Label: LAB_0040f672
    CALL core_baron.cpp_CBaron_ctor_FUN_0040f690 ; 0040f673
        ;   XREF to: 0040f690 (UNCONDITIONAL_CALL)  ; CBaron * core_baron.cpp_CBaron_ctor_FUN_0040f690(CBaron * this_ptr)
    ADD ESP,0x4                         ; 0040f678
    RET                                 ; 0040f67b

