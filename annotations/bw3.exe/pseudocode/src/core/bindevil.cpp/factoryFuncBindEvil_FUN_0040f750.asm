; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_bindevil_cpp_factoryFuncBindEvil_FUN_0040f750(void)
;
;
; Called Functions:
;   core_bindevil.cpp_CBindEvil_ctor_FUN_0040f780
;   crt_unknown.c_debugAllocTracked1_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0x5a0                          ; 0040f750
        ;   Label: core_bindevil.cpp_factoryFuncBindEvil_FUN_0040f750
    CALL crt_unknown.c_debugAllocTracked1_FUN_005a3cb2 ; 0040f755
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005a3cb2()
    ADD ESP,0x4                         ; 0040f75a
    TEST EAX,EAX                        ; 0040f75d
    JNZ 0x0040f762                      ; 0040f75f
        ;   XREF to: 0040f762 (CONDITIONAL_JUMP)  ; LAB_0040f762
    RET                                 ; 0040f761
    PUSH EAX                            ; 0040f762
        ;   Label: LAB_0040f762
    CALL core_bindevil.cpp_CBindEvil_ctor_FUN_0040f780 ; 0040f763
        ;   XREF to: 0040f780 (UNCONDITIONAL_CALL)  ; CBindEvil * core_bindevil.cpp_CBindEvil_ctor_FUN_0040f780(CBindEvil * this_ptr)
    ADD ESP,0x4                         ; 0040f768
    RET                                 ; 0040f76b

