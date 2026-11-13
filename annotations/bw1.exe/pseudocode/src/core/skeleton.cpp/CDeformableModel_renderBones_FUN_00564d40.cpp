// Name: core_skeleton.cpp_CDeformableModel_renderBones_FUN_00564d40
// Address: 00564d40
// Address Range: [[00564d40, 00564e37]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_renderBones_FUN_00564d40(CDeformableModel *this_ptr,CMatrix3x4f *bone_matrices)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_skeleton_cpp_CDeformableModel_renderBones_FUN_00564d40(CDeformableModel *this_ptr,CMatrix3x4f *bone_matrices)

{
  int iVar1;
  SBone *text;
  byte bVar2;
  float afStackY_101c [1012];
  CVector3i CStack_40;
  float fStack_34;
  float afStack_30 [5];
  CSkeleton *pCStack_1c;
  int iStack_18;
  CMatrix3x4f *pCStack_14;
  
  bVar2 = 0;
  pCStack_1c = core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_00563c40(this_ptr);
  iStack_18 = 0;
  if (0 < pCStack_1c->bone_count) {
    text = pCStack_1c->bone_list;
    pCStack_14 = bone_matrices;
    do {
      core_xform_cpp_FUN_005b6270(pCStack_14);
      fStack_34 = afStack_30[2];
      afStack_30[(uint)bVar2 * -2] = afStack_30[(uint)bVar2 * -2 + 3];
      afStack_30[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
           afStack_30[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 4];
      CStack_40.x = (int)ROUND(fStack_34 * _DAT_00605888);
      CStack_40.y = (int)ROUND(afStack_30[0] * _DAT_00605888);
      CStack_40.z = (int)ROUND(afStack_30[1] * _DAT_00605888);
      engine_special_cpp_FUN_00580173((SProjectedVertex *)(*DAT_00612560 + 0xea5d0),&CStack_40);
      iVar1 = *DAT_00612560;
      if ((*(byte *)(iVar1 + 0xea5e3) & 0x80) == 0) {
        engine_2d_c_drawText_FUN_00401fe0
                  (text->bone_name,*(int *)(iVar1 + 0xea5e0) >> 0x10,
                   *(int *)(iVar1 + 0xea5e4) >> 0x10);
      }
      text = text + 1;
      pCStack_14 = pCStack_14 + 1;
      iStack_18 = iStack_18 + 1;
    } while (iStack_18 < pCStack_1c->bone_count);
  }
  return;
}
