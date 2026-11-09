; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_health_cpp_factoryFuncHealthItem_FUN_004d1d50(void)
;
;
; Called Functions:
;   core_health.cpp_CHealthItem_ctor_FUN_004d1d80
;   crt_unknown.c_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0x2e4                          ; 004d1d50
        ;   Label: core_health.cpp_factoryFuncHealthItem_FUN_004d1d50
    CALL crt_unknown.c_FUN_005a3cb2     ; 004d1d55
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3cb2()
    ADD ESP,0x4                         ; 004d1d5a
    TEST EAX,EAX                        ; 004d1d5d
    JNZ 0x004d1d62                      ; 004d1d5f
        ;   XREF to: 004d1d62 (CONDITIONAL_JUMP)  ; LAB_004d1d62
    RET                                 ; 004d1d61
    PUSH EAX                            ; 004d1d62
        ;   Label: LAB_004d1d62
    CALL core_health.cpp_CHealthItem_ctor_FUN_004d1d80 ; 004d1d63
        ;   XREF to: 004d1d80 (UNCONDITIONAL_CALL)  ; CHealthItem * core_health.cpp_CHealthItem_ctor_FUN_004d1d80(CHealthItem * this_ptr)
    ADD ESP,0x4                         ; 004d1d68
    RET                                 ; 004d1d6b

