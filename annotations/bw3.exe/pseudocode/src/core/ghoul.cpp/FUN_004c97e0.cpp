// Name: core_ghoul.cpp_FUN_004c97e0
// Address: 004c97e0
// Address Range: [[004c97e0, 004c9aad]]
// Convention: unknown
// Signature: int core_ghoul_cpp_FUN_004c97e0(int param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_ghoul_cpp_FUN_004c97e0(int param_1,float *param_2)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  byte bVar4;
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
  
  bVar4 = 0;
  core_skeleton_cpp_FUN_0054dcc0(param_1 + 0x158,_DAT_01d22dc4);
  fStack_7c = fStack_88;
  *(uint *)((int)afStack_78 + (uint)bVar4 * -8) =
       *(uint *)(&stack0xffffff7c + (uint)bVar4 * -8);
  afStack_78[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 1] =
       (float)*(uint *)(&stack0xffffff80 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  if (&fStack_7c != param_2) {
    *param_2 = fStack_7c;
    param_2[1] = afStack_78[0];
    param_2[2] = afStack_78[1];
  }
  iVar3 = 1;
  iStack_18 = param_1 + 0x158;
  iStack_1c = 0;
  do {
    switch((iStack_1c + *(int *)(param_1 + 0x6c)) % 4) {
    case 0:
      if (*(int *)(*(int *)(param_1 + 0xd078) * 4 + param_1 + 0x2298) != 0) {
        core_skeleton_cpp_FUN_0054dcc0(iStack_18,_DAT_01d22db4);
        afStack_48[2] = fStack_64;
        afStack_48[(uint)bVar4 * 0xfffffffe + 3] = afStack_60[(uint)bVar4 * 0xfffffffe];
        afStack_48[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 4] =
             afStack_60[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 1];
        if (afStack_78 + 2 != afStack_48 + 2) {
          afStack_78[2] = afStack_48[2];
          afStack_78[3] = afStack_48[3];
          fStack_68 = fStack_38;
        }
LAB_004c98d3:
        afStack_78[3] = afStack_78[0] * (float)_DAT_005c4425 + afStack_78[3] * (float)_DAT_005c441d;
        afStack_78[2] = fStack_7c * (float)_DAT_005c4415 + afStack_78[2] * (float)_DAT_005c4415;
        pfVar2 = param_2 + iVar3 * 3;
        if (pfVar2 != afStack_78 + 2) {
          *pfVar2 = afStack_78[2];
          pfVar2[1] = afStack_78[3];
          fVar1 = fStack_68;
          goto LAB_004c992a;
        }
LAB_004c992d:
        iVar3 = iVar3 + 1;
      }
      break;
    case 1:
      if (*(int *)(*(int *)(param_1 + 0xd080) * 4 + param_1 + 0x2298) != 0) {
        core_skeleton_cpp_FUN_0054dcc0(iStack_18,_DAT_01d22db8);
        fStack_94 = fStack_34;
        (&stack0xffffff70)[(uint)bVar4 * 0xfffffffe] = afStack_48[(uint)bVar4 * 0xfffffffe + 6];
        *(float *)((int)&stack0xffffff74 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
             afStack_48[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 7];
        if (afStack_78 + 2 != &stack0xffffff6c) {
          afStack_78[2] = fStack_94;
          afStack_78[3] = fStack_90;
          fStack_68 = fStack_8c;
        }
        goto LAB_004c98d3;
      }
      break;
    case 2:
      if (*(int *)(*(int *)(param_1 + 0xd0a0) * 4 + param_1 + 0x2298) != 0) {
        core_skeleton_cpp_FUN_0054dcc0(iStack_18,_DAT_01d22da0);
        pfVar2 = param_2 + iVar3 * 3;
        fStack_28 = fStack_a0;
        *(uint *)((int)afStack_24 + (uint)bVar4 * -8) =
             *(uint *)(&stack0xffffff64 + (uint)bVar4 * -8);
        afStack_24[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 1] =
             (float)*(uint *)(&stack0xffffff68 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
        if (pfVar2 == &fStack_28) goto LAB_004c992d;
        *pfVar2 = fStack_28;
        pfVar2[1] = afStack_24[0];
        fVar1 = afStack_24[1];
LAB_004c992a:
        pfVar2[2] = fVar1;
        goto LAB_004c992d;
      }
      break;
    case 3:
      if (*(int *)(*(int *)(param_1 + 0xd09c) * 4 + param_1 + 0x2298) != 0) {
        core_skeleton_cpp_FUN_0054dcc0(iStack_18,_DAT_01d22dc8);
        pfVar2 = param_2 + iVar3 * 3;
        fStack_4c = afStack_60[2];
        *(float *)((int)afStack_48 + (uint)bVar4 * -8) = afStack_60[(uint)bVar4 * 0xfffffffe + 3];
        afStack_48[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 1] =
             afStack_60[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 4];
        if (pfVar2 != &fStack_4c) {
          *pfVar2 = fStack_4c;
          pfVar2[1] = afStack_48[0];
          fVar1 = afStack_48[1];
          goto LAB_004c992a;
        }
        goto LAB_004c992d;
      }
    }
    iStack_1c = iStack_1c + 1;
    if (3 < iStack_1c) {
      return iVar3;
    }
  } while( true );
}
