; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_thehand_cpp_factoryFuncTheHand_FUN_0056c030(void)
;
;
; Called Functions:
;   core_thehand.cpp_CTheHand_ctor_FUN_0056c060
;   crt_unknown.c_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0xd0cc                         ; 0056c030
        ;   Label: core_thehand.cpp_factoryFuncTheHand_FUN_0056c030
    CALL crt_unknown.c_FUN_005a3cb2     ; 0056c035
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3cb2()
    ADD ESP,0x4                         ; 0056c03a
    TEST EAX,EAX                        ; 0056c03d
    JNZ 0x0056c042                      ; 0056c03f
        ;   XREF to: 0056c042 (CONDITIONAL_JUMP)  ; LAB_0056c042
    RET                                 ; 0056c041
    PUSH EAX                            ; 0056c042
        ;   Label: LAB_0056c042
    CALL core_thehand.cpp_CTheHand_ctor_FUN_0056c060 ; 0056c043
        ;   XREF to: 0056c060 (UNCONDITIONAL_CALL)  ; CTheHand * core_thehand.cpp_CTheHand_ctor_FUN_0056c060(CTheHand * this_ptr)
    ADD ESP,0x4                         ; 0056c048
    RET                                 ; 0056c04b

