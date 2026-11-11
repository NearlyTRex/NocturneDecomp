; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_drip_cpp_factoryFuncDrip_FUN_0046ea20(void)
;
;
; Called Functions:
;   core_drip.cpp_CDrip_ctor_FUN_0046ea50
;   crt_memory.c_operator_new_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0x33c                          ; 0046ea20
        ;   Label: core_drip.cpp_factoryFuncDrip_FUN_0046ea20
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 0046ea25
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 0046ea2a
    TEST EAX,EAX                        ; 0046ea2d
    JNZ 0x0046ea32                      ; 0046ea2f
        ;   XREF to: 0046ea32 (CONDITIONAL_JUMP)  ; LAB_0046ea32
    RET                                 ; 0046ea31
    PUSH EAX                            ; 0046ea32
        ;   Label: LAB_0046ea32
    CALL core_drip.cpp_CDrip_ctor_FUN_0046ea50 ; 0046ea33
        ;   XREF to: 0046ea50 (UNCONDITIONAL_CALL)  ; CDrip * core_drip.cpp_CDrip_ctor_FUN_0046ea50(CDrip * this_ptr)
    ADD ESP,0x4                         ; 0046ea38
    RET                                 ; 0046ea3b

