; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_dfilter_cpp_staticInit_FUN_0046ff50(void)
;
;
; Referenced Globals:
;   WatcomTypeInfo g_CDemonFilterTypeInfo
;   WatcomStaticDestructorNode DAT_0066ef5c
;   WatcomStaticDestructorNode DAT_0066ef6c
;   WatcomStaticDestructorNode g_CFilterCacheDestructorNode
;   WatcomStaticDestructorNode g_CFilterFXDestructorNode
;   CDemonFilter[8] CDemonFilter_ARRAY_020a4878
;   CDemonFilter[4] CDemonFilter_ARRAY_020a4ad8
;   CFilterCache g_CFilterCacheInstance
;   CFilterFx g_CFilterFXInstance
;
; Called Functions:
;   core_dfilter.cpp_CFilterCache_ctor_FUN_0046ffd0
;   core_dfilter.cpp_CFilterFX_ctor_FUN_004706c0
;   crt_memory.c___arrinit_FUN_005fe667
;   crt_stdlib.c__atexit_FUN_005ff060
;
; *****************************************************************************

section .text

    PUSH 0x65b390                       ; 0046ff50 | g_CDemonFilterTypeInfo
        ;   Label: core_dfilter.cpp_staticInit_FUN_0046ff50
    PUSH 0x8                            ; 0046ff55
    PUSH 0x20a4878                      ; 0046ff57 | CDemonFilter_ARRAY_020a4878
    CALL crt_memory.c___arrinit_FUN_005fe667 ; 0046ff5c
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0046ff61
    PUSH 0x66ef5c                       ; 0046ff64 | DAT_0066ef5c
    CALL crt_stdlib.c__atexit_FUN_005ff060 ; 0046ff69
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 0046ff6e
    PUSH 0x65b390                       ; 0046ff71 | g_CDemonFilterTypeInfo
    PUSH 0x4                            ; 0046ff76
    PUSH 0x20a4ad8                      ; 0046ff78 | CDemonFilter_ARRAY_020a4ad8
    CALL crt_memory.c___arrinit_FUN_005fe667 ; 0046ff7d
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0046ff82
    PUSH 0x66ef6c                       ; 0046ff85 | DAT_0066ef6c
    CALL crt_stdlib.c__atexit_FUN_005ff060 ; 0046ff8a
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 0046ff8f
    PUSH 0x20a4c08                      ; 0046ff92 | g_CFilterCacheInstance
    CALL core_dfilter.cpp_CFilterCache_ctor_FUN_0046ffd0 ; 0046ff97
        ;   XREF to: 0046ffd0 (UNCONDITIONAL_CALL)  ; CFilterCache * core_dfilter.cpp_CFilterCache_ctor_FUN_0046ffd0(CFilterCache * this_ptr)
    ADD ESP,0x4                         ; 0046ff9c
    PUSH 0x66ef7c                       ; 0046ff9f | g_CFilterCacheDestructorNode
    CALL crt_stdlib.c__atexit_FUN_005ff060 ; 0046ffa4
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 0046ffa9
    PUSH 0x20a570c                      ; 0046ffac | g_CFilterFXInstance
    CALL core_dfilter.cpp_CFilterFX_ctor_FUN_004706c0 ; 0046ffb1
        ;   XREF to: 004706c0 (UNCONDITIONAL_CALL)  ; CFilterFx * core_dfilter.cpp_CFilterFX_ctor_FUN_004706c0(CFilterFx * this_ptr)
    ADD ESP,0x4                         ; 0046ffb6
    PUSH 0x66ef8c                       ; 0046ffb9 | g_CFilterFXDestructorNode
    CALL crt_stdlib.c__atexit_FUN_005ff060 ; 0046ffbe
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 0046ffc3
    RET                                 ; 0046ffc6

