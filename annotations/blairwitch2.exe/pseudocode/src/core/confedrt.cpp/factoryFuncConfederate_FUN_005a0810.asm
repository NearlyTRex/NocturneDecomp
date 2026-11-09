; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_confedrt_cpp_factoryFuncConfederate_FUN_005a0810(void)
;
;
; Called Functions:
;   core_confedrt.cpp_CConfederate_ctor_FUN_005a0840
;   crt_unknown.c_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x11868                        ; 005a0810
        ;   Label: core_confedrt.cpp_factoryFuncConfederate_FUN_005a0810
    CALL crt_unknown.c_FUN_005b8be2     ; 005a0815
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8be2()
    ADD ESP,0x4                         ; 005a081a
    TEST EAX,EAX                        ; 005a081d
    JNZ 0x005a0822                      ; 005a081f
        ;   XREF to: 005a0822 (CONDITIONAL_JUMP)  ; LAB_005a0822
    RET                                 ; 005a0821
    PUSH EAX                            ; 005a0822
        ;   Label: LAB_005a0822
    CALL core_confedrt.cpp_CConfederate_ctor_FUN_005a0840 ; 005a0823
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)  ; CConfederate * core_confedrt.cpp_CConfederate_ctor_FUN_005a0840(CConfederate * this_ptr)
    ADD ESP,0x4                         ; 005a0828
    RET                                 ; 005a082b

