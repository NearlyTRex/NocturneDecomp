; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_meshlod_cpp_CLodMesh_getLOD_FUN_0051b920(CLodMesh *this_ptr)
;
; Parameters:
; CLodMesh *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_skeledit.cpp_CDeformableModel_FUN_0058c190 at 0058d366
;   shape_meshlod.cpp_CLodMesh_chooseLodsInteractive_FUN_0051d990 at 0051dd4a
;
; Referenced Globals:
;   TerminatedCString s_shape_meshlod_cpp_00637d58
;   TerminatedCString s_Can_t_call_LodMesh_getLO_00637d6d
;   double DOUBLE_00637db5 = 0.000100000000000000
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   int g_LodReplayMode
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   shape_meshlod.cpp_CLodMesh_buildEdges_FUN_00515ba0
;   shape_meshlod.cpp_CLodMesh_collapseEdge_FUN_00517630
;   shape_meshlod.cpp_CLodMesh_compactFaces_FUN_0051b570
;   shape_meshlod.cpp_CLodMesh_computeVertexBoundingBox_FUN_00516500
;   shape_meshlod.cpp_CLodMesh_copyFrom_FUN_0051a8c0
;   shape_meshlod.cpp_CLodMesh_countUnprocessedFaces_FUN_005164d0
;   shape_meshlod.cpp_CLodMesh_markDegenerateFaces_FUN_00516b40
;   shape_meshlod.cpp_CLodMesh_markDuplicateFaces_FUN_00516a40
;   shape_meshlod.cpp_CLodMesh_removeUnusedVertices_FUN_0051b3e0
;   shape_meshlod.cpp_CLodMesh_scaleVertices_FUN_005165c0
;   shape_meshlod.cpp_CLodMesh_translateVertices_FUN_00516570
;   shape_meshlod.cpp_CLodMesh_weldVertices_FUN_0051a150
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051b920
        ;   Label: shape_meshlod.cpp_CLodMesh_getLOD_FUN_0051b920
    PUSH ESI                            ; 0051b921
    PUSH EDI                            ; 0051b922
    PUSH EBP                            ; 0051b923
    SUB ESP,0x44                        ; 0051b924
    MOV EBP,dword ptr [ESP + 0x58]      ; 0051b927
    MOV EDI,dword ptr [ESP + 0x60]      ; 0051b92b
    CMP dword ptr [EBP + 0x34],0x0      ; 0051b92f
    JZ 0x0051b99f                       ; 0051b933
        ;   XREF to: 0051b99f (CONDITIONAL_JUMP)  ; LAB_0051b99f
    CMP dword ptr [EBP + 0x4c],0x1      ; 0051b935
    JL 0x0051b99f                       ; 0051b939
        ;   XREF to: 0051b99f (CONDITIONAL_JUMP)  ; LAB_0051b99f
    MOV EAX,dword ptr [EBP + 0x34]      ; 0051b93b
        ;   Label: LAB_0051b93b
    PUSH EAX                            ; 0051b93e
    PUSH EDI                            ; 0051b93f
    CALL shape_meshlod.cpp_CLodMesh_copyFrom_FUN_0051a8c0 ; 0051b940
        ;   XREF to: 0051a8c0 (UNCONDITIONAL_CALL)  ; CLodMesh * shape_meshlod.cpp_CLodMesh_copyFrom_FUN_0051a8c0(CLodMesh * this_ptr, CLodMesh * source_mesh)
    ADD ESP,0x8                         ; 0051b945
    PUSH EDI                            ; 0051b948
    XOR ESI,ESI                         ; 0051b949
    XOR EBX,EBX                         ; 0051b94b
    CALL shape_meshlod.cpp_CLodMesh_buildEdges_FUN_00515ba0 ; 0051b94d
        ;   XREF to: 00515ba0 (UNCONDITIONAL_CALL)  ; int shape_meshlod.cpp_CLodMesh_buildEdges_FUN_00515ba0(CLodMesh * this_ptr)
    MOV EAX,[0x02f33330]                ; 0051b952 | g_LodReplayMode
    ADD ESP,0x4                         ; 0051b957
    MOV EDX,0x1                         ; 0051b95a
    MOV dword ptr [ESP + 0x40],EAX      ; 0051b95f
    MOV dword ptr [0x02f33330],EDX      ; 0051b963 | g_LodReplayMode
    PUSH EDI                            ; 0051b969
        ;   Label: LAB_0051b969
    CALL shape_meshlod.cpp_CLodMesh_countUnprocessedFaces_FUN_005164d0 ; 0051b96a
        ;   XREF to: 005164d0 (UNCONDITIONAL_CALL)  ; int shape_meshlod.cpp_CLodMesh_countUnprocessedFaces_FUN_005164d0(CLodMesh * this_ptr)
    ADD ESP,0x4                         ; 0051b96f
    CMP EAX,dword ptr [ESP + 0x5c]      ; 0051b972
    JLE 0x0051b9c7                      ; 0051b976
        ;   XREF to: 0051b9c7 (CONDITIONAL_JUMP)  ; LAB_0051b9c7
    CMP ESI,dword ptr [EBP + 0x4c]      ; 0051b978
    JGE 0x0051b9c7                      ; 0051b97b
        ;   XREF to: 0051b9c7 (CONDITIONAL_JUMP)  ; LAB_0051b9c7
    MOV EAX,dword ptr [EBP + 0x50]      ; 0051b97d
    MOV EDX,dword ptr [EBX + EAX*0x1 + 0x4] ; 0051b980
    PUSH dword ptr [EBX + EAX*0x1 + 0x10] ; 0051b984
    PUSH EDX                            ; 0051b988
    MOV ECX,dword ptr [EBX + EAX*0x1]   ; 0051b989
    PUSH ECX                            ; 0051b98c
    PUSH EDI                            ; 0051b98d
    ADD EBX,0xf0                        ; 0051b98e
    INC ESI                             ; 0051b994
    CALL shape_meshlod.cpp_CLodMesh_collapseEdge_FUN_00517630 ; 0051b995
        ;   XREF to: 00517630 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_collapseEdge_FUN_00517630(CLodMesh * this_ptr, int vertex_idx_1, int vertex_idx_2, float collapse_weight)
    ADD ESP,0x10                        ; 0051b99a
    JMP 0x0051b969                      ; 0051b99d
        ;   XREF to: 0051b969 (UNCONDITIONAL_JUMP)  ; LAB_0051b969
    MOV EBX,0x637d58                    ; 0051b99f | = "..\\shape\\meshlod.cpp"
        ;   Label: LAB_0051b99f
    MOV ESI,0x1279                      ; 0051b9a4
    PUSH 0x637d6d                       ; 0051b9a9 | = "Can't call LodMesh::getLOD until afte..."
    MOV dword ptr [0x02f0ca48],EBX      ; 0051b9ae | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 0051b9b4 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0051b9ba
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0051b9bf
    JMP 0x0051b93b                      ; 0051b9c2
        ;   XREF to: 0051b93b (UNCONDITIONAL_JUMP)  ; LAB_0051b93b
    MOV EAX,dword ptr [ESP + 0x40]      ; 0051b9c7
        ;   Label: LAB_0051b9c7
    PUSH EDI                            ; 0051b9cb
    MOV [0x02f33330],EAX                ; 0051b9cc | g_LodReplayMode
    CALL shape_meshlod.cpp_CLodMesh_removeUnusedVertices_FUN_0051b3e0 ; 0051b9d1
        ;   XREF to: 0051b3e0 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_removeUnusedVertices_FUN_0051b3e0(CLodMesh * this_ptr)
    ADD ESP,0x4                         ; 0051b9d6
    PUSH EDI                            ; 0051b9d9
    CALL shape_meshlod.cpp_CLodMesh_markDuplicateFaces_FUN_00516a40 ; 0051b9da
        ;   XREF to: 00516a40 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_markDuplicateFaces_FUN_00516a40(CLodMesh * this_ptr)
    ADD ESP,0x4                         ; 0051b9df
    PUSH EDI                            ; 0051b9e2
    CALL shape_meshlod.cpp_CLodMesh_markDegenerateFaces_FUN_00516b40 ; 0051b9e3
        ;   XREF to: 00516b40 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_markDegenerateFaces_FUN_00516b40(CLodMesh * this_ptr)
    ADD ESP,0x4                         ; 0051b9e8
    MOV EAX,ESP                         ; 0051b9eb
    PUSH EAX                            ; 0051b9ed
    PUSH EDI                            ; 0051b9ee
    CALL shape_meshlod.cpp_CLodMesh_computeVertexBoundingBox_FUN_00516500 ; 0051b9ef
        ;   XREF to: 00516500 (UNCONDITIONAL_CALL)  ; CBoundingBox3D * shape_meshlod.cpp_CLodMesh_computeVertexBoundingBox_FUN_00516500(CLodMesh * this_ptr, CBoundingBox3D * out_bbox)
    LEA EBX,[EAX + 0xc]                 ; 0051b9f4
    FLD float ptr [EBX]                 ; 0051b9f7
    FSUB float ptr [EAX]                ; 0051b9f9
    ADD ESP,0x8                         ; 0051b9fb
    FSTP float ptr [ESP + 0x18]         ; 0051b9fe
    FLD float ptr [EBX + 0x4]           ; 0051ba02
    FSUB float ptr [EAX + 0x4]          ; 0051ba05
    FST float ptr [ESP + 0x1c]          ; 0051ba08
    FMUL float ptr [ESP + 0x1c]         ; 0051ba0c
    FLD float ptr [ESP + 0x18]          ; 0051ba10
    FMUL ST0                            ; 0051ba14
    FLD float ptr [EBX + 0x8]           ; 0051ba16
    FSUB float ptr [EAX + 0x8]          ; 0051ba19
    FXCH                                ; 0051ba1c
    FADDP ST2,ST0                       ; 0051ba1e
    FST float ptr [ESP + 0x20]          ; 0051ba20
    FMUL float ptr [ESP + 0x20]         ; 0051ba24
    FADDP                               ; 0051ba28
    FSQRT                               ; 0051ba2a
    FMUL double ptr [0x00637db5]        ; 0051ba2c | DOUBLE_00637db5
    SUB ESP,0x4                         ; 0051ba32
    FSTP float ptr [ESP]                ; 0051ba35
    PUSH EDI                            ; 0051ba38
    CALL shape_meshlod.cpp_CLodMesh_weldVertices_FUN_0051a150 ; 0051ba39
        ;   XREF to: 0051a150 (UNCONDITIONAL_CALL)  ; int shape_meshlod.cpp_CLodMesh_weldVertices_FUN_0051a150(CLodMesh * this_ptr, float weld_threshold)
    ADD ESP,0x8                         ; 0051ba3e
    PUSH EDI                            ; 0051ba41
    CALL shape_meshlod.cpp_CLodMesh_markDegenerateFaces_FUN_00516b40 ; 0051ba42
        ;   XREF to: 00516b40 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_markDegenerateFaces_FUN_00516b40(CLodMesh * this_ptr)
    ADD ESP,0x4                         ; 0051ba47
    PUSH EDI                            ; 0051ba4a
    CALL shape_meshlod.cpp_CLodMesh_compactFaces_FUN_0051b570 ; 0051ba4b
        ;   XREF to: 0051b570 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_compactFaces_FUN_0051b570(CLodMesh * this_ptr)
    ADD ESP,0x4                         ; 0051ba50
    PUSH EDI                            ; 0051ba53
    CALL shape_meshlod.cpp_CLodMesh_removeUnusedVertices_FUN_0051b3e0 ; 0051ba54
        ;   XREF to: 0051b3e0 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_removeUnusedVertices_FUN_0051b3e0(CLodMesh * this_ptr)
    FLD float ptr [EBP + 0x70]          ; 0051ba59
    FLD1                                ; 0051ba5c
    FDIVRP                              ; 0051ba5e
    ADD ESP,0x4                         ; 0051ba60
    FSTP float ptr [ESP + 0x3c]         ; 0051ba63
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0051ba67
    MOV dword ptr [ESP + 0x30],EAX      ; 0051ba6b
    MOV dword ptr [ESP + 0x34],EAX      ; 0051ba6f
    MOV dword ptr [ESP + 0x38],EAX      ; 0051ba73
    LEA EAX,[ESP + 0x30]                ; 0051ba77
    PUSH EAX                            ; 0051ba7b
    PUSH EDI                            ; 0051ba7c
    CALL shape_meshlod.cpp_CLodMesh_scaleVertices_FUN_005165c0 ; 0051ba7d
        ;   XREF to: 005165c0 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_scaleVertices_FUN_005165c0(CLodMesh * this_ptr, CVector3f * scale_factors)
    FLD float ptr [EBP + 0x64]          ; 0051ba82
    LEA EAX,[ESP + 0x2c]                ; 0051ba85
    ADD ESP,0x8                         ; 0051ba89
    FCHS                                ; 0051ba8c
    FSTP float ptr [ESP + 0x24]         ; 0051ba8e
    PUSH EAX                            ; 0051ba92
    FLD float ptr [EBP + 0x68]          ; 0051ba93
    FCHS                                ; 0051ba96
    FSTP float ptr [ESP + 0x2c]         ; 0051ba98
    PUSH EDI                            ; 0051ba9c
    FLD float ptr [EBP + 0x6c]          ; 0051ba9d
    FCHS                                ; 0051baa0
    FSTP float ptr [ESP + 0x34]         ; 0051baa2
    CALL shape_meshlod.cpp_CLodMesh_translateVertices_FUN_00516570 ; 0051baa6
        ;   XREF to: 00516570 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_translateVertices_FUN_00516570(CLodMesh * this_ptr, CVector3f * offset)
    ADD ESP,0x8                         ; 0051baab
    ADD ESP,0x44                        ; 0051baae
    POP EBP                             ; 0051bab1
    POP EDI                             ; 0051bab2
    POP ESI                             ; 0051bab3
    POP EBX                             ; 0051bab4
    RET                                 ; 0051bab5

