; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CColonel * __cdecl core_colonel_cpp_factoryFuncColonel_FUN_00439d00(void)
;
;
; Called Functions:
;   core_colonel.cpp_CColonel_ctor_FUN_00439d30
;   crt_memory.c_operator_new_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x1fa54                        ; 00439d00
        ;   Label: core_colonel.cpp_factoryFuncColonel_FUN_00439d00
    CALL crt_memory.c_operator_new_FUN_0056497c ; 00439d05
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; void * crt_memory.c_operator_new_FUN_0056497c(ulong size)
    ADD ESP,0x4                         ; 00439d0a
    TEST EAX,EAX                        ; 00439d0d
    JNZ 0x00439d12                      ; 00439d0f
        ;   XREF to: 00439d12 (CONDITIONAL_JUMP)  ; LAB_00439d12
    RET                                 ; 00439d11
    PUSH EAX                            ; 00439d12
        ;   Label: LAB_00439d12
    CALL core_colonel.cpp_CColonel_ctor_FUN_00439d30 ; 00439d13
        ;   XREF to: 00439d30 (UNCONDITIONAL_CALL)  ; CColonel * core_colonel.cpp_CColonel_ctor_FUN_00439d30(CColonel * this_ptr)
    ADD ESP,0x4                         ; 00439d18
    RET                                 ; 00439d1b

