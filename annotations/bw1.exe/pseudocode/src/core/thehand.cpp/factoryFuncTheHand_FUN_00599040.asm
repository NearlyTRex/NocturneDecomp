; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_thehand_cpp_factoryFuncTheHand_FUN_00599040(void)
;
;
; Called Functions:
;   core_thehand.cpp_CTheHand_ctor_FUN_00599070
;   crt_unknown.c_debugAllocTracked1_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0xc2e0                         ; 00599040
        ;   Label: core_thehand.cpp_factoryFuncTheHand_FUN_00599040
    CALL crt_unknown.c_debugAllocTracked1_FUN_005c0f32 ; 00599045
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005c0f32()
    ADD ESP,0x4                         ; 0059904a
    TEST EAX,EAX                        ; 0059904d
    JNZ 0x00599052                      ; 0059904f
        ;   XREF to: 00599052 (CONDITIONAL_JUMP)  ; LAB_00599052
    RET                                 ; 00599051
    PUSH EAX                            ; 00599052
        ;   Label: LAB_00599052
    CALL core_thehand.cpp_CTheHand_ctor_FUN_00599070 ; 00599053
        ;   XREF to: 00599070 (UNCONDITIONAL_CALL)  ; CTheHand * core_thehand.cpp_CTheHand_ctor_FUN_00599070(CTheHand * this_ptr)
    ADD ESP,0x4                         ; 00599058
    RET                                 ; 0059905b

