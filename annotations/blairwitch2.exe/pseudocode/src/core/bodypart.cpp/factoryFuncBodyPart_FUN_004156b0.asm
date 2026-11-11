; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_bodypart_cpp_factoryFuncBodyPart_FUN_004156b0(void)
;
;
; Called Functions:
;   core_bodypart.cpp_CBodyPart_ctor_FUN_004156e0
;   crt_memory.c_operator_new_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x1344                         ; 004156b0
        ;   Label: core_bodypart.cpp_factoryFuncBodyPart_FUN_004156b0
    CALL crt_memory.c_operator_new_FUN_005b8be2 ; 004156b5
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005b8be2()
    ADD ESP,0x4                         ; 004156ba
    TEST EAX,EAX                        ; 004156bd
    JNZ 0x004156c2                      ; 004156bf
        ;   XREF to: 004156c2 (CONDITIONAL_JUMP)  ; LAB_004156c2
    RET                                 ; 004156c1
    PUSH EAX                            ; 004156c2
        ;   Label: LAB_004156c2
    CALL core_bodypart.cpp_CBodyPart_ctor_FUN_004156e0 ; 004156c3
        ;   XREF to: 004156e0 (UNCONDITIONAL_CALL)  ; CBodyPart * core_bodypart.cpp_CBodyPart_ctor_FUN_004156e0(CBodyPart * this_ptr)
    ADD ESP,0x4                         ; 004156c8
    RET                                 ; 004156cb

