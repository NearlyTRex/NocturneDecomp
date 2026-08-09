; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMoloch * __cdecl core_moloch_cpp_factoryFuncMoloch_FUN_004dd900(void)
;
;
; Called Functions:
;   core_moloch.cpp_CMoloch_ctor_FUN_004dd930
;   crt_memory.c_operator_new_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x22a00                        ; 004dd900
        ;   Label: core_moloch.cpp_factoryFuncMoloch_FUN_004dd900
    CALL crt_memory.c_operator_new_FUN_0056497c ; 004dd905
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; void * crt_memory.c_operator_new_FUN_0056497c(ulong size)
    ADD ESP,0x4                         ; 004dd90a
    TEST EAX,EAX                        ; 004dd90d
    JNZ 0x004dd912                      ; 004dd90f
        ;   XREF to: 004dd912 (CONDITIONAL_JUMP)  ; LAB_004dd912
    RET                                 ; 004dd911
    PUSH EAX                            ; 004dd912
        ;   Label: LAB_004dd912
    CALL core_moloch.cpp_CMoloch_ctor_FUN_004dd930 ; 004dd913
        ;   XREF to: 004dd930 (UNCONDITIONAL_CALL)  ; CMoloch * core_moloch.cpp_CMoloch_ctor_FUN_004dd930(CMoloch * this_ptr)
    ADD ESP,0x4                         ; 004dd918
    RET                                 ; 004dd91b

