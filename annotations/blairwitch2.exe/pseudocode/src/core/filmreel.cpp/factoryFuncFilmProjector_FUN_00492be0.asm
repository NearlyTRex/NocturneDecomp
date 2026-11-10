; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_filmreel_cpp_factoryFuncFilmProjector_FUN_00492be0(void)
;
;
; Called Functions:
;   core_filmreel.cpp_CFilmProjector_ctor_FUN_00492c10
;   crt_unknown.c_debugAllocTracked1_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x540                          ; 00492be0
        ;   Label: core_filmreel.cpp_factoryFuncFilmProjector_FUN_00492be0
    CALL crt_unknown.c_debugAllocTracked1_FUN_005b8be2 ; 00492be5
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005b8be2()
    ADD ESP,0x4                         ; 00492bea
    TEST EAX,EAX                        ; 00492bed
    JNZ 0x00492bf2                      ; 00492bef
        ;   XREF to: 00492bf2 (CONDITIONAL_JUMP)  ; LAB_00492bf2
    RET                                 ; 00492bf1
    PUSH EAX                            ; 00492bf2
        ;   Label: LAB_00492bf2
    CALL core_filmreel.cpp_CFilmProjector_ctor_FUN_00492c10 ; 00492bf3
        ;   XREF to: 00492c10 (UNCONDITIONAL_CALL)  ; CFilmProjector * core_filmreel.cpp_CFilmProjector_ctor_FUN_00492c10(CFilmProjector * this_ptr)
    ADD ESP,0x4                         ; 00492bf8
    RET                                 ; 00492bfb

