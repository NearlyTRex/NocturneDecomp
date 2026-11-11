; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_bodypart_cpp_factoryFuncBodyPart_FUN_00414720(void)
;
;
; Called Functions:
;   core_bodypart.cpp_CBodyPart_ctor_FUN_00414750
;   crt_memory.c_operator_new_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0xf34                          ; 00414720
        ;   Label: core_bodypart.cpp_factoryFuncBodyPart_FUN_00414720
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 00414725
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 0041472a
    TEST EAX,EAX                        ; 0041472d
    JNZ 0x00414732                      ; 0041472f
        ;   XREF to: 00414732 (CONDITIONAL_JUMP)  ; LAB_00414732
    RET                                 ; 00414731
    PUSH EAX                            ; 00414732
        ;   Label: LAB_00414732
    CALL core_bodypart.cpp_CBodyPart_ctor_FUN_00414750 ; 00414733
        ;   XREF to: 00414750 (UNCONDITIONAL_CALL)  ; CBodyPart * core_bodypart.cpp_CBodyPart_ctor_FUN_00414750(CBodyPart * this_ptr)
    ADD ESP,0x4                         ; 00414738
    RET                                 ; 0041473b

