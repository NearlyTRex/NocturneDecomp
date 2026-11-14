; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_sound_cpp_staticInit_FUN_0057b670(void)
;
;
; Called Functions:
;   core_sound.cpp_CSound_ctor_FUN_0057cb10
;   crt_memory.c___arrinit_FUN_005c0357
;   crt_stdlib.c__atexit_FUN_005c1093
;   shape_edittool.cpp_CStrList_ctor_FUN_00499380
;
; *****************************************************************************

section .text

    PUSH 0x2c82a60                      ; 0057b670
        ;   Label: core_sound.cpp_staticInit_FUN_0057b670
    CALL core_sound.cpp_CSound_ctor_FUN_0057cb10 ; 0057b675
        ;   XREF to: 0057cb10 (UNCONDITIONAL_CALL)  ; CSound * core_sound.cpp_CSound_ctor_FUN_0057cb10(CSound * this_ptr)
    ADD ESP,0x4                         ; 0057b67a
    PUSH 0x2c82c20                      ; 0057b67d
    CALL shape_edittool.cpp_CStrList_ctor_FUN_00499380 ; 0057b682
        ;   XREF to: 00499380 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_ctor_FUN_00499380(CStrList * this_ptr)
    ADD ESP,0x4                         ; 0057b687
    PUSH 0x6236a0                       ; 0057b68a
    CALL crt_stdlib.c__atexit_FUN_005c1093 ; 0057b68f
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005c1093(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 0057b694
    PUSH 0x605ca0                       ; 0057b697
    PUSH 0xa                            ; 0057b69c
    PUSH 0x2c832b4                      ; 0057b69e
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 0057b6a3
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005c0357(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0057b6a8
    RET                                 ; 0057b6ab

