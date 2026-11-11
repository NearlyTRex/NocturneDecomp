; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_stranger_cpp_factoryFuncStranger_FUN_00585240(void)
;
;
; Called Functions:
;   core_stranger.cpp_CStranger_ctor_FUN_00585270
;   crt_memory.c_operator_new_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0x20244                        ; 00585240
        ;   Label: core_stranger.cpp_factoryFuncStranger_FUN_00585240
    CALL crt_memory.c_operator_new_FUN_005c0f32 ; 00585245
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005c0f32()
    ADD ESP,0x4                         ; 0058524a
    TEST EAX,EAX                        ; 0058524d
    JNZ 0x00585252                      ; 0058524f
        ;   XREF to: 00585252 (CONDITIONAL_JUMP)  ; LAB_00585252
    RET                                 ; 00585251
    PUSH EAX                            ; 00585252
        ;   Label: LAB_00585252
    CALL core_stranger.cpp_CStranger_ctor_FUN_00585270 ; 00585253
        ;   XREF to: 00585270 (UNCONDITIONAL_CALL)  ; CStranger * core_stranger.cpp_CStranger_ctor_FUN_00585270(CStranger * this_ptr)
    ADD ESP,0x4                         ; 00585258
    RET                                 ; 0058525b

