; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * __cdecl crt_memory_c_malloc_FUN_00601bb0(ulong size)
;
; Parameters:
; ulong            Stack[0x4]:4   size
;
; XREF[17]:
;   crt_env.c_putenv_internal_FUN_0060ee80 at 0060efec
;   crt_env.c_updateEnvironTable_FUN_0060f04c at 0060f126
;   crt_iostream.cpp_streambuf_allocBuffer_FUN_0060d790 at 0060d795
;   crt_memory.c_calloc_FUN_0060ca90 at 0060ca9b
;   crt_process.c_build_cmdline_FUN_00610258 at 006102d5
;   crt_process.c_build_file_info_env_FUN_0060ffd0 at 00610005
;   crt_startup.c_GetModuleFileNameCompat_FUN_0060a560 at 0060a599
;   crt_stdio.c___allocfp_FUN_006092f0 at 00609331
;   crt_stdlib.c__fullpath_FUN_00601140 at 0060115d
;   crt_string.c_strdup_FUN_0060a610 at 0060a62d
;   ... and 7 more
;
; Called Functions:
;   crt_heap.c_InternalHeapAlloc_FUN_00601bc0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00601bb0
        ;   Label: crt_memory.c_malloc_FUN_00601bb0
    PUSH EDX                            ; 00601bb4
    CALL crt_heap.c_InternalHeapAlloc_FUN_00601bc0 ; 00601bb5
        ;   XREF to: 00601bc0 (UNCONDITIONAL_CALL)  ; void * crt_heap.c_InternalHeapAlloc_FUN_00601bc0(ulong size)
    ADD ESP,0x4                         ; 00601bba
    RET                                 ; 00601bbd

