; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CAnvil * __cdecl core_anvil_cpp_factoryFunc_FUN_0040f530(void)
;
;
; Called Functions:
;   core_anvil.cpp_CAnvil_ctor_FUN_0040f560
;   crt_memory.c_operator_new_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x33c                          ; 0040f530
        ;   Label: core_anvil.cpp_factoryFunc_FUN_0040f530
    CALL crt_memory.c_operator_new_FUN_0056497c ; 0040f535
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; void * crt_memory.c_operator_new_FUN_0056497c(ulong size)
    ADD ESP,0x4                         ; 0040f53a
    TEST EAX,EAX                        ; 0040f53d
    JNZ 0x0040f542                      ; 0040f53f
        ;   XREF to: 0040f542 (CONDITIONAL_JUMP)  ; LAB_0040f542
    RET                                 ; 0040f541
    PUSH EAX                            ; 0040f542
        ;   Label: LAB_0040f542
    CALL core_anvil.cpp_CAnvil_ctor_FUN_0040f560 ; 0040f543
        ;   XREF to: 0040f560 (UNCONDITIONAL_CALL)  ; CAnvil * core_anvil.cpp_CAnvil_ctor_FUN_0040f560(CAnvil * this_ptr)
    ADD ESP,0x4                         ; 0040f548
    RET                                 ; 0040f54b

