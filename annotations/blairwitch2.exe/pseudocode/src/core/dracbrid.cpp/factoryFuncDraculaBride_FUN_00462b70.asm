; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dracbrid_cpp_factoryFuncDraculaBride_FUN_00462b70(void)
;
;
; Called Functions:
;   core_dracbrid.cpp_CDraculaBride_ctor_FUN_00462ba0
;   crt_unknown.c_debugAllocTracked1_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x10c28                        ; 00462b70
        ;   Label: core_dracbrid.cpp_factoryFuncDraculaBride_FUN_00462b70
    CALL crt_unknown.c_debugAllocTracked1_FUN_005b8be2 ; 00462b75
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005b8be2()
    ADD ESP,0x4                         ; 00462b7a
    TEST EAX,EAX                        ; 00462b7d
    JNZ 0x00462b82                      ; 00462b7f
        ;   XREF to: 00462b82 (CONDITIONAL_JUMP)  ; LAB_00462b82
    RET                                 ; 00462b81
    PUSH EAX                            ; 00462b82
        ;   Label: LAB_00462b82
    CALL core_dracbrid.cpp_CDraculaBride_ctor_FUN_00462ba0 ; 00462b83
        ;   XREF to: 00462ba0 (UNCONDITIONAL_CALL)  ; CDraculaBride * core_dracbrid.cpp_CDraculaBride_ctor_FUN_00462ba0(CDraculaBride * this_ptr)
    ADD ESP,0x4                         ; 00462b88
    RET                                 ; 00462b8b

