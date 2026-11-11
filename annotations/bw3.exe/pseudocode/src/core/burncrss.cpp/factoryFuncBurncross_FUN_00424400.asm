; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_burncrss_cpp_factoryFuncBurncross_FUN_00424400(void)
;
;
; Called Functions:
;   core_burncrss.cpp_CBurncross_ctor_FUN_00424430
;   crt_memory.c_operator_new_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0x1acc                         ; 00424400
        ;   Label: core_burncrss.cpp_factoryFuncBurncross_FUN_00424400
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 00424405
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 0042440a
    TEST EAX,EAX                        ; 0042440d
    JNZ 0x00424412                      ; 0042440f
        ;   XREF to: 00424412 (CONDITIONAL_JUMP)  ; LAB_00424412
    RET                                 ; 00424411
    PUSH EAX                            ; 00424412
        ;   Label: LAB_00424412
    CALL core_burncrss.cpp_CBurncross_ctor_FUN_00424430 ; 00424413
        ;   XREF to: 00424430 (UNCONDITIONAL_CALL)  ; CBurncross * core_burncrss.cpp_CBurncross_ctor_FUN_00424430(CBurncross * this_ptr)
    ADD ESP,0x4                         ; 00424418
    RET                                 ; 0042441b

