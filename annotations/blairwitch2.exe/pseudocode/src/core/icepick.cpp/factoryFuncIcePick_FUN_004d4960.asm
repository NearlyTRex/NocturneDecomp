; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_icepick_cpp_factoryFuncIcePick_FUN_004d4960(void)
;
;
; Called Functions:
;   core_icepick.cpp_CIcePick_ctor_FUN_004d4990
;   crt_unknown.c_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x25670                        ; 004d4960
        ;   Label: core_icepick.cpp_factoryFuncIcePick_FUN_004d4960
    CALL crt_unknown.c_FUN_005b8be2     ; 004d4965
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8be2()
    ADD ESP,0x4                         ; 004d496a
    TEST EAX,EAX                        ; 004d496d
    JNZ 0x004d4972                      ; 004d496f
        ;   XREF to: 004d4972 (CONDITIONAL_JUMP)  ; LAB_004d4972
    RET                                 ; 004d4971
    PUSH EAX                            ; 004d4972
        ;   Label: LAB_004d4972
    CALL core_icepick.cpp_CIcePick_ctor_FUN_004d4990 ; 004d4973
        ;   XREF to: 004d4990 (UNCONDITIONAL_CALL)  ; CIcePick * core_icepick.cpp_CIcePick_ctor_FUN_004d4990(CIcePick * this_ptr)
    ADD ESP,0x4                         ; 004d4978
    RET                                 ; 004d497b

