; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_meshlod_cpp_CLodMesh_generateLOD_FUN_00516ba0(CLodMesh *this_ptr,int target_tri_count,int render_mode)
;
; Parameters:
; CLodMesh *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   target_tri_count
; int              Stack[0xc]:4   render_mode
; Local Variables:
; float            Stack[-0x30]:4  local_30
; int              Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[2]:
;   core_skeledit.cpp_CDeformableModel_buildFromPosFile_FUN_0058c190 at 0058d17d
;   core_skeledit.cpp_CLodMesh_selectAndGenerateLods_FUN_00589c20 at 00589e84
;
; Referenced Globals:
;   TerminatedCString s_Mesh_degredation_in_prog_00637615
;   TerminatedCString s_est_d_02d_remaining_00637644
;   double DOUBLE_0063765d = 0.0000152587890625
;   double DOUBLE_00637665 = 0.0555555555555556
;   char[400] g_LodMeshProgressBuffer
;   undefined4 CHAR_ARRAY_02f31259
;   undefined4 CHAR_ARRAY_02f3125a
;   undefined4 CHAR_ARRAY_02f3125b
;
; Called Functions:
;   crt_math.c_round_FUN_005fe6b0
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   shape_meshlod.cpp_CLodMesh_closePrecomputeFile_FUN_0051b870
;   shape_meshlod.cpp_CLodMesh_collapseEdge_FUN_00517630
;   shape_meshlod.cpp_CLodMesh_countUnprocessedFaces_FUN_005164d0
;   shape_meshlod.cpp_CLodMesh_findMinimumCostEdge_FUN_00519680
;   shape_meshlod.cpp_CLodMesh_initializeLodGeneration_FUN_00516d50
;   shape_meshlod.cpp_CLodMesh_previewLodGeneration_FUN_0051d520
;   shape_meshlod.cpp_CLodMesh_recordEdgeCollapse_FUN_0051d4a0
;   shape_meshlod.cpp_CLodMesh_saveReplayData_FUN_0051d250
;   wincore_winrun.cpp_getTime_FUN_005f2dc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00516ba0
        ;   Label: shape_meshlod.cpp_CLodMesh_generateLOD_FUN_00516ba0
    PUSH ESI                            ; 00516ba1
    PUSH EDI                            ; 00516ba2
    PUSH EBP                            ; 00516ba3
    MOV EBP,ESP                         ; 00516ba4
    SUB ESP,0x1c                        ; 00516ba6
    AND ESP,0xfffffff8                  ; 00516ba9
    MOV EBX,dword ptr [EBP + 0x14]      ; 00516bac
    PUSH EBX                            ; 00516baf
    CALL shape_meshlod.cpp_CLodMesh_initializeLodGeneration_FUN_00516d50 ; 00516bb0
        ;   XREF to: 00516d50 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_initializeLodGeneration_FUN_00516d50(CLodMesh * this_ptr)
    ADD ESP,0x4                         ; 00516bb5
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 00516bb8
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005f2dc0()
    XOR EDX,EDX                         ; 00516bbd
    MOV dword ptr [ESP + 0xc],EAX       ; 00516bbf
    MOV dword ptr [ESP],EDX             ; 00516bc3
    PUSH EBX                            ; 00516bc6
        ;   Label: LAB_00516bc6
    CALL shape_meshlod.cpp_CLodMesh_countUnprocessedFaces_FUN_005164d0 ; 00516bc7
        ;   XREF to: 005164d0 (UNCONDITIONAL_CALL)  ; int shape_meshlod.cpp_CLodMesh_countUnprocessedFaces_FUN_005164d0(CLodMesh * this_ptr)
    ADD ESP,0x4                         ; 00516bcc
    MOV ECX,dword ptr [EBP + 0x18]      ; 00516bcf
    MOV ESI,EAX                         ; 00516bd2
    CMP EAX,ECX                         ; 00516bd4
    JLE 0x00516d2a                      ; 00516bd6
        ;   XREF to: 00516d2a (CONDITIONAL_JUMP)  ; LAB_00516d2a
    PUSH EBX                            ; 00516bdc
    CALL shape_meshlod.cpp_CLodMesh_findMinimumCostEdge_FUN_00519680 ; 00516bdd
        ;   XREF to: 00519680 (UNCONDITIONAL_CALL)  ; int shape_meshlod.cpp_CLodMesh_findMinimumCostEdge_FUN_00519680(CLodMesh * this_ptr)
    ADD ESP,0x4                         ; 00516be2
    TEST EAX,EAX                        ; 00516be5
    JL 0x00516d2a                       ; 00516be7
        ;   XREF to: 00516d2a (CONDITIONAL_JUMP)  ; LAB_00516d2a
    IMUL EAX,EAX,0xf0                   ; 00516bed
    FLD float ptr [ESP]                 ; 00516bf3
    CALL crt_math.c_round_FUN_005fe6b0  ; 00516bf6
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    MOV EDI,dword ptr [EBX + 0x48]      ; 00516bfb
    FISTP dword ptr [ESP + 0x14]        ; 00516bfe
    ADD EDI,EAX                         ; 00516c02
    MOV EAX,dword ptr [ESP + 0x14]      ; 00516c04
    MOV EDX,EAX                         ; 00516c08
    MOV ECX,0x3c                        ; 00516c0a
    SAR EDX,0x1f                        ; 00516c0f
    IDIV ECX                            ; 00516c12
    MOV EAX,dword ptr [ESP + 0x14]      ; 00516c14
    PUSH EDX                            ; 00516c18
    MOV EDX,EAX                         ; 00516c19
    SAR EDX,0x1f                        ; 00516c1b
    IDIV ECX                            ; 00516c1e
    PUSH EAX                            ; 00516c20
    PUSH 0x637615                       ; 00516c21 | = "Mesh degredation in progress...%d:%02..."
    PUSH 0x2f31258                      ; 00516c26 | g_LodMeshProgressBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 00516c2b
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 00516c30
    CMP dword ptr [ESP + 0x14],0x5      ; 00516c33
    JLE 0x00516cbc                      ; 00516c38
        ;   XREF to: 00516cbc (CONDITIONAL_JUMP)  ; LAB_00516cbc
    MOV EAX,dword ptr [EBX + 0x34]      ; 00516c3e
    MOV EAX,dword ptr [EAX + 0x8]       ; 00516c41
    SUB EAX,ESI                         ; 00516c44
    CMP EAX,0xa                         ; 00516c46
    JLE 0x00516cbc                      ; 00516c49
        ;   XREF to: 00516cbc (CONDITIONAL_JUMP)  ; LAB_00516cbc
    MOV EDX,dword ptr [EBP + 0x18]      ; 00516c4b
    SUB ESI,EDX                         ; 00516c4e
    MOV dword ptr [ESP + 0x18],ESI      ; 00516c50
    FILD dword ptr [ESP + 0x18]         ; 00516c54
    FMUL float ptr [ESP]                ; 00516c58
    MOV dword ptr [ESP + 0x18],EAX      ; 00516c5b
    FILD dword ptr [ESP + 0x18]         ; 00516c5f
    FDIVP                               ; 00516c63
    CALL crt_math.c_round_FUN_005fe6b0  ; 00516c65
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x10]        ; 00516c6a
    MOV ECX,dword ptr [ESP + 0x10]      ; 00516c6e
    TEST ECX,ECX                        ; 00516c72
    JLE 0x00516cbc                      ; 00516c74
        ;   XREF to: 00516cbc (CONDITIONAL_JUMP)  ; LAB_00516cbc
    MOV ESI,0x3c                        ; 00516c76
    MOV EDX,ECX                         ; 00516c7b
    MOV EAX,ECX                         ; 00516c7d
    SAR EDX,0x1f                        ; 00516c7f
    IDIV ESI                            ; 00516c82
    PUSH EDX                            ; 00516c84
    MOV EDX,ECX                         ; 00516c85
    MOV EAX,ECX                         ; 00516c87
    SAR EDX,0x1f                        ; 00516c89
    IDIV ESI                            ; 00516c8c
    PUSH EAX                            ; 00516c8e
    PUSH 0x637644                       ; 00516c8f | = ", est %d:%02d remaining"
    MOV ESI,0x2f31258                   ; 00516c94 | g_LodMeshProgressBuffer
    XOR DL,DL                           ; 00516c99
    MOV AL,byte ptr [ESI]               ; 00516c9b | g_LodMeshProgressBuffer | CHAR_ARRAY_02f3125a
        ;   Label: LAB_00516c9b
    CMP AL,DL                           ; 00516c9d
    JZ 0x00516cb3                       ; 00516c9f
        ;   XREF to: 00516cb3 (CONDITIONAL_JUMP)  ; LAB_00516cb3
    CMP AL,0x0                          ; 00516ca1
    JZ 0x00516cb1                       ; 00516ca3
        ;   XREF to: 00516cb1 (CONDITIONAL_JUMP)  ; LAB_00516cb1
    INC ESI                             ; 00516ca5
    MOV AL,byte ptr [ESI]               ; 00516ca6 | CHAR_ARRAY_02f31259 | CHAR_ARRAY_02f3125b
    CMP AL,DL                           ; 00516ca8
    JZ 0x00516cb3                       ; 00516caa
        ;   XREF to: 00516cb3 (CONDITIONAL_JUMP)  ; LAB_00516cb3
    INC ESI                             ; 00516cac
    CMP AL,0x0                          ; 00516cad
    JNZ 0x00516c9b                      ; 00516caf
        ;   XREF to: 00516c9b (CONDITIONAL_JUMP)  ; LAB_00516c9b
    SUB ESI,ESI                         ; 00516cb1
        ;   Label: LAB_00516cb1
    PUSH ESI                            ; 00516cb3 | CHAR_ARRAY_02f3125b | CHAR_ARRAY_02f3125a
        ;   Label: LAB_00516cb3
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 00516cb4
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 00516cb9
    MOV ESI,dword ptr [EBP + 0x1c]      ; 00516cbc
        ;   Label: LAB_00516cbc
    PUSH ESI                            ; 00516cbf
    PUSH 0x0                            ; 00516cc0
    PUSH EBX                            ; 00516cc2
    CALL shape_meshlod.cpp_CLodMesh_previewLodGeneration_FUN_0051d520 ; 00516cc3
        ;   XREF to: 0051d520 (UNCONDITIONAL_CALL)  ; int shape_meshlod.cpp_CLodMesh_previewLodGeneration_FUN_0051d520(CLodMesh * this_ptr, int pause_flag, int render_mode)
    ADD ESP,0xc                         ; 00516cc8
    TEST EAX,EAX                        ; 00516ccb
    JZ 0x00516d2a                       ; 00516ccd
        ;   XREF to: 00516d2a (CONDITIONAL_JUMP)  ; LAB_00516d2a
    MOV EAX,dword ptr [EDI + 0x4]       ; 00516ccf
    PUSH dword ptr [EDI + 0x10]         ; 00516cd2
    PUSH EAX                            ; 00516cd5
    MOV EDX,dword ptr [EDI]             ; 00516cd6
    PUSH EDX                            ; 00516cd8
    PUSH EBX                            ; 00516cd9
    CALL shape_meshlod.cpp_CLodMesh_collapseEdge_FUN_00517630 ; 00516cda
        ;   XREF to: 00517630 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_collapseEdge_FUN_00517630(CLodMesh * this_ptr, int vertex_idx_1, int vertex_idx_2, float collapse_weight)
    ADD ESP,0x10                        ; 00516cdf
    PUSH EDI                            ; 00516ce2
    PUSH EBX                            ; 00516ce3
    CALL shape_meshlod.cpp_CLodMesh_recordEdgeCollapse_FUN_0051d4a0 ; 00516ce4
        ;   XREF to: 0051d4a0 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_recordEdgeCollapse_FUN_0051d4a0(CLodMesh * this_ptr, CLodEdge * edge_data)
    ADD ESP,0x8                         ; 00516ce9
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 00516cec
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005f2dc0()
    MOV ECX,dword ptr [ESP + 0xc]       ; 00516cf1
    MOV EDX,EAX                         ; 00516cf5
    SUB EAX,ECX                         ; 00516cf7
    TEST EAX,EAX                        ; 00516cf9
    JL 0x00516d26                       ; 00516cfb
        ;   XREF to: 00516d26 (CONDITIONAL_JUMP)  ; LAB_00516d26
    MOV dword ptr [ESP + 0x18],EAX      ; 00516cfd
        ;   Label: LAB_00516cfd
    FILD dword ptr [ESP + 0x18]         ; 00516d01
    FMUL double ptr [0x0063765d]        ; 00516d05 | DOUBLE_0063765d
    FMUL double ptr [0x00637665]        ; 00516d0b | DOUBLE_00637665
    FLD float ptr [ESP]                 ; 00516d11
    FXCH                                ; 00516d14
    FADD ST0,ST1                        ; 00516d16
    MOV dword ptr [ESP + 0xc],EDX       ; 00516d18
    FSTP ST1                            ; 00516d1c
    FSTP float ptr [ESP]                ; 00516d1e
    JMP 0x00516bc6                      ; 00516d21
        ;   XREF to: 00516bc6 (UNCONDITIONAL_JUMP)  ; LAB_00516bc6
    XOR EAX,EAX                         ; 00516d26
        ;   Label: LAB_00516d26
    JMP 0x00516cfd                      ; 00516d28
        ;   XREF to: 00516cfd (UNCONDITIONAL_JUMP)  ; LAB_00516cfd
    MOV ESI,dword ptr [EBX + 0x38]      ; 00516d2a
        ;   Label: LAB_00516d2a
    PUSH ESI                            ; 00516d2d
    PUSH EBX                            ; 00516d2e
    CALL shape_meshlod.cpp_CLodMesh_saveReplayData_FUN_0051d250 ; 00516d2f
        ;   XREF to: 0051d250 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_saveReplayData_FUN_0051d250(CLodMesh * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 00516d34
    PUSH EBX                            ; 00516d37
    CALL shape_meshlod.cpp_CLodMesh_closePrecomputeFile_FUN_0051b870 ; 00516d38
        ;   XREF to: 0051b870 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_closePrecomputeFile_FUN_0051b870(CLodMesh * this_ptr)
    ADD ESP,0x4                         ; 00516d3d
    MOV ESP,EBP                         ; 00516d40
    POP EBP                             ; 00516d42
    POP EDI                             ; 00516d43
    POP ESI                             ; 00516d44
    POP EBX                             ; 00516d45
    RET                                 ; 00516d46

