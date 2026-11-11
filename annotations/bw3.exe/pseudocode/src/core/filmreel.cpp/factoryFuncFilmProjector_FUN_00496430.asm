; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_filmreel_cpp_factoryFuncFilmProjector_FUN_00496430(void)
;
;
; Called Functions:
;   core_filmreel.cpp_CFilmProjector_ctor_FUN_00496460
;   crt_memory.c_operator_new_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0x3e4                          ; 00496430
        ;   Label: core_filmreel.cpp_factoryFuncFilmProjector_FUN_00496430
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 00496435
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 0049643a
    TEST EAX,EAX                        ; 0049643d
    JNZ 0x00496442                      ; 0049643f
        ;   XREF to: 00496442 (CONDITIONAL_JUMP)  ; LAB_00496442
    RET                                 ; 00496441
    PUSH EAX                            ; 00496442
        ;   Label: LAB_00496442
    CALL core_filmreel.cpp_CFilmProjector_ctor_FUN_00496460 ; 00496443
        ;   XREF to: 00496460 (UNCONDITIONAL_CALL)  ; CFilmProjector * core_filmreel.cpp_CFilmProjector_ctor_FUN_00496460(CFilmProjector * this_ptr)
    ADD ESP,0x4                         ; 00496448
    RET                                 ; 0049644b

