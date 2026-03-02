; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_meshlod_cpp_CLodMesh_initializeLodGeneration_FUN_0051b8a0(CLodMesh *this_ptr,_FILE *file_handle)
;
; Parameters:
; CLodMesh *       Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
;
; XREF[2]:
;   core_skeledit.cpp_CLodMesh_selectAndGenerateLods_FUN_00589c20 at 00589dc5
;   shape_meshlod.cpp_CLodMesh_loadPrecomputedLodData_FUN_0051b720 at 0051b73f
;
; Referenced Globals:
;   TerminatedCString s_meshlod_00637339
;   TerminatedCString s_meshlod_simplify_log_0067d4a0
;
; Called Functions:
;   crt_stdio.c_remove_FUN_005ff9d0
;   crt_watcom.c__mkdir_FUN_00600e10
;   shape_meshlod.cpp_CLodMesh_buildEdges_FUN_00515ba0
;   shape_meshlod.cpp_CLodMesh_createNextLOD_FUN_00516f50
;   shape_meshlod.cpp_CLodMesh_createOrigSamplePoints_FUN_00517000
;   shape_meshlod.cpp_CLodMesh_eqLoad_FUN_0051cdf0
;   shape_meshlod.cpp_CLodMesh_gridLoad_FUN_0051d2d0
;   shape_meshlod.cpp_CLodMesh_loadReplayData_FUN_0051d180
;   shape_meshlod.cpp_CLodMesh_normalizeAndCenterMesh_FUN_00516e10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051b8a0
        ;   Label: shape_meshlod.cpp_CLodMesh_initializeLodGeneration_FUN_0051b8a0
    PUSH ESI                            ; 0051b8a1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0051b8a2
    MOV ESI,dword ptr [ESP + 0x10]      ; 0051b8a6
    PUSH 0x637339                       ; 0051b8aa | = "meshlod"
    CALL crt_watcom.c__mkdir_FUN_00600e10 ; 0051b8af
        ;   XREF to: 00600e10 (UNCONDITIONAL_CALL)  ; int crt_watcom.c__mkdir_FUN_00600e10(char * path)
    ADD ESP,0x4                         ; 0051b8b4
    PUSH 0x67d4a0                       ; 0051b8b7 | = "meshlod\\simplify.log"
    CALL crt_stdio.c_remove_FUN_005ff9d0 ; 0051b8bc
        ;   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_remove_FUN_005ff9d0(char * filename)
    ADD ESP,0x4                         ; 0051b8c1
    PUSH EBX                            ; 0051b8c4
    CALL shape_meshlod.cpp_CLodMesh_normalizeAndCenterMesh_FUN_00516e10 ; 0051b8c5
        ;   XREF to: 00516e10 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_normalizeAndCenterMesh_FUN_00516e10(CLodMesh * this_ptr)
    ADD ESP,0x4                         ; 0051b8ca
    PUSH EBX                            ; 0051b8cd
    CALL shape_meshlod.cpp_CLodMesh_createNextLOD_FUN_00516f50 ; 0051b8ce
        ;   XREF to: 00516f50 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_createNextLOD_FUN_00516f50(CLodMesh * this_ptr)
    ADD ESP,0x4                         ; 0051b8d3
    PUSH ESI                            ; 0051b8d6
    MOV EDX,dword ptr [EBX + 0x34]      ; 0051b8d7
    PUSH EDX                            ; 0051b8da
    CALL shape_meshlod.cpp_CLodMesh_gridLoad_FUN_0051d2d0 ; 0051b8db
        ;   XREF to: 0051d2d0 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_gridLoad_FUN_0051d2d0(CLodMesh * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 0051b8e0
    PUSH EBX                            ; 0051b8e3
    CALL shape_meshlod.cpp_CLodMesh_buildEdges_FUN_00515ba0 ; 0051b8e4
        ;   XREF to: 00515ba0 (UNCONDITIONAL_CALL)  ; int shape_meshlod.cpp_CLodMesh_buildEdges_FUN_00515ba0(CLodMesh * this_ptr)
    ADD ESP,0x4                         ; 0051b8e9
    MOV ECX,dword ptr [EBX + 0x34]      ; 0051b8ec
    PUSH ECX                            ; 0051b8ef
    CALL shape_meshlod.cpp_CLodMesh_buildEdges_FUN_00515ba0 ; 0051b8f0
        ;   XREF to: 00515ba0 (UNCONDITIONAL_CALL)  ; int shape_meshlod.cpp_CLodMesh_buildEdges_FUN_00515ba0(CLodMesh * this_ptr)
    ADD ESP,0x4                         ; 0051b8f5
    PUSH EBX                            ; 0051b8f8
    CALL shape_meshlod.cpp_CLodMesh_createOrigSamplePoints_FUN_00517000 ; 0051b8f9
        ;   XREF to: 00517000 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_createOrigSamplePoints_FUN_00517000(CLodMesh * this_ptr)
    ADD ESP,0x4                         ; 0051b8fe
    PUSH ESI                            ; 0051b901
    PUSH EBX                            ; 0051b902
    CALL shape_meshlod.cpp_CLodMesh_eqLoad_FUN_0051cdf0 ; 0051b903
        ;   XREF to: 0051cdf0 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_eqLoad_FUN_0051cdf0(CLodMesh * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 0051b908
    PUSH ESI                            ; 0051b90b
    PUSH EBX                            ; 0051b90c
    CALL shape_meshlod.cpp_CLodMesh_loadReplayData_FUN_0051d180 ; 0051b90d
        ;   XREF to: 0051d180 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_loadReplayData_FUN_0051d180(CLodMesh * this_ptr, _FILE * file_handle)
    MOV EAX,0x1                         ; 0051b912
    ADD ESP,0x8                         ; 0051b917
    POP ESI                             ; 0051b91a
    POP EBX                             ; 0051b91b
    RET                                 ; 0051b91c

