; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_holycrss_cpp_factoryFuncHolycross_FUN_004d50a0(void)
;
;
; Called Functions:
;   core_holycrss.cpp_CHolycross_ctor_FUN_004d50d0
;   crt_memory.c_operator_new_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0x594                          ; 004d50a0
        ;   Label: core_holycrss.cpp_factoryFuncHolycross_FUN_004d50a0
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 004d50a5
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 004d50aa
    TEST EAX,EAX                        ; 004d50ad
    JNZ 0x004d50b2                      ; 004d50af
        ;   XREF to: 004d50b2 (CONDITIONAL_JUMP)  ; LAB_004d50b2
    RET                                 ; 004d50b1
    PUSH EAX                            ; 004d50b2
        ;   Label: LAB_004d50b2
    CALL core_holycrss.cpp_CHolycross_ctor_FUN_004d50d0 ; 004d50b3
        ;   XREF to: 004d50d0 (UNCONDITIONAL_CALL)  ; CHolycross * core_holycrss.cpp_CHolycross_ctor_FUN_004d50d0(CHolycross * this_ptr)
    ADD ESP,0x4                         ; 004d50b8
    RET                                 ; 004d50bb

