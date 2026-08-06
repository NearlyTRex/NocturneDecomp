; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CShovel * __cdecl core_shovel_cpp_factoryFunc_FUN_005169e0(void)
;
;
; Called Functions:
;   core_shovel.cpp_CShovel_ctor_FUN_00516a10
;   crt_memory.c_operator_new_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x570                          ; 005169e0
        ;   Label: core_shovel.cpp_factoryFunc_FUN_005169e0
    CALL crt_memory.c_operator_new_FUN_0056497c ; 005169e5
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; void * crt_memory.c_operator_new_FUN_0056497c(ulong size)
    ADD ESP,0x4                         ; 005169ea
    TEST EAX,EAX                        ; 005169ed
    JNZ 0x005169f2                      ; 005169ef
        ;   XREF to: 005169f2 (CONDITIONAL_JUMP)  ; LAB_005169f2
    RET                                 ; 005169f1
    PUSH EAX                            ; 005169f2
        ;   Label: LAB_005169f2
    CALL core_shovel.cpp_CShovel_ctor_FUN_00516a10 ; 005169f3
        ;   XREF to: 00516a10 (UNCONDITIONAL_CALL)  ; CShovel * core_shovel.cpp_CShovel_ctor_FUN_00516a10(CShovel * this_ptr)
    ADD ESP,0x4                         ; 005169f8
    RET                                 ; 005169fb

