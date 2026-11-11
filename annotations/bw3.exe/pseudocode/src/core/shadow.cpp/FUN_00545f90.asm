; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_shadow_cpp_FUN_00545f90(void)
;
;
; Called Functions:
;   core_shadow.cpp_CDemonShadow_ctor_FUN_00545fc0
;   crt_memory.c_operator_new_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0xd0e8                         ; 00545f90
        ;   Label: core_shadow.cpp_FUN_00545f90
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 00545f95
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 00545f9a
    TEST EAX,EAX                        ; 00545f9d
    JNZ 0x00545fa2                      ; 00545f9f
        ;   XREF to: 00545fa2 (CONDITIONAL_JUMP)  ; LAB_00545fa2
    RET                                 ; 00545fa1
    PUSH EAX                            ; 00545fa2
        ;   Label: LAB_00545fa2
    CALL core_shadow.cpp_CDemonShadow_ctor_FUN_00545fc0 ; 00545fa3
        ;   XREF to: 00545fc0 (UNCONDITIONAL_CALL)  ; CDemonShadow * core_shadow.cpp_CDemonShadow_ctor_FUN_00545fc0(CDemonShadow * this_ptr)
    ADD ESP,0x4                         ; 00545fa8
    RET                                 ; 00545fab

