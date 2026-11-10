; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_shovel_cpp_factoryFuncShovel_FUN_00547000(void)
;
;
; Called Functions:
;   core_shovel.cpp_CShovel_ctor_FUN_00547030
;   crt_unknown.c_debugAllocTracked1_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0x594                          ; 00547000
        ;   Label: core_shovel.cpp_factoryFuncShovel_FUN_00547000
    CALL crt_unknown.c_debugAllocTracked1_FUN_005a3cb2 ; 00547005
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005a3cb2()
    ADD ESP,0x4                         ; 0054700a
    TEST EAX,EAX                        ; 0054700d
    JNZ 0x00547012                      ; 0054700f
        ;   XREF to: 00547012 (CONDITIONAL_JUMP)  ; LAB_00547012
    RET                                 ; 00547011
    PUSH EAX                            ; 00547012
        ;   Label: LAB_00547012
    CALL core_shovel.cpp_CShovel_ctor_FUN_00547030 ; 00547013
        ;   XREF to: 00547030 (UNCONDITIONAL_CALL)  ; CShovel * core_shovel.cpp_CShovel_ctor_FUN_00547030(CShovel * this_ptr)
    ADD ESP,0x4                         ; 00547018
    RET                                 ; 0054701b

