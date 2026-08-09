; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoneGuy * __cdecl core_boneguy_cpp_factoryFuncBoneGuy_FUN_004182a0(void)
;
;
; Called Functions:
;   core_boneguy.cpp_CBoneGuy_ctor_FUN_00418630
;   crt_memory.c_operator_new_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0xc34c                         ; 004182a0
        ;   Label: core_boneguy.cpp_factoryFuncBoneGuy_FUN_004182a0
    CALL crt_memory.c_operator_new_FUN_0056497c ; 004182a5
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; void * crt_memory.c_operator_new_FUN_0056497c(ulong size)
    ADD ESP,0x4                         ; 004182aa
    TEST EAX,EAX                        ; 004182ad
    JNZ 0x004182b2                      ; 004182af
        ;   XREF to: 004182b2 (CONDITIONAL_JUMP)  ; LAB_004182b2
    RET                                 ; 004182b1
    PUSH EAX                            ; 004182b2
        ;   Label: LAB_004182b2
    CALL core_boneguy.cpp_CBoneGuy_ctor_FUN_00418630 ; 004182b3
        ;   XREF to: 00418630 (UNCONDITIONAL_CALL)  ; CBoneGuy * core_boneguy.cpp_CBoneGuy_ctor_FUN_00418630(CBoneGuy * this_ptr)
    ADD ESP,0x4                         ; 004182b8
    RET                                 ; 004182bb

