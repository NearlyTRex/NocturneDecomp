; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * __cdecl shape_memdbg_cpp_debugAlloc_FUN_0050f1d0(int size)
;
; Parameters:
; int              Stack[0x4]:4   size
;
; XREF[8]:
;   shape_memdbg.cpp_malloc_FUN_006021da at 006021df
;   shape_superopt.cpp_CObj_computeCoplanarAdjacency_FUN_005d3960 at 005d3b2b
;   shape_superopt.cpp_CObj_removeInvalidPolygons_FUN_005d46f0 at 005d475b
;   shape_superopt.cpp_CObj_removeTJunctions_FUN_005d47b0 at 005d4d90
;   shape_superopt.cpp_CObj_removeUnusedVertices_FUN_005d44d0 at 005d4613
;   shape_superopt.cpp_CObj_weldVertices_FUN_005d4160 at 005d4257
;   shape_superopt.cpp_COptimize_FUN_005d76e0 at 005d7724
;   shape_superopt.cpp_FUN_005c9500 at 005c97f1
;
; Referenced Globals:
;   TerminatedCString s_unknown_0067d200
;
; Called Functions:
;   shape_memdbg.cpp_debugMalloc_FUN_0050f250
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 0050f1d0
        ;   Label: shape_memdbg.cpp_debugAlloc_FUN_0050f1d0
    PUSH 0x67d200                       ; 0050f1d2 | = "(unknown)"
    MOV EDX,dword ptr [ESP + 0xc]       ; 0050f1d7
    PUSH EDX                            ; 0050f1db
    CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250 ; 0050f1dc
        ;   XREF to: 0050f250 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugMalloc_FUN_0050f250(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 0050f1e1
    RET                                 ; 0050f1e4

