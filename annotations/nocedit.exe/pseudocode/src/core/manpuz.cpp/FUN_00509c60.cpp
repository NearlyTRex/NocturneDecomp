// Name: core_manpuz.cpp_FUN_00509c60
// Address: 00509c60
// Address Range: [[00509c60, 00509d12] [00509d3a, 00509d4c]]
// Convention: unknown
// Signature: undefined core_manpuz.cpp_FUN_00509c60()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte actors_other_manpuz.cpp_FUN_00509c60(uint param_1, uint
   param_2) */

void core_manpuz_cpp_FUN_00509c60(void)

{
  int in_stack_00000004;
  int in_stack_00000008;
  CVector3i local_28;
  CVector3i local_1c;
  int local_10;
  
  local_10 = in_stack_00000008;
  local_1c.y = (int)((float)in_stack_00000008 * _DAT_00660d8c);
  local_1c.x = 0;
  local_1c.z = 0;
  local_28.z = *(int *)(in_stack_00000004 + 0x150c);
  local_28.x = 0;
  local_28.y = 0;
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr2,&local_1c,(CVector3i *)0x0);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr2,(CVector3i *)&g_ZeroVector,&local_28);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr2,(CVector3i *)&g_ZeroVector,
             (CVector3i *)(in_stack_00000004 + 0x5e4));
  if (DAT_02f0cb1c == 1) {
    shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330(g_CEditorToolsPtr);
  }
  shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0(g_CEditorToolsPtr,1.0,0xfb);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  return;
}
