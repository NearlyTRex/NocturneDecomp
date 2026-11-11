; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_baron_cpp_factoryFuncBaronWeapon_FUN_004108b0(void)
;
;
; Called Functions:
;   core_baron.cpp_CBaronWeapon_ctor_FUN_004108e0
;   crt_memory.c_operator_new_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x6d8                          ; 004108b0
        ;   Label: core_baron.cpp_factoryFuncBaronWeapon_FUN_004108b0
    CALL crt_memory.c_operator_new_FUN_005b8be2 ; 004108b5
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005b8be2()
    ADD ESP,0x4                         ; 004108ba
    TEST EAX,EAX                        ; 004108bd
    JNZ 0x004108c2                      ; 004108bf
        ;   XREF to: 004108c2 (CONDITIONAL_JUMP)  ; LAB_004108c2
    RET                                 ; 004108c1
    PUSH EAX                            ; 004108c2
        ;   Label: LAB_004108c2
    CALL core_baron.cpp_CBaronWeapon_ctor_FUN_004108e0 ; 004108c3
        ;   XREF to: 004108e0 (UNCONDITIONAL_CALL)  ; CBaronWeapon * core_baron.cpp_CBaronWeapon_ctor_FUN_004108e0(CBaronWeapon * this_ptr)
    ADD ESP,0x4                         ; 004108c8
    RET                                 ; 004108cb

