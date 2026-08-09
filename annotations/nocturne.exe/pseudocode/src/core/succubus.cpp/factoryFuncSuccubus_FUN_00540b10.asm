; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSuccubus * __cdecl core_succubus_cpp_factoryFuncSuccubus_FUN_00540b10(void)
;
;
; Called Functions:
;   core_succubus.cpp_CSuccubus_ctor_FUN_00540b40
;   crt_memory.c_operator_new_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0xedd0                         ; 00540b10
        ;   Label: core_succubus.cpp_factoryFuncSuccubus_FUN_00540b10
    CALL crt_memory.c_operator_new_FUN_0056497c ; 00540b15
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; void * crt_memory.c_operator_new_FUN_0056497c(ulong size)
    ADD ESP,0x4                         ; 00540b1a
    TEST EAX,EAX                        ; 00540b1d
    JNZ 0x00540b22                      ; 00540b1f
        ;   XREF to: 00540b22 (CONDITIONAL_JUMP)  ; LAB_00540b22
    RET                                 ; 00540b21
    PUSH EAX                            ; 00540b22
        ;   Label: LAB_00540b22
    CALL core_succubus.cpp_CSuccubus_ctor_FUN_00540b40 ; 00540b23
        ;   XREF to: 00540b40 (UNCONDITIONAL_CALL)  ; CSuccubus * core_succubus.cpp_CSuccubus_ctor_FUN_00540b40(CSuccubus * this_ptr)
    ADD ESP,0x4                         ; 00540b28
    RET                                 ; 00540b2b

