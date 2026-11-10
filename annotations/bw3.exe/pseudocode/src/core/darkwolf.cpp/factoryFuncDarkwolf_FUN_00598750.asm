; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_darkwolf_cpp_factoryFuncDarkwolf_FUN_00598750(void)
;
;
; Called Functions:
;   crt_unknown.c_debugAllocTracked1_FUN_005a3cb2
;   unkafter_darkwolf.cpp_CDarkwolf_ctor_FUN_00598780
;
; *****************************************************************************

section .text

    PUSH 0xdc98                         ; 00598750
        ;   Label: core_darkwolf.cpp_factoryFuncDarkwolf_FUN_00598750
    CALL crt_unknown.c_debugAllocTracked1_FUN_005a3cb2 ; 00598755
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005a3cb2()
    ADD ESP,0x4                         ; 0059875a
    TEST EAX,EAX                        ; 0059875d
    JNZ 0x00598762                      ; 0059875f
        ;   XREF to: 00598762 (CONDITIONAL_JUMP)  ; LAB_00598762
    RET                                 ; 00598761
    PUSH EAX                            ; 00598762
        ;   Label: LAB_00598762
    CALL unkafter_darkwolf.cpp_CDarkwolf_ctor_FUN_00598780 ; 00598763
        ;   XREF to: 00598780 (UNCONDITIONAL_CALL)  ; CDarkwolf * unkafter_darkwolf.cpp_CDarkwolf_ctor_FUN_00598780(CDarkwolf * this_ptr)
    ADD ESP,0x4                         ; 00598768
    RET                                 ; 0059876b

