; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_melee_cpp_factoryFuncMelee_FUN_004e6f60(void)
;
;
; Called Functions:
;   core_melee.cpp_CMelee_ctor_FUN_004e6f90
;   crt_memory.c_operator_new_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0x6e8                          ; 004e6f60
        ;   Label: core_melee.cpp_factoryFuncMelee_FUN_004e6f60
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 004e6f65
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 004e6f6a
    TEST EAX,EAX                        ; 004e6f6d
    JNZ 0x004e6f72                      ; 004e6f6f
        ;   XREF to: 004e6f72 (CONDITIONAL_JUMP)  ; LAB_004e6f72
    RET                                 ; 004e6f71
    PUSH EAX                            ; 004e6f72
        ;   Label: LAB_004e6f72
    CALL core_melee.cpp_CMelee_ctor_FUN_004e6f90 ; 004e6f73
        ;   XREF to: 004e6f90 (UNCONDITIONAL_CALL)  ; CMelee * core_melee.cpp_CMelee_ctor_FUN_004e6f90(CMelee * this_ptr)
    ADD ESP,0x4                         ; 004e6f78
    RET                                 ; 004e6f7b

