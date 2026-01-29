; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_dtri_cpp_staticInit_FUN_0049a430(void)
;
;
; Referenced Globals:
;   WatcomTypeInfo g_CVectorTypeInfo
;   WatcomTypeInfo g_CDemonTriangleTypeInfo
;   CVector3f[16] g_ClipInputVertices
;   CVector3f[16] g_ClipBuffer1Vertices
;   CVector3f[16] g_ClipBuffer2Vertices
;   CVector3f[16] g_ClipBuffer3Vertices
;   CVector3f[16] g_ClipBuffer4Vertices
;   CVector3f[16] g_ClipBuffer5Vertices
;   CVector3f[16] g_ClipOutputVertices
;   CDemonTriangle[8] g_ClippedTriangleBuffer
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005fe667
;
; *****************************************************************************

section .text

    PUSH 0x6598c0                       ; 0049a430 | g_CVectorTypeInfo
        ;   Label: core_dtri.cpp_staticInit_FUN_0049a430
    PUSH 0x10                           ; 0049a435
    PUSH 0x2cee5d0                      ; 0049a437 | g_ClipInputVertices
    CALL crt_memory.c___arrinit_FUN_005fe667 ; 0049a43c
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0049a441
    PUSH 0x6598c0                       ; 0049a444 | g_CVectorTypeInfo
    PUSH 0x10                           ; 0049a449
    PUSH 0x2cee694                      ; 0049a44b | g_ClipBuffer1Vertices
    CALL crt_memory.c___arrinit_FUN_005fe667 ; 0049a450
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0049a455
    PUSH 0x6598c0                       ; 0049a458 | g_CVectorTypeInfo
    PUSH 0x10                           ; 0049a45d
    PUSH 0x2cee758                      ; 0049a45f | g_ClipBuffer2Vertices
    CALL crt_memory.c___arrinit_FUN_005fe667 ; 0049a464
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0049a469
    PUSH 0x6598c0                       ; 0049a46c | g_CVectorTypeInfo
    PUSH 0x10                           ; 0049a471
    PUSH 0x2cee81c                      ; 0049a473 | g_ClipBuffer3Vertices
    CALL crt_memory.c___arrinit_FUN_005fe667 ; 0049a478
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0049a47d
    PUSH 0x6598c0                       ; 0049a480 | g_CVectorTypeInfo
    PUSH 0x10                           ; 0049a485
    PUSH 0x2cee8e0                      ; 0049a487 | g_ClipBuffer4Vertices
    CALL crt_memory.c___arrinit_FUN_005fe667 ; 0049a48c
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0049a491
    PUSH 0x6598c0                       ; 0049a494 | g_CVectorTypeInfo
    PUSH 0x10                           ; 0049a499
    PUSH 0x2cee9a4                      ; 0049a49b | g_ClipBuffer5Vertices
    CALL crt_memory.c___arrinit_FUN_005fe667 ; 0049a4a0
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0049a4a5
    PUSH 0x6598c0                       ; 0049a4a8 | g_CVectorTypeInfo
    PUSH 0x10                           ; 0049a4ad
    PUSH 0x2ceea68                      ; 0049a4af | g_ClipOutputVertices
    CALL crt_memory.c___arrinit_FUN_005fe667 ; 0049a4b4
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0049a4b9
    PUSH 0x65c990                       ; 0049a4bc | g_CDemonTriangleTypeInfo
    PUSH 0x8                            ; 0049a4c1
    PUSH 0x2ceeb28                      ; 0049a4c3 | g_ClippedTriangleBuffer
    CALL crt_memory.c___arrinit_FUN_005fe667 ; 0049a4c8
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0049a4cd
    RET                                 ; 0049a4d0

