; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_lever_cpp_factoryFuncLever_FUN_004e1bf0(void)
;
;
; Called Functions:
;   core_lever.cpp_CLever_ctor_FUN_004e1c20
;   crt_unknown.c_debugAllocTracked1_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x970                          ; 004e1bf0
        ;   Label: core_lever.cpp_factoryFuncLever_FUN_004e1bf0
    CALL crt_unknown.c_debugAllocTracked1_FUN_005b8be2 ; 004e1bf5
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005b8be2()
    ADD ESP,0x4                         ; 004e1bfa
    TEST EAX,EAX                        ; 004e1bfd
    JNZ 0x004e1c02                      ; 004e1bff
        ;   XREF to: 004e1c02 (CONDITIONAL_JUMP)  ; LAB_004e1c02
    RET                                 ; 004e1c01
    PUSH EAX                            ; 004e1c02
        ;   Label: LAB_004e1c02
    CALL core_lever.cpp_CLever_ctor_FUN_004e1c20 ; 004e1c03
        ;   XREF to: 004e1c20 (UNCONDITIONAL_CALL)  ; CLever * core_lever.cpp_CLever_ctor_FUN_004e1c20(CLever * this_ptr)
    ADD ESP,0x4                         ; 004e1c08
    RET                                 ; 004e1c0b

