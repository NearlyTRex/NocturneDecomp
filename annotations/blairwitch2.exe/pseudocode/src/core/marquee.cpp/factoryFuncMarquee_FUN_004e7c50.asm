; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_marquee_cpp_factoryFuncMarquee_FUN_004e7c50(void)
;
;
; Called Functions:
;   core_marquee.cpp_CMarquee_ctor_FUN_004e7c80
;   crt_memory.c_operator_new_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x318                          ; 004e7c50
        ;   Label: core_marquee.cpp_factoryFuncMarquee_FUN_004e7c50
    CALL crt_memory.c_operator_new_FUN_005b8be2 ; 004e7c55
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005b8be2()
    ADD ESP,0x4                         ; 004e7c5a
    TEST EAX,EAX                        ; 004e7c5d
    JNZ 0x004e7c62                      ; 004e7c5f
        ;   XREF to: 004e7c62 (CONDITIONAL_JUMP)  ; LAB_004e7c62
    RET                                 ; 004e7c61
    PUSH EAX                            ; 004e7c62
        ;   Label: LAB_004e7c62
    CALL core_marquee.cpp_CMarquee_ctor_FUN_004e7c80 ; 004e7c63
        ;   XREF to: 004e7c80 (UNCONDITIONAL_CALL)  ; CMarquee * core_marquee.cpp_CMarquee_ctor_FUN_004e7c80(CMarquee * this_ptr)
    ADD ESP,0x4                         ; 004e7c68
    RET                                 ; 004e7c6b

