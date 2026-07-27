; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_flashlit_cpp_FUN_0048ed30(void)
;
;
; Called Functions:
;   core_flashlit.cpp_CFlashlight_ctor_FUN_0048ed60
;   crt_unknown.c_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x570                          ; 0048ed30
        ;   Label: core_flashlit.cpp_FUN_0048ed30
    CALL crt_unknown.c_FUN_0056497c     ; 0048ed35
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056497c()
    ADD ESP,0x4                         ; 0048ed3a
    TEST EAX,EAX                        ; 0048ed3d
    JNZ 0x0048ed42                      ; 0048ed3f
        ;   XREF to: 0048ed42 (CONDITIONAL_JUMP)  ; LAB_0048ed42
    RET                                 ; 0048ed41
    PUSH EAX                            ; 0048ed42
        ;   Label: LAB_0048ed42
    CALL core_flashlit.cpp_CFlashlight_ctor_FUN_0048ed60 ; 0048ed43
        ;   XREF to: 0048ed60 (UNCONDITIONAL_CALL)  ; undefined core_flashlit.cpp_CFlashlight_ctor_FUN_0048ed60()
    ADD ESP,0x4                         ; 0048ed48
    RET                                 ; 0048ed4b

