// Name: core_skeleton.cpp_FUN_00547e10
// Address: 00547e10
// Address Range: [[00547e10, 00548027]]
// Convention: unknown
// Signature: void core_skeleton_cpp_FUN_00547e10(CDeformableModelInstance *param_1,float param_2,float param_3)

#include "nocturne.h"

void core_skeleton_cpp_FUN_00547e10(CDeformableModelInstance *param_1,float param_2,float param_3)

{
  int iVar1;
  CSkeleton *pCVar2;
  uint *unaff_ESI;
  uint *puVar3;
  float *pfVar4;
  int iVar5;
  byte bVar6;
  float10 fVar7;
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
  
  bVar6 = 0;
  if (param_2 < param_3) {
    pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(param_1);
    pCStack_1c = pCVar2;
    dStack_2c = floor((double)param_2);
    fVar7 = (float10)dStack_2c;
    round();
    iStack_18 = (int)ROUND(fVar7);
    dStack_2c = ceil((double)param_3);
    fVar7 = (float10)dStack_2c;
    round();
    iStack_14 = (int)ROUND(fVar7);
    fStack_38 = 0.0;
    fStack_34 = 0.0;
    fStack_30 = 0.0;
    if (iStack_18 < iStack_14) {
      pfVar4 = (float *)(iStack_18 * 0xc + *(int *)&pCVar2->field_0x1e018);
      iVar5 = iStack_18;
      do {
        iVar5 = iVar5 + 1;
        fStack_38 = fStack_38 + *pfVar4;
        fStack_34 = fStack_34 + pfVar4[1];
        fStack_30 = fStack_30 + pfVar4[2];
        pfVar4 = pfVar4 + 3;
      } while (iVar5 < iStack_14);
    }
    iStack_10 = iStack_18;
    iVar1 = *(int *)&pCStack_1c->field_0x1e018;
    fStack_20 = param_2 - (float)iStack_18;
    fStack_5c = *(float *)(iVar1 + iStack_18 * 0xc) * fStack_20;
    fStack_58 = *(float *)(iVar1 + 4 + iStack_18 * 0xc) * fStack_20;
    fStack_54 = *(float *)(iVar1 + 8 + iStack_18 * 0xc) * fStack_20;
    fStack_74 = fStack_5c;
    *(uint *)((int)&stack0xffffff90 + (uint)bVar6 * -8) =
         *(uint *)((int)&stack0xffffffa8 + (uint)bVar6 * -8);
    *(uint *)((int)&stack0xffffff94 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         *(uint *)((int)&stack0xffffffac + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    iStack_10 = iStack_14;
    iVar5 = iStack_14 + -1;
    fStack_24 = (float)iStack_14 - param_3;
    fStack_44 = *(float *)(iVar1 + iVar5 * 0xc) * fStack_24;
    fStack_38 = fStack_38 - fStack_74;
    fStack_40 = *(float *)(iVar1 + 4 + iVar5 * 0xc) * fStack_24;
    fStack_3c = *(float *)(iVar1 + 8 + iVar5 * 0xc) * fStack_24;
    fStack_50 = fStack_44;
    *(uint *)((int)&stack0xffffffb4 + (uint)bVar6 * -8) =
         *(uint *)((int)&stack0xffffffc0 + (uint)bVar6 * -8);
    *(uint *)((int)&stack0xffffffb8 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         *(uint *)((int)&stack0xffffffc4 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    puVar3 = &stack0xffffffc8;
    fStack_38 = (fStack_38 - fStack_50) * *(float *)&param_1->field_0x508;
    fStack_34 = ((fStack_34 - fStack_70) - fStack_4c) * *(float *)&param_1->field_0x50c;
    fStack_30 = ((fStack_30 - fStack_6c) - fStack_48) * *(float *)&param_1->field_0x510;
  }
  else {
    puVar3 = (uint *)&DAT_0265370c;
  }
  uStack_68 = *puVar3;
  *(uint *)(&stack0xffffff9c + (uint)bVar6 * -8) = puVar3[(uint)bVar6 * -2 + 1];
  *(uint *)(&stack0xffffffa0 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
       (puVar3 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
  *unaff_ESI = uStack_68;
  unaff_ESI[(uint)bVar6 * -2 + 1] = *(uint *)(&stack0xffffff9c + (uint)bVar6 * -8);
  (unaff_ESI + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1] =
       *(uint *)(&stack0xffffffa0 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  return;
}
