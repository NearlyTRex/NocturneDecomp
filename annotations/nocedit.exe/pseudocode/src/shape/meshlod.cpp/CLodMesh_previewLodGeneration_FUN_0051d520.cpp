// Name: shape_meshlod.cpp_CLodMesh_previewLodGeneration_FUN_0051d520
// Address: 0051d520
// Address Range: [[0051d520, 0051d986]]
// Convention: __cdecl
// Signature: int shape_meshlod.cpp_CLodMesh_previewLodGeneration_FUN_0051d520(CLodMesh * this_ptr, int pause_flag, int render_mode)

#include "nocturne.h"

int __cdecl
shape_meshlod_cpp_CLodMesh_previewLodGeneration_FUN_0051d520
          (CLodMesh *this_ptr,int pause_flag,int render_mode)

{
  uchar uVar1;
  undefined3 extraout_var;
  int iVar2;
  CBoundingBox3D *pCVar3;
  CVector3f *pCVar4;
  int unaff_EDI;
  double dVar5;
  char *text;
  CGame *in_stack_ffffff44;
  CBoundingBox3D local_58;
  CVector3f local_40;
  CVector3f local_34;
  CVector3f local_28;
  uint local_18;
  float local_14;
  
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr,in_stack_ffffff44);
  local_28.x = 0.0;
  local_28.y = 0.0;
  local_28.z = 0.0;
  local_18 = 1;
  do {
    engine_2d_c_fillRectColor_FUN_00403170(0,0,g_WindowWidth + -1,g_WindowHeight + -1,0xfc);
    wincore_windll_cpp_clearZBuffer_FUN_005b3ed4();
    shape_spotview_cpp_CSpotView_FUN_005b9a20(g_CSpotViewPtr);
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
              (g_CDemonRendererPtr2,&local_28);
    if (pause_flag == 0) {
      text = "Press and hold P to pause and spin, ESC to bail";
    }
    else {
      text = "Press ENTER to resume mesh degredation";
    }
    engine_2d_c_drawText_FUN_00401fd0(text,0,g_WindowHeight + -0x16);
    shape_meshlod_cpp_CLodMesh_transformVerticesForPreview_FUN_0051e6b0(this_ptr);
    if (render_mode == 0) {
LAB_0051d5ec:
      shape_meshlod_cpp_CLodMesh_renderShadedTriangles_FUN_0051e990(this_ptr,0);
    }
    else if ((uint)render_mode < 2) {
      shape_meshlod_cpp_CLodMesh_renderTexturedTriangles_FUN_0051ead0
                (this_ptr,0,(int)in_stack_ffffff44);
    }
    else {
      if (render_mode != 2) goto LAB_0051d5ec;
      shape_meshlod_cpp_CLodMesh_renderTexturedTriangles_FUN_0051ead0
                (this_ptr,1,(int)in_stack_ffffff44);
    }
    if (INT_02f3123c != 0) {
      shape_meshlod_cpp_CLodMesh_renderColorCodedEdges_FUN_0051e830(this_ptr,1);
    }
    if (INT_02f31234 != 0) {
      shape_meshlod_cpp_CLodMesh_drawVertexLabels_FUN_0051ed30(this_ptr);
    }
    if (-1 < INT_0067d390) {
      shape_meshlod_cpp_CLodMesh_drawVertexIndexLabel_FUN_0051ecd0(this_ptr,INT_0067d390);
    }
    if (DAT_02f313e8 != (CQuaternion4f *)0x0) {
      uVar1 = shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330(g_CEditorToolsPtr)
      ;
      g_ActiveRenderColor = CONCAT31 /* combine 2-byte values */(extraout_var,uVar1);
      shape_edittool_cpp_CEditorTools_draw3DProjectedLine_FUN_004a28a0
                (g_CEditorToolsPtr,DAT_02f313e8,4);
    }
    if ((INT_02f31238 != 0) && (this_ptr->next_lod != (CLodMesh *)0x0)) {
      shape_meshlod_cpp_CLodMesh_transformVerticesForPreview_FUN_0051e6b0(this_ptr->next_lod);
      engine_drender_cpp_CDemonRenderer_setRGBAColor_FUN_0048c970(g_CDemonRendererPtr2,0xff,0,0xff);
      shape_meshlod_cpp_CLodMesh_renderWireframe_FUN_0051e770(this_ptr->next_lod);
    }
    iVar2 = shape_meshlod_cpp_CLodMesh_countUnprocessedFaces_FUN_005164d0(this_ptr);
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff44,"%d faces, %d original",iVar2);
    engine_2d_c_drawText_FUN_00401fd0(&stack0xffffff44,0,0);
    engine_2d_c_drawText_FUN_00401fd0(g_LodMeshProgressBuffer,0,0xb);
    shape_meshlod_cpp_CLodMesh_computeVertexBoundingBox_FUN_00516500(this_ptr,&local_58);
    pCVar3 = (CBoundingBox3D *)
             shape_meshlod_cpp_CLodMesh_worldToNormalizedSpace_FUN_0051b2e0
                       (this_ptr,&local_40,&local_58.min);
    if (&local_58 != pCVar3) {
      local_58.min.x = (pCVar3->min).x;
      local_58.min.y = (pCVar3->min).y;
      local_58.min.z = (pCVar3->min).z;
    }
    pCVar4 = shape_meshlod_cpp_CLodMesh_worldToNormalizedSpace_FUN_0051b2e0
                       (this_ptr,&local_34,&local_58.max);
    if (&local_58.max != pCVar4) {
      local_58.max.x = pCVar4->x;
      local_58.max.y = pCVar4->y;
      local_58.max.z = pCVar4->z;
    }
    local_14 = core_box_cpp_CBoundingBox3D_getBoundingBoxScreenSize_FUN_00420840(&local_58);
    dVar5 = crt_math_c_round_FUN_005fe6b0((double)local_14);
    local_28.z = (float)(int)ROUND(dVar5);
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff40,"Pixel Height: %d",local_28.z);
    engine_2d_c_drawText_FUN_00401fd0(&stack0xffffff40,0,0x16);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(g_CGamePtr);
    shape_spotview_cpp_CSpotView_FUN_005b9670(g_CSpotViewPtr);
    iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,1);
    if (iVar2 != 0) {
      shape_edittool_cpp_CEditorTools_createCenteredDialog_FUN_0049e940
                (g_CEditorToolsPtr,(char *)0x0);
      do {
        shape_edittool_cpp_CEditorTools_drawWindowStatusMessage_FUN_0049e870
                  (g_CEditorToolsPtr,"OK - let go of ESC...");
        wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
        iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,1);
      } while (iVar2 != 0);
      shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
      engine_2d_c_clearInputAndWait_FUN_00403260();
      iVar2 = shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
                        (g_CEditorToolsPtr,"Good enough?");
      if (iVar2 != 0) {
        unaff_EDI = 0;
LAB_0051d915:
        engine_2d_c_clearInputAndWait_FUN_00403260();
        INT_0067d390 = -1;
        g_LodMeshProgressBuffer[0] = '\0';
        return unaff_EDI;
      }
    }
    in_stack_ffffff44 = (CGame *)0x51d861;
    iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x19);
    if (iVar2 == 0) {
      if (pause_flag == 0) goto LAB_0051d915;
    }
    else {
      pause_flag = 1;
    }
    iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x2f);
    if (iVar2 != 0) {
      INT_02f31234 = (int)(INT_02f31234 == 0);
    }
    iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x18);
    if (iVar2 != 0) {
      INT_02f31238 = (int)(INT_02f31238 == 0);
    }
    iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x12);
    if (iVar2 != 0) {
      INT_02f3123c = (int)(INT_02f3123c == 0);
    }
    iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x39);
    if ((iVar2 != 0) ||
       (iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x1c), iVar2 != 0))
    goto LAB_0051d915;
  } while( true );
}
