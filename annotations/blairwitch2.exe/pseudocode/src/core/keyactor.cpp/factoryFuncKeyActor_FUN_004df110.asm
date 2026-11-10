; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_keyactor_cpp_factoryFuncKeyActor_FUN_004df110(void)
;
;
; Called Functions:
;   core_keyactor.cpp_CKeyActor_ctor_FUN_004df140
;   crt_unknown.c_debugAllocTracked1_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x478                          ; 004df110
        ;   Label: core_keyactor.cpp_factoryFuncKeyActor_FUN_004df110
    CALL crt_unknown.c_debugAllocTracked1_FUN_005b8be2 ; 004df115
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005b8be2()
    ADD ESP,0x4                         ; 004df11a
    TEST EAX,EAX                        ; 004df11d
    JNZ 0x004df122                      ; 004df11f
        ;   XREF to: 004df122 (CONDITIONAL_JUMP)  ; LAB_004df122
    RET                                 ; 004df121
    PUSH EAX                            ; 004df122
        ;   Label: LAB_004df122
    CALL core_keyactor.cpp_CKeyActor_ctor_FUN_004df140 ; 004df123
        ;   XREF to: 004df140 (UNCONDITIONAL_CALL)  ; CKeyActor * core_keyactor.cpp_CKeyActor_ctor_FUN_004df140(CKeyActor * this_ptr)
    ADD ESP,0x4                         ; 004df128
    RET                                 ; 004df12b

