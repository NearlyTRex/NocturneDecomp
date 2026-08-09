; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFilmProjector * __cdecl core_filmreel_cpp_factoryFuncFilmProjector_FUN_00481ee0(void)
;
;
; Called Functions:
;   core_filmreel.cpp_CFilmProjector_ctor_FUN_00481f10
;   crt_memory.c_operator_new_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x3dc                          ; 00481ee0
        ;   Label: core_filmreel.cpp_factoryFuncFilmProjector_FUN_00481ee0
    CALL crt_memory.c_operator_new_FUN_0056497c ; 00481ee5
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; void * crt_memory.c_operator_new_FUN_0056497c(ulong size)
    ADD ESP,0x4                         ; 00481eea
    TEST EAX,EAX                        ; 00481eed
    JNZ 0x00481ef2                      ; 00481eef
        ;   XREF to: 00481ef2 (CONDITIONAL_JUMP)  ; LAB_00481ef2
    RET                                 ; 00481ef1
    PUSH EAX                            ; 00481ef2
        ;   Label: LAB_00481ef2
    CALL core_filmreel.cpp_CFilmProjector_ctor_FUN_00481f10 ; 00481ef3
        ;   XREF to: 00481f10 (UNCONDITIONAL_CALL)  ; CFilmProjector * core_filmreel.cpp_CFilmProjector_ctor_FUN_00481f10(CFilmProjector * this_ptr)
    ADD ESP,0x4                         ; 00481ef8
    RET                                 ; 00481efb

