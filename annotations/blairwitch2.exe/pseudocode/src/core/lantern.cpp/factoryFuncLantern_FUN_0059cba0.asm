; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_lantern_cpp_factoryFuncLantern_FUN_0059cba0(void)
;
;
; Called Functions:
;   core_lantern.cpp_CLantern_ctor_FUN_0059cbd0
;   crt_unknown.c_debugAllocTracked1_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x708                          ; 0059cba0
        ;   Label: core_lantern.cpp_factoryFuncLantern_FUN_0059cba0
    CALL crt_unknown.c_debugAllocTracked1_FUN_005b8be2 ; 0059cba5
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005b8be2()
    ADD ESP,0x4                         ; 0059cbaa
    TEST EAX,EAX                        ; 0059cbad
    JNZ 0x0059cbb2                      ; 0059cbaf
        ;   XREF to: 0059cbb2 (CONDITIONAL_JUMP)  ; LAB_0059cbb2
    RET                                 ; 0059cbb1
    PUSH EAX                            ; 0059cbb2
        ;   Label: LAB_0059cbb2
    CALL core_lantern.cpp_CLantern_ctor_FUN_0059cbd0 ; 0059cbb3
        ;   XREF to: 0059cbd0 (UNCONDITIONAL_CALL)  ; CLantern * core_lantern.cpp_CLantern_ctor_FUN_0059cbd0(CLantern * this_ptr)
    ADD ESP,0x4                         ; 0059cbb8
    RET                                 ; 0059cbbb

