; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_glass_cpp_factoryFuncGlass_FUN_004c9b70(void)
;
;
; Called Functions:
;   core_glass.cpp_CGlass_ctor_FUN_004c9ba0
;   crt_unknown.c_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0xb70                          ; 004c9b70
        ;   Label: core_glass.cpp_factoryFuncGlass_FUN_004c9b70
    CALL crt_unknown.c_FUN_005a3cb2     ; 004c9b75
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3cb2()
    ADD ESP,0x4                         ; 004c9b7a
    TEST EAX,EAX                        ; 004c9b7d
    JNZ 0x004c9b82                      ; 004c9b7f
        ;   XREF to: 004c9b82 (CONDITIONAL_JUMP)  ; LAB_004c9b82
    RET                                 ; 004c9b81
    PUSH EAX                            ; 004c9b82
        ;   Label: LAB_004c9b82
    CALL core_glass.cpp_CGlass_ctor_FUN_004c9ba0 ; 004c9b83
        ;   XREF to: 004c9ba0 (UNCONDITIONAL_CALL)  ; CGlass * core_glass.cpp_CGlass_ctor_FUN_004c9ba0(CGlass * this_ptr)
    ADD ESP,0x4                         ; 004c9b88
    RET                                 ; 004c9b8b

