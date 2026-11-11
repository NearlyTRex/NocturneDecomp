; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_platfrm_cpp_factoryFuncPlatform_FUN_005110b0(void)
;
;
; Called Functions:
;   core_platfrm.cpp_CPlatform_ctor_FUN_005110e0
;   crt_memory.c_operator_new_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0x728                          ; 005110b0
        ;   Label: core_platfrm.cpp_factoryFuncPlatform_FUN_005110b0
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 005110b5
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 005110ba
    TEST EAX,EAX                        ; 005110bd
    JNZ 0x005110c2                      ; 005110bf
        ;   XREF to: 005110c2 (CONDITIONAL_JUMP)  ; LAB_005110c2
    RET                                 ; 005110c1
    PUSH EAX                            ; 005110c2
        ;   Label: LAB_005110c2
    CALL core_platfrm.cpp_CPlatform_ctor_FUN_005110e0 ; 005110c3
        ;   XREF to: 005110e0 (UNCONDITIONAL_CALL)  ; CPlatform * core_platfrm.cpp_CPlatform_ctor_FUN_005110e0(CPlatform * this_ptr)
    ADD ESP,0x4                         ; 005110c8
    RET                                 ; 005110cb

