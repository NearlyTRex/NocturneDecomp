; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVampireBoss * __cdecl core_vampboss_cpp_factoryFunc_FUN_0054c280(void)
;
;
; Called Functions:
;   core_vampboss.cpp_CVampireBoss_ctor_FUN_0054c2b0
;   crt_memory.c_operator_new_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0xbedc8                        ; 0054c280
        ;   Label: core_vampboss.cpp_factoryFunc_FUN_0054c280
    CALL crt_memory.c_operator_new_FUN_0056497c ; 0054c285
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; void * crt_memory.c_operator_new_FUN_0056497c(ulong size)
    ADD ESP,0x4                         ; 0054c28a
    TEST EAX,EAX                        ; 0054c28d
    JNZ 0x0054c292                      ; 0054c28f
        ;   XREF to: 0054c292 (CONDITIONAL_JUMP)  ; LAB_0054c292
    RET                                 ; 0054c291
    PUSH EAX                            ; 0054c292
        ;   Label: LAB_0054c292
    CALL core_vampboss.cpp_CVampireBoss_ctor_FUN_0054c2b0 ; 0054c293
        ;   XREF to: 0054c2b0 (UNCONDITIONAL_CALL)  ; CVampireBoss * core_vampboss.cpp_CVampireBoss_ctor_FUN_0054c2b0(CVampireBoss * this_ptr)
    ADD ESP,0x4                         ; 0054c298
    RET                                 ; 0054c29b

