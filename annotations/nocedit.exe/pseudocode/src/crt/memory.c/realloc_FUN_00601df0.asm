; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void * __cdecl crt_memory_c_realloc_FUN_00601df0(void *ptr,ulong new_size)
;
; Parameters:
; void *           Stack[0x4]:4   ptr
; ulong            Stack[0x8]:4   new_size
;
; XREF[16]:
;   crt_env.c_updateEnvironTable_FUN_0060f04c at 0060f182
;   crt_io.c_register_handle_FUN_00608990 at 006089e2
;   crt_sync.c_allocate_critical_section_FUN_00609f24 at 00609f82
;   crt_tls.c_getThreadLocalData_FUN_0060caf8 at 0060cb2f
;   crt_unknown.c_FUN_0060e4f0 at 0060e55a
;   crt_unknown.c_FUN_0060fcf4 at 0060fe29
;   crt_unknown.c_SetStdHandleToSomething_FUN_00608a1c at 00608a90
;   shape_memdbg.cpp_debugRealloc_FUN_0050f540 at 0050f5ec
;   shape_superopt.cpp_CObj_addPolygons_FUN_005d2410 at 005d243c
;   shape_superopt.cpp_CObj_addVertices_FUN_005d2580 at 005d259d
;   ... and 6 more
;
; Called Functions:
;   crt_memory.c_realloc__FUN_00601e08
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00601df0
        ;   Label: crt_memory.c_realloc_FUN_00601df0
    MOV EDX,dword ptr [ESP + 0xc]       ; 00601df1
    PUSH EDX                            ; 00601df5
    MOV EBX,dword ptr [ESP + 0xc]       ; 00601df6
    PUSH EBX                            ; 00601dfa
    CALL crt_memory.c_realloc__FUN_00601e08 ; 00601dfb
        ;   XREF to: 00601e08 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc__FUN_00601e08(void * ptr, ulong new_size)
    ADD ESP,0x8                         ; 00601e00
    POP EBX                             ; 00601e03
    RET                                 ; 00601e04

