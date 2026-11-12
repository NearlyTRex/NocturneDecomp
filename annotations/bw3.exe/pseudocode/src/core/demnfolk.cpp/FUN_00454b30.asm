; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_demnfolk_cpp_FUN_00454b30(void)
;
;
; Called Functions:
;   core_demnfolk.cpp_CDemnfolk_ctor_FUN_00454b60
;   crt_memory.c_operator_new_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0xd14c                         ; 00454b30
        ;   Label: core_demnfolk.cpp_FUN_00454b30
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 00454b35
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 00454b3a
    TEST EAX,EAX                        ; 00454b3d
    JNZ 0x00454b42                      ; 00454b3f
        ;   XREF to: 00454b42 (CONDITIONAL_JUMP)  ; LAB_00454b42
    RET                                 ; 00454b41
    PUSH EAX                            ; 00454b42
        ;   Label: LAB_00454b42
    CALL core_demnfolk.cpp_CDemnfolk_ctor_FUN_00454b60 ; 00454b43
        ;   XREF to: 00454b60 (UNCONDITIONAL_CALL)  ; CDemnfolk * core_demnfolk.cpp_CDemnfolk_ctor_FUN_00454b60(CDemnfolk * this_ptr)
    ADD ESP,0x4                         ; 00454b48
    RET                                 ; 00454b4b

