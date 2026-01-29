; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_setdir_cpp_staticInit_FUN_00574790(void)
;
;
; Referenced Globals:
;   WatcomTypeInfo g_CBoundingBox3DTypeInfo
;   WatcomTypeInfo g_CZThumbTypeInfo
;   WatcomStaticDestructorNode g_CZThumbPoolDestructorNode
;   CZThumb[1500] g_CZThumbPool
;   CBoundingBox3D[2000] g_VDNearbyActorBoundingBoxes
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005fe667
;   crt_stdlib.c__atexit_FUN_005ff060
;
; *****************************************************************************

section .text

    PUSH 0x6629f0                       ; 00574790 | g_CZThumbTypeInfo
        ;   Label: core_setdir.cpp_staticInit_FUN_00574790
    PUSH 0x5dc                          ; 00574795
    PUSH 0x3347108                      ; 0057479a | g_CZThumbPool
    CALL crt_memory.c___arrinit_FUN_005fe667 ; 0057479f
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 005747a4
    PUSH 0x6814c4                       ; 005747a7 | g_CZThumbPoolDestructorNode
    CALL crt_stdlib.c__atexit_FUN_005ff060 ; 005747ac
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 005747b1
    PUSH 0x659900                       ; 005747b4 | g_CBoundingBox3DTypeInfo
    PUSH 0x7d0                          ; 005747b9
    PUSH 0x3357aac                      ; 005747be | g_VDNearbyActorBoundingBoxes
    CALL crt_memory.c___arrinit_FUN_005fe667 ; 005747c3
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 005747c8
    RET                                 ; 005747cb

