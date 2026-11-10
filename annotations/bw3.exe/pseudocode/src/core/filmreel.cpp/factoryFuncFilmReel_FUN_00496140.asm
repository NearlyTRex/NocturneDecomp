; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_filmreel_cpp_factoryFuncFilmReel_FUN_00496140(void)
;
;
; Called Functions:
;   core_filmreel.cpp_CFilmReel_ctor_FUN_00496170
;   crt_unknown.c_debugAllocTracked1_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0x31c                          ; 00496140
        ;   Label: core_filmreel.cpp_factoryFuncFilmReel_FUN_00496140
    CALL crt_unknown.c_debugAllocTracked1_FUN_005a3cb2 ; 00496145
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005a3cb2()
    ADD ESP,0x4                         ; 0049614a
    TEST EAX,EAX                        ; 0049614d
    JNZ 0x00496152                      ; 0049614f
        ;   XREF to: 00496152 (CONDITIONAL_JUMP)  ; LAB_00496152
    RET                                 ; 00496151
    PUSH EAX                            ; 00496152
        ;   Label: LAB_00496152
    CALL core_filmreel.cpp_CFilmReel_ctor_FUN_00496170 ; 00496153
        ;   XREF to: 00496170 (UNCONDITIONAL_CALL)  ; CFilmReel * core_filmreel.cpp_CFilmReel_ctor_FUN_00496170(CFilmReel * this_ptr)
    ADD ESP,0x4                         ; 00496158
    RET                                 ; 0049615b

