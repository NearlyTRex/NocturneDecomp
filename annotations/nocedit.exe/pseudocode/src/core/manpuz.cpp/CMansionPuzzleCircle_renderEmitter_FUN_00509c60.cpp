// Name: core_manpuz.cpp_CMansionPuzzleCircle_renderEmitter_FUN_00509c60
// Address: 00509c60
// Address Range: [[00509c60, 00509d4c]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_renderEmitter_FUN_00509c60(CMansionPuzzleCircle *this_ptr,int panel_index)

#include "nocturne.h"

void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_renderEmitter_FUN_00509c60(CMansionPuzzleCircle *this_ptr,int panel_index)

{
  CVector3f local_1c;
  int local_10;
  
  local_1c.y = (float)panel_index * 0.5235988f;
  local_1c.x = 0.0;
  local_1c.z = 0.0;
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr2,&local_1c,(CVector3f *)0x0);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr2,&g_ZeroVector.f,(CVector3f *)&stack0xffffffd8);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr2,&g_ZeroVector.f,&(this_ptr->emitter_pos).f);
  if (g_MansionPuzzleSlewType == 1) {
    shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330(g_CEditorToolsPtr);
  }
  shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0(g_CEditorToolsPtr,1.0,0xfb);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0048c640(g_CDemonRendererPtr2);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0048c640(g_CDemonRendererPtr2);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0048c640(g_CDemonRendererPtr2);
  return;
}
