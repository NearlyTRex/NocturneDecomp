; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_staticInit_FUN_00540580(void)
;
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005b7f5f
;   crt_stdlib.c__atexit_FUN_005b8d8c
;
; *****************************************************************************

section .text

    PUSH 0x5fb9f0                       ; 00540580
        ;   Label: core_skeleton.cpp_staticInit_FUN_00540580
    PUSH 0x40                           ; 00540585
    PUSH 0x20ccff4                      ; 00540587
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 0054058c
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005b7f5f(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00540591
    PUSH 0x61bbdc                       ; 00540594
    CALL crt_stdlib.c__atexit_FUN_005b8d8c ; 00540599
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005b8d8c(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 0054059e
    PUSH 0x5fba10                       ; 005405a1
    PUSH 0x28                           ; 005405a6
    PUSH 0x21780f4                      ; 005405a8
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 005405ad
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005b7f5f(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 005405b2
    PUSH 0x61bbec                       ; 005405b5
    CALL crt_stdlib.c__atexit_FUN_005b8d8c ; 005405ba
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005b8d8c(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 005405bf
    RET                                 ; 005405c2

