; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFlameThrower * __cdecl core_flamegun_cpp_factoryFunc_FUN_0048e990(void)
;
;
; Called Functions:
;   core_flamegun.cpp_CFlameThrower_ctor_FUN_0048e9c0
;   crt_memory.c_operator_new_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x580                          ; 0048e990
        ;   Label: core_flamegun.cpp_factoryFunc_FUN_0048e990
    CALL crt_memory.c_operator_new_FUN_0056497c ; 0048e995
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; void * crt_memory.c_operator_new_FUN_0056497c(ulong size)
    ADD ESP,0x4                         ; 0048e99a
    TEST EAX,EAX                        ; 0048e99d
    JNZ 0x0048e9a2                      ; 0048e99f
        ;   XREF to: 0048e9a2 (CONDITIONAL_JUMP)  ; LAB_0048e9a2
    RET                                 ; 0048e9a1
    PUSH EAX                            ; 0048e9a2
        ;   Label: LAB_0048e9a2
    CALL core_flamegun.cpp_CFlameThrower_ctor_FUN_0048e9c0 ; 0048e9a3
        ;   XREF to: 0048e9c0 (UNCONDITIONAL_CALL)  ; CFlameThrower * core_flamegun.cpp_CFlameThrower_ctor_FUN_0048e9c0(CFlameThrower * this_ptr)
    ADD ESP,0x4                         ; 0048e9a8
    RET                                 ; 0048e9ab

