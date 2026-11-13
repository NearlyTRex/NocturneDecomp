; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gore_cpp_staticInit_FUN_004cc8d0(void)
;
;
; Called Functions:
;   core_gore.cpp_CGore_ctor_FUN_004ce530
;   crt_memory.c___arrinit_FUN_005a30d7
;   crt_stdlib.c__atexit_FUN_005a3e13
;
; *****************************************************************************

section .text

    PUSH 0x1d22e44                      ; 004cc8d0
        ;   Label: core_gore.cpp_staticInit_FUN_004cc8d0
    CALL core_gore.cpp_CGore_ctor_FUN_004ce530 ; 004cc8d5
        ;   XREF to: 004ce530 (UNCONDITIONAL_CALL)  ; CGore * core_gore.cpp_CGore_ctor_FUN_004ce530(CGore * this_ptr)
    ADD ESP,0x4                         ; 004cc8da
    PUSH 0x5fed04                       ; 004cc8dd
    CALL crt_stdlib.c__atexit_FUN_005a3e13 ; 004cc8e2
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005a3e13(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004cc8e7
    PUSH 0x5e0e80                       ; 004cc8ea
    PUSH 0x100                          ; 004cc8ef
    PUSH 0x1d22eb4                      ; 004cc8f4
    CALL crt_memory.c___arrinit_FUN_005a30d7 ; 004cc8f9
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005a30d7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004cc8fe
    PUSH 0x5fed14                       ; 004cc901
    CALL crt_stdlib.c__atexit_FUN_005a3e13 ; 004cc906
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005a3e13(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004cc90b
    PUSH 0x5e0ea0                       ; 004cc90e
    PUSH 0x7d0                          ; 004cc913
    PUSH 0x1d276bc                      ; 004cc918
    CALL crt_memory.c___arrinit_FUN_005a30d7 ; 004cc91d
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005a30d7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004cc922
    PUSH 0x5e0ec0                       ; 004cc925
    PUSH 0x20                           ; 004cc92a
    PUSH 0x1d4a944                      ; 004cc92c
    CALL crt_memory.c___arrinit_FUN_005a30d7 ; 004cc931
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005a30d7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004cc936
    PUSH 0x5e0ee0                       ; 004cc939
    PUSH 0x3e8                          ; 004cc93e
    PUSH 0x1d4aecc                      ; 004cc943
    CALL crt_memory.c___arrinit_FUN_005a30d7 ; 004cc948
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005a30d7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004cc94d
    RET                                 ; 004cc950

