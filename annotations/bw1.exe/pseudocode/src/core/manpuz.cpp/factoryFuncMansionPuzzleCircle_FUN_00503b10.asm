; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_manpuz_cpp_factoryFuncMansionPuzzleCircle_FUN_00503b10(void)
;
;
; Called Functions:
;   core_manpuz.cpp_CMansionPuzzleCircle_ctor_FUN_00503b40
;   crt_memory.c_operator_new_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0x1514                         ; 00503b10
        ;   Label: core_manpuz.cpp_factoryFuncMansionPuzzleCircle_FUN_00503b10
    CALL crt_memory.c_operator_new_FUN_005c0f32 ; 00503b15
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005c0f32()
    ADD ESP,0x4                         ; 00503b1a
    TEST EAX,EAX                        ; 00503b1d
    JNZ 0x00503b22                      ; 00503b1f
        ;   XREF to: 00503b22 (CONDITIONAL_JUMP)  ; LAB_00503b22
    RET                                 ; 00503b21
    PUSH EAX                            ; 00503b22
        ;   Label: LAB_00503b22
    CALL core_manpuz.cpp_CMansionPuzzleCircle_ctor_FUN_00503b40 ; 00503b23
        ;   XREF to: 00503b40 (UNCONDITIONAL_CALL)  ; CMansionPuzzleCircle * core_manpuz.cpp_CMansionPuzzleCircle_ctor_FUN_00503b40(CMansionPuzzleCircle * this_ptr)
    ADD ESP,0x4                         ; 00503b28
    RET                                 ; 00503b2b

