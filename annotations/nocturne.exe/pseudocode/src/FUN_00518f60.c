// Name: FUN_00518f60
// Address: 00518f60
// Address Range: [[00518f60, 00519117]]
// Convention: unknown
// Signature: int FUN_00518f60(undefined1 *param_1,int param_2,int param_3,byte param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00518f60(byte *param_1,int param_2,int param_3,byte param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  byte bVar8;
  uint auStack_ac [12];
  uint auStack_7c [8];
  uint uStack_5c;
  int *piStack_58;
  byte *puStack_54;
  float *pfStack_50;
  int local_4c;
  int local_48;
  int local_44;
  byte local_40 [12];
  byte local_34 [12];
  float local_28;
  float local_24;
  float local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar8 = 0;
  pfStack_50 = (float *)param_1;
  puStack_54 = (byte *)0x518f71;
  iVar2 = core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_00518130();
  iVar4 = iVar2;
  if ((param_4 & 1) != 0) {
    iVar5 = 0;
    iVar4 = param_3;
    if (0 < *(int *)(iVar2 + 0x28558)) {
      do {
        pfStack_50 = &local_28;
        local_1c = iVar5 * 0x30;
        piStack_58 = (int *)0x518fad;
        puStack_54 = (byte *)iVar4;
        core_xform_cpp_getTranslation_FUN_0055bc00();
        local_4c = (int)ROUND(local_28 * _DAT_005a1ea8);
        local_48 = (int)ROUND(local_24 * _DAT_005a1ea8);
        local_44 = (int)ROUND(local_20 * _DAT_005a1ea8);
        puStack_54 = (byte *)(*DAT_005ae704 + local_1c);
        iVar5 = iVar5 + 1;
        piStack_58 = (int *)0x518ff1;
        pfStack_50 = (float *)&local_4c;
        wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c();
        iVar4 = iVar4 + 0x30;
      } while (iVar5 < *(int *)(iVar2 + 0x28558));
    }
    local_14 = 0;
    _DAT_01c00c70 = param_2;
    iVar4 = param_2;
    if (0 < *(int *)(iVar2 + 0x28558)) {
      iVar5 = 0;
      local_18 = iVar2;
      do {
        iVar4 = *(int *)(local_18 + 0x2857c);
        if (-1 < iVar4) {
          iVar1 = *DAT_005ae704;
          puVar6 = (uint *)(iVar4 * 0x30 + iVar1);
          puVar7 = auStack_7c;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
            puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
          }
          puVar6 = (uint *)(iVar1 + iVar5);
          puVar7 = auStack_ac;
          for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
            puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
          }
          iVar4 = engine_3d_c_clipAndDrawLine2D_FUN_00409290();
        }
        iVar5 = iVar5 + 0x30;
        local_18 = local_18 + 0x24;
        local_14 = local_14 + 1;
      } while (local_14 < *(int *)(iVar2 + 0x28558));
    }
  }
  if (((param_4 & 2) != 0) && (iVar5 = 0, 0 < *(int *)(iVar2 + 0x28558))) {
    do {
      pfStack_50 = (float *)local_40;
      piStack_58 = (int *)0x5190a7;
      puStack_54 = (byte *)param_3;
      core_xform_cpp_matrixToEulerAngles_FUN_0055b180();
      pfStack_50 = (float *)local_34;
      piStack_58 = (int *)0x5190b5;
      puStack_54 = (byte *)param_3;
      core_xform_cpp_getTranslation_FUN_0055bc00();
      pfStack_50 = (float *)local_34;
      puStack_54 = local_40;
      piStack_58 = DAT_005ae704;
      uStack_5c = 0x5190ce;
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0();
      pfStack_50 = (float *)0xff;
      puStack_54 = (byte *)0x3f000000;
      piStack_58 = (int *)0x01BCD074;
      uStack_5c = 0x5190e6;
      FUN_00472de0();
      pfStack_50 = (float *)DAT_005ae704;
      iVar5 = iVar5 + 1;
      param_3 = param_3 + 0x30;
      puStack_54 = (byte *)0x5190f9;
      iVar4 = engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0();
    } while (iVar5 < *(int *)(iVar2 + 0x28558));
  }
  return iVar4;
}
