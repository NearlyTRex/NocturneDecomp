; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_meshlod_cpp_CLodMesh_postprocessMesh_FUN_0051b330(CLodMesh *this_ptr)
;
; Parameters:
; CLodMesh *       Stack[0x4]:4   this_ptr
; Local Variables:
; CBoundingBox3D   Stack[-0x28]:24  CStack_28
; float            Stack[-0x10]:4  local_10
; float            Stack[-0xc]:4  local_c
; float            Stack[-0x8]:4  local_8
;
; XREF[4]:
;   core_skeledit.cpp_CDeformableModel_buildFromPosFile_FUN_0058c190 at 0058d072
;   shape_meshlod.cpp_CLodMesh_importFromEditorGlobals_FUN_0051b080 at 0051b27b
;   shape_meshlod.cpp_CLodMesh_parseS3DFileVariant_FUN_0051adf0 at 0051b066
;   shape_meshlod.cpp_CLodMesh_parseS3DFile_FUN_0051aa60 at 0051ad12
;
; Referenced Globals:
;   TerminatedCString s_Computing_plane_equation_00637cce
;   double DOUBLE_00637ced = 0.000100000000000000
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CEditorTools g_CEditorToolsInstance
;
; Called Functions:
;   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
;   shape_meshlod.cpp_CLodMesh_compactFaces_FUN_0051b570
;   shape_meshlod.cpp_CLodMesh_computeVertexBoundingBox_FUN_00516500
;   shape_meshlod.cpp_CLodMesh_markDegenerateFaces_FUN_00516b40
;   shape_meshlod.cpp_CLodMesh_markDuplicateFaces_FUN_00516a40
;   shape_meshlod.cpp_CLodMesh_removeUnusedVertices_FUN_0051b3e0
;   shape_meshlod.cpp_CLodMesh_validateAndRemoveInvalidFaces_FUN_005197c0
;   shape_meshlod.cpp_CLodMesh_weldVertices_FUN_0051a150
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051b330
        ;   Label: shape_meshlod.cpp_CLodMesh_postprocessMesh_FUN_0051b330
    SUB ESP,0x24                        ; 0051b331
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0051b334
    MOV EAX,ESP                         ; 0051b338
    PUSH EAX                            ; 0051b33a
    PUSH EBX                            ; 0051b33b
    CALL shape_meshlod.cpp_CLodMesh_computeVertexBoundingBox_FUN_00516500 ; 0051b33c
        ;   XREF to: 00516500 (UNCONDITIONAL_CALL)  ; CBoundingBox3D * shape_meshlod.cpp_CLodMesh_computeVertexBoundingBox_FUN_00516500(CLodMesh * this_ptr, CBoundingBox3D * out_bbox)
    LEA EDX,[EAX + 0xc]                 ; 0051b341
    FLD float ptr [EDX]                 ; 0051b344
    FSUB float ptr [EAX]                ; 0051b346
    ADD ESP,0x8                         ; 0051b348
    FSTP float ptr [ESP + 0x18]         ; 0051b34b
    FLD float ptr [EDX + 0x4]           ; 0051b34f
    FSUB float ptr [EAX + 0x4]          ; 0051b352
    FST float ptr [ESP + 0x1c]          ; 0051b355
    FMUL float ptr [ESP + 0x1c]         ; 0051b359
    FLD float ptr [ESP + 0x18]          ; 0051b35d
    FMUL ST0                            ; 0051b361
    FLD float ptr [EDX + 0x8]           ; 0051b363
    FSUB float ptr [EAX + 0x8]          ; 0051b366
    FXCH                                ; 0051b369
    FADDP ST2,ST0                       ; 0051b36b
    FST float ptr [ESP + 0x20]          ; 0051b36d
    FMUL float ptr [ESP + 0x20]         ; 0051b371
    FADDP                               ; 0051b375
    FSQRT                               ; 0051b377
    FMUL double ptr [0x00637ced]        ; 0051b379 | DOUBLE_00637ced
    SUB ESP,0x4                         ; 0051b37f
    FSTP float ptr [ESP]                ; 0051b382
    PUSH EBX                            ; 0051b385
    CALL shape_meshlod.cpp_CLodMesh_weldVertices_FUN_0051a150 ; 0051b386
        ;   XREF to: 0051a150 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_weldVertices_FUN_0051a150(CLodMesh * this_ptr, float weld_threshold)
    ADD ESP,0x8                         ; 0051b38b
    PUSH EBX                            ; 0051b38e
    CALL shape_meshlod.cpp_CLodMesh_markDegenerateFaces_FUN_00516b40 ; 0051b38f
        ;   XREF to: 00516b40 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_markDegenerateFaces_FUN_00516b40(CLodMesh * this_ptr)
    ADD ESP,0x4                         ; 0051b394
    PUSH EBX                            ; 0051b397
    CALL shape_meshlod.cpp_CLodMesh_markDuplicateFaces_FUN_00516a40 ; 0051b398
        ;   XREF to: 00516a40 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_markDuplicateFaces_FUN_00516a40(CLodMesh * this_ptr)
    ADD ESP,0x4                         ; 0051b39d
    PUSH 0x637cce                       ; 0051b3a0 | = "Computing plane equations..."
    MOV EDX,dword ptr [0x00678a60]      ; 0051b3a5 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EDX                            ; 0051b3ab | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 0051b3ac
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0051b3b1
    PUSH EBX                            ; 0051b3b4
    CALL shape_meshlod.cpp_CLodMesh_validateAndRemoveInvalidFaces_FUN_005197c0 ; 0051b3b5
        ;   XREF to: 005197c0 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_validateAndRemoveInvalidFaces_FUN_005197c0(CLodMesh * this_ptr)
    ADD ESP,0x4                         ; 0051b3ba
    PUSH EBX                            ; 0051b3bd
    CALL shape_meshlod.cpp_CLodMesh_compactFaces_FUN_0051b570 ; 0051b3be
        ;   XREF to: 0051b570 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_compactFaces_FUN_0051b570(CLodMesh * this_ptr)
    ADD ESP,0x4                         ; 0051b3c3
    PUSH EBX                            ; 0051b3c6
    CALL shape_meshlod.cpp_CLodMesh_removeUnusedVertices_FUN_0051b3e0 ; 0051b3c7
        ;   XREF to: 0051b3e0 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_removeUnusedVertices_FUN_0051b3e0(CLodMesh * this_ptr)
    ADD ESP,0x4                         ; 0051b3cc
    ADD ESP,0x24                        ; 0051b3cf
    POP EBX                             ; 0051b3d2
    RET                                 ; 0051b3d3

