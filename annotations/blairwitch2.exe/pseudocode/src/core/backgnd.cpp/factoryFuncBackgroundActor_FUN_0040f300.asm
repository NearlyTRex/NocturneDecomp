; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_backgnd_cpp_factoryFuncBackgroundActor_FUN_0040f300(void)
;
;
; Called Functions:
;   core_backgnd.cpp_CBackgroundActor_ctor_FUN_0040f330
;   crt_unknown.c_debugAllocTracked1_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x43c                          ; 0040f300
        ;   Label: core_backgnd.cpp_factoryFuncBackgroundActor_FUN_0040f300
    CALL crt_unknown.c_debugAllocTracked1_FUN_005b8be2 ; 0040f305
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005b8be2()
    ADD ESP,0x4                         ; 0040f30a
    TEST EAX,EAX                        ; 0040f30d
    JNZ 0x0040f312                      ; 0040f30f
        ;   XREF to: 0040f312 (CONDITIONAL_JUMP)  ; LAB_0040f312
    RET                                 ; 0040f311
    PUSH EAX                            ; 0040f312
        ;   Label: LAB_0040f312
    CALL core_backgnd.cpp_CBackgroundActor_ctor_FUN_0040f330 ; 0040f313
        ;   XREF to: 0040f330 (UNCONDITIONAL_CALL)  ; CBackgroundActor * core_backgnd.cpp_CBackgroundActor_ctor_FUN_0040f330(CBackgroundActor * this_ptr)
    ADD ESP,0x4                         ; 0040f318
    RET                                 ; 0040f31b

