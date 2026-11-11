; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_belling_cpp_factoryFuncBelling_FUN_005a8f50(void)
;
;
; Called Functions:
;   core_belling.cpp_CBelling_ctor_FUN_005a8f80
;   crt_memory.c_operator_new_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x11850                        ; 005a8f50
        ;   Label: core_belling.cpp_factoryFuncBelling_FUN_005a8f50
    CALL crt_memory.c_operator_new_FUN_005b8be2 ; 005a8f55
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005b8be2()
    ADD ESP,0x4                         ; 005a8f5a
    TEST EAX,EAX                        ; 005a8f5d
    JNZ 0x005a8f62                      ; 005a8f5f
        ;   XREF to: 005a8f62 (CONDITIONAL_JUMP)  ; LAB_005a8f62
    RET                                 ; 005a8f61
    PUSH EAX                            ; 005a8f62
        ;   Label: LAB_005a8f62
    CALL core_belling.cpp_CBelling_ctor_FUN_005a8f80 ; 005a8f63
        ;   XREF to: 005a8f80 (UNCONDITIONAL_CALL)  ; CBelling * core_belling.cpp_CBelling_ctor_FUN_005a8f80(CBelling * this_ptr)
    ADD ESP,0x4                         ; 005a8f68
    RET                                 ; 005a8f6b

