; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_meshlod.cpp_CLodMesh_initializeLodGeneration_FUN_00516d50(CLodMesh * this_ptr)
;
; Parameters:
; CLodMesh *       Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   shape_meshlod.cpp_CLodMesh_generateLOD_FUN_00516ba0 at 00516bb0
;   shape_meshlod.cpp_CLodMesh_replayLodGeneration_FUN_005173f0 at 005173fc
;
; Referenced Globals:
;   TerminatedCString s_meshlod_00637339
;   TerminatedCString s_wt_0063766d
;   TerminatedCString s_meshlod_simplify_log_0067d4a0
;
; Called Functions:
;   crt_file.c_create_directory_FUN_00600e10
;   crt_io.c_deleteFile_FUN_005ff9d0
;   shape_meshlod.cpp_CLodMesh_buildEdges_FUN_00515ba0
;   shape_meshlod.cpp_CLodMesh_buildSpatialGrid_FUN_00516620
;   shape_meshlod.cpp_CLodMesh_computeAllEdgeCollapseCosts_FUN_00519710
;   shape_meshlod.cpp_CLodMesh_createNextLOD_FUN_00516f50
;   shape_meshlod.cpp_CLodMesh_createOrigSamplePoints_FUN_00517000
;   shape_meshlod.cpp_CLodMesh_eqSave_FUN_0051d0e0
;   shape_meshlod.cpp_CLodMesh_gridSave_FUN_0051d420
;   shape_meshlod.cpp_CLodMesh_normalizeAndCenterMesh_FUN_00516e10
;   shape_meshlod.cpp_CLodMesh_openPrecomputeFile_FUN_0051b770
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00516d50
        ;   Label: shape_meshlod.cpp_CLodMesh_initializeLodGeneration_FUN_00516d50
    PUSH EBP                            ; 00516d51
    MOV EBX,dword ptr [ESP + 0xc]       ; 00516d52
    CMP dword ptr [EBX + 0x34],0x0      ; 00516d56
    JZ 0x00516d5f                       ; 00516d5a | LAB_00516d5f
        ;   XREF to: 00516d5f (CONDITIONAL_JUMP)
    POP EBP                             ; 00516d5c
    POP EBX                             ; 00516d5d
    RET                                 ; 00516d5e
    PUSH 0x637339                       ; 00516d5f | = "meshlod" | s_meshlod_00637339 = meshlod
        ;   Label: LAB_00516d5f
    CALL crt_file.c_create_directory_FUN_00600e10 ; 00516d64 | int crt_file.c_create_directory_FUN_00600e10(char * path)
        ;   XREF to: 00600e10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00516d69
    PUSH 0x67d4a0                       ; 00516d6c | = "meshlod\\simplify.log" | s_meshlod_simplify_log_0067d4a0 = meshlod\simplify.log
    CALL crt_io.c_deleteFile_FUN_005ff9d0 ; 00516d71 | int crt_io.c_deleteFile_FUN_005ff9d0(char * filename)
        ;   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)
    MOV ECX,dword ptr [EBX + 0x38]      ; 00516d76
    ADD ESP,0x4                         ; 00516d79
    TEST ECX,ECX                        ; 00516d7c
    JNZ 0x00516d91                      ; 00516d7e | LAB_00516d91
        ;   XREF to: 00516d91 (CONDITIONAL_JUMP)
    PUSH 0x63766d                       ; 00516d80 | = "wt" | s_wt_0063766d = wt
    PUSH EBX                            ; 00516d85
    CALL shape_meshlod.cpp_CLodMesh_openPrecomputeFile_FUN_0051b770 ; 00516d86 | FILE * shape_meshlod.cpp_CLodMesh_openPrecomputeFile_FUN_0051b770(CLodMesh * this_ptr, char * mode)
        ;   XREF to: 0051b770 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00516d8b
    MOV dword ptr [EBX + 0x38],EAX      ; 00516d8e
    PUSH EDI                            ; 00516d91
        ;   Label: LAB_00516d91
    PUSH ESI                            ; 00516d92
    PUSH EBX                            ; 00516d93
    CALL shape_meshlod.cpp_CLodMesh_normalizeAndCenterMesh_FUN_00516e10 ; 00516d94 | void shape_meshlod.cpp_CLodMesh_normalizeAndCenterMesh_FUN_00516e10(CLodMesh * this_ptr)
        ;   XREF to: 00516e10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00516d99
    PUSH EBX                            ; 00516d9c
    CALL shape_meshlod.cpp_CLodMesh_createNextLOD_FUN_00516f50 ; 00516d9d | void shape_meshlod.cpp_CLodMesh_createNextLOD_FUN_00516f50(CLodMesh * this_ptr)
        ;   XREF to: 00516f50 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00516da2
    MOV ESI,dword ptr [EBX + 0x34]      ; 00516da5
    PUSH ESI                            ; 00516da8
    CALL shape_meshlod.cpp_CLodMesh_buildSpatialGrid_FUN_00516620 ; 00516da9 | void shape_meshlod.cpp_CLodMesh_buildSpatialGrid_FUN_00516620(CLodMesh * this_ptr)
        ;   XREF to: 00516620 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00516dae
    MOV EDI,dword ptr [EBX + 0x38]      ; 00516db1
    PUSH EDI                            ; 00516db4
    MOV EBP,dword ptr [EBX + 0x34]      ; 00516db5
    PUSH EBP                            ; 00516db8
    CALL shape_meshlod.cpp_CLodMesh_gridSave_FUN_0051d420 ; 00516db9 | void shape_meshlod.cpp_CLodMesh_gridSave_FUN_0051d420(CLodMesh * this_ptr, FILE * file_handle)
        ;   XREF to: 0051d420 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00516dbe
    PUSH EBX                            ; 00516dc1
    CALL shape_meshlod.cpp_CLodMesh_buildEdges_FUN_00515ba0 ; 00516dc2 | int shape_meshlod.cpp_CLodMesh_buildEdges_FUN_00515ba0(CLodMesh * this_ptr)
        ;   XREF to: 00515ba0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00516dc7
    MOV EAX,dword ptr [EBX + 0x34]      ; 00516dca
    PUSH EAX                            ; 00516dcd
    CALL shape_meshlod.cpp_CLodMesh_buildEdges_FUN_00515ba0 ; 00516dce | int shape_meshlod.cpp_CLodMesh_buildEdges_FUN_00515ba0(CLodMesh * this_ptr)
        ;   XREF to: 00515ba0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00516dd3
    PUSH EBX                            ; 00516dd6
    CALL shape_meshlod.cpp_CLodMesh_createOrigSamplePoints_FUN_00517000 ; 00516dd7 | void shape_meshlod.cpp_CLodMesh_createOrigSamplePoints_FUN_00517000(CLodMesh * this_ptr)
        ;   XREF to: 00517000 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00516ddc
    PUSH EBX                            ; 00516ddf
    CALL shape_meshlod.cpp_CLodMesh_computeAllEdgeCollapseCosts_FUN_00519710 ; 00516de0 | void shape_meshlod.cpp_CLodMesh_computeAllEdgeCollapseCosts_FUN_00519710(CLodMesh * this_ptr)
        ;   XREF to: 00519710 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00516de5
    MOV EDX,dword ptr [EBX + 0x38]      ; 00516de8
    PUSH EDX                            ; 00516deb
    PUSH EBX                            ; 00516dec
    CALL shape_meshlod.cpp_CLodMesh_eqSave_FUN_0051d0e0 ; 00516ded | void shape_meshlod.cpp_CLodMesh_eqSave_FUN_0051d0e0(CLodMesh * this_ptr, FILE * file_handle)
        ;   XREF to: 0051d0e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00516df2
    MOV dword ptr [EBX + 0x4c],0x0      ; 00516df5
    POP ESI                             ; 00516dfc
    POP EDI                             ; 00516dfd
    POP EBP                             ; 00516dfe
    POP EBX                             ; 00516dff
    RET                                 ; 00516e00

