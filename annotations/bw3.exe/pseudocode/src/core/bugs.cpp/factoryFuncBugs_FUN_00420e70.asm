; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBugs * __cdecl core_bugs_cpp_factoryFuncBugs_FUN_00420e70(void)
;
;
; Called Functions:
;   core_bugs.cpp_CBugs_ctor_FUN_00420ea0
;   crt_memory.c_operator_new_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0x1bea4                        ; 00420e70
        ;   Label: core_bugs.cpp_factoryFuncBugs_FUN_00420e70
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 00420e75
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 00420e7a
    TEST EAX,EAX                        ; 00420e7d
    JNZ 0x00420e82                      ; 00420e7f
        ;   XREF to: 00420e82 (CONDITIONAL_JUMP)  ; LAB_00420e82
    RET                                 ; 00420e81
    PUSH EAX                            ; 00420e82
        ;   Label: LAB_00420e82
    CALL core_bugs.cpp_CBugs_ctor_FUN_00420ea0 ; 00420e83
        ;   XREF to: 00420ea0 (UNCONDITIONAL_CALL)  ; CBugs * core_bugs.cpp_CBugs_ctor_FUN_00420ea0(CBugs * this_ptr)
    ADD ESP,0x4                         ; 00420e88
    RET                                 ; 00420e8b

