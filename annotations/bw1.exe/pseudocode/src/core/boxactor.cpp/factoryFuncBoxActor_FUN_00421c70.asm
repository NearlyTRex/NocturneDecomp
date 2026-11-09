; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_boxactor_cpp_factoryFuncBoxActor_FUN_00421c70(void)
;
;
; Called Functions:
;   core_boxactor.cpp_CBoxActor_ctor_FUN_00421ca0
;   crt_unknown.c_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0x678                          ; 00421c70
        ;   Label: core_boxactor.cpp_factoryFuncBoxActor_FUN_00421c70
    CALL crt_unknown.c_FUN_005c0f32     ; 00421c75
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0f32()
    ADD ESP,0x4                         ; 00421c7a
    TEST EAX,EAX                        ; 00421c7d
    JNZ 0x00421c82                      ; 00421c7f
        ;   XREF to: 00421c82 (CONDITIONAL_JUMP)  ; LAB_00421c82
    RET                                 ; 00421c81
    PUSH EAX                            ; 00421c82
        ;   Label: LAB_00421c82
    CALL core_boxactor.cpp_CBoxActor_ctor_FUN_00421ca0 ; 00421c83
        ;   XREF to: 00421ca0 (UNCONDITIONAL_CALL)  ; CBoxActor * core_boxactor.cpp_CBoxActor_ctor_FUN_00421ca0(CBoxActor * this_ptr)
    ADD ESP,0x4                         ; 00421c88
    RET                                 ; 00421c8b

