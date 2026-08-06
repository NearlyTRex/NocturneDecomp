; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CZombie * __cdecl core_zombie_cpp_factoryFunc_FUN_0055ea90(void)
;
;
; Called Functions:
;   core_zombie.cpp_CZombie_ctor_FUN_0055eac0
;   crt_memory.c_operator_new_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0xbe14                         ; 0055ea90
        ;   Label: core_zombie.cpp_factoryFunc_FUN_0055ea90
    CALL crt_memory.c_operator_new_FUN_0056497c ; 0055ea95
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; void * crt_memory.c_operator_new_FUN_0056497c(ulong size)
    ADD ESP,0x4                         ; 0055ea9a
    TEST EAX,EAX                        ; 0055ea9d
    JNZ 0x0055eaa2                      ; 0055ea9f
        ;   XREF to: 0055eaa2 (CONDITIONAL_JUMP)  ; LAB_0055eaa2
    RET                                 ; 0055eaa1
    PUSH EAX                            ; 0055eaa2
        ;   Label: LAB_0055eaa2
    CALL core_zombie.cpp_CZombie_ctor_FUN_0055eac0 ; 0055eaa3
        ;   XREF to: 0055eac0 (UNCONDITIONAL_CALL)  ; CZombie * core_zombie.cpp_CZombie_ctor_FUN_0055eac0(CZombie * this_ptr)
    ADD ESP,0x4                         ; 0055eaa8
    RET                                 ; 0055eaab

