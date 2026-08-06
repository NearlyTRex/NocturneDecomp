; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CShotgun * __cdecl core_shotgun_cpp_factoryFunc_FUN_00515cf0(void)
;
;
; Called Functions:
;   core_shotgun.cpp_CShotgun_ctor_FUN_00515d20
;   crt_memory.c_operator_new_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x57c                          ; 00515cf0
        ;   Label: core_shotgun.cpp_factoryFunc_FUN_00515cf0
    CALL crt_memory.c_operator_new_FUN_0056497c ; 00515cf5
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; void * crt_memory.c_operator_new_FUN_0056497c(ulong size)
    ADD ESP,0x4                         ; 00515cfa
    TEST EAX,EAX                        ; 00515cfd
    JNZ 0x00515d02                      ; 00515cff
        ;   XREF to: 00515d02 (CONDITIONAL_JUMP)  ; LAB_00515d02
    RET                                 ; 00515d01
    PUSH EAX                            ; 00515d02
        ;   Label: LAB_00515d02
    CALL core_shotgun.cpp_CShotgun_ctor_FUN_00515d20 ; 00515d03
        ;   XREF to: 00515d20 (UNCONDITIONAL_CALL)  ; CShotgun * core_shotgun.cpp_CShotgun_ctor_FUN_00515d20(CShotgun * this_ptr)
    ADD ESP,0x4                         ; 00515d08
    RET                                 ; 00515d0b

