; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_hand_cpp_factoryFuncHand_FUN_005a9bd0(void)
;
;
; Called Functions:
;   core_hand.cpp_CHand_ctor_FUN_005a9c00
;   crt_memory.c_operator_new_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x1186c                        ; 005a9bd0
        ;   Label: core_hand.cpp_factoryFuncHand_FUN_005a9bd0
    CALL crt_memory.c_operator_new_FUN_005b8be2 ; 005a9bd5
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005b8be2()
    ADD ESP,0x4                         ; 005a9bda
    TEST EAX,EAX                        ; 005a9bdd
    JNZ 0x005a9be2                      ; 005a9bdf
        ;   XREF to: 005a9be2 (CONDITIONAL_JUMP)  ; LAB_005a9be2
    RET                                 ; 005a9be1
    PUSH EAX                            ; 005a9be2
        ;   Label: LAB_005a9be2
    CALL core_hand.cpp_CHand_ctor_FUN_005a9c00 ; 005a9be3
        ;   XREF to: 005a9c00 (UNCONDITIONAL_CALL)  ; CHand * core_hand.cpp_CHand_ctor_FUN_005a9c00(CHand * this_ptr)
    ADD ESP,0x4                         ; 005a9be8
    RET                                 ; 005a9beb

