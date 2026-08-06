; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDraculaBride * __cdecl core_dracbrid_cpp_factoryFunc_FUN_00458610(void)
;
;
; Called Functions:
;   core_dracbrid.cpp_CDraculaBride_ctor_FUN_00458640
;   crt_memory.c_operator_new_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0xbe54                         ; 00458610
        ;   Label: core_dracbrid.cpp_factoryFunc_FUN_00458610
    CALL crt_memory.c_operator_new_FUN_0056497c ; 00458615
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; void * crt_memory.c_operator_new_FUN_0056497c(ulong size)
    ADD ESP,0x4                         ; 0045861a
    TEST EAX,EAX                        ; 0045861d
    JNZ 0x00458622                      ; 0045861f
        ;   XREF to: 00458622 (CONDITIONAL_JUMP)  ; LAB_00458622
    RET                                 ; 00458621
    PUSH EAX                            ; 00458622
        ;   Label: LAB_00458622
    CALL core_dracbrid.cpp_CDraculaBride_ctor_FUN_00458640 ; 00458623
        ;   XREF to: 00458640 (UNCONDITIONAL_CALL)  ; CDraculaBride * core_dracbrid.cpp_CDraculaBride_ctor_FUN_00458640(CDraculaBride * this_ptr)
    ADD ESP,0x4                         ; 00458628
    RET                                 ; 0045862b

