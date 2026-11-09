; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_gasmask_cpp_factoryFuncGasMask_FUN_004c1310(void)
;
;
; Called Functions:
;   core_gasmask.cpp_CGasMask_ctor_FUN_004c1340
;   crt_unknown.c_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x434                          ; 004c1310
        ;   Label: core_gasmask.cpp_factoryFuncGasMask_FUN_004c1310
    CALL crt_unknown.c_FUN_005b8be2     ; 004c1315
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8be2()
    ADD ESP,0x4                         ; 004c131a
    TEST EAX,EAX                        ; 004c131d
    JNZ 0x004c1322                      ; 004c131f
        ;   XREF to: 004c1322 (CONDITIONAL_JUMP)  ; LAB_004c1322
    RET                                 ; 004c1321
    PUSH EAX                            ; 004c1322
        ;   Label: LAB_004c1322
    CALL core_gasmask.cpp_CGasMask_ctor_FUN_004c1340 ; 004c1323
        ;   XREF to: 004c1340 (UNCONDITIONAL_CALL)  ; CGasMask * core_gasmask.cpp_CGasMask_ctor_FUN_004c1340(CGasMask * this_ptr)
    ADD ESP,0x4                         ; 004c1328
    RET                                 ; 004c132b

