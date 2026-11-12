; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_staticInit_FUN_0056d490(void)
;
;
; Referenced Globals:
;   undefined4 DAT_00605b04
;   undefined4 DAT_00605b08
;   undefined4 DAT_02c745e0
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005c0357
;   crt_stdlib.c__atexit_FUN_005c1093
;
; *****************************************************************************

section .text

    FLD float ptr [0x00605b08]          ; 0056d490 | DAT_00605b08
        ;   Label: sound_sndmain.cpp_staticInit_FUN_0056d490
    FDIV float ptr [0x00605b04]         ; 0056d496 | DAT_00605b04
    PUSH 0x605b20                       ; 0056d49c
    PUSH 0x40                           ; 0056d4a1
    PUSH 0x2c745ec                      ; 0056d4a3
    FSTP float ptr [0x02c745e0]         ; 0056d4a8 | DAT_02c745e0
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 0056d4ae
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005c0357(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0056d4b3
    PUSH 0x605b40                       ; 0056d4b6
    PUSH 0x8                            ; 0056d4bb
    PUSH 0x2c78cf0                      ; 0056d4bd
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 0056d4c2
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005c0357(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0056d4c7
    PUSH 0x605b60                       ; 0056d4ca
    PUSH 0x40                           ; 0056d4cf
    PUSH 0x2c78ff4                      ; 0056d4d1
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 0056d4d6
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005c0357(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0056d4db
    PUSH 0x6232b0                       ; 0056d4de
    CALL crt_stdlib.c__atexit_FUN_005c1093 ; 0056d4e3
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005c1093(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 0056d4e8
    RET                                 ; 0056d4eb

