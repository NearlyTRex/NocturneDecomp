; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; _FILE * __cdecl shape_meshlod_cpp_CLodMesh_openPrecomputeFile_FUN_0051b770(CLodMesh *this_ptr,char *mode)
;
; Parameters:
; CLodMesh *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   mode
; Local Variables:
; char[260]        Stack[-0x514]:260  local_514
; char[256]        Stack[-0x410]:256  local_410
; char[256]        Stack[-0x310]:256  local_310
; char[256]        Stack[-0x210]:256  local_210
; char[256]        Stack[-0x110]:256  local_110
; uint             Stack[-0x10]:4  local_10
; char[4]          Stack[-0xc]:4  local_c
;
; XREF[6]:
;   core_skeledit.cpp_CDeformableModel_buildFromPosFile_FUN_0058c190 at 0058d11e
;   core_skeledit.cpp_CLodMesh_selectAndGenerateLods_FUN_00589c20 at 00589d8d
;   core_skeledit.cpp_createMeshPrecomputeFile_FUN_00589bb0 at 00589bc7
;   shape_meshlod.cpp_CLodMesh_initializeLodGeneration_FUN_00516d50 at 00516d86
;   shape_meshlod.cpp_CLodMesh_loadPrecomputeFile_FUN_0051b6f0 at 0051b6fa
;   shape_meshlod.cpp_CLodMesh_loadPrecomputedLodData_FUN_0051b720 at 0051b72c
;
; Referenced Globals:
;   TerminatedCString s_s_08X_00637d25
;   TerminatedCString s_lod_00637d2a
;   TerminatedCString s_shape_meshlod_cpp_00637d2e
;   TerminatedCString s_meshlod_0067d3a0
;
; Called Functions:
;   crt_file.c_makepath_FUN_005febfc
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   crt_string.c_splitpath_FUN_005ff178
;   shape_memdbg.cpp_openFile_FUN_0050f7a0
;   shape_meshlod.cpp_CLodMesh_computeMeshCRC32_FUN_0051c6f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051b770
        ;   Label: shape_meshlod.cpp_CLodMesh_openPrecomputeFile_FUN_0051b770
    PUSH ESI                            ; 0051b771
    SUB ESP,0x50c                       ; 0051b772
    LEA EAX,[ESP + 0x304]               ; 0051b778
    PUSH EAX                            ; 0051b77f
    LEA EAX,[ESP + 0x208]               ; 0051b780
    PUSH EAX                            ; 0051b787
    LEA EAX,[ESP + 0x40c]               ; 0051b788
    PUSH EAX                            ; 0051b78f
    LEA EAX,[ESP + 0x514]               ; 0051b790
    PUSH EAX                            ; 0051b797
    PUSH 0x67d3a0                       ; 0051b798 | = "meshlod"
    CALL crt_string.c_splitpath_FUN_005ff178 ; 0051b79d
        ;   XREF to: 005ff178 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_005ff178(char * path, char * drive, char * dir, char * fname, ...)
    ADD ESP,0x14                        ; 0051b7a2
    LEA EAX,[ESP + 0x304]               ; 0051b7a5
    PUSH EAX                            ; 0051b7ac
    LEA EAX,[ESP + 0x208]               ; 0051b7ad
    PUSH EAX                            ; 0051b7b4
    LEA EAX,[ESP + 0x40c]               ; 0051b7b5
    PUSH EAX                            ; 0051b7bc
    PUSH 0x0                            ; 0051b7bd
    LEA EAX,[ESP + 0x114]               ; 0051b7bf
    PUSH EAX                            ; 0051b7c6
    CALL crt_file.c_makepath_FUN_005febfc ; 0051b7c7
        ;   XREF to: 005febfc (UNCONDITIONAL_CALL)  ; void crt_file.c_makepath_FUN_005febfc(char * path_buffer, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0051b7cc
    LEA EAX,[ESP + 0x504]               ; 0051b7cf
    PUSH EAX                            ; 0051b7d6
    MOV ECX,dword ptr [ESP + 0x51c]     ; 0051b7d7
    XOR EDX,EDX                         ; 0051b7de
    PUSH ECX                            ; 0051b7e0
    MOV dword ptr [ESP + 0x50c],EDX     ; 0051b7e1
    CALL shape_meshlod.cpp_CLodMesh_computeMeshCRC32_FUN_0051c6f0 ; 0051b7e8
        ;   XREF to: 0051c6f0 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_computeMeshCRC32_FUN_0051c6f0(CLodMesh * this_ptr, uint * out_crc)
    ADD ESP,0x8                         ; 0051b7ed
    MOV EBX,dword ptr [ESP + 0x504]     ; 0051b7f0
    PUSH EBX                            ; 0051b7f7
    PUSH 0x637d25                       ; 0051b7f8 | = "%08X"
    LEA EAX,[ESP + 0x20c]               ; 0051b7fd
    PUSH EAX                            ; 0051b804
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0051b805
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0051b80a
    PUSH 0x637d2a                       ; 0051b80d | = "lod"
    LEA EAX,[ESP + 0x208]               ; 0051b812
    PUSH EAX                            ; 0051b819
    LEA EAX,[ESP + 0x10c]               ; 0051b81a
    PUSH EAX                            ; 0051b821
    LEA EAX,[ESP + 0x514]               ; 0051b822
    PUSH EAX                            ; 0051b829
    LEA EAX,[ESP + 0x10]                ; 0051b82a
    PUSH EAX                            ; 0051b82e
    CALL crt_file.c_makepath_FUN_005febfc ; 0051b82f
        ;   XREF to: 005febfc (UNCONDITIONAL_CALL)  ; void crt_file.c_makepath_FUN_005febfc(char * path_buffer, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0051b834
    PUSH 0x1239                         ; 0051b837
    PUSH 0x637d2e                       ; 0051b83c | = "..\\shape\\meshlod.cpp"
    MOV ESI,dword ptr [ESP + 0x524]     ; 0051b841
    PUSH ESI                            ; 0051b848
    PUSH 0x0                            ; 0051b849
    LEA EAX,[ESP + 0x10]                ; 0051b84b
    PUSH EAX                            ; 0051b84f
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 0051b850
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; _FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    ADD ESP,0x14                        ; 0051b855
    ADD ESP,0x50c                       ; 0051b858
    POP ESI                             ; 0051b85e
    POP EBX                             ; 0051b85f
    RET                                 ; 0051b860

