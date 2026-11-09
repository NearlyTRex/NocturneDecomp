; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_filmreel_cpp_factoryFuncFilmReel_FUN_004ab2a0(void)
;
;
; Called Functions:
;   core_filmreel.cpp_CFilmReel_ctor_FUN_004ab2d0
;   crt_unknown.c_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0x31c                          ; 004ab2a0
        ;   Label: core_filmreel.cpp_factoryFuncFilmReel_FUN_004ab2a0
    CALL crt_unknown.c_FUN_005c0f32     ; 004ab2a5
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0f32()
    ADD ESP,0x4                         ; 004ab2aa
    TEST EAX,EAX                        ; 004ab2ad
    JNZ 0x004ab2b2                      ; 004ab2af
        ;   XREF to: 004ab2b2 (CONDITIONAL_JUMP)  ; LAB_004ab2b2
    RET                                 ; 004ab2b1
    PUSH EAX                            ; 004ab2b2
        ;   Label: LAB_004ab2b2
    CALL core_filmreel.cpp_CFilmReel_ctor_FUN_004ab2d0 ; 004ab2b3
        ;   XREF to: 004ab2d0 (UNCONDITIONAL_CALL)  ; CFilmReel * core_filmreel.cpp_CFilmReel_ctor_FUN_004ab2d0(CFilmReel * this_ptr)
    ADD ESP,0x4                         ; 004ab2b8
    RET                                 ; 004ab2bb

