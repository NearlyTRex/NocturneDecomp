; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_kedward_cpp_factoryFuncKedward_FUN_0058fd40(void)
;
;
; Called Functions:
;   core_kedward.cpp_CKedward_ctor_FUN_0058fd70
;   crt_unknown.c_debugAllocTracked1_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0xd0d8                         ; 0058fd40
        ;   Label: core_kedward.cpp_factoryFuncKedward_FUN_0058fd40
    CALL crt_unknown.c_debugAllocTracked1_FUN_005a3cb2 ; 0058fd45
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005a3cb2()
    ADD ESP,0x4                         ; 0058fd4a
    TEST EAX,EAX                        ; 0058fd4d
    JNZ 0x0058fd52                      ; 0058fd4f
        ;   XREF to: 0058fd52 (CONDITIONAL_JUMP)  ; LAB_0058fd52
    RET                                 ; 0058fd51
    PUSH EAX                            ; 0058fd52
        ;   Label: LAB_0058fd52
    CALL core_kedward.cpp_CKedward_ctor_FUN_0058fd70 ; 0058fd53
        ;   XREF to: 0058fd70 (UNCONDITIONAL_CALL)  ; CKedward * core_kedward.cpp_CKedward_ctor_FUN_0058fd70(CKedward * this_ptr)
    ADD ESP,0x4                         ; 0058fd58
    RET                                 ; 0058fd5b

