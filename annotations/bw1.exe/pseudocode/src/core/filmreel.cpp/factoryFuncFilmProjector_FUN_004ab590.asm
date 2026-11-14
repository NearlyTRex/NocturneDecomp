; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFilmProjector * __cdecl core_filmreel_cpp_factoryFuncFilmProjector_FUN_004ab590(void)
;
;
; Called Functions:
;   core_filmreel.cpp_CFilmProjector_ctor_FUN_004ab5c0
;   crt_memory.c_operator_new_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0x3e4                          ; 004ab590
        ;   Label: core_filmreel.cpp_factoryFuncFilmProjector_FUN_004ab590
    CALL crt_memory.c_operator_new_FUN_005c0f32 ; 004ab595
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005c0f32()
    ADD ESP,0x4                         ; 004ab59a
    TEST EAX,EAX                        ; 004ab59d
    JNZ 0x004ab5a2                      ; 004ab59f
        ;   XREF to: 004ab5a2 (CONDITIONAL_JUMP)  ; LAB_004ab5a2
    RET                                 ; 004ab5a1
    PUSH EAX                            ; 004ab5a2
        ;   Label: LAB_004ab5a2
    CALL core_filmreel.cpp_CFilmProjector_ctor_FUN_004ab5c0 ; 004ab5a3
        ;   XREF to: 004ab5c0 (UNCONDITIONAL_CALL)  ; CFilmProjector * core_filmreel.cpp_CFilmProjector_ctor_FUN_004ab5c0(CFilmProjector * this_ptr)
    ADD ESP,0x4                         ; 004ab5a8
    RET                                 ; 004ab5ab

