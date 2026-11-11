; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_flashlit_cpp_factoryFuncFlashlight_FUN_004b98e0(void)
;
;
; Called Functions:
;   core_flashlit.cpp_CFlashlight_ctor_FUN_004b9910
;   crt_memory.c_operator_new_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0x578                          ; 004b98e0
        ;   Label: core_flashlit.cpp_factoryFuncFlashlight_FUN_004b98e0
    CALL crt_memory.c_operator_new_FUN_005c0f32 ; 004b98e5
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005c0f32()
    ADD ESP,0x4                         ; 004b98ea
    TEST EAX,EAX                        ; 004b98ed
    JNZ 0x004b98f2                      ; 004b98ef
        ;   XREF to: 004b98f2 (CONDITIONAL_JUMP)  ; LAB_004b98f2
    RET                                 ; 004b98f1
    PUSH EAX                            ; 004b98f2
        ;   Label: LAB_004b98f2
    CALL core_flashlit.cpp_CFlashlight_ctor_FUN_004b9910 ; 004b98f3
        ;   XREF to: 004b9910 (UNCONDITIONAL_CALL)  ; CFlashlight * core_flashlit.cpp_CFlashlight_ctor_FUN_004b9910(CFlashlight * this_ptr)
    ADD ESP,0x4                         ; 004b98f8
    RET                                 ; 004b98fb

