; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_meshlod_cpp_CLodMesh_previewLodGeneration_FUN_0051d520(CLodMesh *this_ptr,int pause_flag,int render_mode)
;
; Parameters:
; CLodMesh *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   pause_flag
; int              Stack[0xc]:4   render_mode
; Local Variables:
; char[100]        Stack[-0xbc]:100  local_bc
; CBoundingBox3D   Stack[-0x58]:24  local_58
; CVector3f        Stack[-0x40]:12  local_40
; CVector3f        Stack[-0x34]:12  local_34
; CVector3f        Stack[-0x28]:12  local_28
; int              Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; float            Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_skeledit.cpp_CLodMesh_selectAndGenerateLods_FUN_00589c20 at 00589c63
;   shape_meshlod.cpp_CLodMesh_generateLOD_FUN_00516ba0 at 00516cc3
;   shape_meshlod.cpp_testLodGeneration_FUN_0051ed60 at 0051eda8
;
; Referenced Globals:
;   TerminatedCString s_Press_and_hold_P_to_paus_0063823f
;   TerminatedCString s_Press_ENTER_to_resume_me_0063826f
;   TerminatedCString s_d_faces_d_original_00638296
;   TerminatedCString s_Pixel_Height_d_006382ac
;   TerminatedCString s_OK_let_go_of_ESC_006382bd
;   TerminatedCString s_Good_enough_006382d3
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   CGame* g_CGamePtr = 02d81a9c
;   CKeys* g_CKeysPtr = 02dcd7d4
;   int INT_0067d390 = -0x1
;   CSpotView* g_CSpotViewPtr = 03f6b9e0
;   CDemonRenderer g_CDemonRendererInstance
;   ... and 10 more
;
; Called Functions:
;   core_box.cpp_CBoundingBox3D_getBoundingBoxScreenSize_FUN_00420840
;   core_game.cpp_CGame_saveClockTime_FUN_004d7d80
;   core_game.cpp_CGame_updateDT_FUN_004d7d90
;   crt_math.c_round_FUN_005fe6b0
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   engine_2d.c_clearInputAndWait_FUN_00403260
;   engine_2d.c_drawText_FUN_00401fd0
;   engine_2d.c_fillRectColor_FUN_00403170
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
;   engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_0048c970
;   engine_special.cpp_clearZBufferNative_FUN_005b3ed4
;   shape_edittool.cpp_CEditorTools_createCenteredDialog_FUN_0049e940
;   shape_edittool.cpp_CEditorTools_draw3DProjectedLine_FUN_004a28a0
;   shape_edittool.cpp_CEditorTools_drawWindowStatusMessage_FUN_0049e870
;   shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
;   ... and 15 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051d520
        ;   Label: shape_meshlod.cpp_CLodMesh_previewLodGeneration_FUN_0051d520
    PUSH ESI                            ; 0051d521
    PUSH EDI                            ; 0051d522
    PUSH EBP                            ; 0051d523
    SUB ESP,0xac                        ; 0051d524
    MOV ESI,dword ptr [ESP + 0xc0]      ; 0051d52a
    MOV EDI,dword ptr [ESP + 0xc4]      ; 0051d531
    MOV EBP,dword ptr [ESP + 0xc8]      ; 0051d538
    MOV EDX,dword ptr [0x0067b654]      ; 0051d53f | g_CGameInstance | g_CGamePtr
    PUSH EDX                            ; 0051d545 | g_CGameInstance
    CALL core_game.cpp_CGame_saveClockTime_FUN_004d7d80 ; 0051d546
        ;   XREF to: 004d7d80 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_saveClockTime_FUN_004d7d80(CGame * this_ptr)
    ADD ESP,0x4                         ; 0051d54b
    XOR ECX,ECX                         ; 0051d54e
    MOV EDX,0x1                         ; 0051d550
    MOV dword ptr [ESP + 0x94],ECX      ; 0051d555
    MOV dword ptr [ESP + 0x98],ECX      ; 0051d55c
    MOV dword ptr [ESP + 0x9c],ECX      ; 0051d563
    MOV dword ptr [ESP + 0xa4],EDX      ; 0051d56a
    MOV EAX,[0x00679398]                ; 0051d571 | g_WindowHeight
        ;   Label: LAB_0051d571
    PUSH 0xfc                           ; 0051d576
    DEC EAX                             ; 0051d57b
    PUSH EAX                            ; 0051d57c
    MOV EAX,[0x00679394]                ; 0051d57d | g_WindowWidth
    DEC EAX                             ; 0051d582
    PUSH EAX                            ; 0051d583
    PUSH 0x0                            ; 0051d584
    PUSH 0x0                            ; 0051d586
    CALL engine_2d.c_fillRectColor_FUN_00403170 ; 0051d588
        ;   XREF to: 00403170 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectColor_FUN_00403170(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x14                        ; 0051d58d
    CALL engine_special.cpp_clearZBufferNative_FUN_005b3ed4 ; 0051d590
        ;   XREF to: 005b3ed4 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearZBufferNative_FUN_005b3ed4()
    MOV ECX,dword ptr [0x0068416c]      ; 0051d595 | g_CSpotViewInstance | g_CSpotViewPtr
    PUSH ECX                            ; 0051d59b | g_CSpotViewInstance
    CALL shape_spotview.cpp_CSpotView_applyCamera_FUN_005b9a20 ; 0051d59c
        ;   XREF to: 005b9a20 (UNCONDITIONAL_CALL)  ; void shape_spotview.cpp_CSpotView_applyCamera_FUN_005b9a20(CSpotView * this_ptr)
    ADD ESP,0x4                         ; 0051d5a1
    LEA EAX,[ESP + 0x94]                ; 0051d5a4
    PUSH EAX                            ; 0051d5ab
    MOV EBX,dword ptr [0x006703ec]      ; 0051d5ac | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EBX                            ; 0051d5b2 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 0051d5b3
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
    MOV EAX,[0x00679398]                ; 0051d5b8 | g_WindowHeight
    ADD ESP,0x8                         ; 0051d5bd
    SUB EAX,0x16                        ; 0051d5c0
    TEST EDI,EDI                        ; 0051d5c3
    JNZ 0x0051d93f                      ; 0051d5c5
        ;   XREF to: 0051d93f (CONDITIONAL_JUMP)  ; LAB_0051d93f
    PUSH EAX                            ; 0051d5cb
    PUSH EDI                            ; 0051d5cc
    PUSH 0x63823f                       ; 0051d5cd | = "Press and hold P to pause and spin, E..."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0051d5d2
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
        ;   Label: LAB_0051d5d2
    ADD ESP,0xc                         ; 0051d5d7
    PUSH ESI                            ; 0051d5da
    CALL shape_meshlod.cpp_CLodMesh_transformVerticesForPreview_FUN_0051e6b0 ; 0051d5db
        ;   XREF to: 0051e6b0 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_transformVerticesForPreview_FUN_0051e6b0(CLodMesh * this_ptr)
    ADD ESP,0x4                         ; 0051d5e0
    CMP EBP,0x1                         ; 0051d5e3
    JNC 0x0051d966                      ; 0051d5e6
        ;   XREF to: 0051d966 (CONDITIONAL_JUMP)  ; LAB_0051d966
    PUSH 0x0                            ; 0051d5ec
        ;   Label: LAB_0051d5ec
    PUSH ESI                            ; 0051d5ee
    CALL shape_meshlod.cpp_CLodMesh_renderShadedTriangles_FUN_0051e990 ; 0051d5ef
        ;   XREF to: 0051e990 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_renderShadedTriangles_FUN_0051e990(CLodMesh * this_ptr, int use_palette_coloring)
    ADD ESP,0x8                         ; 0051d5f4
        ;   Label: LAB_0051d5f4
    CMP dword ptr [0x02f3123c],0x0      ; 0051d5f7 | INT_02f3123c
    JZ 0x0051d60b                       ; 0051d5fe
        ;   XREF to: 0051d60b (CONDITIONAL_JUMP)  ; LAB_0051d60b
    PUSH 0x1                            ; 0051d600
    PUSH ESI                            ; 0051d602
    CALL shape_meshlod.cpp_CLodMesh_renderColorCodedEdges_FUN_0051e830 ; 0051d603
        ;   XREF to: 0051e830 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_renderColorCodedEdges_FUN_0051e830(CLodMesh * this_ptr, int backface_culling_enabled)
    ADD ESP,0x8                         ; 0051d608
    CMP dword ptr [0x02f31234],0x0      ; 0051d60b | INT_02f31234
        ;   Label: LAB_0051d60b
    JZ 0x0051d61d                       ; 0051d612
        ;   XREF to: 0051d61d (CONDITIONAL_JUMP)  ; LAB_0051d61d
    PUSH ESI                            ; 0051d614
    CALL shape_meshlod.cpp_CLodMesh_drawVertexLabels_FUN_0051ed30 ; 0051d615
        ;   XREF to: 0051ed30 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_drawVertexLabels_FUN_0051ed30(CLodMesh * this_ptr)
    ADD ESP,0x4                         ; 0051d61a
    MOV ECX,dword ptr [0x0067d390]      ; 0051d61d | INT_0067d390
        ;   Label: LAB_0051d61d
    TEST ECX,ECX                        ; 0051d623
    JL 0x0051d631                       ; 0051d625
        ;   XREF to: 0051d631 (CONDITIONAL_JUMP)  ; LAB_0051d631
    PUSH ECX                            ; 0051d627
    PUSH ESI                            ; 0051d628
    CALL shape_meshlod.cpp_CLodMesh_drawVertexIndexLabel_FUN_0051ecd0 ; 0051d629
        ;   XREF to: 0051ecd0 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_drawVertexIndexLabel_FUN_0051ecd0(CLodMesh * this_ptr, int vertex_index)
    ADD ESP,0x8                         ; 0051d62e
    CMP dword ptr [0x02f313e8],0x0      ; 0051d631 | g_LodMeshHighlightVertices
        ;   Label: LAB_0051d631
    JZ 0x0051d666                       ; 0051d638
        ;   XREF to: 0051d666 (CONDITIONAL_JUMP)  ; LAB_0051d666
    MOV EDX,dword ptr [0x00678a60]      ; 0051d63a | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EDX                            ; 0051d640 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330 ; 0051d641
        ;   XREF to: 004a1330 (UNCONDITIONAL_CALL)  ; uint shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330(CEditorTools * this_ptr)
    ADD ESP,0x4                         ; 0051d646
    PUSH 0x4                            ; 0051d649
    MOV ECX,dword ptr [0x02f313e8]      ; 0051d64b | g_LodMeshHighlightVertices
    PUSH ECX                            ; 0051d651
    MOV EBX,dword ptr [0x00678a60]      ; 0051d652 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EBX                            ; 0051d658 | g_CEditorToolsInstance
    MOV [0x02d02570],EAX                ; 0051d659 | g_ActiveRenderColor
    CALL shape_edittool.cpp_CEditorTools_draw3DProjectedLine_FUN_004a28a0 ; 0051d65e
        ;   XREF to: 004a28a0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_draw3DProjectedLine_FUN_004a28a0(CEditorTools * this_ptr, CVector3f * world_point, int line_length)
    ADD ESP,0xc                         ; 0051d663
    CMP dword ptr [0x02f31238],0x0      ; 0051d666 | INT_02f31238
        ;   Label: LAB_0051d666
    JZ 0x0051d6a6                       ; 0051d66d
        ;   XREF to: 0051d6a6 (CONDITIONAL_JUMP)  ; LAB_0051d6a6
    MOV EDX,dword ptr [ESI + 0x34]      ; 0051d66f
    TEST EDX,EDX                        ; 0051d672
    JZ 0x0051d6a6                       ; 0051d674
        ;   XREF to: 0051d6a6 (CONDITIONAL_JUMP)  ; LAB_0051d6a6
    PUSH EDX                            ; 0051d676
    CALL shape_meshlod.cpp_CLodMesh_transformVerticesForPreview_FUN_0051e6b0 ; 0051d677
        ;   XREF to: 0051e6b0 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_transformVerticesForPreview_FUN_0051e6b0(CLodMesh * this_ptr)
    ADD ESP,0x4                         ; 0051d67c
    PUSH 0xff                           ; 0051d67f
    PUSH 0x0                            ; 0051d684
    PUSH 0xff                           ; 0051d686
    MOV EBX,dword ptr [0x006703ec]      ; 0051d68b | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EBX                            ; 0051d691 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_0048c970 ; 0051d692
        ;   XREF to: 0048c970 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_0048c970(CDemonRenderer * this_ptr, int red_component, int green_component, int blue_component)
    ADD ESP,0x10                        ; 0051d697
    MOV EAX,dword ptr [ESI + 0x34]      ; 0051d69a
    PUSH EAX                            ; 0051d69d
    CALL shape_meshlod.cpp_CLodMesh_renderWireframe_FUN_0051e770 ; 0051d69e
        ;   XREF to: 0051e770 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_renderWireframe_FUN_0051e770(CLodMesh * this_ptr)
    ADD ESP,0x4                         ; 0051d6a3
    MOV EDX,dword ptr [ESI + 0x8]       ; 0051d6a6
        ;   Label: LAB_0051d6a6
    PUSH EDX                            ; 0051d6a9
    PUSH ESI                            ; 0051d6aa
    CALL shape_meshlod.cpp_CLodMesh_countUnprocessedFaces_FUN_005164d0 ; 0051d6ab
        ;   XREF to: 005164d0 (UNCONDITIONAL_CALL)  ; int shape_meshlod.cpp_CLodMesh_countUnprocessedFaces_FUN_005164d0(CLodMesh * this_ptr)
    ADD ESP,0x4                         ; 0051d6b0
    PUSH EAX                            ; 0051d6b3
    PUSH 0x638296                       ; 0051d6b4 | = "%d faces, %d original"
    LEA EAX,[ESP + 0xc]                 ; 0051d6b9
    PUSH EAX                            ; 0051d6bd
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0051d6be
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0051d6c3
    PUSH 0x0                            ; 0051d6c6
    PUSH 0x0                            ; 0051d6c8
    LEA EAX,[ESP + 0x8]                 ; 0051d6ca
    PUSH EAX                            ; 0051d6ce
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0051d6cf
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0051d6d4
    PUSH 0xb                            ; 0051d6d7
    PUSH 0x0                            ; 0051d6d9
    PUSH 0x2f31258                      ; 0051d6db | g_LodMeshProgressBuffer
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0051d6e0
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0051d6e5
    LEA EAX,[ESP + 0x64]                ; 0051d6e8
    PUSH EAX                            ; 0051d6ec
    PUSH ESI                            ; 0051d6ed
    CALL shape_meshlod.cpp_CLodMesh_computeVertexBoundingBox_FUN_00516500 ; 0051d6ee
        ;   XREF to: 00516500 (UNCONDITIONAL_CALL)  ; CBoundingBox3D * shape_meshlod.cpp_CLodMesh_computeVertexBoundingBox_FUN_00516500(CLodMesh * this_ptr, CBoundingBox3D * out_bbox)
    ADD ESP,0x8                         ; 0051d6f3
    LEA EAX,[ESP + 0x64]                ; 0051d6f6
    PUSH EAX                            ; 0051d6fa
    LEA EAX,[ESP + 0x80]                ; 0051d6fb
    PUSH EAX                            ; 0051d702
    PUSH ESI                            ; 0051d703
    CALL shape_meshlod.cpp_CLodMesh_worldToNormalizedSpace_FUN_0051b2e0 ; 0051d704
        ;   XREF to: 0051b2e0 (UNCONDITIONAL_CALL)  ; CVector3f * shape_meshlod.cpp_CLodMesh_worldToNormalizedSpace_FUN_0051b2e0(CLodMesh * this_ptr, CVector3f * output_point, CVector3f * input_point)
    MOV EDX,EAX                         ; 0051d709
    LEA EAX,[ESP + 0x70]                ; 0051d70b
    ADD ESP,0xc                         ; 0051d70f
    CMP EAX,EDX                         ; 0051d712
    JZ 0x0051d72a                       ; 0051d714
        ;   XREF to: 0051d72a (CONDITIONAL_JUMP)  ; LAB_0051d72a
    MOV EAX,dword ptr [EDX]             ; 0051d716
    MOV dword ptr [ESP + 0x64],EAX      ; 0051d718
    MOV EAX,dword ptr [EDX + 0x4]       ; 0051d71c
    MOV dword ptr [ESP + 0x68],EAX      ; 0051d71f
    MOV EAX,dword ptr [EDX + 0x8]       ; 0051d723
    MOV dword ptr [ESP + 0x6c],EAX      ; 0051d726
    LEA EAX,[ESP + 0x70]                ; 0051d72a
        ;   Label: LAB_0051d72a
    PUSH EAX                            ; 0051d72e
    LEA EAX,[ESP + 0x8c]                ; 0051d72f
    PUSH EAX                            ; 0051d736
    PUSH ESI                            ; 0051d737
    CALL shape_meshlod.cpp_CLodMesh_worldToNormalizedSpace_FUN_0051b2e0 ; 0051d738
        ;   XREF to: 0051b2e0 (UNCONDITIONAL_CALL)  ; CVector3f * shape_meshlod.cpp_CLodMesh_worldToNormalizedSpace_FUN_0051b2e0(CLodMesh * this_ptr, CVector3f * output_point, CVector3f * input_point)
    MOV EDX,EAX                         ; 0051d73d
    LEA EAX,[ESP + 0x7c]                ; 0051d73f
    ADD ESP,0xc                         ; 0051d743
    CMP EAX,EDX                         ; 0051d746
    JZ 0x0051d75e                       ; 0051d748
        ;   XREF to: 0051d75e (CONDITIONAL_JUMP)  ; LAB_0051d75e
    MOV EAX,dword ptr [EDX]             ; 0051d74a
    MOV dword ptr [ESP + 0x70],EAX      ; 0051d74c
    MOV EAX,dword ptr [EDX + 0x4]       ; 0051d750
    MOV dword ptr [ESP + 0x74],EAX      ; 0051d753
    MOV EAX,dword ptr [EDX + 0x8]       ; 0051d757
    MOV dword ptr [ESP + 0x78],EAX      ; 0051d75a
    LEA EAX,[ESP + 0x64]                ; 0051d75e
        ;   Label: LAB_0051d75e
    PUSH EAX                            ; 0051d762
    CALL core_box.cpp_CBoundingBox3D_getBoundingBoxScreenSize_FUN_00420840 ; 0051d763
        ;   XREF to: 00420840 (UNCONDITIONAL_CALL)  ; float core_box.cpp_CBoundingBox3D_getBoundingBoxScreenSize_FUN_00420840(CBoundingBox3D * this_ptr)
    MOV dword ptr [ESP + 0xac],EAX      ; 0051d768
    FLD float ptr [ESP + 0xac]          ; 0051d76f
    ADD ESP,0x4                         ; 0051d776
    CALL crt_math.c_round_FUN_005fe6b0  ; 0051d779
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0xa0]        ; 0051d77e
    MOV ECX,dword ptr [ESP + 0xa0]      ; 0051d785
    PUSH ECX                            ; 0051d78c
    PUSH 0x6382ac                       ; 0051d78d | = "Pixel Height: %d"
    LEA EAX,[ESP + 0x8]                 ; 0051d792
    PUSH EAX                            ; 0051d796
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0051d797
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0051d79c
    PUSH 0x16                           ; 0051d79f
    PUSH 0x0                            ; 0051d7a1
    LEA EAX,[ESP + 0x8]                 ; 0051d7a3
    PUSH EAX                            ; 0051d7a7
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0051d7a8
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0051d7ad
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0051d7b0
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    MOV EBX,dword ptr [0x0067b654]      ; 0051d7b5 | g_CGameInstance | g_CGamePtr
    PUSH EBX                            ; 0051d7bb | g_CGameInstance
    CALL core_game.cpp_CGame_updateDT_FUN_004d7d90 ; 0051d7bc
        ;   XREF to: 004d7d90 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_updateDT_FUN_004d7d90(CGame * this_ptr)
    ADD ESP,0x4                         ; 0051d7c1
    PUSH 0x1f                           ; 0051d7c4
    MOV EAX,[0x0068416c]                ; 0051d7c6 | g_CSpotViewInstance | g_CSpotViewPtr
    PUSH EAX                            ; 0051d7cb | g_CSpotViewInstance
    CALL shape_spotview.cpp_CSpotView_handleInput_FUN_005b9670 ; 0051d7cc
        ;   XREF to: 005b9670 (UNCONDITIONAL_CALL)  ; void shape_spotview.cpp_CSpotView_handleInput_FUN_005b9670(CSpotView * this_ptr, uint control_flags)
    ADD ESP,0x8                         ; 0051d7d1
    MOV EAX,[0x0067cf44]                ; 0051d7d4 | g_CKeysPtr
    PUSH 0x1                            ; 0051d7d9
    MOV EDX,dword ptr [EAX]             ; 0051d7db | g_CKeysInstance
    PUSH EAX                            ; 0051d7dd | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 0051d7de
    ADD ESP,0x8                         ; 0051d7e1
    TEST EAX,EAX                        ; 0051d7e4
    JZ 0x0051d854                       ; 0051d7e6
        ;   XREF to: 0051d854 (CONDITIONAL_JUMP)  ; LAB_0051d854
    PUSH 0x0                            ; 0051d7e8
    MOV EDX,dword ptr [0x00678a60]      ; 0051d7ea | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EDX                            ; 0051d7f0 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_createCenteredDialog_FUN_0049e940 ; 0051d7f1
        ;   XREF to: 0049e940 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_createCenteredDialog_FUN_0049e940(CEditorTools * this_ptr, char * dialog_text)
    ADD ESP,0x8                         ; 0051d7f6
    PUSH 0x6382bd                       ; 0051d7f9 | = "OK - let go of ESC..."
        ;   Label: LAB_0051d7f9
    MOV ECX,dword ptr [0x00678a60]      ; 0051d7fe | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH ECX                            ; 0051d804 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_drawWindowStatusMessage_FUN_0049e870 ; 0051d805
        ;   XREF to: 0049e870 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_drawWindowStatusMessage_FUN_0049e870(CEditorTools * this_ptr, char * format_string)
    ADD ESP,0x8                         ; 0051d80a
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0051d80d
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    PUSH 0x1                            ; 0051d812
    MOV EAX,[0x0067cf44]                ; 0051d814 | g_CKeysPtr
    PUSH EAX                            ; 0051d819 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0051d81a | g_CKeysInstance
    CALL dword ptr [EDX]                ; 0051d81c
    ADD ESP,0x8                         ; 0051d81e
    TEST EAX,EAX                        ; 0051d821
    JNZ 0x0051d7f9                      ; 0051d823
        ;   XREF to: 0051d7f9 (CONDITIONAL_JUMP)  ; LAB_0051d7f9
    MOV EBX,dword ptr [0x00678a60]      ; 0051d825 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EBX                            ; 0051d82b | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0 ; 0051d82c
        ;   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(CEditorTools * this_ptr)
    ADD ESP,0x4                         ; 0051d831
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 0051d834
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    PUSH 0x6382d3                       ; 0051d839 | = "Good enough?"
    MOV EAX,[0x00678a60]                ; 0051d83e | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EAX                            ; 0051d843 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showDestructiveActionConfirmDialog_FUN_0049f060 ; 0051d844
        ;   XREF to: 0049f060 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showDestructiveActionConfirmDialog_FUN_0049f060(CEditorTools * this_ptr, char * format_string)
    ADD ESP,0x8                         ; 0051d849
    TEST EAX,EAX                        ; 0051d84c
    JNZ 0x0051d972                      ; 0051d84e
        ;   XREF to: 0051d972 (CONDITIONAL_JUMP)  ; LAB_0051d972
    PUSH 0x19                           ; 0051d854
        ;   Label: LAB_0051d854
    MOV EAX,[0x0067cf44]                ; 0051d856 | g_CKeysPtr
    PUSH EAX                            ; 0051d85b | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0051d85c | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 0051d85e
    ADD ESP,0x8                         ; 0051d861
    TEST EAX,EAX                        ; 0051d864
    JZ 0x0051d97d                       ; 0051d866
        ;   XREF to: 0051d97d (CONDITIONAL_JUMP)  ; LAB_0051d97d
    MOV EDI,0x1                         ; 0051d86c
    PUSH 0x2f                           ; 0051d871
        ;   Label: LAB_0051d871
    MOV EAX,[0x0067cf44]                ; 0051d873 | g_CKeysPtr
    PUSH EAX                            ; 0051d878 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0051d879 | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 0051d87b
    ADD ESP,0x8                         ; 0051d87e
    TEST EAX,EAX                        ; 0051d881
    JZ 0x0051d899                       ; 0051d883
        ;   XREF to: 0051d899 (CONDITIONAL_JUMP)  ; LAB_0051d899
    CMP dword ptr [0x02f31234],0x0      ; 0051d885 | INT_02f31234
    SETZ AL                             ; 0051d88c
    AND EAX,0xff                        ; 0051d88f
    MOV [0x02f31234],EAX                ; 0051d894 | INT_02f31234
    PUSH 0x18                           ; 0051d899
        ;   Label: LAB_0051d899
    MOV EAX,[0x0067cf44]                ; 0051d89b | g_CKeysPtr
    PUSH EAX                            ; 0051d8a0 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0051d8a1 | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 0051d8a3
    ADD ESP,0x8                         ; 0051d8a6
    TEST EAX,EAX                        ; 0051d8a9
    JZ 0x0051d8c1                       ; 0051d8ab
        ;   XREF to: 0051d8c1 (CONDITIONAL_JUMP)  ; LAB_0051d8c1
    CMP dword ptr [0x02f31238],0x0      ; 0051d8ad | INT_02f31238
    SETZ AL                             ; 0051d8b4
    AND EAX,0xff                        ; 0051d8b7
    MOV [0x02f31238],EAX                ; 0051d8bc | INT_02f31238
    PUSH 0x12                           ; 0051d8c1
        ;   Label: LAB_0051d8c1
    MOV EAX,[0x0067cf44]                ; 0051d8c3 | g_CKeysPtr
    PUSH EAX                            ; 0051d8c8 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0051d8c9 | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 0051d8cb
    ADD ESP,0x8                         ; 0051d8ce
    TEST EAX,EAX                        ; 0051d8d1
    JZ 0x0051d8e9                       ; 0051d8d3
        ;   XREF to: 0051d8e9 (CONDITIONAL_JUMP)  ; LAB_0051d8e9
    CMP dword ptr [0x02f3123c],0x0      ; 0051d8d5 | INT_02f3123c
    SETZ AL                             ; 0051d8dc
    AND EAX,0xff                        ; 0051d8df
    MOV [0x02f3123c],EAX                ; 0051d8e4 | INT_02f3123c
    PUSH 0x39                           ; 0051d8e9
        ;   Label: LAB_0051d8e9
    MOV EAX,[0x0067cf44]                ; 0051d8eb | g_CKeysPtr
    PUSH EAX                            ; 0051d8f0 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0051d8f1 | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 0051d8f3
    ADD ESP,0x8                         ; 0051d8f6
    TEST EAX,EAX                        ; 0051d8f9
    JNZ 0x0051d915                      ; 0051d8fb
        ;   XREF to: 0051d915 (CONDITIONAL_JUMP)  ; LAB_0051d915
    PUSH 0x1c                           ; 0051d8fd
    MOV EAX,[0x0067cf44]                ; 0051d8ff | g_CKeysPtr
    PUSH EAX                            ; 0051d904 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0051d905 | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 0051d907
    ADD ESP,0x8                         ; 0051d90a
    TEST EAX,EAX                        ; 0051d90d
    JZ 0x0051d571                       ; 0051d90f
        ;   XREF to: 0051d571 (CONDITIONAL_JUMP)  ; LAB_0051d571
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 0051d915
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
        ;   Label: LAB_0051d915
    MOV ECX,0xffffffff                  ; 0051d91a
    XOR AH,AH                           ; 0051d91f
    MOV dword ptr [0x0067d390],ECX      ; 0051d921 | INT_0067d390
    MOV byte ptr [0x02f31258],AH        ; 0051d927 | g_LodMeshProgressBuffer
    MOV EAX,dword ptr [ESP + 0xa4]      ; 0051d92d
    ADD ESP,0xac                        ; 0051d934
    POP EBP                             ; 0051d93a
    POP EDI                             ; 0051d93b
    POP ESI                             ; 0051d93c
    POP EBX                             ; 0051d93d
    RET                                 ; 0051d93e
    PUSH EAX                            ; 0051d93f
        ;   Label: LAB_0051d93f
    PUSH 0x0                            ; 0051d940
    PUSH 0x63826f                       ; 0051d942 | = "Press ENTER to resume mesh degredation"
    JMP 0x0051d5d2                      ; 0051d947
        ;   XREF to: 0051d5d2 (UNCONDITIONAL_JUMP)  ; LAB_0051d5d2
    PUSH 0x0                            ; 0051d94c
        ;   Label: LAB_0051d94c
    PUSH ESI                            ; 0051d94e
    CALL shape_meshlod.cpp_CLodMesh_renderTexturedTriangles_FUN_0051ead0 ; 0051d94f
        ;   XREF to: 0051ead0 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_renderTexturedTriangles_FUN_0051ead0(CLodMesh * this_ptr, int enable_texture_lookup)
    JMP 0x0051d5f4                      ; 0051d954
        ;   XREF to: 0051d5f4 (UNCONDITIONAL_JUMP)  ; LAB_0051d5f4
    PUSH 0x1                            ; 0051d959
        ;   Label: LAB_0051d959
    PUSH ESI                            ; 0051d95b
    CALL shape_meshlod.cpp_CLodMesh_renderTexturedTriangles_FUN_0051ead0 ; 0051d95c
        ;   XREF to: 0051ead0 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_renderTexturedTriangles_FUN_0051ead0(CLodMesh * this_ptr, int enable_texture_lookup)
    JMP 0x0051d5f4                      ; 0051d961
        ;   XREF to: 0051d5f4 (UNCONDITIONAL_JUMP)  ; LAB_0051d5f4
    JBE 0x0051d94c                      ; 0051d966
        ;   XREF to: 0051d94c (CONDITIONAL_JUMP)  ; LAB_0051d94c
        ;   Label: LAB_0051d966
    CMP EBP,0x2                         ; 0051d968
    JZ 0x0051d959                       ; 0051d96b
        ;   XREF to: 0051d959 (CONDITIONAL_JUMP)  ; LAB_0051d959
    JMP 0x0051d5ec                      ; 0051d96d
        ;   XREF to: 0051d5ec (UNCONDITIONAL_JUMP)  ; LAB_0051d5ec
    XOR EDX,EDX                         ; 0051d972
        ;   Label: LAB_0051d972
    MOV dword ptr [ESP + 0xa4],EDX      ; 0051d974
    JMP 0x0051d915                      ; 0051d97b
        ;   XREF to: 0051d915 (UNCONDITIONAL_JUMP)  ; LAB_0051d915
    TEST EDI,EDI                        ; 0051d97d
        ;   Label: LAB_0051d97d
    JNZ 0x0051d871                      ; 0051d97f
        ;   XREF to: 0051d871 (CONDITIONAL_JUMP)  ; LAB_0051d871
    JMP 0x0051d915                      ; 0051d985
        ;   XREF to: 0051d915 (UNCONDITIONAL_JUMP)  ; LAB_0051d915

