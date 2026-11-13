// Name: core_skeleton.cpp_FUN_005498d0
// Address: 005498d0
// Address Range: [[005498d0, 005499c7]]
// Convention: unknown
// Signature: void core_skeleton_cpp_FUN_005498d0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void core_skeleton_cpp_FUN_005498d0(void)

{
  int iVar1;
  SBone *text;
  byte bVar2;
  CDeformableModel *in_stack_00000004;
  int in_stack_00000008;
  float afStackY_101c [1012];
  CVector3i CStack_40;
  float fStack_34;
  float afStack_30 [5];
  CSkeleton *pCStack_1c;
  int iStack_18;
  int iStack_14;
  
  bVar2 = 0;
  pCStack_1c = core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_005487e0(in_stack_00000004);
  iStack_18 = 0;
  if (0 < pCStack_1c->bone_count) {
    text = pCStack_1c->bone_list;
    iStack_14 = in_stack_00000008;
    do {
      core_xform_cpp_FUN_00584450(iStack_14);
      fStack_34 = afStack_30[2];
      afStack_30[(uint)bVar2 * -2] = afStack_30[(uint)bVar2 * -2 + 3];
      afStack_30[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
           afStack_30[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 4];
      CStack_40.x = (int)ROUND(fStack_34 * _DAT_005e4758);
      CStack_40.y = (int)ROUND(afStack_30[0] * _DAT_005e4758);
      CStack_40.z = (int)ROUND(afStack_30[1] * _DAT_005e4758);
      engine_special_cpp_FUN_005632a3((SProjectedVertex *)(*DAT_005f2afc + 0x124f50),&CStack_40);
      iVar1 = *DAT_005f2afc;
      if ((*(byte *)(iVar1 + 0x124f63) & 0x80) == 0) {
        engine_2d_c_drawText_FUN_00401fe0
                  (text->bone_name,*(int *)(iVar1 + 0x124f60) >> 0x10,
                   *(int *)(iVar1 + 0x124f64) >> 0x10);
      }
      text = text + 1;
      iStack_14 = iStack_14 + 0x30;
      iStack_18 = iStack_18 + 1;
    } while (iStack_18 < pCStack_1c->bone_count);
  }
  return;
}
