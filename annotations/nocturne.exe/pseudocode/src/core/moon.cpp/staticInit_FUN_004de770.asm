; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_moon_cpp_staticInit_FUN_004de770(void)
;
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_ctor_FUN_00452590
;   crt_memory.c___arrinit_FUN_005644a7
;   crt_unknown.c__atexit_FUN_00564bb0
;   engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040e320
;
; *****************************************************************************

section .text

    PUSH 0x1ccdc50                      ; 004de770
        ;   Label: core_moon.cpp_staticInit_FUN_004de770
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040e320 ; 004de775
        ;   XREF to: 0040e320 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040e320(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004de77a
    PUSH 0x5bb158                       ; 004de77d
    CALL crt_unknown.c__atexit_FUN_00564bb0 ; 004de782
        ;   XREF to: 00564bb0 (UNCONDITIONAL_CALL)  ; void crt_unknown.c__atexit_FUN_00564bb0(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004de787
    PUSH 0x59df00                       ; 004de78a
    PUSH 0x1e                           ; 004de78f
    PUSH 0x1ccdc64                      ; 004de791
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 004de796
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005644a7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004de79b
    PUSH 0x5bb168                       ; 004de79e
    CALL crt_unknown.c__atexit_FUN_00564bb0 ; 004de7a3
        ;   XREF to: 00564bb0 (UNCONDITIONAL_CALL)  ; void crt_unknown.c__atexit_FUN_00564bb0(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004de7a8
    PUSH 0x5a0c80                       ; 004de7ab
    PUSH 0x3                            ; 004de7b0
    PUSH 0x1ccdec8                      ; 004de7b2
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 004de7b7
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005644a7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004de7bc
    PUSH 0x5bb178                       ; 004de7bf
    CALL crt_unknown.c__atexit_FUN_00564bb0 ; 004de7c4
        ;   XREF to: 00564bb0 (UNCONDITIONAL_CALL)  ; void crt_unknown.c__atexit_FUN_00564bb0(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004de7c9
    PUSH 0x5a0ca0                       ; 004de7cc
    PUSH 0x1e                           ; 004de7d1
    PUSH 0x1ccdeec                      ; 004de7d3
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 004de7d8
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005644a7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004de7dd
    PUSH 0x1cce1bc                      ; 004de7e0
    CALL core_dmodel.cpp_CKeyFramedModel_ctor_FUN_00452590 ; 004de7e5
        ;   XREF to: 00452590 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModel_ctor_FUN_00452590(CKeyFramedModel * this_ptr)
    ADD ESP,0x4                         ; 004de7ea
    PUSH 0x5bb188                       ; 004de7ed
    CALL crt_unknown.c__atexit_FUN_00564bb0 ; 004de7f2
        ;   XREF to: 00564bb0 (UNCONDITIONAL_CALL)  ; void crt_unknown.c__atexit_FUN_00564bb0(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004de7f7
    RET                                 ; 004de7fa

