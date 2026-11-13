; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CAsgaya * __cdecl core_asgaya_cpp_factoryFuncAsgaya_FUN_005a09e0(void)
;
;
; Called Functions:
;   core_asgaya.cpp_CAsgaya_ctor_FUN_005a0a10
;   crt_memory.c_operator_new_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0x33fd4                        ; 005a09e0
        ;   Label: core_asgaya.cpp_factoryFuncAsgaya_FUN_005a09e0
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 005a09e5
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 005a09ea
    TEST EAX,EAX                        ; 005a09ed
    JNZ 0x005a09f2                      ; 005a09ef
        ;   XREF to: 005a09f2 (CONDITIONAL_JUMP)  ; LAB_005a09f2
    RET                                 ; 005a09f1
    PUSH EAX                            ; 005a09f2
        ;   Label: LAB_005a09f2
    CALL core_asgaya.cpp_CAsgaya_ctor_FUN_005a0a10 ; 005a09f3
        ;   XREF to: 005a0a10 (UNCONDITIONAL_CALL)  ; CAsgaya * core_asgaya.cpp_CAsgaya_ctor_FUN_005a0a10(CAsgaya * this_ptr)
    ADD ESP,0x4                         ; 005a09f8
    RET                                 ; 005a09fb

