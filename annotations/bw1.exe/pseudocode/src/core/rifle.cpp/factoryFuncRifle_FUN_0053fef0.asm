; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CRifle * __cdecl core_rifle_cpp_factoryFuncRifle_FUN_0053fef0(void)
;
;
; Called Functions:
;   core_rifle.cpp_CRifle_ctor_FUN_0053ff20
;   crt_memory.c_operator_new_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0x584                          ; 0053fef0
        ;   Label: core_rifle.cpp_factoryFuncRifle_FUN_0053fef0
    CALL crt_memory.c_operator_new_FUN_005c0f32 ; 0053fef5
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005c0f32()
    ADD ESP,0x4                         ; 0053fefa
    TEST EAX,EAX                        ; 0053fefd
    JNZ 0x0053ff02                      ; 0053feff
        ;   XREF to: 0053ff02 (CONDITIONAL_JUMP)  ; LAB_0053ff02
    RET                                 ; 0053ff01
    PUSH EAX                            ; 0053ff02
        ;   Label: LAB_0053ff02
    CALL core_rifle.cpp_CRifle_ctor_FUN_0053ff20 ; 0053ff03
        ;   XREF to: 0053ff20 (UNCONDITIONAL_CALL)  ; CRifle * core_rifle.cpp_CRifle_ctor_FUN_0053ff20(CRifle * this_ptr)
    ADD ESP,0x4                         ; 0053ff08
    RET                                 ; 0053ff0b

