// Name: core_cloth.cpp_FUN_005b0cde
// Address: 005b0cde
// Address Range: [[005b0cde, 005b0cdf]]
// Convention: unknown
// Signature: void core_cloth_cpp_FUN_005b0cde(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_cloth_cpp_FUN_005b0cde(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int unaff_EBP;
  int iVar2;
  int vertex_index1;
  int unaff_EDI;
  int iVar3;
  byte bVar4;
  float10 fVar5;
  float10 fVar6;
  float afStackY_1034 [1006];
  CVector3f *euler_angles;
  CVector3f *translation;
  CVector3i CStack_58;
  float fStack_4c;
  float afStack_48 [2];
  CVector3f aCStack_40 [2];
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  bVar4 = 0;
  iVar2 = param_1 + 0x37b50 + param_2 * 0xac;
  core_dirmat_cpp_FUN_004496e0(iVar2 + 0x78);
  translation = (CVector3f *)(iVar2 + 0xa0);
  euler_angles = aCStack_40;
  aCStack_40[0].x = fStack_4c;
  *(float *)((int)aCStack_40 + (uint)bVar4 * -8 + 4) = afStack_48[(uint)bVar4 * -2];
  *(float *)((int)aCStack_40 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       afStack_48[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  vertex_index1 = 0;
  iVar3 = 0;
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
            (DAT_0060b280,euler_angles,translation);
  iStack_1c = 0x270;
  iStack_20 = 0;
  iStack_24 = 0xc;
  iStack_18 = -1;
  do {
    iStack_14 = iStack_20;
    fVar5 = (float10)iStack_20 * (float10)_DAT_005f1107 * (float10)_DAT_005f110b;
    fVar6 = (float10)fsin(fVar5);
    fVar5 = (float10)fcos(fVar5);
    CStack_58.x = (int)ROUND((float)(fVar6 * (float10)*(float *)(iVar2 + 0x14)) * _DAT_006011a0);
    CStack_58.y = (int)ROUND((float)(fVar5 * (float10)*(float *)(iVar2 + 0x18)) * _DAT_006011a0);
    CStack_58.z = (int)ROUND(_DAT_006011a0 * 0.0);
    engine_special_cpp_FUN_0055d723
              ((SProjectedVertex *)
               ((int)&(DAT_0060b280->vertex_buffer_ptr->projected_vertex).transformed_x + iVar3),
               &CStack_58);
    iStack_28 = vertex_index1 + 0xd;
    engine_special_cpp_FUN_0055d723
              ((SProjectedVertex *)
               ((int)&(DAT_0060b280->vertex_buffer_ptr->projected_vertex).transformed_x + iStack_1c)
               ,(CVector3i *)&stack0xffffff90);
    if (0 < vertex_index1) {
      engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0046b970
                (DAT_0060b280,vertex_index1,iStack_28);
      engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0046b970
                (DAT_0060b280,vertex_index1,unaff_EDI);
      engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0046b970
                (DAT_0060b280,unaff_EBP,unaff_EDI);
    }
    iVar3 = iVar3 + 0x30;
    vertex_index1 = vertex_index1 + 1;
    iStack_20 = iStack_20 + 2;
    iStack_24 = iStack_24 + 1;
    iStack_18 = iStack_18 + 1;
    iStack_1c = iStack_1c + 0x30;
  } while (vertex_index1 < 0xd);
  if (param_3 != 0) {
    uVar1 = shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_0047f1c0(g_CEditorToolsPtr);
    shape_edittool_cpp_FUN_0047fd00
              (g_CEditorToolsPtr,*(float *)(iVar2 + 0x14) + *(float *)(iVar2 + 0x18),uVar1);
  }
  engine_drender_cpp_pop_FUN_0046b4a0();
  return;
}
