; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_chain_cpp_factoryFuncChain_FUN_00435630(void)
;
;
; Called Functions:
;   core_chain.cpp_CChain_ctor_FUN_00435660
;   crt_memory.c_operator_new_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0x578                          ; 00435630
        ;   Label: core_chain.cpp_factoryFuncChain_FUN_00435630
    CALL crt_memory.c_operator_new_FUN_005c0f32 ; 00435635
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005c0f32()
    ADD ESP,0x4                         ; 0043563a
    TEST EAX,EAX                        ; 0043563d
    JNZ 0x00435642                      ; 0043563f
        ;   XREF to: 00435642 (CONDITIONAL_JUMP)  ; LAB_00435642
    RET                                 ; 00435641
    PUSH EAX                            ; 00435642
        ;   Label: LAB_00435642
    CALL core_chain.cpp_CChain_ctor_FUN_00435660 ; 00435643
        ;   XREF to: 00435660 (UNCONDITIONAL_CALL)  ; CChain * core_chain.cpp_CChain_ctor_FUN_00435660(CChain * this_ptr)
    ADD ESP,0x4                         ; 00435648
    RET                                 ; 0043564b

