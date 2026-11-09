; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_bodypart_cpp_factoryFuncBodyPart_FUN_00418b10(void)
;
;
; Called Functions:
;   core_bodypart.cpp_CBodyPart_ctor_FUN_00418b40
;   crt_unknown.c_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0xf34                          ; 00418b10
        ;   Label: core_bodypart.cpp_factoryFuncBodyPart_FUN_00418b10
    CALL crt_unknown.c_FUN_005c0f32     ; 00418b15
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0f32()
    ADD ESP,0x4                         ; 00418b1a
    TEST EAX,EAX                        ; 00418b1d
    JNZ 0x00418b22                      ; 00418b1f
        ;   XREF to: 00418b22 (CONDITIONAL_JUMP)  ; LAB_00418b22
    RET                                 ; 00418b21
    PUSH EAX                            ; 00418b22
        ;   Label: LAB_00418b22
    CALL core_bodypart.cpp_CBodyPart_ctor_FUN_00418b40 ; 00418b23
        ;   XREF to: 00418b40 (UNCONDITIONAL_CALL)  ; CBodyPart * core_bodypart.cpp_CBodyPart_ctor_FUN_00418b40(CBodyPart * this_ptr)
    ADD ESP,0x4                         ; 00418b28
    RET                                 ; 00418b2b

