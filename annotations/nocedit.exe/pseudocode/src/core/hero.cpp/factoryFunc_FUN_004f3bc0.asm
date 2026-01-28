; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CHeroPlaceholder * __cdecl core_hero_cpp_factoryFunc_FUN_004f3bc0(void)
;
;
; XREF[1]:
;   core_hero.cpp_staticInit_FUN_004f2120 at 004f214c
;
; Referenced Globals:
;   TerminatedCString s_core_hero_cpp_0062ecd6
;
; Called Functions:
;   core_hero.cpp_CHeroPlaceholder_ctor_FUN_004f3c00
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x527                          ; 004f3bc0
        ;   Label: core_hero.cpp_factoryFunc_FUN_004f3bc0
    PUSH 0x62ecd6                       ; 004f3bc5 | = "..\\core\\hero.cpp"
    PUSH 0x15c                          ; 004f3bca
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 004f3bcf
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 004f3bd4
    TEST EAX,EAX                        ; 004f3bd7
    JNZ 0x004f3bdc                      ; 004f3bd9
        ;   XREF to: 004f3bdc (CONDITIONAL_JUMP)  ; LAB_004f3bdc
    RET                                 ; 004f3bdb
    PUSH EAX                            ; 004f3bdc
        ;   Label: LAB_004f3bdc
    CALL core_hero.cpp_CHeroPlaceholder_ctor_FUN_004f3c00 ; 004f3bdd
        ;   XREF to: 004f3c00 (UNCONDITIONAL_CALL)  ; CHeroPlaceholder * core_hero.cpp_CHeroPlaceholder_ctor_FUN_004f3c00(CHeroPlaceholder * this_ptr)
    ADD ESP,0x4                         ; 004f3be2
    RET                                 ; 004f3be5

