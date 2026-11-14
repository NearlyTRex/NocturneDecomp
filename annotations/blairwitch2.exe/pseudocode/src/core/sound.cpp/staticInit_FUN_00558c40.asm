; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_sound_cpp_staticInit_FUN_00558c40(void)
;
;
; Called Functions:
;   core_sound.cpp_CSound_ctor_FUN_0055a0e0
;   crt_memory.c___arrinit_FUN_005b7f5f
;   crt_stdlib.c__atexit_FUN_005b8d8c
;   shape_edittool.cpp_CStrList_ctor_FUN_00480d20
;
; *****************************************************************************

section .text

    PUSH 0x264b290                      ; 00558c40
        ;   Label: core_sound.cpp_staticInit_FUN_00558c40
    CALL core_sound.cpp_CSound_ctor_FUN_0055a0e0 ; 00558c45
        ;   XREF to: 0055a0e0 (UNCONDITIONAL_CALL)  ; CSound * core_sound.cpp_CSound_ctor_FUN_0055a0e0(CSound * this_ptr)
    ADD ESP,0x4                         ; 00558c4a
    PUSH 0x264b450                      ; 00558c4d
    CALL shape_edittool.cpp_CStrList_ctor_FUN_00480d20 ; 00558c52
        ;   XREF to: 00480d20 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_ctor_FUN_00480d20(CStrList * this_ptr)
    ADD ESP,0x4                         ; 00558c57
    PUSH 0x61c050                       ; 00558c5a
    CALL crt_stdlib.c__atexit_FUN_005b8d8c ; 00558c5f
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005b8d8c(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 00558c64
    PUSH 0x5fbdc0                       ; 00558c67
    PUSH 0xa                            ; 00558c6c
    PUSH 0x264bae4                      ; 00558c6e
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 00558c73
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005b7f5f(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00558c78
    RET                                 ; 00558c7b

