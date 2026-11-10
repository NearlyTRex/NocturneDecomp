; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_sentinel_cpp_factoryFuncSentinel_FUN_0052a6f0(void)
;
;
; Called Functions:
;   core_sentinel.cpp_CSentinel_ctor_FUN_0052a720
;   crt_unknown.c_debugAllocTracked1_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x10b00                        ; 0052a6f0
        ;   Label: core_sentinel.cpp_factoryFuncSentinel_FUN_0052a6f0
    CALL crt_unknown.c_debugAllocTracked1_FUN_005b8be2 ; 0052a6f5
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005b8be2()
    ADD ESP,0x4                         ; 0052a6fa
    TEST EAX,EAX                        ; 0052a6fd
    JNZ 0x0052a702                      ; 0052a6ff
        ;   XREF to: 0052a702 (CONDITIONAL_JUMP)  ; LAB_0052a702
    RET                                 ; 0052a701
    PUSH EAX                            ; 0052a702
        ;   Label: LAB_0052a702
    CALL core_sentinel.cpp_CSentinel_ctor_FUN_0052a720 ; 0052a703
        ;   XREF to: 0052a720 (UNCONDITIONAL_CALL)  ; CSentinel * core_sentinel.cpp_CSentinel_ctor_FUN_0052a720(CSentinel * this_ptr)
    ADD ESP,0x4                         ; 0052a708
    RET                                 ; 0052a70b

