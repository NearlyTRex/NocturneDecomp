; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_hpriest_cpp_factoryFuncHighPriestOfGardath_FUN_004d4750(void)
;
;
; Called Functions:
;   core_hpriest.cpp_CHighPriestOfGardath_ctor_FUN_004d4780
;   crt_memory.c_operator_new_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x243ac                        ; 004d4750
        ;   Label: core_hpriest.cpp_factoryFuncHighPriestOfGardath_FUN_004d4750
    CALL crt_memory.c_operator_new_FUN_005b8be2 ; 004d4755
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005b8be2()
    ADD ESP,0x4                         ; 004d475a
    TEST EAX,EAX                        ; 004d475d
    JNZ 0x004d4762                      ; 004d475f
        ;   XREF to: 004d4762 (CONDITIONAL_JUMP)  ; LAB_004d4762
    RET                                 ; 004d4761
    PUSH EAX                            ; 004d4762
        ;   Label: LAB_004d4762
    CALL core_hpriest.cpp_CHighPriestOfGardath_ctor_FUN_004d4780 ; 004d4763
        ;   XREF to: 004d4780 (UNCONDITIONAL_CALL)  ; CHighPriestOfGardath * core_hpriest.cpp_CHighPriestOfGardath_ctor_FUN_004d4780(CHighPriestOfGardath * this_ptr)
    ADD ESP,0x4                         ; 004d4768
    RET                                 ; 004d476b

