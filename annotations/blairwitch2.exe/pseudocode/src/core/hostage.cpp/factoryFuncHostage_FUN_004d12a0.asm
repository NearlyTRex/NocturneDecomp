; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CHostage * __cdecl core_hostage_cpp_factoryFuncHostage_FUN_004d12a0(void)
;
;
; Called Functions:
;   core_hostage.cpp_CHostage_ctor_FUN_004d12d0
;   crt_memory.c_operator_new_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x24730                        ; 004d12a0
        ;   Label: core_hostage.cpp_factoryFuncHostage_FUN_004d12a0
    CALL crt_memory.c_operator_new_FUN_005b8be2 ; 004d12a5
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005b8be2()
    ADD ESP,0x4                         ; 004d12aa
    TEST EAX,EAX                        ; 004d12ad
    JNZ 0x004d12b2                      ; 004d12af
        ;   XREF to: 004d12b2 (CONDITIONAL_JUMP)  ; LAB_004d12b2
    RET                                 ; 004d12b1
    PUSH EAX                            ; 004d12b2
        ;   Label: LAB_004d12b2
    CALL core_hostage.cpp_CHostage_ctor_FUN_004d12d0 ; 004d12b3
        ;   XREF to: 004d12d0 (UNCONDITIONAL_CALL)  ; CHostage * core_hostage.cpp_CHostage_ctor_FUN_004d12d0(CHostage * this_ptr)
    ADD ESP,0x4                         ; 004d12b8
    RET                                 ; 004d12bb

