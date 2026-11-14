; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSvetlana * __cdecl core_svetlana_cpp_factoryFuncSvetlana_FUN_00570190(void)
;
;
; Called Functions:
;   core_svetlana.cpp_CSvetlana_ctor_FUN_005701c0
;   crt_memory.c_operator_new_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x9acc4                        ; 00570190
        ;   Label: core_svetlana.cpp_factoryFuncSvetlana_FUN_00570190
    CALL crt_memory.c_operator_new_FUN_005b8be2 ; 00570195
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005b8be2()
    ADD ESP,0x4                         ; 0057019a
    TEST EAX,EAX                        ; 0057019d
    JNZ 0x005701a2                      ; 0057019f
        ;   XREF to: 005701a2 (CONDITIONAL_JUMP)  ; LAB_005701a2
    RET                                 ; 005701a1
    PUSH EAX                            ; 005701a2
        ;   Label: LAB_005701a2
    CALL core_svetlana.cpp_CSvetlana_ctor_FUN_005701c0 ; 005701a3
        ;   XREF to: 005701c0 (UNCONDITIONAL_CALL)  ; CSvetlana * core_svetlana.cpp_CSvetlana_ctor_FUN_005701c0(CSvetlana * this_ptr)
    ADD ESP,0x4                         ; 005701a8
    RET                                 ; 005701ab

