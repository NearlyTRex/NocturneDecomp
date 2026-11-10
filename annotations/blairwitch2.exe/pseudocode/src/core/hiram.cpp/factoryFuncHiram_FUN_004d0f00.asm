; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_hiram_cpp_factoryFuncHiram_FUN_004d0f00(void)
;
;
; Called Functions:
;   core_hiram.cpp_CHiram_ctor_FUN_004d0f30
;   crt_unknown.c_debugAllocTracked1_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x243ac                        ; 004d0f00
        ;   Label: core_hiram.cpp_factoryFuncHiram_FUN_004d0f00
    CALL crt_unknown.c_debugAllocTracked1_FUN_005b8be2 ; 004d0f05
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005b8be2()
    ADD ESP,0x4                         ; 004d0f0a
    TEST EAX,EAX                        ; 004d0f0d
    JNZ 0x004d0f12                      ; 004d0f0f
        ;   XREF to: 004d0f12 (CONDITIONAL_JUMP)  ; LAB_004d0f12
    RET                                 ; 004d0f11
    PUSH EAX                            ; 004d0f12
        ;   Label: LAB_004d0f12
    CALL core_hiram.cpp_CHiram_ctor_FUN_004d0f30 ; 004d0f13
        ;   XREF to: 004d0f30 (UNCONDITIONAL_CALL)  ; CHiram * core_hiram.cpp_CHiram_ctor_FUN_004d0f30(CHiram * this_ptr)
    ADD ESP,0x4                         ; 004d0f18
    RET                                 ; 004d0f1b

