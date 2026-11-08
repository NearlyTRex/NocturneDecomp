// Name: FUN_004ac4c0
// Address: 004ac4c0
// Address Range: [[004ac4c0, 004ac533] [004ac895, 004ac8d3] [004ac9a6, 004ac9d0]]
// Convention: unknown
// Signature: void FUN_004ac4c0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ac4c0(int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  float afStackY_1038 [981];
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_78;
  uint uStack_74;
  float fStack_70;
  uint uStack_6c;
  uint uStack_68;
  float fStack_64;
  uint uStack_60;
  float fStack_5c;
  uint uStack_58;
  int iStack_54;
  float fStack_50;
  float afStack_4c [4];
  int iStack_3c;
  uint uStack_38;
  float fStack_2c;
  float afStack_28 [4];
  uint uStack_18;
  float fStack_10;
  int iStack_c;
  float fStack_8;
  
  bVar6 = 0;
  _DAT_01cb0620 = *(float *)(param_1 + 0x2b8);
  iVar2 = FUN_004ace60();
  if (iVar2 == param_1) {
    fVar1 = param_2 * _DAT_005f71ec + *(float *)(param_1 + 0x2b8);
    *(float *)(param_1 + 0x2b8) = fVar1;
    if (0x450FC000 <= fVar1) {
      *(float *)(param_1 + 0x2b8) = *(float *)(param_1 + 0x2b8) - 0x450FC000;
    }
  }
  else {
    *(uint *)(param_1 + 0x2b8) = *(uint *)(iVar2 + 0x2b8);
  }
  if (*(float *)(param_1 + 0x2b8) < _DAT_01cb0620) {
    _DAT_01cb0620 = _DAT_01cb0620 - 0x450FC000;
  }
  FUN_004accb0(param_1);
  switch(*(uint *)(param_1 + 0x2b4)) {
  case 0:
    iVar2 = *(int *)(param_1 + 0x2b8);
    if ((0x44ac8000 < iVar2) && (iVar2 < 0x44c58000)) {
      if (iVar2 < 0x44b90000) {
        fStack_10 = (*(float *)(param_1 + 0x2b8) + _DAT_005d6c91) * (float)_DAT_005d6c81 *
                    (float)_DAT_005d6c99 + _DAT_005d6ca1;
      }
      else {
        fStack_10 = (_DAT_005d6c79 - *(float *)(param_1 + 0x2b8)) * (float)_DAT_005d6c81 *
                    (float)_DAT_005d6c89;
      }
      iStack_c = FUN_004ac9e0(param_1,fStack_10,param_2);
      fStack_8 = (float)iStack_c;
      (**(code **)(*(int *)(param_1 + 0x2b0) + 0x24))(param_1);
      fVar1 = fStack_8;
      iVar3 = 0;
      puVar4 = (uint *)&stack0xffffff5c;
      puVar5 = &stack0xffffff8c;
      for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
        puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
      }
      if (0 < (int)fVar1) {
        do {
          afStack_28[2] = (float)FUN_0040cf60(uStack_74,uStack_68);
          fStack_8 = afStack_28[2];
          fStack_8 = (float)FUN_0040cf60(0,0x3ecccccd);
          afStack_28[3] = (1.0 - fStack_8) * fStack_70 + fStack_64 * fStack_8;
          uStack_18 = FUN_0040cf60(uStack_6c,uStack_60);
          fStack_8 = (float)uStack_18;
          FUN_00408d70(param_1,afStack_28 + 2);
          fStack_2c = (float)uStack_38;
          afStack_28[(uint)bVar6 * -2] = afStack_4c[(uint)bVar6 * -2 + 6];
          afStack_28[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
               afStack_4c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
          if (afStack_28 + 2 != afStack_4c + 8) {
            afStack_28[2] = fStack_2c;
            afStack_28[3] = afStack_28[0];
            uStack_18 = afStack_28[1];
          }
          fStack_8 = (float)FUN_0040cf60(0x3f000000,0x3fc00000,0,0xffff);
          FUN_0049d230(0x01C3DEB4,afStack_28 + 2,fStack_8);
          iVar3 = iVar3 + 1;
        } while (iVar3 < iStack_c);
      }
    }
    if ((0x44e10000 < *(int *)(param_1 + 0x2b8)) && (*(int *)(param_1 + 0x2b8) < 0x44ed8000)) {
      (**(code **)(*(int *)(param_1 + 0x2b0) + 0x24))(param_1);
      puVar4 = (uint *)&stack0xffffff44;
      puVar5 = &stack0xffffff74;
      for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
        puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
      }
      fStack_5c = (float)FUN_0040cf60(uStack_8c,uStack_80);
      uStack_58 = uStack_88;
      fStack_8 = fStack_5c;
      iStack_54 = FUN_0040cf60(uStack_84,uStack_78);
      fStack_8 = (float)iStack_54;
      FUN_00408d70(param_1,&fStack_5c);
      afStack_4c[2] = fStack_50;
      afStack_4c[(uint)bVar6 * -2 + 3] = afStack_4c[(uint)bVar6 * -2];
      afStack_4c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
           afStack_4c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      if (&fStack_5c != afStack_4c + 2) {
        fStack_5c = afStack_4c[2];
        uStack_58 = afStack_4c[3];
        iStack_54 = iStack_3c;
      }
      FUN_0049d090(0x01C3DEB4,&fStack_5c,0,0x4000,0x10000,0,0xffff);
    }
    FUN_004aca40(param_1,0x3f800000,"frankx-bed1.wav");
    FUN_004aca40(param_1,0x43ed8000,"frankx-bed2.wav");
    FUN_004aca40(param_1,0x444a4000,"frankx-bed3.wav");
    FUN_004aca40(param_1,0x44834000,"frankx-bed4.wav");
    FUN_004aca40(param_1,0x44ac8000,"frankx-water-dip.wav");
    FUN_004aca40(param_1,0x44ff0000,"frankx-big-ramp-bed5.wav");
LAB_004ac88d:
    return;
  case 1:
    FUN_004aca40(param_1,0x43030000,"frankx-crane1.wav");
    return;
  case 2:
    FUN_004aca40(param_1,0x4403c000,"frankx-crane2.wav");
    return;
  case 3:
    FUN_004aca40(param_1,0x44882000,"frankx-crane3.wav");
    return;
  case 4:
  case 7:
    goto LAB_004ac88d;
  case 5:
    FUN_004aca40(param_1,0x44580000,"frankx-arm.wav");
    return;
  case 6:
    FUN_004aca40(param_1,0x44d4c000,"frankx-flap-up.wav");
    FUN_004aca40(param_1,0x44eb2000,"frankx-flap-down.wav");
    return;
  case 8:
    FUN_004aca40(param_1,0x44f3c000,"frankx-big-ramp.wav");
    return;
  default:
    _DAT_01d046a0 = "..\\core\\frankgen.cpp";
    _DAT_01d046a4 = 0x13e;
    FUN_004e4500(0x5d6c73);
    return;
  }
}
