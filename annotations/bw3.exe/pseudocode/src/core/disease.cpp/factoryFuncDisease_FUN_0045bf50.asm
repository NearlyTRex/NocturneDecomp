; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_disease_cpp_factoryFuncDisease_FUN_0045bf50(void)
;
;
; Called Functions:
;   core_disease.cpp_CDisease_ctor_FUN_0045bf80
;   crt_memory.c_operator_new_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0x5a4                          ; 0045bf50
        ;   Label: core_disease.cpp_factoryFuncDisease_FUN_0045bf50
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 0045bf55
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 0045bf5a
    TEST EAX,EAX                        ; 0045bf5d
    JNZ 0x0045bf62                      ; 0045bf5f
        ;   XREF to: 0045bf62 (CONDITIONAL_JUMP)  ; LAB_0045bf62
    RET                                 ; 0045bf61
    PUSH EAX                            ; 0045bf62
        ;   Label: LAB_0045bf62
    CALL core_disease.cpp_CDisease_ctor_FUN_0045bf80 ; 0045bf63
        ;   XREF to: 0045bf80 (UNCONDITIONAL_CALL)  ; CDisease * core_disease.cpp_CDisease_ctor_FUN_0045bf80(CDisease * this_ptr)
    ADD ESP,0x4                         ; 0045bf68
    RET                                 ; 0045bf6b

