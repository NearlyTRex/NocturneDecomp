; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dcamera.cpp_staticInit_FUN_0044bb10(void)
;
;
; Referenced Globals:
;   WatcomTypeInfo g_CVectorTypeInfo
;   WatcomStaticDestructorNode g_CLZWDecompressDestructorNode
;   CVector3f[76800] g_PrecomputedSurfaceNormals
;   CLZWDecompress g_CLZWDecompressInstance
;
; Called Functions:
;   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
;   crt_stdlib.c_atexit_FUN_005ff060
;   support_codec.cpp_CLZWDecompress_ctor_FUN_0043f490
;
; *****************************************************************************

section .text

    PUSH 0x6598c0                       ; 0044bb10 | g_CVectorTypeInfo
        ;   Label: core_dcamera.cpp_staticInit_FUN_0044bb10
    PUSH 0x12d40                        ; 0044bb15
    PUSH 0xac6d74                       ; 0044bb1a | g_PrecomputedSurfaceNormals
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 0044bb1f
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0044bb24
    PUSH 0x6                            ; 0044bb27
    PUSH 0x10000                        ; 0044bb29
    PUSH 0x13d9728                      ; 0044bb2e | g_CLZWDecompressInstance
    CALL support_codec.cpp_CLZWDecompress_ctor_FUN_0043f490 ; 0044bb33
        ;   XREF to: 0043f490 (UNCONDITIONAL_CALL)  ; CLZWDecompress * support_codec.cpp_CLZWDecompress_ctor_FUN_0043f490(CLZWDecompress * this_ptr, int buffer_size, int initial_bits)
    ADD ESP,0xc                         ; 0044bb38
    PUSH 0x66ece8                       ; 0044bb3b | g_CLZWDecompressDestructorNode
    CALL crt_stdlib.c_atexit_FUN_005ff060 ; 0044bb40
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c_atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 0044bb45
    RET                                 ; 0044bb48

