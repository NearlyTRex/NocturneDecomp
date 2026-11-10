; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dog1_cpp_factoryFuncDog_FUN_005aba10(void)
;
;
; Called Functions:
;   core_dog1.cpp_CDog_ctor_FUN_005aba40
;   crt_unknown.c_debugAllocTracked1_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x11870                        ; 005aba10
        ;   Label: core_dog1.cpp_factoryFuncDog_FUN_005aba10
    CALL crt_unknown.c_debugAllocTracked1_FUN_005b8be2 ; 005aba15
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005b8be2()
    ADD ESP,0x4                         ; 005aba1a
    TEST EAX,EAX                        ; 005aba1d
    JNZ 0x005aba22                      ; 005aba1f
        ;   XREF to: 005aba22 (CONDITIONAL_JUMP)  ; LAB_005aba22
    RET                                 ; 005aba21
    PUSH EAX                            ; 005aba22
        ;   Label: LAB_005aba22
    CALL core_dog1.cpp_CDog_ctor_FUN_005aba40 ; 005aba23
        ;   XREF to: 005aba40 (UNCONDITIONAL_CALL)  ; CDog * core_dog1.cpp_CDog_ctor_FUN_005aba40(CDog * this_ptr)
    ADD ESP,0x4                         ; 005aba28
    RET                                 ; 005aba2b

