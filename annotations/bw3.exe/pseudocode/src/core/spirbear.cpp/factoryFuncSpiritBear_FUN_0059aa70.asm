; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_spirbear_cpp_factoryFuncSpiritBear_FUN_0059aa70(void)
;
;
; Called Functions:
;   core_spirbear.cpp_CSpiritBear_ctor_FUN_0059aaa0
;   crt_unknown.c_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0x34da4                        ; 0059aa70
        ;   Label: core_spirbear.cpp_factoryFuncSpiritBear_FUN_0059aa70
    CALL crt_unknown.c_FUN_005a3cb2     ; 0059aa75
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3cb2()
    ADD ESP,0x4                         ; 0059aa7a
    TEST EAX,EAX                        ; 0059aa7d
    JNZ 0x0059aa82                      ; 0059aa7f
        ;   XREF to: 0059aa82 (CONDITIONAL_JUMP)  ; LAB_0059aa82
    RET                                 ; 0059aa81
    PUSH EAX                            ; 0059aa82
        ;   Label: LAB_0059aa82
    CALL core_spirbear.cpp_CSpiritBear_ctor_FUN_0059aaa0 ; 0059aa83
        ;   XREF to: 0059aaa0 (UNCONDITIONAL_CALL)  ; CSpiritBear * core_spirbear.cpp_CSpiritBear_ctor_FUN_0059aaa0(CSpiritBear * this_ptr)
    ADD ESP,0x4                         ; 0059aa88
    RET                                 ; 0059aa8b

