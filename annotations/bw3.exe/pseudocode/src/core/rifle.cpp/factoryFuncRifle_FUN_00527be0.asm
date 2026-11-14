; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CRifle * __cdecl core_rifle_cpp_factoryFuncRifle_FUN_00527be0(void)
;
;
; Called Functions:
;   core_rifle.cpp_CRifle_ctor_FUN_00527c10
;   crt_memory.c_operator_new_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0x5a0                          ; 00527be0
        ;   Label: core_rifle.cpp_factoryFuncRifle_FUN_00527be0
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 00527be5
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 00527bea
    TEST EAX,EAX                        ; 00527bed
    JNZ 0x00527bf2                      ; 00527bef
        ;   XREF to: 00527bf2 (CONDITIONAL_JUMP)  ; LAB_00527bf2
    RET                                 ; 00527bf1
    PUSH EAX                            ; 00527bf2
        ;   Label: LAB_00527bf2
    CALL core_rifle.cpp_CRifle_ctor_FUN_00527c10 ; 00527bf3
        ;   XREF to: 00527c10 (UNCONDITIONAL_CALL)  ; CRifle * core_rifle.cpp_CRifle_ctor_FUN_00527c10(CRifle * this_ptr)
    ADD ESP,0x4                         ; 00527bf8
    RET                                 ; 00527bfb

