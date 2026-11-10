; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_gasmask_cpp_factoryFuncGasMask_FUN_004c6610(void)
;
;
; Called Functions:
;   core_gasmask.cpp_CGasMask_ctor_FUN_004c6640
;   crt_unknown.c_debugAllocTracked1_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0x2d8                          ; 004c6610
        ;   Label: core_gasmask.cpp_factoryFuncGasMask_FUN_004c6610
    CALL crt_unknown.c_debugAllocTracked1_FUN_005a3cb2 ; 004c6615
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005a3cb2()
    ADD ESP,0x4                         ; 004c661a
    TEST EAX,EAX                        ; 004c661d
    JNZ 0x004c6622                      ; 004c661f
        ;   XREF to: 004c6622 (CONDITIONAL_JUMP)  ; LAB_004c6622
    RET                                 ; 004c6621
    PUSH EAX                            ; 004c6622
        ;   Label: LAB_004c6622
    CALL core_gasmask.cpp_CGasMask_ctor_FUN_004c6640 ; 004c6623
        ;   XREF to: 004c6640 (UNCONDITIONAL_CALL)  ; CGasMask * core_gasmask.cpp_CGasMask_ctor_FUN_004c6640(CGasMask * this_ptr)
    ADD ESP,0x4                         ; 004c6628
    RET                                 ; 004c662b

