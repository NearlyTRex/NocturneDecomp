; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_firestff_cpp_factoryFuncFirestaff_FUN_004a4aa0(void)
;
;
; Called Functions:
;   core_firestff.cpp_CFirestaff_ctor_FUN_004a4ad0
;   crt_memory.c_operator_new_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0x25c8                         ; 004a4aa0
        ;   Label: core_firestff.cpp_factoryFuncFirestaff_FUN_004a4aa0
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 004a4aa5
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 004a4aaa
    TEST EAX,EAX                        ; 004a4aad
    JNZ 0x004a4ab2                      ; 004a4aaf
        ;   XREF to: 004a4ab2 (CONDITIONAL_JUMP)  ; LAB_004a4ab2
    RET                                 ; 004a4ab1
    PUSH EAX                            ; 004a4ab2
        ;   Label: LAB_004a4ab2
    CALL core_firestff.cpp_CFirestaff_ctor_FUN_004a4ad0 ; 004a4ab3
        ;   XREF to: 004a4ad0 (UNCONDITIONAL_CALL)  ; CFirestaff * core_firestff.cpp_CFirestaff_ctor_FUN_004a4ad0(CFirestaff * this_ptr)
    ADD ESP,0x4                         ; 004a4ab8
    RET                                 ; 004a4abb

