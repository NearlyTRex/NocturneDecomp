; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_moon_cpp_staticInit_FUN_005022f0(void)
;
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005b7f5f
;   crt_stdlib.c__atexit_FUN_005b8d8c
;   engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d420
;
; *****************************************************************************

section .text

    PUSH 0x1d1c7b8                      ; 005022f0
        ;   Label: core_moon.cpp_staticInit_FUN_005022f0
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d420 ; 005022f5
        ;   XREF to: 0040d420 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d420(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 005022fa
    PUSH 0x61830c                       ; 005022fd
    CALL crt_stdlib.c__atexit_FUN_005b8d8c ; 00502302
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005b8d8c(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 00502307
    PUSH 0x5f6f60                       ; 0050230a
    PUSH 0x4b                           ; 0050230f
    PUSH 0x1d1c7cc                      ; 00502311
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 00502316
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005b7f5f(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0050231b
    PUSH 0x61831c                       ; 0050231e
    CALL crt_stdlib.c__atexit_FUN_005b8d8c ; 00502323
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005b8d8c(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 00502328
    PUSH 0x1d1cda8                      ; 0050232b
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d420 ; 00502330
        ;   XREF to: 0040d420 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d420(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 00502335
    PUSH 0x61832c                       ; 00502338
    CALL crt_stdlib.c__atexit_FUN_005b8d8c ; 0050233d
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005b8d8c(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 00502342
    RET                                 ; 00502345

