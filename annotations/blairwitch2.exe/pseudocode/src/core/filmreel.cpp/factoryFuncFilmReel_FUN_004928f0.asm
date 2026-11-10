; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_filmreel_cpp_factoryFuncFilmReel_FUN_004928f0(void)
;
;
; Called Functions:
;   core_filmreel.cpp_CFilmReel_ctor_FUN_00492920
;   crt_unknown.c_debugAllocTracked1_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x478                          ; 004928f0
        ;   Label: core_filmreel.cpp_factoryFuncFilmReel_FUN_004928f0
    CALL crt_unknown.c_debugAllocTracked1_FUN_005b8be2 ; 004928f5
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005b8be2()
    ADD ESP,0x4                         ; 004928fa
    TEST EAX,EAX                        ; 004928fd
    JNZ 0x00492902                      ; 004928ff
        ;   XREF to: 00492902 (CONDITIONAL_JUMP)  ; LAB_00492902
    RET                                 ; 00492901
    PUSH EAX                            ; 00492902
        ;   Label: LAB_00492902
    CALL core_filmreel.cpp_CFilmReel_ctor_FUN_00492920 ; 00492903
        ;   XREF to: 00492920 (UNCONDITIONAL_CALL)  ; CFilmReel * core_filmreel.cpp_CFilmReel_ctor_FUN_00492920(CFilmReel * this_ptr)
    ADD ESP,0x4                         ; 00492908
    RET                                 ; 0049290b

