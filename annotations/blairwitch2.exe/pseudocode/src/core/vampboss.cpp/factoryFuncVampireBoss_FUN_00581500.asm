; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_vampboss_cpp_factoryFuncVampireBoss_FUN_00581500(void)
;
;
; Called Functions:
;   core_vampboss.cpp_CVampireBoss_ctor_FUN_00581530
;   crt_unknown.c_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0xc3b9c                        ; 00581500
        ;   Label: core_vampboss.cpp_factoryFuncVampireBoss_FUN_00581500
    CALL crt_unknown.c_FUN_005b8be2     ; 00581505
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8be2()
    ADD ESP,0x4                         ; 0058150a
    TEST EAX,EAX                        ; 0058150d
    JNZ 0x00581512                      ; 0058150f
        ;   XREF to: 00581512 (CONDITIONAL_JUMP)  ; LAB_00581512
    RET                                 ; 00581511
    PUSH EAX                            ; 00581512
        ;   Label: LAB_00581512
    CALL core_vampboss.cpp_CVampireBoss_ctor_FUN_00581530 ; 00581513
        ;   XREF to: 00581530 (UNCONDITIONAL_CALL)  ; CVampireBoss * core_vampboss.cpp_CVampireBoss_ctor_FUN_00581530(CVampireBoss * this_ptr)
    ADD ESP,0x4                         ; 00581518
    RET                                 ; 0058151b

