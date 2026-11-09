// Name: engine_mini3d.cpp_FUN_00516060
// Address: 00516060
// Address Range: [[00516060, 005168b1]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_00516060(float *param_1,float *param_2,float *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_00516060(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  int local_18;
  int *local_14;
  
  local_28 = param_2[6] - param_1[6];
  local_2c = param_3[5] - param_2[5];
  local_20 = local_28 * local_2c;
  local_30 = param_2[5] - param_1[5];
  local_24 = param_3[6] - param_2[6];
  local_1c = local_30 * local_24;
  if (_DAT_01d22578 == 0) {
    if (local_1c <= local_20) {
      return;
    }
  }
  else if (local_20 <= local_1c) {
    return;
  }
  if (_DAT_01c50948 != 0) {
    local_c0 = engine_mini3d_cpp_FUN_00516040(*param_1 * _DAT_005e8f2b);
    local_bc = engine_mini3d_cpp_FUN_00516040(param_1[1] * _DAT_005e8f2b);
    local_b8 = engine_mini3d_cpp_FUN_00516040(param_1[2] * _DAT_005e8f2b);
    local_b4 = engine_mini3d_cpp_FUN_00516040(param_1[3] * _DAT_005e8f2f);
    local_b0 = engine_mini3d_cpp_FUN_00516040(param_1[5] * _DAT_005e8f33);
    local_ac = engine_mini3d_cpp_FUN_00516040(param_1[6] * _DAT_005e8f33);
    local_a8 = engine_mini3d_cpp_FUN_00516040(param_1[7] * _DAT_005e8f2b * _DAT_005e8f33);
    local_a4 = engine_mini3d_cpp_FUN_00516040(param_1[8] * _DAT_005e8f2b * _DAT_005e8f33);
    local_a0 = engine_mini3d_cpp_FUN_00516040(param_1[0xb] * _DAT_005e8f37);
    local_9c = engine_mini3d_cpp_FUN_00516040(param_1[10] * _DAT_005e8f37);
    local_98 = engine_mini3d_cpp_FUN_00516040(param_1[9] * _DAT_005e8f37);
    if ((DAT_01d224b8 & 8) == 0) {
      fVar1 = param_1[0xc];
    }
    else {
      fVar1 = param_1[0xd];
    }
    local_94 = engine_mini3d_cpp_FUN_00516040(fVar1 * _DAT_005e8f37);
    local_90 = engine_mini3d_cpp_FUN_00516040(*param_2 * _DAT_005e8f2b);
    local_8c = engine_mini3d_cpp_FUN_00516040(param_2[1] * _DAT_005e8f2b);
    local_88 = engine_mini3d_cpp_FUN_00516040(param_2[2] * _DAT_005e8f2b);
    local_84 = engine_mini3d_cpp_FUN_00516040(param_2[3] * _DAT_005e8f2f);
    local_80 = engine_mini3d_cpp_FUN_00516040(param_2[5] * _DAT_005e8f33);
    local_7c = engine_mini3d_cpp_FUN_00516040(param_2[6] * _DAT_005e8f33);
    local_78 = engine_mini3d_cpp_FUN_00516040(param_2[7] * _DAT_005e8f2b * _DAT_005e8f33);
    local_74 = engine_mini3d_cpp_FUN_00516040(param_2[8] * _DAT_005e8f2b * _DAT_005e8f33);
    local_70 = engine_mini3d_cpp_FUN_00516040(param_2[0xb] * _DAT_005e8f37);
    local_6c = engine_mini3d_cpp_FUN_00516040(param_2[10] * _DAT_005e8f37);
    local_68 = engine_mini3d_cpp_FUN_00516040(param_2[9] * _DAT_005e8f37);
    if ((DAT_01d224b8 & 8) == 0) {
      fVar1 = param_2[0xc];
    }
    else {
      fVar1 = param_2[0xd];
    }
    local_64 = engine_mini3d_cpp_FUN_00516040(fVar1 * _DAT_005e8f37);
    local_60 = engine_mini3d_cpp_FUN_00516040(*param_3 * _DAT_005e8f2b);
    local_5c = engine_mini3d_cpp_FUN_00516040(param_3[1] * _DAT_005e8f2b);
    local_58 = engine_mini3d_cpp_FUN_00516040(param_3[2] * _DAT_005e8f2b);
    local_54 = engine_mini3d_cpp_FUN_00516040(param_3[3] * _DAT_005e8f2f);
    local_50 = engine_mini3d_cpp_FUN_00516040(param_3[5] * _DAT_005e8f33);
    local_4c = engine_mini3d_cpp_FUN_00516040(param_3[6] * _DAT_005e8f33);
    local_48 = engine_mini3d_cpp_FUN_00516040
                         (param_3[7] * (float)_DAT_005e8f3b * (float)_DAT_005e8f43);
    local_44 = engine_mini3d_cpp_FUN_00516040
                         (param_3[8] * (float)_DAT_005e8f3b * (float)_DAT_005e8f43);
    local_40 = engine_mini3d_cpp_FUN_00516040(param_3[0xb] * _DAT_005e8f37);
    local_3c = engine_mini3d_cpp_FUN_00516040(param_3[10] * _DAT_005e8f37);
    local_38 = engine_mini3d_cpp_FUN_00516040(param_3[9] * _DAT_005e8f37);
    if ((DAT_01d224b8 & 8) == 0) {
      fVar1 = param_3[0xc];
    }
    else {
      fVar1 = param_3[0xd];
    }
    local_34 = engine_mini3d_cpp_FUN_00516040(fVar1 * _DAT_005e8f37);
    engine_special_cpp_drawPolygon_FUN_00582340(&local_c0,3,_DAT_01c51d14);
    return;
  }
  _DAT_01d2c5cc = _DAT_01c50948;
  _DAT_01d2c0c4 = _DAT_01c50948;
  _DAT_01d2c5c8 = 0x4b0;
  engine_mini3d_cpp_FUN_00515bd0(param_1,param_2);
  engine_mini3d_cpp_FUN_00515bd0(param_2,param_3);
  engine_mini3d_cpp_FUN_00515bd0(param_3,param_1);
  local_14 = (int *)&DAT_01d2c0c8;
  iVar3 = 0;
  if (0 < _DAT_01d2c0c4) {
    do {
      if ((_DAT_01d2c5c8 == *local_14) && (local_14 != (int *)0x0)) goto LAB_00516180;
      iVar3 = iVar3 + 1;
      local_14 = local_14 + 0x14;
    } while (iVar3 < _DAT_01d2c0c4);
  }
  local_14 = (int *)0x0;
