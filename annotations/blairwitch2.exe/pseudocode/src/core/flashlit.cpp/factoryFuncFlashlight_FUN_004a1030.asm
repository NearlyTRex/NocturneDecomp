; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_flashlit_cpp_factoryFuncFlashlight_FUN_004a1030(void)
;
;
; Called Functions:
;   core_flashlit.cpp_CFlashlight_ctor_FUN_004a1060
;   crt_memory.c_operator_new_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x6d4                          ; 004a1030
        ;   Label: core_flashlit.cpp_factoryFuncFlashlight_FUN_004a1030
    CALL crt_memory.c_operator_new_FUN_005b8be2 ; 004a1035
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005b8be2()
    ADD ESP,0x4                         ; 004a103a
    TEST EAX,EAX                        ; 004a103d
    JNZ 0x004a1042                      ; 004a103f
        ;   XREF to: 004a1042 (CONDITIONAL_JUMP)  ; LAB_004a1042
    RET                                 ; 004a1041
    PUSH EAX                            ; 004a1042
        ;   Label: LAB_004a1042
    CALL core_flashlit.cpp_CFlashlight_ctor_FUN_004a1060 ; 004a1043
        ;   XREF to: 004a1060 (UNCONDITIONAL_CALL)  ; CFlashlight * core_flashlit.cpp_CFlashlight_ctor_FUN_004a1060(CFlashlight * this_ptr)
    ADD ESP,0x4                         ; 004a1048
    RET                                 ; 004a104b

