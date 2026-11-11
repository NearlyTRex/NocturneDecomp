; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_batcreat_cpp_factoryFuncBatCreature_FUN_00411660(void)
;
;
; Called Functions:
;   core_batcreat.cpp_CBatCreature_ctor_FUN_00411690
;   crt_memory.c_operator_new_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x10b40                        ; 00411660
        ;   Label: core_batcreat.cpp_factoryFuncBatCreature_FUN_00411660
    CALL crt_memory.c_operator_new_FUN_005b8be2 ; 00411665
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005b8be2()
    ADD ESP,0x4                         ; 0041166a
    TEST EAX,EAX                        ; 0041166d
    JNZ 0x00411672                      ; 0041166f
        ;   XREF to: 00411672 (CONDITIONAL_JUMP)  ; LAB_00411672
    RET                                 ; 00411671
    PUSH EAX                            ; 00411672
        ;   Label: LAB_00411672
    CALL core_batcreat.cpp_CBatCreature_ctor_FUN_00411690 ; 00411673
        ;   XREF to: 00411690 (UNCONDITIONAL_CALL)  ; CBatCreature * core_batcreat.cpp_CBatCreature_ctor_FUN_00411690(CBatCreature * this_ptr)
    ADD ESP,0x4                         ; 00411678
    RET                                 ; 0041167b

