; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFilmReel * __cdecl core_filmreel_cpp_factoryFunc_FUN_004be670(void)
;
;
; XREF[1]:
;   core_filmreel.cpp_staticInit_FUN_004be620 at 004be62c
;
; Referenced Globals:
;   TerminatedCString s_core_filmreel_cpp_00629aae
;
; Called Functions:
;   core_filmreel.cpp_CFilmReel_ctor_FUN_004be6b0
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x22                           ; 004be670
        ;   Label: core_filmreel.cpp_factoryFunc_FUN_004be670
    PUSH 0x629aae                       ; 004be672 | = "..\\core\\filmreel.cpp"
    PUSH 0x31c                          ; 004be677
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 004be67c
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 004be681
    TEST EAX,EAX                        ; 004be684
    JNZ 0x004be689                      ; 004be686
        ;   XREF to: 004be689 (CONDITIONAL_JUMP)  ; LAB_004be689
    RET                                 ; 004be688
    PUSH EAX                            ; 004be689
        ;   Label: LAB_004be689
    CALL core_filmreel.cpp_CFilmReel_ctor_FUN_004be6b0 ; 004be68a
        ;   XREF to: 004be6b0 (UNCONDITIONAL_CALL)  ; CFilmReel * core_filmreel.cpp_CFilmReel_ctor_FUN_004be6b0(CFilmReel * this_ptr)
    ADD ESP,0x4                         ; 004be68f
    RET                                 ; 004be692

