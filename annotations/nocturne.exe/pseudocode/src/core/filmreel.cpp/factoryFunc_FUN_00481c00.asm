; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFilmReel * __cdecl core_filmreel_cpp_factoryFunc_FUN_00481c00(void)
;
;
; Called Functions:
;   core_filmreel.cpp_CFilmReel_ctor_FUN_00481c30
;   crt_unknown.c_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x314                          ; 00481c00
        ;   Label: core_filmreel.cpp_factoryFunc_FUN_00481c00
    CALL crt_unknown.c_FUN_0056497c     ; 00481c05
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056497c()
    ADD ESP,0x4                         ; 00481c0a
    TEST EAX,EAX                        ; 00481c0d
    JNZ 0x00481c12                      ; 00481c0f
        ;   XREF to: 00481c12 (CONDITIONAL_JUMP)  ; LAB_00481c12
    RET                                 ; 00481c11
    PUSH EAX                            ; 00481c12
        ;   Label: LAB_00481c12
    CALL core_filmreel.cpp_CFilmReel_ctor_FUN_00481c30 ; 00481c13
        ;   XREF to: 00481c30 (UNCONDITIONAL_CALL)  ; CFilmReel * core_filmreel.cpp_CFilmReel_ctor_FUN_00481c30(CFilmReel * this_ptr)
    ADD ESP,0x4                         ; 00481c18
    RET                                 ; 00481c1b

