; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_villain_cpp_factoryFuncSteuben_FUN_005a5b10(void)
;
;
; Called Functions:
;   core_villain.cpp_CSteuben_ctor_FUN_005a5b40
;   crt_memory.c_operator_new_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x11850                        ; 005a5b10
        ;   Label: core_villain.cpp_factoryFuncSteuben_FUN_005a5b10
    CALL crt_memory.c_operator_new_FUN_005b8be2 ; 005a5b15
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005b8be2()
    ADD ESP,0x4                         ; 005a5b1a
    TEST EAX,EAX                        ; 005a5b1d
    JNZ 0x005a5b22                      ; 005a5b1f
        ;   XREF to: 005a5b22 (CONDITIONAL_JUMP)  ; LAB_005a5b22
    RET                                 ; 005a5b21
    PUSH EAX                            ; 005a5b22
        ;   Label: LAB_005a5b22
    CALL core_villain.cpp_CSteuben_ctor_FUN_005a5b40 ; 005a5b23
        ;   XREF to: 005a5b40 (UNCONDITIONAL_CALL)  ; CSteuben * core_villain.cpp_CSteuben_ctor_FUN_005a5b40(CSteuben * this_ptr)
    ADD ESP,0x4                         ; 005a5b28
    RET                                 ; 005a5b2b

