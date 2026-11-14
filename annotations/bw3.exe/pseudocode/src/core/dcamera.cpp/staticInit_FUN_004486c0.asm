; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_staticInit_FUN_004486c0(void)
;
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005a30d7
;   crt_stdlib.c__atexit_FUN_005a3e13
;   support_codec.cpp_CLZWDecompress_ctor_FUN_00441310
;
; *****************************************************************************

section .text

    PUSH 0x5db0f0                       ; 004486c0
        ;   Label: core_dcamera.cpp_staticInit_FUN_004486c0
    PUSH 0x12d40                        ; 004486c5
    PUSH 0xa38388                       ; 004486ca
    CALL crt_memory.c___arrinit_FUN_005a30d7 ; 004486cf
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005a30d7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004486d4
    PUSH 0x6                            ; 004486d7
    PUSH 0x10000                        ; 004486d9
    PUSH 0x135da78                      ; 004486de
    CALL support_codec.cpp_CLZWDecompress_ctor_FUN_00441310 ; 004486e3
        ;   XREF to: 00441310 (UNCONDITIONAL_CALL)  ; CLZWDecompress * support_codec.cpp_CLZWDecompress_ctor_FUN_00441310(CLZWDecompress * this_ptr, int buffer_size, int initial_bits)
    ADD ESP,0xc                         ; 004486e8
    PUSH 0x5f17c8                       ; 004486eb
    CALL crt_stdlib.c__atexit_FUN_005a3e13 ; 004486f0
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005a3e13(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004486f5
    RET                                 ; 004486f8

