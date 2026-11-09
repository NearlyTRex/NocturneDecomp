// Name: core_skeleton.cpp_FUN_005426be
// Address: 005426be
// Address Range: [[005426be, 005427b7]]
// Convention: unknown
// Signature: void core_skeleton_cpp_FUN_005426be(CDeformableModel *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_skeleton_cpp_FUN_005426be(CDeformableModel *param_1,int param_2)

{
  int iVar1;
  char *text;
  byte bVar2;
  float afStackY_101c [1012];
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  float fStack_34;
  float afStack_30 [5];
  CSkeleton *pCStack_1c;
  int iStack_18;
  int iStack_14;
  
  bVar2 = 0;
  pCStack_1c = core_skeleton_cpp_FUN_005415d0(param_1);
  iStack_18 = 0;
  if (0 < *(int *)&pCStack_1c->field_0x1d1f8) {
    text = &pCStack_1c->field_0x1d1fc;
    iStack_14 = param_2;
    do {
      core_xform_cpp_FUN_00592720(iStack_14);
      fStack_34 = afStack_30[2];
      afStack_30[(uint)bVar2 * -2] = afStack_30[(uint)bVar2 * -2 + 3];
      afStack_30[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
           afStack_30[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 4];
      iStack_40 = (int)ROUND(fStack_34 * _DAT_005fb998);
      iStack_3c = (int)ROUND(afStack_30[0] * _DAT_005fb998);
      iStack_38 = (int)ROUND(afStack_30[1] * _DAT_005fb998);
      engine_special_cpp_FUN_0055d723
                ((SProjectedVertex *)(*DAT_0060b280 + 0xea5d0),(CVector3i *)&iStack_40);
      iVar1 = *DAT_0060b280;
      if ((*(byte *)(iVar1 + 0xea5e3) & 0x80) == 0) {
        engine_2d_c_drawText_FUN_00401fe0
                  (text,*(int *)(iVar1 + 0xea5e0) >> 0x10,*(int *)(iVar1 + 0xea5e4) >> 0x10);
      }
      text = text + 0x24;
      iStack_14 = iStack_14 + 0x30;
      iStack_18 = iStack_18 + 1;
    } while (iStack_18 < *(int *)&pCStack_1c->field_0x1d1f8);
  }
  return;
}
