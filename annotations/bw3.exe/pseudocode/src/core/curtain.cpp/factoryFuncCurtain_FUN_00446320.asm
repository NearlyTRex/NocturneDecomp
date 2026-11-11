; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_curtain_cpp_factoryFuncCurtain_FUN_00446320(void)
;
;
; Called Functions:
;   core_curtain.cpp_CCurtain_ctor_FUN_00446350
;   crt_memory.c_operator_new_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0x65b38                        ; 00446320
        ;   Label: core_curtain.cpp_factoryFuncCurtain_FUN_00446320
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 00446325
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 0044632a
    TEST EAX,EAX                        ; 0044632d
    JNZ 0x00446332                      ; 0044632f
        ;   XREF to: 00446332 (CONDITIONAL_JUMP)  ; LAB_00446332
    RET                                 ; 00446331
    PUSH EAX                            ; 00446332
        ;   Label: LAB_00446332
    CALL core_curtain.cpp_CCurtain_ctor_FUN_00446350 ; 00446333
        ;   XREF to: 00446350 (UNCONDITIONAL_CALL)  ; CCurtain * core_curtain.cpp_CCurtain_ctor_FUN_00446350(CCurtain * this_ptr)
    ADD ESP,0x4                         ; 00446338
    RET                                 ; 0044633b

