; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_meshlod_cpp_CLodMesh_closePrecomputeFile_FUN_0051b870(CLodMesh *this_ptr)
;
; Parameters:
; CLodMesh *       Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_skeledit.cpp_FUN_00589c20 at 00589dd2
;   shape_meshlod.cpp_CLodMesh_free_FUN_00515970 at 00515979
;   shape_meshlod.cpp_CLodMesh_generateLOD_FUN_00516ba0 at 00516d38
;
; Referenced Globals:
;   TerminatedCString s_shape_meshlod_cpp_00637d43
;
; Called Functions:
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051b870
        ;   Label: shape_meshlod.cpp_CLodMesh_closePrecomputeFile_FUN_0051b870
    MOV EBX,dword ptr [ESP + 0x8]       ; 0051b871
    MOV EDX,dword ptr [EBX + 0x38]      ; 0051b875
    TEST EDX,EDX                        ; 0051b878
    JNZ 0x0051b87e                      ; 0051b87a
        ;   XREF to: 0051b87e (CONDITIONAL_JUMP)  ; LAB_0051b87e
    POP EBX                             ; 0051b87c
    RET                                 ; 0051b87d
    PUSH 0x123e                         ; 0051b87e
        ;   Label: LAB_0051b87e
    PUSH 0x637d43                       ; 0051b883 | = "..\\shape\\meshlod.cpp"
    PUSH EDX                            ; 0051b888
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0051b889
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 0051b88e
    MOV dword ptr [EBX + 0x38],0x0      ; 0051b891
    POP EBX                             ; 0051b898
    RET                                 ; 0051b899

