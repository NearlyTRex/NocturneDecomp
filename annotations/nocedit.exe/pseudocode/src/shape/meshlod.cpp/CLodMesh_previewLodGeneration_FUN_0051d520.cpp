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
  int iVar1;
  uchar uVar2;
  undefined3 extraout_var;
  int iVar3;
  CVector3f *pCVar4;
  float fVar5;
  uint extraout_EDX;
  BADSPACEBASE *in_ESP;
  int iVar6;
  float in_stack_00000010;
  int in_stack_00000088;
  CGame *in_stack_ffffff44;
  char *text;
  int in_stack_ffffff60;
  char acStack_70 [4];
  CVector3f local_20;
  
  iVar1 = render_mode;
  iVar6 = pause_flag;
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr,in_stack_ffffff44);
  local_20.x = 0.0;
  local_20.y = 0.0;
  do {
    engine_2d_c_fillRectColor_FUN_00403170(0,0,g_WindowWidth + -1,g_WindowHeight + -1,0xfc);
    wincore_windll_cpp_clearZBuffer_FUN_005b3ed4();
    shape_spotview_cpp_CSpotView_FUN_005b9a20(g_CSpotViewPtr);
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
              (g_CDemonRendererPtr,(CVector3f *)&local_20.z);
    if (iVar6 == 0) {
      text = "Press and hold P to pause and spin, ESC to bail";
    }
    else {
      text = "Press ENTER to resume mesh degredation";
    }
    engine_2d_c_drawText_FUN_00401fd0(text,0,g_WindowHeight + -0x16);
    shape_meshlod_cpp_CLodMesh_transformVerticesForPreview_FUN_0051e6b0(this_ptr);
    if (iVar1 == 0) {
LAB_0051d5ec:
      shape_meshlod_cpp_CLodMesh_renderShadedTriangles_FUN_0051e990(this_ptr,0);
    }
    else if ((uint)iVar1 < 2) {
      shape_meshlod_cpp_CLodMesh_renderTexturedTriangles_FUN_0051ead0(this_ptr,0,in_stack_ffffff60);
    }
    else {
      if (iVar1 != 2) goto LAB_0051d5ec;
      shape_meshlod_cpp_CLodMesh_renderTexturedTriangles_FUN_0051ead0(this_ptr,1,in_stack_ffffff60);
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
      uVar2 = shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330(g_CEditorToolsPtr)
      ;
      g_ActiveRenderColor = CONCAT31 /* combine 2-byte values */(extraout_var,uVar2);
      shape_edittool_cpp_CEditorTools_draw3DProjectedLine_FUN_004a28a0
                (g_CEditorToolsPtr,DAT_02f313e8,4);
    }
    if ((INT_02f31238 != 0) && (this_ptr->next_lod != (CLodMesh *)0x0)) {
      shape_meshlod_cpp_CLodMesh_transformVerticesForPreview_FUN_0051e6b0(this_ptr->next_lod);
      engine_drender_cpp_CDemonRenderer_setRGBAColor_FUN_0048c970(g_CDemonRendererPtr,0xff,0,0xff);
      shape_meshlod_cpp_CLodMesh_renderWireframe_FUN_0051e770(this_ptr->next_lod);
    }
    iVar3 = shape_meshlod_cpp_CLodMesh_countUnprocessedFaces_FUN_005164d0(this_ptr);
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff6c,"%d faces, %d original",iVar3);
    in_stack_ffffff60 = 0x51d6d4;
    engine_2d_c_drawText_FUN_00401fd0(&stack0xffffff70,0,0);
    engine_2d_c_drawText_FUN_00401fd0(g_LodMeshProgressBuffer,0,0xb);
    shape_meshlod_cpp_CLodMesh_computeVertexBoundingBox_FUN_00516500
              (this_ptr,(CBoundingBox3D *)&stack0xffffffdc);
    pCVar4 = shape_meshlod_cpp_CLodMesh_worldToNormalizedSpace_FUN_0051b2e0
                       (this_ptr,(CVector3f *)&stack0xfffffff8,&local_20);
    if ((CVector3f *)&local_20.y != pCVar4) {
      local_20.y = pCVar4->x;
      local_20.z = pCVar4->y;
    }
    shape_meshlod_cpp_CLodMesh_worldToNormalizedSpace_FUN_0051b2e0
              (this_ptr,(CVector3f *)&pause_flag,(CVector3f *)&stack0xfffffff0);
    fVar5 = core_box_cpp_CBoundingBox3D_getBoundingBoxScreenSize_FUN_00420840
                      ((CBoundingBox3D *)&local_20.z);
    crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX,fVar5));
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff8c,"Pixel Height: %d");
    engine_2d_c_drawText_FUN_00401fd0(acStack_70,0,0x16);
    acStack_70[0] = -0x4b;
    acStack_70[1] = -0x29;
    acStack_70[2] = 'Q';
    acStack_70[3] = '\0';
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    acStack_70[0] = -0x3f;
    acStack_70[1] = -0x29;
    acStack_70[2] = 'Q';
    acStack_70[3] = '\0';
    core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(g_CGamePtr);
    acStack_70[0] = -0x2f;
    acStack_70[1] = -0x29;
    acStack_70[2] = 'Q';
    acStack_70[3] = '\0';
    shape_spotview_cpp_CSpotView_FUN_005b9670(g_CSpotViewPtr);
    iVar3 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,1);
    if (iVar3 != 0) {
      shape_edittool_cpp_CEditorTools_createCenteredDialog_FUN_0049e940
                (g_CEditorToolsPtr,(char *)0x0);
      do {
        shape_edittool_cpp_CEditorTools_drawWindowStatusMessage_FUN_0049e870
                  (g_CEditorToolsPtr,"OK - let go of ESC...");
        wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
        iVar3 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,1);
      } while (iVar3 != 0);
      shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
      engine_2d_c_clearInputAndWait_FUN_00403260();
      iVar3 = shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
                        (g_CEditorToolsPtr,"Good enough?");
      if (iVar3 != 0) {
LAB_0051d915:
        engine_2d_c_clearInputAndWait_FUN_00403260();
        INT_0067d390 = -1;
        g_LodMeshProgressBuffer[0] = '\0';
        return in_stack_00000088;
      }
    }
    iVar3 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x19);
    if (iVar3 == 0) {
      if (iVar6 == 0) goto LAB_0051d915;
    }
    else {
      iVar6 = 1;
    }
    iVar3 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x2f);
    if (iVar3 != 0) {
      INT_02f31234 = (int)(INT_02f31234 == 0);
    }
    local_20.z = 7.516394e-39;
    iVar3 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x18);
    if (iVar3 != 0) {
      INT_02f31238 = (int)(INT_02f31238 == 0);
    }
    iVar3 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x12);
    if (iVar3 != 0) {
      INT_02f3123c = (int)(INT_02f3123c == 0);
    }
    in_stack_00000010 = 7.516506e-39;
    iVar3 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x39);
    if ((iVar3 != 0) || (iVar3 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x1c), iVar3 != 0))
    goto LAB_0051d915;
  } while( true );
}
