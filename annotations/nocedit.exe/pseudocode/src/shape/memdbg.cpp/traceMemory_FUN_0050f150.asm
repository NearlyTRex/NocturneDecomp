; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_memdbg.cpp_traceMemory_FUN_0050f150(char * format, ...)
;
; Parameters:
; char *           Stack[0x4]:4   format
;
; XREF[4]:
;   shape_memdbg.cpp_debugCalloc_FUN_0050f350 at 0050f3e1
;   shape_memdbg.cpp_debugFree_FUN_0050f460 at 0050f4a3
;   shape_memdbg.cpp_debugMalloc_FUN_0050f250 at 0050f32a
;   shape_memdbg.cpp_debugRealloc_FUN_0050f540 at 0050f588
;
; Referenced Globals:
;   TerminatedCString s_memdbg_txt_0067d1f0
;   BOOL g_MemoryTraceInitialized
;
; Called Functions:
;   crt_io.c_deleteFile_FUN_005ff9d0
;
; *****************************************************************************

section .text

    CMP dword ptr [0x02f0d92c],0x0      ; 0050f150 | BOOL g_MemoryTraceInitialized
        ;   Label: shape_memdbg.cpp_traceMemory_FUN_0050f150
    JZ 0x0050f15a                       ; 0050f157 | LAB_0050f15a
        ;   XREF to: 0050f15a (CONDITIONAL_JUMP)
    RET                                 ; 0050f159
    PUSH 0x67d1f0                       ; 0050f15a | = "memdbg.txt" | s_memdbg_txt_0067d1f0 = memdbg.txt
        ;   Label: LAB_0050f15a
    CALL crt_io.c_deleteFile_FUN_005ff9d0 ; 0050f15f | int crt_io.c_deleteFile_FUN_005ff9d0(char * filename)
        ;   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)
    MOV ECX,0x1                         ; 0050f164
    ADD ESP,0x4                         ; 0050f169
    MOV dword ptr [0x02f0d92c],ECX      ; 0050f16c | BOOL g_MemoryTraceInitialized
    RET                                 ; 0050f172

