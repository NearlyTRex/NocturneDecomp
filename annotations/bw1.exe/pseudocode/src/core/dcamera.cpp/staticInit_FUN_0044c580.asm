; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_staticInit_FUN_0044c580(void)
;
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005c0357
;   crt_stdlib.c__atexit_FUN_005c1093
;   support_codec.cpp_CLZWDecompress_ctor_FUN_004436b0
;
; *****************************************************************************

section .text

    PUSH 0x5fb430                       ; 0044c580
        ;   Label: core_dcamera.cpp_staticInit_FUN_0044c580
    PUSH 0x12d40                        ; 0044c585
    PUSH 0xa1bad8                       ; 0044c58a
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 0044c58f
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005c0357(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0044c594
    PUSH 0x6                            ; 0044c597
    PUSH 0x10000                        ; 0044c599
    PUSH 0x13411c8                      ; 0044c59e
    CALL support_codec.cpp_CLZWDecompress_ctor_FUN_004436b0 ; 0044c5a3
        ;   XREF to: 004436b0 (UNCONDITIONAL_CALL)  ; CLZWDecompress * support_codec.cpp_CLZWDecompress_ctor_FUN_004436b0(CLZWDecompress * this_ptr, int buffer_size, int initial_bits)
    ADD ESP,0xc                         ; 0044c5a8
    PUSH 0x611214                       ; 0044c5ab
    CALL crt_stdlib.c__atexit_FUN_005c1093 ; 0044c5b0
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005c1093(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 0044c5b5
    RET                                 ; 0044c5b8

