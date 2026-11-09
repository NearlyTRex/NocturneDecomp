// Name: engine_mini3d.cpp_FUN_00516fd0
// Address: 00516fd0
// Address Range: [[00516fd0, 0051723f]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_00516fd0(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_00516fd0(int param_1,int param_2,int param_3)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  int local_20;
  
  fVar1 = (*(float *)(param_2 + 0x18) - *(float *)(param_1 + 0x18)) *
          (*(float *)(param_3 + 0x14) - *(float *)(param_2 + 0x14));
  fVar2 = (*(float *)(param_2 + 0x14) - *(float *)(param_1 + 0x14)) *
          (*(float *)(param_3 + 0x18) - *(float *)(param_2 + 0x18));
  if (_DAT_01d22578 == 0) {
    if (fVar2 <= fVar1) {
      return;
    }
  }
  else if (fVar1 <= fVar2) {
    return;
  }
  _DAT_01d2c5c8 = 0x4b0;
  _DAT_01d2c5cc = 0;
  _DAT_01d2c0c4 = 0;
  engine_mini3d_cpp_FUN_00516e40(param_1,param_2);
  engine_mini3d_cpp_FUN_00516e40(param_2,param_3);
  engine_mini3d_cpp_FUN_00516e40(param_3,param_1);
  piVar3 = (int *)&DAT_01d2c0c8;
  iVar7 = 0;
  if (0 < _DAT_01d2c0c4) {
    do {
      if ((_DAT_01d2c5c8 == *piVar3) && (piVar3 != (int *)0x0)) goto LAB_005170b2;
      iVar7 = iVar7 + 1;
      piVar3 = piVar3 + 0x14;
    } while (iVar7 < _DAT_01d2c0c4);
  }
  piVar3 = (int *)0x0;
LAB_005170b2:
  if (piVar3 != (int *)0x0) {
    iVar7 = 0;
    piVar4 = (int *)&DAT_01d2c0c8;
    if (0 < _DAT_01d2c0c4) {
      do {
        if ((_DAT_01d2c5c8 == *piVar4) && (piVar4 != piVar3)) goto LAB_005170e3;
        iVar7 = iVar7 + 1;
        piVar4 = piVar4 + 0x14;
      } while (iVar7 < _DAT_01d2c0c4);
    }
    piVar4 = (int *)0x0;
LAB_005170e3:
    if (piVar4 != (int *)0x0) {
      local_20 = _DAT_01d2c5c8;
      do {
        if (piVar3[1] <= local_20) {
          *piVar3 = -1;
          iVar7 = 0;
          piVar3 = (int *)&DAT_01d2c0c8;
          if (0 < _DAT_01d2c0c4) {
            do {
              if ((local_20 == *piVar3) && (piVar3 != piVar4)) goto LAB_00517128;
              iVar7 = iVar7 + 1;
              piVar3 = piVar3 + 0x14;
            } while (iVar7 < _DAT_01d2c0c4);
          }
          piVar3 = (int *)0x0;
LAB_00517128:
          if (piVar3 == (int *)0x0) {
            return;
          }
        }
        if (piVar4[1] <= local_20) {
          *piVar4 = -1;
          iVar7 = 0;
          piVar4 = (int *)&DAT_01d2c0c8;
          if (0 < _DAT_01d2c0c4) {
            do {
              if ((local_20 == *piVar4) && (piVar4 != piVar3)) goto LAB_00517165;
              iVar7 = iVar7 + 1;
              piVar4 = piVar4 + 0x14;
            } while (iVar7 < _DAT_01d2c0c4);
          }
          piVar4 = (int *)0x0;
LAB_00517165:
          if (piVar4 == (int *)0x0) {
            return;
          }
        }
        iVar7 = piVar3[2];
        iVar6 = piVar4[2];
        iVar5 = iVar7;
        if (iVar6 < iVar7) {
          iVar5 = iVar6;
          iVar6 = iVar7;
        }
        iVar5 = iVar5 >> 0x10;
        puVar8 = (uint *)(*(int *)(&DAT_01c4354c + local_20 * 4) + iVar5 * 4);
        for (; iVar5 < iVar6 >> 0x10; iVar5 = iVar5 + 1) {
          *puVar8 = 0x80000000;
          puVar8 = puVar8 + 1;
        }
        piVar3[2] = piVar3[2] + piVar3[3];
        local_20 = local_20 + 1;
        piVar4[2] = piVar4[2] + piVar4[3];
      } while( true );
    }
  }
  return;
}
