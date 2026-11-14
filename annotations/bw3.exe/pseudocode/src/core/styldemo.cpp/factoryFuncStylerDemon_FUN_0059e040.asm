; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CStylerDemon * __cdecl core_styldemo_cpp_factoryFuncStylerDemon_FUN_0059e040(void)
;
;
; Called Functions:
;   core_styldemo.cpp_CStylerDemon_ctor_FUN_0059e070
;   crt_memory.c_operator_new_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0xdd18                         ; 0059e040
        ;   Label: core_styldemo.cpp_factoryFuncStylerDemon_FUN_0059e040
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 0059e045
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 0059e04a
    TEST EAX,EAX                        ; 0059e04d
    JNZ 0x0059e052                      ; 0059e04f
        ;   XREF to: 0059e052 (CONDITIONAL_JUMP)  ; LAB_0059e052
    RET                                 ; 0059e051
    PUSH EAX                            ; 0059e052
        ;   Label: LAB_0059e052
    CALL core_styldemo.cpp_CStylerDemon_ctor_FUN_0059e070 ; 0059e053
        ;   XREF to: 0059e070 (UNCONDITIONAL_CALL)  ; CStylerDemon * core_styldemo.cpp_CStylerDemon_ctor_FUN_0059e070(CStylerDemon * this_ptr)
    ADD ESP,0x4                         ; 0059e058
    RET                                 ; 0059e05b

