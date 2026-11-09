; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_manpuz_cpp_FUN_004e7780(void)
;
;
; Called Functions:
;   core_manpuz.cpp_CMirrorHack_ctor_FUN_004e77b0
;   crt_unknown.c_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x434                          ; 004e7780
        ;   Label: core_manpuz.cpp_FUN_004e7780
    CALL crt_unknown.c_FUN_005b8be2     ; 004e7785
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8be2()
    ADD ESP,0x4                         ; 004e778a
    TEST EAX,EAX                        ; 004e778d
    JNZ 0x004e7792                      ; 004e778f
        ;   XREF to: 004e7792 (CONDITIONAL_JUMP)  ; LAB_004e7792
    RET                                 ; 004e7791
    PUSH EAX                            ; 004e7792
        ;   Label: LAB_004e7792
    CALL core_manpuz.cpp_CMirrorHack_ctor_FUN_004e77b0 ; 004e7793
        ;   XREF to: 004e77b0 (UNCONDITIONAL_CALL)  ; CMirrorHack * core_manpuz.cpp_CMirrorHack_ctor_FUN_004e77b0(CMirrorHack * this_ptr)
    ADD ESP,0x4                         ; 004e7798
    RET                                 ; 004e779b

