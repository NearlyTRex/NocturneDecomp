; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CFilmProjector * core_filmreel.cpp_factoryFunc_FUN_004bea00(void)
;
;
; XREF[1]:
;   core_filmreel.cpp_staticInit_FUN_004be620 at 004be64f
;
; Referenced Globals:
;   TerminatedCString s_core_filmreel_cpp_00629b27
;
; Called Functions:
;   core_filmreel.cpp_CFilmProjector_ctor_FUN_004bea40
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0xf3                           ; 004bea00
        ;   Label: core_filmreel.cpp_factoryFunc_FUN_004bea00
    PUSH 0x629b27                       ; 004bea05 | = "..\\core\\filmreel.cpp"
    PUSH 0x3e4                          ; 004bea0a
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 004bea0f
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 004bea14
    TEST EAX,EAX                        ; 004bea17
    JNZ 0x004bea1c                      ; 004bea19
        ;   XREF to: 004bea1c (CONDITIONAL_JUMP)  ; LAB_004bea1c
    RET                                 ; 004bea1b
    PUSH EAX                            ; 004bea1c
        ;   Label: LAB_004bea1c
    CALL core_filmreel.cpp_CFilmProjector_ctor_FUN_004bea40 ; 004bea1d
        ;   XREF to: 004bea40 (UNCONDITIONAL_CALL)  ; CFilmProjector * core_filmreel.cpp_CFilmProjector_ctor_FUN_004bea40(CFilmProjector * this_ptr)
    ADD ESP,0x4                         ; 004bea22
    RET                                 ; 004bea25

