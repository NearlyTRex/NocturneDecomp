; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_styler_cpp_factoryFuncStyler_FUN_0059d720(void)
;
;
; Called Functions:
;   core_styler.cpp_CStyler_ctor_FUN_0059d750
;   crt_memory.c_operator_new_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0x487c8                        ; 0059d720
        ;   Label: core_styler.cpp_factoryFuncStyler_FUN_0059d720
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 0059d725
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 0059d72a
    TEST EAX,EAX                        ; 0059d72d
    JNZ 0x0059d732                      ; 0059d72f
        ;   XREF to: 0059d732 (CONDITIONAL_JUMP)  ; LAB_0059d732
    RET                                 ; 0059d731
    PUSH EAX                            ; 0059d732
        ;   Label: LAB_0059d732
    CALL core_styler.cpp_CStyler_ctor_FUN_0059d750 ; 0059d733
        ;   XREF to: 0059d750 (UNCONDITIONAL_CALL)  ; CStyler * core_styler.cpp_CStyler_ctor_FUN_0059d750(CStyler * this_ptr)
    ADD ESP,0x4                         ; 0059d738
    RET                                 ; 0059d73b

