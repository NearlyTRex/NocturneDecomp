; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CGun * __cdecl core_gun_cpp_factoryFuncGun_FUN_004b2730(void)
;
;
; Called Functions:
;   core_gun.cpp_CGun_ctor_FUN_004b2760
;   crt_memory.c_operator_new_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x570                          ; 004b2730
        ;   Label: core_gun.cpp_factoryFuncGun_FUN_004b2730
    CALL crt_memory.c_operator_new_FUN_0056497c ; 004b2735
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; void * crt_memory.c_operator_new_FUN_0056497c(ulong size)
    ADD ESP,0x4                         ; 004b273a
    TEST EAX,EAX                        ; 004b273d
    JNZ 0x004b2742                      ; 004b273f
        ;   XREF to: 004b2742 (CONDITIONAL_JUMP)  ; LAB_004b2742
    RET                                 ; 004b2741
    PUSH EAX                            ; 004b2742
        ;   Label: LAB_004b2742
    CALL core_gun.cpp_CGun_ctor_FUN_004b2760 ; 004b2743
        ;   XREF to: 004b2760 (UNCONDITIONAL_CALL)  ; CGun * core_gun.cpp_CGun_ctor_FUN_004b2760(CGun * this_ptr)
    ADD ESP,0x4                         ; 004b2748
    RET                                 ; 004b274b

