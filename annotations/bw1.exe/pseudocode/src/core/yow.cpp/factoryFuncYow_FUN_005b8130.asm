; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_yow_cpp_factoryFuncYow_FUN_005b8130(void)
;
;
; Called Functions:
;   core_yow.cpp_CYow_ctor_FUN_005b8160
;   crt_memory.c_operator_new_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0xc2b8                         ; 005b8130
        ;   Label: core_yow.cpp_factoryFuncYow_FUN_005b8130
    CALL crt_memory.c_operator_new_FUN_005c0f32 ; 005b8135
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005c0f32()
    ADD ESP,0x4                         ; 005b813a
    TEST EAX,EAX                        ; 005b813d
    JNZ 0x005b8142                      ; 005b813f
        ;   XREF to: 005b8142 (CONDITIONAL_JUMP)  ; LAB_005b8142
    RET                                 ; 005b8141
    PUSH EAX                            ; 005b8142
        ;   Label: LAB_005b8142
    CALL core_yow.cpp_CYow_ctor_FUN_005b8160 ; 005b8143
        ;   XREF to: 005b8160 (UNCONDITIONAL_CALL)  ; CYow * core_yow.cpp_CYow_ctor_FUN_005b8160(CYow * this_ptr)
    ADD ESP,0x4                         ; 005b8148
    RET                                 ; 005b814b

