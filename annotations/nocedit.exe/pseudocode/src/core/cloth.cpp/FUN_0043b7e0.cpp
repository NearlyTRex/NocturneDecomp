// Name: core_cloth.cpp_FUN_0043b7e0
// Address: 0043b7e0
// Address Range: [[0043b7e0, 0043b96b] [0043b976, 0043b9ec]]
// Convention: unknown
// Signature: undefined core_cloth.cpp_FUN_0043b7e0()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte core_cloth.cpp_FUN_0043b7e0(uint param_1, uint param_2,
   uint param_3) */

void core_cloth_cpp_FUN_0043b7e0
               (uint param_1,uint param_2,int unaff_EBX,uint param_4,int param_5,
               int param_6,int param_7)

{
  uchar uVar1;
  undefined3 extraout_var;
  BADSPACEBASE *in_ESP;
  int vertex_index1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  byte *vertex_index2;
  CVector3i *input;
  CVector3i local_40;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  int local_1c;
  int local_18;
  int local_14;
  int vertex_index1_00;
  
  iVar2 = param_6 * 0xac + param_5 + 0x3ce90;
  core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
            ((CMatrix3x3f *)(iVar2 + 0x78),(CVector3f *)&stack0xffffffa8);
  vertex_index1 = 0;
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr,(CVector3i *)&stack0xffffffac,(CVector3i *)(iVar2 + 0xa0));
  local_18 = 0x270;
  local_14 = 0;
  vertex_index2 = (byte *)0x0;
  local_1c = 0xc;
  vertex_index1_00 = -1;
  do {
    fVar3 = (float10)(int)vertex_index2 * (float10)3.1415926535000001 * (float10)0.083333333333333301;
    fVar4 = (float10)fsin(fVar3);
    fVar3 = (float10)fcos(fVar3);
    local_40.z = (int)(float)(fVar4 * (float10)*(float *)(iVar2 + 0x14));
    fStack_30 = 0.0;
    fStack_34 = (float)(fVar3 * (float10)*(float *)(iVar2 + 0x18));
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              ((SProjectedVertex *)
               ((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).transformed_x +
               local_14),(CVector3i *)&stack0xffffffa4);
    fStack_2c = *(float *)(iVar2 + 0x44);
    local_1c = vertex_index1 + 0xd;
    local_40.x = (int)ROUND(fStack_34 * _DAT_0065bb3c);
    local_40.y = (int)ROUND(fStack_30 * _DAT_0065bb3c);
    local_40.z = (int)ROUND(fStack_2c * _DAT_0065bb3c);
    input = &local_40;
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              ((SProjectedVertex *)
               ((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).transformed_x +
               local_14),input);
    if (0 < vertex_index1) {
      engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
                (g_CDemonRendererPtr,vertex_index1,local_18);
      engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
                (g_CDemonRendererPtr,vertex_index1,unaff_EBX);
      input = (CVector3i *)0x43b9b5;
      engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
                (g_CDemonRendererPtr,vertex_index1_00,(int)vertex_index2);
    }
    vertex_index1 = vertex_index1 + 1;
    local_18 = local_18 + 0x30;
    local_14 = local_14 + 0x30;
    vertex_index2 = (byte *)((int)&input->x + 2);
    local_1c = local_1c + 1;
    vertex_index1_00 = vertex_index1_00 + 1;
  } while (vertex_index1 < 0xd);
  if (param_7 != 0) {
    uVar1 = shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330(g_CEditorToolsPtr);
    shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0
              (g_CEditorToolsPtr,*(float *)(iVar2 + 0x14) + *(float *)(iVar2 + 0x18),
               CONCAT31 /* combine 2-byte values */(extraout_var,uVar1));
  }
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  return;
}
