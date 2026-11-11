// Name: core_skeleton.cpp_FUN_00547e10
// Address: 00547e10
// Address Range: [[00547e10, 00548027]]
// Convention: unknown
// Signature: void core_skeleton_cpp_FUN_00547e10(CDeformableModelInstance *param_1,float param_2,float param_3)

#include "nocturne.h"

void core_skeleton_cpp_FUN_00547e10(CDeformableModelInstance *param_1,float param_2,float param_3)

{
  CSkeleton *pCVar1;
  uint *unaff_ESI;
  uint *puVar2;
  CVector3f *pCVar3;
  int iVar4;
  byte bVar5;
  float10 fVar6;
  float afStackY_105c [1016];
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  uint uStack_68;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  double dStack_2c;
  float fStack_24;
  float fStack_20;
  CSkeleton *pCStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  
  bVar5 = 0;
  if (param_2 < param_3) {
    pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(param_1);
    pCStack_1c = pCVar1;
    dStack_2c = floor((double)param_2);
    fVar6 = (float10)dStack_2c;
    round();
    iStack_18 = (int)ROUND(fVar6);
    dStack_2c = ceil((double)param_3);
    fVar6 = (float10)dStack_2c;
    round();
    iStack_14 = (int)ROUND(fVar6);
    fStack_38 = 0.0;
    fStack_34 = 0.0;
    fStack_30 = 0.0;
    if (iStack_18 < iStack_14) {
      pCVar3 = pCVar1->frame_positions_2 + iStack_18;
      iVar4 = iStack_18;
      do {
        iVar4 = iVar4 + 1;
        fStack_38 = fStack_38 + pCVar3->x;
        fStack_34 = fStack_34 + pCVar3->y;
        fStack_30 = fStack_30 + pCVar3->z;
        pCVar3 = pCVar3 + 1;
      } while (iVar4 < iStack_14);
    }
    iStack_10 = iStack_18;
    pCVar3 = pCStack_1c->frame_positions_2;
    fStack_20 = param_2 - (float)iStack_18;
    fStack_5c = pCVar3[iStack_18].x * fStack_20;
    fStack_58 = pCVar3[iStack_18].y * fStack_20;
    fStack_54 = pCVar3[iStack_18].z * fStack_20;
    fStack_74 = fStack_5c;
    *(uint *)((int)&stack0xffffff90 + (uint)bVar5 * -8) =
         *(uint *)((int)&stack0xffffffa8 + (uint)bVar5 * -8);
    *(uint *)((int)&stack0xffffff94 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         *(uint *)((int)&stack0xffffffac + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    iStack_10 = iStack_14;
    iVar4 = iStack_14 + -1;
    fStack_24 = (float)iStack_14 - param_3;
    fStack_44 = pCVar3[iVar4].x * fStack_24;
    fStack_38 = fStack_38 - fStack_74;
    fStack_40 = pCVar3[iVar4].y * fStack_24;
    fStack_3c = pCVar3[iVar4].z * fStack_24;
    fStack_50 = fStack_44;
    *(uint *)((int)&stack0xffffffb4 + (uint)bVar5 * -8) =
         *(uint *)((int)&stack0xffffffc0 + (uint)bVar5 * -8);
    *(uint *)((int)&stack0xffffffb8 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         *(uint *)((int)&stack0xffffffc4 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    puVar2 = &stack0xffffffc8;
    fStack_38 = (fStack_38 - fStack_50) * (param_1->root_offset_scale).x;
    fStack_34 = ((fStack_34 - fStack_70) - fStack_4c) * (param_1->root_offset_scale).y;
    fStack_30 = ((fStack_30 - fStack_6c) - fStack_48) * (param_1->root_offset_scale).z;
  }
  else {
    puVar2 = (uint *)&DAT_0265370c;
  }
  uStack_68 = *puVar2;
  *(uint *)(&stack0xffffff9c + (uint)bVar5 * -8) = puVar2[(uint)bVar5 * -2 + 1];
  *(uint *)(&stack0xffffffa0 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       (puVar2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
  *unaff_ESI = uStack_68;
  unaff_ESI[(uint)bVar5 * -2 + 1] = *(uint *)(&stack0xffffff9c + (uint)bVar5 * -8);
  (unaff_ESI + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
       *(uint *)(&stack0xffffffa0 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  return;
}
