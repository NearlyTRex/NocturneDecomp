; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_simbox_cpp_factoryFuncSimBox_FUN_0053ff80(void)
;
;
; Called Functions:
;   core_simbox.cpp_CSimBox_ctor_FUN_0053ffb0
;   crt_unknown.c_debugAllocTracked1_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x728                          ; 0053ff80
        ;   Label: core_simbox.cpp_factoryFuncSimBox_FUN_0053ff80
    CALL crt_unknown.c_debugAllocTracked1_FUN_005b8be2 ; 0053ff85
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005b8be2()
    ADD ESP,0x4                         ; 0053ff8a
    TEST EAX,EAX                        ; 0053ff8d
    JNZ 0x0053ff92                      ; 0053ff8f
        ;   XREF to: 0053ff92 (CONDITIONAL_JUMP)  ; LAB_0053ff92
    RET                                 ; 0053ff91
    PUSH EAX                            ; 0053ff92
        ;   Label: LAB_0053ff92
    CALL core_simbox.cpp_CSimBox_ctor_FUN_0053ffb0 ; 0053ff93
        ;   XREF to: 0053ffb0 (UNCONDITIONAL_CALL)  ; CSimBox * core_simbox.cpp_CSimBox_ctor_FUN_0053ffb0(CSimBox * this_ptr)
    ADD ESP,0x4                         ; 0053ff98
    RET                                 ; 0053ff9b

