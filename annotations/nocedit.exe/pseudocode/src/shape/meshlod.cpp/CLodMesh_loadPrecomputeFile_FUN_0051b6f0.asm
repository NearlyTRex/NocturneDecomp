; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int shape_meshlod.cpp_CLodMesh_loadPrecomputeFile_FUN_0051b6f0(CLodMesh * this_ptr)
;
; Parameters:
; CLodMesh *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_skeledit.cpp_FUN_00589c20 at 00589c6c
;
; Referenced Globals:
;   TerminatedCString s_rt_00637cf5
;   TerminatedCString s_shape_meshlod_cpp_00637cf8
;
; Called Functions:
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   shape_meshlod.cpp_CLodMesh_openPrecomputeFile_FUN_0051b770
;
; *****************************************************************************

section .text

    PUSH 0x637cf5                       ; 0051b6f0 | = "rt" | s_rt_00637cf5 = rt
        ;   Label: shape_meshlod.cpp_CLodMesh_loadPrecomputeFile_FUN_0051b6f0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0051b6f5
    PUSH EDX                            ; 0051b6f9
    CALL shape_meshlod.cpp_CLodMesh_openPrecomputeFile_FUN_0051b770 ; 0051b6fa | FILE * shape_meshlod.cpp_CLodMesh_openPrecomputeFile_FUN_0051b770(CLodMesh * this_ptr, char * mode)
        ;   XREF to: 0051b770 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0051b6ff
    TEST EAX,EAX                        ; 0051b702
    JNZ 0x0051b707                      ; 0051b704 | LAB_0051b707
        ;   XREF to: 0051b707 (CONDITIONAL_JUMP)
    RET                                 ; 0051b706
    PUSH 0x1210                         ; 0051b707
        ;   Label: LAB_0051b707
    PUSH 0x637cf8                       ; 0051b70c | = "..\\shape\\meshlod.cpp" | s_shape_meshlod_cpp_00637cf8 = ..\shape\meshlod.cpp
    PUSH EAX                            ; 0051b711
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0051b712 | int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
    MOV EAX,0x1                         ; 0051b717
    ADD ESP,0xc                         ; 0051b71c
    RET                                 ; 0051b71f

