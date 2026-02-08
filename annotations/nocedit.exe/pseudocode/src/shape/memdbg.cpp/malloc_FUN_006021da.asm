; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void * __cdecl shape_memdbg_cpp_malloc_FUN_006021da(SIZE_T size)
;
; Parameters:
; SIZE_T           Stack[0x4]:4   size
;
; XREF[8]:
;   crt_strstream.cpp_strstreambuf_doallocate_FUN_0060bc22 at 0060bc72
;   shape_superopt.cpp_CObj_removeUnusedVertices_FUN_005d44d0 at 005d44e3
;   shape_superopt.cpp_FUN_005c7b20 at 005c7b5e
;   shape_superopt.cpp_FUN_005c8280 at 005c8295
;   shape_superopt.cpp_FUN_005c84c0 at 005c8511
;   shape_superopt.cpp_FUN_005c9500 at 005c961b
;   shape_superopt.cpp_FUN_005ca590 at 005ca5b1
;   shape_superopt.cpp_FUN_005cbe20 at 005cbe77
;
; Called Functions:
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1d0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 006021da
        ;   Label: shape_memdbg.cpp_malloc_FUN_006021da
    PUSH EDX                            ; 006021de
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1d0 ; 006021df
        ;   XREF to: 0050f1d0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1d0(int size)
    ADD ESP,0x4                         ; 006021e4
    RET                                 ; 006021e7

