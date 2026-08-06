; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CElephantGun * __cdecl core_elephant_cpp_factoryFunc_FUN_004776e0(void)
;
;
; Called Functions:
;   core_elephant.cpp_CElephantGun_ctor_FUN_00477710
;   crt_memory.c_operator_new_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x57c                          ; 004776e0
        ;   Label: core_elephant.cpp_factoryFunc_FUN_004776e0
    CALL crt_memory.c_operator_new_FUN_0056497c ; 004776e5
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; void * crt_memory.c_operator_new_FUN_0056497c(ulong size)
    ADD ESP,0x4                         ; 004776ea
    TEST EAX,EAX                        ; 004776ed
    JNZ 0x004776f2                      ; 004776ef
        ;   XREF to: 004776f2 (CONDITIONAL_JUMP)  ; LAB_004776f2
    RET                                 ; 004776f1
    PUSH EAX                            ; 004776f2
        ;   Label: LAB_004776f2
    CALL core_elephant.cpp_CElephantGun_ctor_FUN_00477710 ; 004776f3
        ;   XREF to: 00477710 (UNCONDITIONAL_CALL)  ; CElephantGun * core_elephant.cpp_CElephantGun_ctor_FUN_00477710(CElephantGun * this_ptr)
    ADD ESP,0x4                         ; 004776f8
    RET                                 ; 004776fb

