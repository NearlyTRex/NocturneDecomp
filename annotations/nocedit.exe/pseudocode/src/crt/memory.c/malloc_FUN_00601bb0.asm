; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void * __cdecl crt_memory_c_malloc_FUN_00601bb0(ulong size)
;
; Parameters:
; ulong            Stack[0x4]:4   size
;
; XREF[25]:
;   crt_env.c_putenv_internal_FUN_0060ee80 at 0060efec
;   crt_env.c_updateEnvironTable_FUN_0060f04c at 0060f126
;   crt_io.c_getcwd_FUN_00608d20 at 00608d61
;   crt_io.c_realpath_FUN_00601140 at 0060115d
;   crt_ioinit.c_staticInit_FUN_00608f20 at 00608f5b
;   crt_iostream.cpp_streambuf_allocBuffer_FUN_0060d790 at 0060d795
;   crt_memory.c_calloc_FUN_0060ca90 at 0060ca9b
;   crt_process.c_build_cmdline_FUN_00610258 at 006102d5
;   crt_process.c_build_file_info_env_FUN_0060ffd0 at 00610005
;   crt_process.c_spawnvp_FUN_0060f39c at 0060f3fd
;   ... and 15 more
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

