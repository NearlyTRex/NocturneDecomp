; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBatCreature * __cdecl core_batcreat_cpp_factoryFunc_FUN_004120d0(void)
;
;
; XREF[1]:
;   core_batcreat.cpp_staticInit_FUN_004120a0 at 004120ac
;
; Called Functions:
;   core_batcreat.cpp_CBatCreature_ctor_FUN_00412100
;   crt_memory.c_operator_new_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0xbd6c                         ; 004120d0
        ;   Label: core_batcreat.cpp_factoryFunc_FUN_004120d0
    CALL crt_memory.c_operator_new_FUN_0056497c ; 004120d5
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; void * crt_memory.c_operator_new_FUN_0056497c(ulong size)
    ADD ESP,0x4                         ; 004120da
    TEST EAX,EAX                        ; 004120dd
    JNZ 0x004120e2                      ; 004120df
        ;   XREF to: 004120e2 (CONDITIONAL_JUMP)  ; LAB_004120e2
    RET                                 ; 004120e1
    PUSH EAX                            ; 004120e2
        ;   Label: LAB_004120e2
    CALL core_batcreat.cpp_CBatCreature_ctor_FUN_00412100 ; 004120e3
        ;   XREF to: 00412100 (UNCONDITIONAL_CALL)  ; CBatCreature * core_batcreat.cpp_CBatCreature_ctor_FUN_00412100(CBatCreature * this_ptr)
    ADD ESP,0x4                         ; 004120e8
    RET                                 ; 004120eb

