// Name: core_zombie.cpp_FUN_00599900
// Address: 00599900
// Address Range: [[00599900, 00599c03]]
// Convention: unknown
// Signature: int core_zombie_cpp_FUN_00599900(int param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_zombie_cpp_FUN_00599900(int param_1,float *param_2)

{
  float fVar1;
  float *pfVar2;
  byte bVar3;
  float afStackY_1088 [1016];
  float fStack_a0;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_7c;
  float afStack_78 [4];
  float fStack_68;
  float fStack_64;
  float afStack_60 [5];
  float fStack_4c;
  float afStack_48 [4];
  float fStack_38;
  float fStack_34;
  float fStack_28;
  float afStack_24 [2];
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  bVar3 = 0;
  core_skeleton_cpp_FUN_00546a90(param_1 + 0x2b4,*(uint *)(param_1 + 0x10bac));
  fStack_7c = fStack_88;
  *(uint *)((int)afStack_78 + (uint)bVar3 * -8) =
       *(uint *)(&stack0xffffff7c + (uint)bVar3 * -8);
  afStack_78[(uint)bVar3 * 0xfffffffe + (uint)bVar3 * 0xfffffffe + 1] =
       (float)*(uint *)(&stack0xffffff80 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  if (&fStack_7c != param_2) {
    *param_2 = fStack_7c;
    param_2[1] = afStack_78[0];
    param_2[2] = afStack_78[1];
  }
  iStack_18 = param_1 + 0x2b4;
  iStack_1c = 0;
  iStack_14 = 1;
  do {
    switch((iStack_1c + *(int *)(param_1 + 0x6c)) % 4) {
    case 0:
      if (*(int *)(param_1 + 0x23f4 + *(int *)(param_1 + 0x10bb4) * 4) != 0) {
        core_skeleton_cpp_FUN_00546a90(iStack_18,*(uint *)(param_1 + 0x10b9c));
        afStack_48[2] = fStack_34;
        afStack_48[(uint)bVar3 * 0xfffffffe + 3] = afStack_48[(uint)bVar3 * 0xfffffffe + 6];
        afStack_48[(uint)bVar3 * 0xfffffffe + (uint)bVar3 * 0xfffffffe + 4] =
             afStack_48[(uint)bVar3 * 0xfffffffe + (uint)bVar3 * 0xfffffffe + 7];
        if (afStack_78 + 2 != afStack_48 + 2) {
          afStack_78[2] = afStack_48[2];
          afStack_78[3] = afStack_48[3];
          fStack_68 = fStack_38;
        }
        afStack_78[3] = afStack_78[0] * (float)_DAT_005ef3da + afStack_78[3] * (float)_DAT_005ef3d2;
        afStack_78[2] = fStack_7c * (float)_DAT_005ef3ca + afStack_78[2] * (float)_DAT_005ef3ca;
LAB_00599a2f:
        pfVar2 = param_2 + iStack_14 * 3;
        if (pfVar2 != afStack_78 + 2) {
          *pfVar2 = afStack_78[2];
          pfVar2[1] = afStack_78[3];
          fVar1 = fStack_68;
          goto LAB_00599a48;
        }
LAB_00599a4b:
        iStack_14 = iStack_14 + 1;
      }
      break;
    case 1:
      if (*(int *)(param_1 + 0x23f4 + *(int *)(param_1 + 0x10bbc) * 4) != 0) {
        core_skeleton_cpp_FUN_00546a90(iStack_18,*(uint *)(param_1 + 0x10ba0));
        fStack_94 = afStack_60[2];
        (&stack0xffffff70)[(uint)bVar3 * 0xfffffffe] = afStack_60[(uint)bVar3 * 0xfffffffe + 3];
        *(float *)((int)&stack0xffffff74 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
             afStack_60[(uint)bVar3 * 0xfffffffe + (uint)bVar3 * 0xfffffffe + 4];
        if (afStack_78 + 2 != &stack0xffffff6c) {
          afStack_78[2] = fStack_94;
          afStack_78[3] = fStack_90;
          fStack_68 = fStack_8c;
        }
        afStack_78[3] = afStack_78[0] * (float)_DAT_005ef3da + afStack_78[3] * (float)_DAT_005ef3d2;
        afStack_78[2] = fStack_7c * (float)_DAT_005ef3ca + afStack_78[2] * (float)_DAT_005ef3ca;
        goto LAB_00599a2f;
      }
      break;
    case 2:
      if (*(int *)(param_1 + 0x23f4 + *(int *)(param_1 + 0x10bcc) * 4) != 0) {
        core_skeleton_cpp_FUN_00546a90(iStack_18,*(uint *)(param_1 + 0x10b88));
        pfVar2 = param_2 + iStack_14 * 3;
        fStack_28 = fStack_a0;
        *(uint *)((int)afStack_24 + (uint)bVar3 * -8) =
             *(uint *)(&stack0xffffff64 + (uint)bVar3 * -8);
        afStack_24[(uint)bVar3 * 0xfffffffe + (uint)bVar3 * 0xfffffffe + 1] =
             (float)*(uint *)(&stack0xffffff68 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
        if (pfVar2 == &fStack_28) goto LAB_00599a4b;
        *pfVar2 = fStack_28;
        pfVar2[1] = afStack_24[0];
        fVar1 = afStack_24[1];
LAB_00599a48:
        pfVar2[2] = fVar1;
        goto LAB_00599a4b;
      }
      break;
    case 3:
      if (*(int *)(param_1 + 0x23f4 + *(int *)(param_1 + 0x10bc8) * 4) != 0) {
        core_skeleton_cpp_FUN_00546a90(iStack_18,*(uint *)(param_1 + 0x10bb0));
        fStack_4c = fStack_64;
        *(float *)((int)afStack_48 + (uint)bVar3 * -8) = afStack_60[(uint)bVar3 * 0xfffffffe];
        afStack_48[(uint)bVar3 * 0xfffffffe + (uint)bVar3 * 0xfffffffe + 1] =
             afStack_60[(uint)bVar3 * 0xfffffffe + (uint)bVar3 * 0xfffffffe + 1];
        pfVar2 = param_2 + iStack_14 * 3;
        if (pfVar2 != &fStack_4c) {
          *pfVar2 = fStack_4c;
          pfVar2[1] = afStack_48[0];
          fVar1 = afStack_48[1];
          goto LAB_00599a48;
        }
        goto LAB_00599a4b;
      }
    }
    iStack_1c = iStack_1c + 1;
    if (3 < iStack_1c) {
      return iStack_14;
    }
  } while( true );
}