LAB_00516180:
  if (local_14 != (int *)0x0) {
    iVar3 = 0;
    piVar2 = (int *)&DAT_01d2c0c8;
    if (0 < _DAT_01d2c0c4) {
      do {
        if ((_DAT_01d2c5c8 == *piVar2) && (piVar2 != local_14)) goto LAB_005161c2;
        iVar3 = iVar3 + 1;
        piVar2 = piVar2 + 0x14;
      } while (iVar3 < _DAT_01d2c0c4);
    }
    piVar2 = (int *)0x0;
LAB_005161c2:
    if (piVar2 != (int *)0x0) {
      local_18 = _DAT_01d2c5c8;
      do {
        iVar3 = _DAT_01d2c0c4;
        if (local_14[1] <= local_18) {
          *local_14 = -1;
          local_14 = (int *)&DAT_01d2c0c8;
          iVar4 = 0;
          if (0 < iVar3) {
            do {
              if ((local_18 == *local_14) && (local_14 != piVar2)) goto LAB_00516220;
              iVar4 = iVar4 + 1;
              local_14 = local_14 + 0x14;
            } while (iVar4 < _DAT_01d2c0c4);
          }
          local_14 = (int *)0x0;
LAB_00516220:
          if (local_14 == (int *)0x0) {
            return;
          }
        }
        if (piVar2[1] <= local_18) {
          *piVar2 = -1;
          iVar3 = 0;
          piVar2 = (int *)&DAT_01d2c0c8;
          if (0 < _DAT_01d2c0c4) {
            do {
              if ((local_18 == *piVar2) && (piVar2 != local_14)) goto LAB_00516276;
              iVar3 = iVar3 + 1;
              piVar2 = piVar2 + 0x14;
            } while (iVar3 < _DAT_01d2c0c4);
          }
          piVar2 = (int *)0x0;
LAB_00516276:
          if (piVar2 == (int *)0x0) {
            return;
          }
        }
        if (_DAT_01c51d00 == 0) {
          if (DAT_0061b4a0 == 0x20) {
            engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_0057fb03();
          }
          else {
            engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_0057fd39();
          }
        }
        else if (DAT_0061b4a0 == 0x20) {
          engine_special_cpp_FUN_0057eeac();
        }
        else {
          engine_special_cpp_FUN_0057f473();
        }
        local_14[2] = local_14[2] + local_14[3];
        local_14[6] = local_14[6] + local_14[7];
        local_14[8] = local_14[8] + local_14[9];
        local_14[10] = local_14[10] + local_14[0xb];
        local_14[4] = local_14[4] + local_14[5];
        local_14[0xe] = local_14[0xe] + local_14[0xf];
        local_14[0x10] = local_14[0x10] + local_14[0x11];
        local_14[0x12] = local_14[0x12] + local_14[0x13];
        local_14[0xc] = local_14[0xc] + local_14[0xd];
        piVar2[2] = piVar2[2] + piVar2[3];
        piVar2[6] = piVar2[6] + piVar2[7];
        piVar2[8] = piVar2[8] + piVar2[9];
        piVar2[10] = piVar2[10] + piVar2[0xb];
        piVar2[4] = piVar2[4] + piVar2[5];
        local_18 = local_18 + 1;
        piVar2[0xe] = piVar2[0xe] + piVar2[0xf];
        piVar2[0x10] = piVar2[0x10] + piVar2[0x11];
        piVar2[0x12] = piVar2[0x12] + piVar2[0x13];
        piVar2[0xc] = piVar2[0xc] + piVar2[0xd];
      } while( true );
    }
  }
  return;
}
