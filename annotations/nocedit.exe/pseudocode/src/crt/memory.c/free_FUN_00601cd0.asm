; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_memory_c_free_FUN_00601cd0(void *ptr)
;
; Parameters:
; void *           Stack[0x4]:4   ptr
;
; XREF[14]:
;   crt_env.c_findEnvVar_FUN_0060f1f0 at 0060f27d
;   crt_env.c_putenv_internal_FUN_0060ee80 at 0060ef40
;   crt_iostream.cpp_freeBuffer_FUN_0060d7a0 at 0060d7a5
;   crt_stdio.c__fclose_FUN_00601fd0 at 00602055
;   crt_stdlib.c__fullpath_FUN_00601140 at 006011b1
;   crt_unknown.c_FUN_0060fe94 at 0060ff26
;   shape_memdbg.cpp_debugFree_FUN_0050f460 at 0050f4f1
;   shape_superopt.cpp_CComplexPolygon_free_FUN_005c79f0 at 005c7a80
;   shape_superopt.cpp_CObj_allocatePolygons_FUN_005d2320 at 005d235b
;   shape_superopt.cpp_CObj_allocateVertices_FUN_005d2500 at 005d252d
;   ... and 4 more
;
; Called Functions:
;   crt_heap.c_ValidateHeapIntegrity_FUN_00601ce0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00601cd0
        ;   Label: crt_memory.c_free_FUN_00601cd0
    PUSH EDX                            ; 00601cd4
    CALL crt_heap.c_ValidateHeapIntegrity_FUN_00601ce0 ; 00601cd5
        ;   XREF to: 00601ce0 (UNCONDITIONAL_CALL)  ; void crt_heap.c_ValidateHeapIntegrity_FUN_00601ce0(void * ptr)
    ADD ESP,0x4                         ; 00601cda
    RET                                 ; 00601cdd

