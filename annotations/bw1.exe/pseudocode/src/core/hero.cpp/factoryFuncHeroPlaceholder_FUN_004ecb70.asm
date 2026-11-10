; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_hero_cpp_factoryFuncHeroPlaceholder_FUN_004ecb70(void)
;
;
; Called Functions:
;   core_hero.cpp_CHeroPlaceholder_ctor_FUN_004ecba0
;   crt_unknown.c_debugAllocTracked1_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0x17c                          ; 004ecb70
        ;   Label: core_hero.cpp_factoryFuncHeroPlaceholder_FUN_004ecb70
    CALL crt_unknown.c_debugAllocTracked1_FUN_005c0f32 ; 004ecb75
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005c0f32()
    ADD ESP,0x4                         ; 004ecb7a
    TEST EAX,EAX                        ; 004ecb7d
    JNZ 0x004ecb82                      ; 004ecb7f
        ;   XREF to: 004ecb82 (CONDITIONAL_JUMP)  ; LAB_004ecb82
    RET                                 ; 004ecb81
    PUSH EAX                            ; 004ecb82
        ;   Label: LAB_004ecb82
    CALL core_hero.cpp_CHeroPlaceholder_ctor_FUN_004ecba0 ; 004ecb83
        ;   XREF to: 004ecba0 (UNCONDITIONAL_CALL)  ; CHeroPlaceholder * core_hero.cpp_CHeroPlaceholder_ctor_FUN_004ecba0(CHeroPlaceholder * this_ptr)
    ADD ESP,0x4                         ; 004ecb88
    RET                                 ; 004ecb8b

