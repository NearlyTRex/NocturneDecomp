; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_lightgun_cpp_factoryFuncLightGun_FUN_004e29f0(void)
;
;
; Called Functions:
;   core_lightgun.cpp_CLightGun_ctor_FUN_004e2a20
;   crt_memory.c_operator_new_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x6f4                          ; 004e29f0
        ;   Label: core_lightgun.cpp_factoryFuncLightGun_FUN_004e29f0
    CALL crt_memory.c_operator_new_FUN_005b8be2 ; 004e29f5
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005b8be2()
    ADD ESP,0x4                         ; 004e29fa
    TEST EAX,EAX                        ; 004e29fd
    JNZ 0x004e2a02                      ; 004e29ff
        ;   XREF to: 004e2a02 (CONDITIONAL_JUMP)  ; LAB_004e2a02
    RET                                 ; 004e2a01
    PUSH EAX                            ; 004e2a02
        ;   Label: LAB_004e2a02
    CALL core_lightgun.cpp_CLightGun_ctor_FUN_004e2a20 ; 004e2a03
        ;   XREF to: 004e2a20 (UNCONDITIONAL_CALL)  ; CLightGun * core_lightgun.cpp_CLightGun_ctor_FUN_004e2a20(CLightGun * this_ptr)
    ADD ESP,0x4                         ; 004e2a08
    RET                                 ; 004e2a0b

