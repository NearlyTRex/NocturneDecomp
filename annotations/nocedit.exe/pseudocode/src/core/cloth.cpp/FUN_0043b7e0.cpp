// Name: core_cloth.cpp_FUN_0043b7e0
// Address: 0043b7e0
// Address Range: [[0043b7e0, 0043b96b] [0043b976, 0043b9ec]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_FUN_0043b7e0(void)

#include "nocturne.h"

void __cdecl core_cloth_cpp_FUN_0043b7e0(void)

{
  uchar uVar1;
  undefined3 extraout_var;
  int vertex_index1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int local_68;
  CVector3i local_64;
  CVector3f local_58;
  CVector3i local_4c;
  float local_40;
  float local_3c;
  float local_38;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  iVar2 = in_stack_00000008 * 0xac + in_stack_00000004 + 0x3ce90;
  core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160((CMatrix3x3f *)(iVar2 + 0x78),&local_58);
  vertex_index1 = 0;
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr2,(CVector3i *)&local_58,(CVector3i *)(iVar2 + 0xa0));
  local_20 = 0x270;
  local_1c = 0;
  local_68 = 0;
  local_24 = 0xc;
  local_18 = -1;
  do {
    local_14 = local_68;
    fVar3 = (float10)local_68 * (float10)3.1415926535000001 * (float10)0.083333333333333301;
    fVar4 = (float10)fsin(fVar3);
    fVar3 = (float10)fcos(fVar3);
    local_40 = (float)(fVar4 * (float10)*(float *)(iVar2 + 0x14));
    local_38 = 0.0;
    local_3c = (float)(fVar3 * (float10)*(float *)(iVar2 + 0x18));
    local_64.x = (int)ROUND(local_40 * 256.0f);
    local_64.y = (int)ROUND(local_3c * 256.0f);
    local_64.z = (int)ROUND(256.0f * 0.0);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              ((SProjectedVertex *)
               ((int)&(g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex).transformed_x +
               local_1c),&local_64);
    local_38 = *(float *)(iVar2 + 0x44);
    local_28 = vertex_index1 + 0xd;
    local_4c.x = (int)ROUND(local_40 * 256.0f);
    local_4c.y = (int)ROUND(local_3c * 256.0f);
    local_4c.z = (int)ROUND(local_38 * 256.0f);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              ((SProjectedVertex *)
               ((int)&(g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex).transformed_x +
               local_20),&local_4c);
    if (0 < vertex_index1) {
      engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
                (g_CDemonRendererPtr2,vertex_index1,local_28);
      engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
                (g_CDemonRendererPtr2,vertex_index1,local_18);
      engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
                (g_CDemonRendererPtr2,local_28,local_24);
    }
    vertex_index1 = vertex_index1 + 1;
    local_20 = local_20 + 0x30;
    local_1c = local_1c + 0x30;
    local_68 = local_68 + 2;
    local_24 = local_24 + 1;
    local_18 = local_18 + 1;
  } while (vertex_index1 < 0xd);
  if (in_stack_0000000c != 0) {
    uVar1 = shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330(g_CEditorToolsPtr);
    shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0
              (g_CEditorToolsPtr,*(float *)(iVar2 + 0x14) + *(float *)(iVar2 + 0x18),
               CONCAT31(extraout_var,uVar1));
  }
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  return;
}
