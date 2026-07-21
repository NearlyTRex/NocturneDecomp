// Name: FUN_00447f20
// Address: 00447f20
// Address Range: [[00447f20, 00448307]]
// Convention: unknown
// Signature: undefined4 * FUN_00447f20(int param_1,undefined4 *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_00447f20(int param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  int aiStackY_10d4 [1015];
  uint uStack_ec;
  int iStack_e0;
  uint uStack_d4;
  uint uStack_c8;
  int iStack_c0;
  uint uStack_bc;
  uint uStack_b0;
  int iStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  uint uStack_98;
  int aiStack_94 [5];
  int aiStack_80 [2];
  int iStack_78;
  uint uStack_74;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  byte auStack_50 [12];
  uint uStack_44;
  int aiStack_40 [4];
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  float *pfStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  bVar3 = 0;
  puVar1 = param_2 + 3;
  if (puVar1 != (uint *)&DAT_02dd1184) {
    *puVar1 = _DAT_02dd1184;
    param_2[4] = _DAT_02dd1188;
    param_2[5] = _DAT_02dd118c;
  }
  if (puVar1 != param_2) {
    *param_2 = *puVar1;
    param_2[1] = param_2[4];
    param_2[2] = param_2[5];
  }
  pfStack_20 = (float *)(param_1 + 0x104);
  aiStack_40[2] = 0;
  aiStack_40[3] = param_1 + 0x110;
  iStack_18 = 1;
  do {
    if (*(int *)(param_1 + 0x140) + -1 <= iStack_18) {
      return param_2;
    }
    iStack_2c = iStack_18 + 1;
    iStack_28 = aiStack_40[2];
    iStack_30 = aiStack_40[2];
    iStack_1c = 0;
    iStack_24 = iStack_2c;
    for (iStack_14 = 1; iStack_14 < *(int *)(param_1 + 0x13c) + -1; iStack_14 = iStack_14 + 1) {
      core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_004410c0(param_1,iStack_14,iStack_18);
      aiStack_80[0] = uStack_d4;
      aiStack_94[(uint)bVar3 * -2 + 6] = *(int *)(&stack0xffffff30 + (uint)bVar3 * -8);
      aiStack_94[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 7] =
           *(int *)(&stack0xffffff34 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
      if (iStack_78 < 0x1f401) {
LAB_004480de:
        core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_004411b0(param_1,aiStack_94 + 5);
        iStack_68 = iStack_e0;
        aiStack_94[(uint)bVar3 * -2 + 0xc] = *(int *)(&stack0xffffff24 + (uint)bVar3 * -8);
        aiStack_94[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0xd] =
             *(int *)(&stack0xffffff28 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
        fStack_a4 = (float)iStack_68 * _DAT_0059bde4;
        fStack_a0 = (float)iStack_64 * _DAT_0059bde4;
        fStack_9c = (float)iStack_60 * _DAT_0059bde4;
        fStack_5c = fStack_a4 - *pfStack_20;
        fStack_58 = fStack_a0 - pfStack_20[1];
        fStack_54 = fStack_9c - pfStack_20[2];
        core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
                  (aiStack_40[3],auStack_50,&fStack_5c);
        core_box_cpp_CBoundingBox3D_expand_FUN_0041cc00(param_2,auStack_50);
      }
      else {
        uVar2 = 0;
        if ((iStack_14 < 2) || (iStack_18 < 2)) {
LAB_0044808b:
          uVar2 = 1;
        }
        else {
          core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_004410c0(param_1,iStack_1c,iStack_30)
          ;
          uStack_c8 = uStack_bc;
          *(uint *)(&stack0xffffff3c + (uint)bVar3 * -8) =
               *(uint *)(&stack0xffffff48 + (uint)bVar3 * -8);
          *(uint *)((int)&stack0xffffff40 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
               *(uint *)(&stack0xffffff4c + (uint)bVar3 * -8 + (uint)bVar3 * -8);
          if (0x1f400 < iStack_c0) goto LAB_0044808b;
        }
        if ((iStack_14 < 2) || (*(int *)(param_1 + 0x140) + -2 <= iStack_18)) {
LAB_0044809a:
          uVar2 = uVar2 + 1;
        }
        else {
          core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_004410c0(param_1,iStack_1c,iStack_2c)
          ;
          uStack_b0 = uStack_ec;
          *(uint *)(&stack0xffffff54 + (uint)bVar3 * -8) =
               *(uint *)(&stack0xffffff18 + (uint)bVar3 * -8);
          *(uint *)((int)&stack0xffffff58 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
               *(uint *)(&stack0xffffff1c + (uint)bVar3 * -8 + (uint)bVar3 * -8);
          if (0x1f400 < iStack_a8) goto LAB_0044809a;
        }
        if ((iStack_14 < *(int *)(param_1 + 0x13c) + -2) && (1 < iStack_18)) {
          core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_004410c0
                    (param_1,iStack_14 + 1,iStack_28);
          uStack_98 = aiStack_94[2];
          aiStack_94[(uint)bVar3 * -2] = aiStack_94[(uint)bVar3 * -2 + 3];
          aiStack_94[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
               aiStack_94[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4];
          if (0x1f400 < aiStack_94[1]) goto LAB_004480b3;
        }
        else {
LAB_004480b3:
          uVar2 = uVar2 + 1;
        }
        if ((iStack_14 < *(int *)(param_1 + 0x13c) + -2) &&
           (iStack_18 < *(int *)(param_1 + 0x140) + -2)) {
          core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_004410c0
                    (param_1,iStack_14 + 1,iStack_24);
          uStack_74 = uStack_44;
          aiStack_94[(uint)bVar3 * -2 + 9] = aiStack_40[(uint)bVar3 * -2];
          aiStack_94[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 10] =
               aiStack_40[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
          if (0x1f400 < iStack_6c) goto LAB_004480cc;
        }
        else {
LAB_004480cc:
          uVar2 = uVar2 + 1;
        }
        if (3 < uVar2) {
          iStack_78 = 0x1f400;
          goto LAB_004480de;
        }
      }
      iStack_1c = iStack_1c + 1;
    }
    iStack_18 = iStack_18 + 1;
    aiStack_40[2] = aiStack_40[2] + 1;
  } while( true );
}
