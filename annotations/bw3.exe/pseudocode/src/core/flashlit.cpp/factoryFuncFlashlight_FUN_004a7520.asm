; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_flashlit_cpp_factoryFuncFlashlight_FUN_004a7520(void)
;
;
; Called Functions:
;   core_flashlit.cpp_CFlashlight_ctor_FUN_004a7550
;   crt_memory.c_operator_new_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0x594                          ; 004a7520
        ;   Label: core_flashlit.cpp_factoryFuncFlashlight_FUN_004a7520
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 004a7525
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 004a752a
    TEST EAX,EAX                        ; 004a752d
    JNZ 0x004a7532                      ; 004a752f
        ;   XREF to: 004a7532 (CONDITIONAL_JUMP)  ; LAB_004a7532
    RET                                 ; 004a7531
    PUSH EAX                            ; 004a7532
        ;   Label: LAB_004a7532
    CALL core_flashlit.cpp_CFlashlight_ctor_FUN_004a7550 ; 004a7533
        ;   XREF to: 004a7550 (UNCONDITIONAL_CALL)  ; CFlashlight * core_flashlit.cpp_CFlashlight_ctor_FUN_004a7550(CFlashlight * this_ptr)
    ADD ESP,0x4                         ; 004a7538
    RET                                 ; 004a753b

