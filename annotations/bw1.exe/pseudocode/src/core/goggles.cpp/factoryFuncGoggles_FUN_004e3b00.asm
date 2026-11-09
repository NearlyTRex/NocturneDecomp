; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_goggles_cpp_factoryFuncGoggles_FUN_004e3b00(void)
;
;
; Called Functions:
;   core_goggles.cpp_CGoggles_ctor_FUN_004e3b30
;   crt_unknown.c_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0x2d8                          ; 004e3b00
        ;   Label: core_goggles.cpp_factoryFuncGoggles_FUN_004e3b00
    CALL crt_unknown.c_FUN_005c0f32     ; 004e3b05
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0f32()
    ADD ESP,0x4                         ; 004e3b0a
    TEST EAX,EAX                        ; 004e3b0d
    JNZ 0x004e3b12                      ; 004e3b0f
        ;   XREF to: 004e3b12 (CONDITIONAL_JUMP)  ; LAB_004e3b12
    RET                                 ; 004e3b11
    PUSH EAX                            ; 004e3b12
        ;   Label: LAB_004e3b12
    CALL core_goggles.cpp_CGoggles_ctor_FUN_004e3b30 ; 004e3b13
        ;   XREF to: 004e3b30 (UNCONDITIONAL_CALL)  ; CGoggles * core_goggles.cpp_CGoggles_ctor_FUN_004e3b30(CGoggles * this_ptr)
    ADD ESP,0x4                         ; 004e3b18
    RET                                 ; 004e3b1b

