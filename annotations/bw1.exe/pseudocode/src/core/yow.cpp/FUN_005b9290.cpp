// Name: core_yow.cpp_FUN_005b9290
// Address: 005b9290
// Address Range: [[005b9290, 005b959d]]
// Convention: unknown
// Signature: int core_yow_cpp_FUN_005b9290(int param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_yow_cpp_FUN_005b9290(int param_1,float *param_2)

{
  int iVar1;
  float fVar2;
  float *pfVar3;
  byte bVar4;
  float afStackY_1088 [1016];
  float fStack_a0;
  float fStack_94;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_58;
  float afStack_54 [2];
  float fStack_4c;
  float afStack_48 [4];
  float fStack_38;
  float fStack_34;
  float fStack_28;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  bVar4 = 0;
  iVar1 = (**(code **)(*(int *)(param_1 + 0x154) + 0x10c))(param_1);
  if (iVar1 != 0) {
    return 0;
  }
  core_skeleton_cpp_FUN_00569130(param_1 + 0x158,*(uint *)(param_1 + 0xc280));
  fStack_58 = fStack_34;
  *(float *)((int)afStack_54 + (uint)bVar4 * -8) = afStack_48[(uint)bVar4 * 0xfffffffe + 6];
  afStack_54[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 1] =
       afStack_48[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 7];
  if (&fStack_58 != param_2) {
    *param_2 = fStack_58;
    param_2[1] = afStack_54[0];
    param_2[2] = afStack_54[1];
  }
  iStack_18 = param_1 + 0x158;
  iStack_1c = 0;
  iStack_14 = 1;
  do {
    switch((iStack_1c + *(int *)(param_1 + 0x6c)) % 4) {
    case 0:
      if (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc270) * 4) != 0) {
        core_skeleton_cpp_FUN_00569130(iStack_18,*(int *)(param_1 + 0xc270));
        afStack_48[2] = fStack_a0;
        afStack_48[(uint)bVar4 * 0xfffffffe + 3] =
             (float)*(uint *)(&stack0xffffff64 + (uint)bVar4 * -8);
        afStack_48[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 4] =
             (float)*(uint *)(&stack0xffffff68 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
        if (&stack0xffffff84 != afStack_48 + 2) {
          fStack_7c = afStack_48[2];
          fStack_78 = afStack_48[3];
          fStack_74 = fStack_38;
        }
        fStack_78 = afStack_54[0] * (float)_DAT_005fa3bc + fStack_78 * (float)_DAT_005fa3b4;
        fStack_7c = fStack_58 * (float)_DAT_005fa3ac + fStack_7c * (float)_DAT_005fa3ac;
LAB_005b93d6:
        pfVar3 = param_2 + iStack_14 * 3;
        if (pfVar3 != &stack0xffffff84) {
          *pfVar3 = fStack_7c;
          pfVar3[1] = fStack_78;
          fVar2 = fStack_74;
          goto LAB_005b93ef;
        }
LAB_005b93f2:
        iStack_14 = iStack_14 + 1;
      }
      break;
    case 1:
      if (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc274) * 4) != 0) {
        core_skeleton_cpp_FUN_00569130(iStack_18,*(int *)(param_1 + 0xc274));
        fStack_88 = fStack_28;
        (&stack0xffffff7c)[(uint)bVar4 * 0xfffffffe] = afStack_48[(uint)bVar4 * 0xfffffffe + 9];
        *(float *)((int)&stack0xffffff80 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
             afStack_48[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 10];
        if (&stack0xffffff84 != &stack0xffffff78) {
          fStack_7c = fStack_88;
          fStack_78 = fStack_84;
          fStack_74 = fStack_80;
        }
        fStack_78 = afStack_54[0] * (float)_DAT_005fa3bc + fStack_78 * (float)_DAT_005fa3b4;
        fStack_7c = fStack_58 * (float)_DAT_005fa3ac + fStack_7c * (float)_DAT_005fa3ac;
        goto LAB_005b93d6;
      }
      break;
    case 2:
      if (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc278) * 4) != 0) {
        core_skeleton_cpp_FUN_00569130(iStack_18,*(int *)(param_1 + 0xc278));
        pfVar3 = param_2 + iStack_14 * 3;
        fStack_4c = fStack_64;
        *(uint *)((int)afStack_48 + (uint)bVar4 * -8) =
             *(uint *)(&stack0xffffffa0 + (uint)bVar4 * -8);
        afStack_48[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 1] =
             (float)*(uint *)(&stack0xffffffa4 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
        if (pfVar3 == &fStack_4c) goto LAB_005b93f2;
        *pfVar3 = fStack_4c;
        pfVar3[1] = afStack_48[0];
        fVar2 = afStack_48[1];
LAB_005b93ef:
        pfVar3[2] = fVar2;
        goto LAB_005b93f2;
      }
      break;
    case 3:
      if (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc27c) * 4) != 0) {
        core_skeleton_cpp_FUN_00569130(iStack_18,*(int *)(param_1 + 0xc27c));
        fStack_70 = fStack_94;
        (&stack0xffffff94)[(uint)bVar4 * 0xfffffffe] =
             (float)*(uint *)(&stack0xffffff70 + (uint)bVar4 * -8);
        *(uint *)((int)&stack0xffffff98 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
             *(uint *)(&stack0xffffff74 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
        pfVar3 = param_2 + iStack_14 * 3;
        if (pfVar3 != &stack0xffffff90) {
          *pfVar3 = fStack_70;
          pfVar3[1] = fStack_6c;
          fVar2 = fStack_68;
          goto LAB_005b93ef;
        }
        goto LAB_005b93f2;
      }
    }
    iStack_1c = iStack_1c + 1;
    if (3 < iStack_1c) {
      return iStack_14;
    }
  } while( true );
}
