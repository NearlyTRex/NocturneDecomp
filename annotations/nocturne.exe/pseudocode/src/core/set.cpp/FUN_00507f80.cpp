// Name: core_set.cpp_FUN_00507f80
// Address: 00507f80
// Address Range: [[00507f80, 005084b0]]
// Convention: unknown
// Signature: void core_set_cpp_FUN_00507f80(int *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_set_cpp_FUN_00507f80(int *param_1,int param_2)

{
  byte uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  bool bVar9;
  byte bVar10;
  uint auStackY_1834 [1443];
  byte auStack_170 [256];
  byte auStack_70 [24];
  uint uStack_58;
  uint auStack_54 [5];
  int *piStack_40;
  int iStack_3c;
  int *piStack_38;
  int *piStack_34;
  int *piStack_30;
  int *piStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  bVar10 = 0;
  auStack_54[3] = 0;
  bVar9 = _DAT_01fb99d0 == 0;
  if (bVar9) {
    core_set_cpp_CDemonSet_initScene_FUN_005084c0();
  }
  auStack_54[3] = (uint)bVar9;
  iStack_20 = 0;
  if (0 < *param_1) {
    piStack_30 = param_1 + 0x6592;
    auStack_54[4] = param_2 + 1;
    piStack_40 = param_1 + 1;
    piStack_38 = param_1 + 0x5f;
    iStack_3c = 0;
    piStack_34 = param_1;
    piStack_2c = piStack_30;
    do {
      FUN_005148b0(piStack_40 + iStack_20 * 0x68,0x1fb8508);
      core_dcamera_cpp_CDemonCamera_beginScene_FUN_00440290(0x1fb8508,0);
      _DAT_01fba938 = 1;
      core_set_cpp_CDemonSet_renderSceneGeometry_FUN_00507c80();
      core_dcamera_cpp_CDemonCamera_endScene_FUN_00440a20(0x1fb8508,0);
      FUN_004421b0();
      piVar2 = (int *)FUN_00447f20(0x1fb8508,auStack_70);
      if (piVar2 != piStack_38) {
        *piStack_38 = *piVar2;
        piStack_38[1] = piVar2[1];
        piStack_38[2] = piVar2[2];
      }
      if (piStack_38 + 3 != piVar2 + 3) {
        piStack_38[3] = piVar2[3];
        piStack_38[4] = piVar2[4];
        piStack_38[5] = piVar2[5];
      }
      _sprintf(auStack_170,"Camera box (%7.2f, %7.2f, %7.2f) - (%7.2f, %7.2f, %7.2f)",
                 (double)(float)piStack_34[0x5f],(double)(float)piStack_34[0x60],
                 (double)(float)piStack_34[0x61],(double)(float)piStack_34[0x62],
                 (double)(float)piStack_34[99],(double)(float)piStack_34[100]);
      engine_2d_c_drawText_FUN_00402600();
      iStack_1c = 0x21;
      iStack_24 = param_1[0x6591];
      iStack_14 = 0;
      if (param_2 != -1) {
        iStack_24 = auStack_54[4];
        iStack_14 = param_2;
      }
      if (iStack_14 < iStack_24) {
        iStack_28 = iStack_3c;
        iStack_18 = iStack_14 * 0x1898 + iStack_20 + (int)param_1;
        iVar5 = iStack_3c + iStack_14 * 0x1898 + (int)param_1;
        do {
          iVar4 = iStack_14;
          if (param_1[iStack_14 * 0x626 + 0x6592] == 0) {
            iVar4 = 0;
            if (0 < _DAT_01fb99d0) {
              iVar6 = 0;
              do {
                iVar3 = _strcmp(*(uint *)(&DAT_01fb99d4 + iVar6));
                if (iVar3 == 0) break;
                iVar4 = iVar4 + 1;
                iVar6 = iVar6 + 4;
              } while (iVar4 < _DAT_01fb99d0);
            }
            if (iVar4 == _DAT_01fb99d0) {
              _DAT_01cc4800 = "..\\core\\set.cpp";
              _DAT_01cc4804 = 0x2e8;
              FUN_004c8440();
            }
            core_dcamera_cpp_CDemonCamera_precomputeLight_FUN_00441c50();
            uVar1 = core_dcamera_cpp_CDemonCamera_isCoronaSufficientlyVisible_FUN_00444e20
                              (0x1fb8508);
            *(byte *)(iStack_18 + 0x19770) = uVar1;
            FUN_00444ef0(0x1fb8508);
            puVar7 = (uint *)(iVar5 + 0x19870 + (uint)bVar10 * -8);
            *(uint *)(iVar5 + 0x1986c) = uStack_58;
            puVar8 = puVar7 + (uint)bVar10 * -2 + 1;
            *puVar7 = auStack_54[(uint)bVar10 * -2];
            *puVar8 = auStack_54[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
            puVar8[(uint)bVar10 * -2 + 1] =
                 (auStack_54 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
            if (*(char *)(iStack_18 + 0x19770) != '\0') {
              _sprintf();
              engine_2d_c_drawText_FUN_00402600();
              iStack_1c = iStack_1c + 0xb;
            }
          }
          else {
            core_dcamera_cpp_CDemonCamera_beginScene_FUN_00440290(0x1fb8508);
            uVar1 = FUN_00515c40();
            *(byte *)((int)param_1 + iStack_20 + 0x19770 + iVar4 * 0x1898) = uVar1;
            core_dcamera_cpp_CDemonCamera_endScene_FUN_00440a20(0x1fb8508);
            *(uint *)((int)param_1 + iStack_28 + iVar4 * 0x1898 + 0x1986c) = 0;
            *(uint *)((int)param_1 + iStack_28 + iVar4 * 0x1898 + 0x19870) = 0;
            *(uint *)((int)param_1 + iStack_28 + iVar4 * 0x1898 + 0x19874) = 0;
            *(uint *)((int)param_1 + iStack_28 + iVar4 * 0x1898 + 0x19878) = 0;
          }
          iVar5 = iVar5 + 0x1898;
          iStack_18 = iStack_18 + 0x1898;
          iStack_14 = iStack_14 + 1;
        } while (iStack_14 < iStack_24);
      }
      _sprintf();
      engine_2d_c_drawText_FUN_00402600();
      wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
      piStack_38 = piStack_38 + 0x68;
      piStack_34 = piStack_34 + 0x68;
      iStack_3c = iStack_3c + 0x10;
      iStack_20 = iStack_20 + 1;
    } while (iStack_20 < *param_1);
  }
  if (auStack_54[3] != 0) {
    core_set_cpp_FUN_0050ad20();
    _DAT_01fba938 = 0;
    return;
  }
  _DAT_01fba938 = 0;
  return;
}
