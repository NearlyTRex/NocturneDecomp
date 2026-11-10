; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_hero_cpp_factoryFuncHeroPlaceholder_FUN_004d4ab0(void)
;
;
; Called Functions:
;   core_hero.cpp_CHeroPlaceholder_ctor_FUN_004d4ae0
;   crt_unknown.c_debugAllocTracked1_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0x17c                          ; 004d4ab0
        ;   Label: core_hero.cpp_factoryFuncHeroPlaceholder_FUN_004d4ab0
    CALL crt_unknown.c_debugAllocTracked1_FUN_005a3cb2 ; 004d4ab5
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005a3cb2()
    ADD ESP,0x4                         ; 004d4aba
    TEST EAX,EAX                        ; 004d4abd
    JNZ 0x004d4ac2                      ; 004d4abf
        ;   XREF to: 004d4ac2 (CONDITIONAL_JUMP)  ; LAB_004d4ac2
    RET                                 ; 004d4ac1
    PUSH EAX                            ; 004d4ac2
        ;   Label: LAB_004d4ac2
    CALL core_hero.cpp_CHeroPlaceholder_ctor_FUN_004d4ae0 ; 004d4ac3
        ;   XREF to: 004d4ae0 (UNCONDITIONAL_CALL)  ; CHeroPlaceholder * core_hero.cpp_CHeroPlaceholder_ctor_FUN_004d4ae0(CHeroPlaceholder * this_ptr)
    ADD ESP,0x4                         ; 004d4ac8
    RET                                 ; 004d4acb

