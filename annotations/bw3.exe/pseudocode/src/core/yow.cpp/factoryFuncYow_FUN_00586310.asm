; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_yow_cpp_factoryFuncYow_FUN_00586310(void)
;
;
; Called Functions:
;   core_xform.cpp_CYow_ctor_FUN_00586340
;   crt_unknown.c_debugAllocTracked1_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0xd078                         ; 00586310
        ;   Label: core_yow.cpp_factoryFuncYow_FUN_00586310
    CALL crt_unknown.c_debugAllocTracked1_FUN_005a3cb2 ; 00586315
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005a3cb2()
    ADD ESP,0x4                         ; 0058631a
    TEST EAX,EAX                        ; 0058631d
    JNZ 0x00586322                      ; 0058631f
        ;   XREF to: 00586322 (CONDITIONAL_JUMP)  ; LAB_00586322
    RET                                 ; 00586321
    PUSH EAX                            ; 00586322
        ;   Label: LAB_00586322
    CALL core_xform.cpp_CYow_ctor_FUN_00586340 ; 00586323
        ;   XREF to: 00586340 (UNCONDITIONAL_CALL)  ; CYow * core_xform.cpp_CYow_ctor_FUN_00586340(CYow * this_ptr)
    ADD ESP,0x4                         ; 00586328
    RET                                 ; 0058632b

