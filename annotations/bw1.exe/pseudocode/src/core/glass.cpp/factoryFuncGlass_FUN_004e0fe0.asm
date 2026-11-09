; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_glass_cpp_factoryFuncGlass_FUN_004e0fe0(void)
;
;
; Called Functions:
;   core_glass.cpp_CGlass_ctor_FUN_004e1010
;   crt_unknown.c_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0xb40                          ; 004e0fe0
        ;   Label: core_glass.cpp_factoryFuncGlass_FUN_004e0fe0
    CALL crt_unknown.c_FUN_005c0f32     ; 004e0fe5
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0f32()
    ADD ESP,0x4                         ; 004e0fea
    TEST EAX,EAX                        ; 004e0fed
    JNZ 0x004e0ff2                      ; 004e0fef
        ;   XREF to: 004e0ff2 (CONDITIONAL_JUMP)  ; LAB_004e0ff2
    RET                                 ; 004e0ff1
    PUSH EAX                            ; 004e0ff2
        ;   Label: LAB_004e0ff2
    CALL core_glass.cpp_CGlass_ctor_FUN_004e1010 ; 004e0ff3
        ;   XREF to: 004e1010 (UNCONDITIONAL_CALL)  ; CGlass * core_glass.cpp_CGlass_ctor_FUN_004e1010(CGlass * this_ptr)
    ADD ESP,0x4                         ; 004e0ff8
    RET                                 ; 004e0ffb

