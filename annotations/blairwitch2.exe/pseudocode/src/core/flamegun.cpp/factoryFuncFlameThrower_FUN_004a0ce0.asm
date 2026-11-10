; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_flamegun_cpp_factoryFuncFlameThrower_FUN_004a0ce0(void)
;
;
; Called Functions:
;   core_flamegun.cpp_CFlameThrower_ctor_FUN_004a0d10
;   crt_unknown.c_debugAllocTracked1_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x6e4                          ; 004a0ce0
        ;   Label: core_flamegun.cpp_factoryFuncFlameThrower_FUN_004a0ce0
    CALL crt_unknown.c_debugAllocTracked1_FUN_005b8be2 ; 004a0ce5
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005b8be2()
    ADD ESP,0x4                         ; 004a0cea
    TEST EAX,EAX                        ; 004a0ced
    JNZ 0x004a0cf2                      ; 004a0cef
        ;   XREF to: 004a0cf2 (CONDITIONAL_JUMP)  ; LAB_004a0cf2
    RET                                 ; 004a0cf1
    PUSH EAX                            ; 004a0cf2
        ;   Label: LAB_004a0cf2
    CALL core_flamegun.cpp_CFlameThrower_ctor_FUN_004a0d10 ; 004a0cf3
        ;   XREF to: 004a0d10 (UNCONDITIONAL_CALL)  ; CFlameThrower * core_flamegun.cpp_CFlameThrower_ctor_FUN_004a0d10(CFlameThrower * this_ptr)
    ADD ESP,0x4                         ; 004a0cf8
    RET                                 ; 004a0cfb

