; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_hero_cpp_FUN_004b5f60(void)
;
;
; Called Functions:
;   core_hero.cpp_CHeroPlaceholder_ctor_FUN_004b5f90
;   crt_unknown.c_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x154                          ; 004b5f60
        ;   Label: core_hero.cpp_FUN_004b5f60
    CALL crt_unknown.c_FUN_0056497c     ; 004b5f65
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056497c()
    ADD ESP,0x4                         ; 004b5f6a
    TEST EAX,EAX                        ; 004b5f6d
    JNZ 0x004b5f72                      ; 004b5f6f
        ;   XREF to: 004b5f72 (CONDITIONAL_JUMP)  ; LAB_004b5f72
    RET                                 ; 004b5f71
    PUSH EAX                            ; 004b5f72
        ;   Label: LAB_004b5f72
    CALL core_hero.cpp_CHeroPlaceholder_ctor_FUN_004b5f90 ; 004b5f73
        ;   XREF to: 004b5f90 (UNCONDITIONAL_CALL)  ; CHeroPlaceholder * core_hero.cpp_CHeroPlaceholder_ctor_FUN_004b5f90(CHeroPlaceholder * this_ptr)
    ADD ESP,0x4                         ; 004b5f78
    RET                                 ; 004b5f7b

