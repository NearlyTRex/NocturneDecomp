; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gore_cpp_staticInit_FUN_004e3d40(void)
;
;
; Called Functions:
;   core_gore.cpp_CGore_ctor_FUN_004e5bd0
;   crt_memory.c___arrinit_FUN_005c0357
;   crt_stdlib.c__atexit_FUN_005c1093
;
; *****************************************************************************

section .text

    PUSH 0x1cd0e3c                      ; 004e3d40
        ;   Label: core_gore.cpp_staticInit_FUN_004e3d40
    CALL core_gore.cpp_CGore_ctor_FUN_004e5bd0 ; 004e3d45
        ;   XREF to: 004e5bd0 (UNCONDITIONAL_CALL)  ; CGore * core_gore.cpp_CGore_ctor_FUN_004e5bd0(CGore * this_ptr)
    ADD ESP,0x4                         ; 004e3d4a
    PUSH 0x61dc84                       ; 004e3d4d
    CALL crt_stdlib.c__atexit_FUN_005c1093 ; 004e3d52
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005c1093(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004e3d57
    PUSH 0x601710                       ; 004e3d5a
    PUSH 0x100                          ; 004e3d5f
    PUSH 0x1cd0eac                      ; 004e3d64
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 004e3d69
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005c0357(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004e3d6e
    PUSH 0x61dc94                       ; 004e3d71
    CALL crt_stdlib.c__atexit_FUN_005c1093 ; 004e3d76
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005c1093(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004e3d7b
    PUSH 0x601730                       ; 004e3d7e
    PUSH 0x7d0                          ; 004e3d83
    PUSH 0x1cd56b4                      ; 004e3d88
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 004e3d8d
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005c0357(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004e3d92
    PUSH 0x601750                       ; 004e3d95
    PUSH 0x20                           ; 004e3d9a
    PUSH 0x1cf69fc                      ; 004e3d9c
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 004e3da1
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005c0357(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004e3da6
    PUSH 0x601770                       ; 004e3da9
    PUSH 0x3e8                          ; 004e3dae
    PUSH 0x1cf6f04                      ; 004e3db3
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 004e3db8
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005c0357(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004e3dbd
    RET                                 ; 004e3dc0

