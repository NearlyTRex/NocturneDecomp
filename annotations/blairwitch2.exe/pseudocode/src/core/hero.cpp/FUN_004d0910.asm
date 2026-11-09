; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_hero_cpp_FUN_004d0910(void)
;
;
; Called Functions:
;   core_hero.cpp_CHeroPlaceholder_ctor_FUN_004d0940
;   crt_unknown.c_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x2d8                          ; 004d0910
        ;   Label: core_hero.cpp_FUN_004d0910
    CALL crt_unknown.c_FUN_005b8be2     ; 004d0915
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8be2()
    ADD ESP,0x4                         ; 004d091a
    TEST EAX,EAX                        ; 004d091d
    JNZ 0x004d0922                      ; 004d091f
        ;   XREF to: 004d0922 (CONDITIONAL_JUMP)  ; LAB_004d0922
    RET                                 ; 004d0921
    PUSH EAX                            ; 004d0922
        ;   Label: LAB_004d0922
    CALL core_hero.cpp_CHeroPlaceholder_ctor_FUN_004d0940 ; 004d0923
        ;   XREF to: 004d0940 (UNCONDITIONAL_CALL)  ; CHeroPlaceholder * core_hero.cpp_CHeroPlaceholder_ctor_FUN_004d0940(CHeroPlaceholder * this_ptr)
    ADD ESP,0x4                         ; 004d0928
    RET                                 ; 004d092b

