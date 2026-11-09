; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_gasmask_cpp_factoryFuncGasMask_FUN_004dda90(void)
;
;
; Called Functions:
;   core_gasmask.cpp_CGasMask_ctor_FUN_004ddac0
;   crt_unknown.c_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0x2d8                          ; 004dda90
        ;   Label: core_gasmask.cpp_factoryFuncGasMask_FUN_004dda90
    CALL crt_unknown.c_FUN_005c0f32     ; 004dda95
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0f32()
    ADD ESP,0x4                         ; 004dda9a
    TEST EAX,EAX                        ; 004dda9d
    JNZ 0x004ddaa2                      ; 004dda9f
        ;   XREF to: 004ddaa2 (CONDITIONAL_JUMP)  ; LAB_004ddaa2
    RET                                 ; 004ddaa1
    PUSH EAX                            ; 004ddaa2
        ;   Label: LAB_004ddaa2
    CALL core_gasmask.cpp_CGasMask_ctor_FUN_004ddac0 ; 004ddaa3
        ;   XREF to: 004ddac0 (UNCONDITIONAL_CALL)  ; CGasMask * core_gasmask.cpp_CGasMask_ctor_FUN_004ddac0(CGasMask * this_ptr)
    ADD ESP,0x4                         ; 004ddaa8
    RET                                 ; 004ddaab

