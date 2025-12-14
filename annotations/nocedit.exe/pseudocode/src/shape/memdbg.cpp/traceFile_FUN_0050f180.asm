; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_memdbg.cpp_traceFile_FUN_0050f180(char * format, ...)
;
; Parameters:
; char *           Stack[0x4]:4   format
;
; XREF[3]:
;   shape_memdbg.cpp_CLeakChecker_dtor_FUN_0050fbc0 at 0050fc09
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0 at 0050fb88
;   shape_memdbg.cpp_openFile_FUN_0050f7a0 at 0050f8f8
;
; Referenced Globals:
;   TerminatedCString s_memdbg_txt_0067d1f0
;   BOOL g_TraceFileInitialized
;
; Called Functions:
;   crt_io.c_deleteFile_FUN_005ff9d0
;
; *****************************************************************************

section .text

    CMP dword ptr [0x02f0d930],0x0      ; 0050f180 | g_TraceFileInitialized
        ;   Label: shape_memdbg.cpp_traceFile_FUN_0050f180
    JZ 0x0050f18a                       ; 0050f187
        ;   XREF to: 0050f18a (CONDITIONAL_JUMP)  ; LAB_0050f18a
    RET                                 ; 0050f189
    PUSH 0x67d1f0                       ; 0050f18a | = "memdbg.txt"
        ;   Label: LAB_0050f18a
    CALL crt_io.c_deleteFile_FUN_005ff9d0 ; 0050f18f
        ;   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)  ; int crt_io.c_deleteFile_FUN_005ff9d0(char * filename)
    MOV ECX,0x1                         ; 0050f194
    ADD ESP,0x4                         ; 0050f199
    MOV dword ptr [0x02f0d930],ECX      ; 0050f19c | g_TraceFileInitialized
    RET                                 ; 0050f1a2

