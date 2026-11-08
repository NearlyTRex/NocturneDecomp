// Name: FUN_004dcdb0
// Address: 004dcdb0
// Address Range: [[004dcdb0, 004dd2ba]]
// Convention: unknown
// Signature: void FUN_004dcdb0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004dcdb0(int param_1)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  
  if (((*(int *)(param_1 + 0x338) != 0) &&
      (iVar9 = FUN_0040c840(*(uint *)(*(int *)(param_1 + 0x338) + 0x304),_DAT_01d5ba70),
      iVar9 != 0)) &&
     (((*(int *)(*(int *)(param_1 + 0x338) + 0x56c) == 10 &&
       (*(int *)(param_1 + 0x46c) != *(int *)(iVar9 + 0x20b80))) ||
      ((*(int *)(*(int *)(param_1 + 0x338) + 0x56c) == 0xb &&
       (*(int *)(param_1 + 0x468) != *(int *)(iVar9 + 0x20b84))))))) {
    FUN_004dd340(param_1,0);
    if (*(int *)(*(int *)(param_1 + 0x338) + 0x56c) == 10) {
      *(uint *)(param_1 + 0x46c) = *(uint *)(iVar9 + 0x20b80);
    }
    else {
      *(uint *)(param_1 + 0x468) = *(uint *)(iVar9 + 0x20b84);
    }
  }
  if ((((*(int *)(0x01D2130C + 0x264) != 0) || (*(int *)(0x01D1A05C + 0x40) != 0)) ||
      (DAT_007dffb4 != 0)) || (*(int *)(0x01D2130C + 0x24c) != 0)) {
    *(uint *)(param_1 + 0x344) = 0;
    *(uint *)(param_1 + 0x34c) = 0;
    *(uint *)(param_1 + 0x350) = 0;
    *(uint *)(param_1 + 0x340) = 0;
  }
  *(float *)(param_1 + 0x340) = *(float *)(param_1 + 0x340) - *(float *)(0x01D2130C + 0x314);
  if (*(float *)(param_1 + 0x340) <= 0.0) {
    *(uint *)(param_1 + 0x340) = 0;
  }
  *(float *)(param_1 + 0x344) = *(float *)(param_1 + 0x344) - *(float *)(0x01D2130C + 0x314);
  if (*(float *)(param_1 + 0x344) <= 0.0) {
    *(uint *)(param_1 + 0x344) = 0;
  }
  *(float *)(param_1 + 0x348) = *(float *)(param_1 + 0x348) - *(float *)(0x01D2130C + 0x314);
  if (*(float *)(param_1 + 0x348) <= 0.0) {
    *(uint *)(param_1 + 0x348) = 0;
  }
  *(float *)(param_1 + 0x34c) = *(float *)(param_1 + 0x34c) - *(float *)(0x01D2130C + 0x314);
  if (*(float *)(param_1 + 0x34c) <= 0.0) {
    *(byte *)(param_1 + 0x354) = 0;
    *(uint *)(param_1 + 0x34c) = 0;
  }
  *(float *)(param_1 + 0x350) = *(float *)(param_1 + 0x350) - *(float *)(0x01D2130C + 0x314);
  if (*(float *)(param_1 + 0x350) < 0.0) {
    *(uint *)(param_1 + 0x350) = 0;
  }
  if ((*(int *)(param_1 + 0xc) != 0) &&
     (_DAT_01d5be80 = _DAT_01d5be80 - *(float *)(0x01D2130C + 0x314), _DAT_01d5be80 <= 0.0)) {
    _DAT_01d5be80 = (float)FUN_0040ce40(0x3dcccccd,0x3ecccccd);
    iVar10 = 0;
    iVar9 = 0;
    _DAT_01d70a20 = 0xffffffff;
    while (iVar10 < *(int *)(0x01ED78C8 + 0x14f0a8)) {
      iVar5 = FUN_0040c840(*(uint *)(iVar9 + 0x14f0ac + 0x01ED78C8),_DAT_01c5bc48);
      if (((iVar5 == 0) ||
          (iVar6 = (**(code **)(*(int *)(iVar5 + 0x154) + 0x10c))(iVar5), iVar6 != 0)) ||
         ((iVar6 = FUN_0040c790(iVar5,"CTVBat"), iVar6 != 0 ||
          (iVar6 = FUN_0040c790(iVar5,"CWhitewolf"), iVar6 != 0)))) {
LAB_004dd05b:
        iVar10 = iVar10 + 1;
        iVar9 = iVar9 + 4;
      }
      else {
        iVar6 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
        fVar2 = *(float *)(iVar6 + 0x20) - *(float *)(iVar5 + 0x20);
        fVar4 = *(float *)(iVar6 + 0x24) - *(float *)(iVar5 + 0x24);
        fVar3 = *(float *)(iVar6 + 0x28) - *(float *)(iVar5 + 0x28);
        fVar2 = fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2;
        dVar1 = (double)fVar2;
        if ((float)_DAT_005c65df < fVar2) goto LAB_004dd05b;
        if (dVar1 <= _DAT_005c65e7) {
          if (dVar1 <= _DAT_005c65ef) {
            if (dVar1 <= _DAT_005c65f7) {
              _DAT_01d70a20 = 0;
              iVar6 = 0;
              while (iVar7 = FUN_00560af0(0x02CF5680,*(uint *)(iVar6 + 0x1d70a24)),
                    iVar7 != 0) {
                iVar6 = iVar6 + 4;
                if (0xf < iVar6) {
                  return;
                }
              }
              uVar8 = FUN_005609b0(0x02CF5680,0,"voodoo1.wav");
              *(uint *)(iVar5 + 0x27ac) = uVar8;
              *(uint *)(iVar6 + 0x1d70a24) = uVar8;
              iVar10 = iVar10 + 1;
              iVar9 = iVar9 + 4;
            }
            else {
              _DAT_01d70a20 = 1;
              iVar6 = 0;
              while (iVar7 = FUN_00560af0(0x02CF5680,*(uint *)(iVar6 + 0x1d70a24)),
                    iVar7 != 0) {
                iVar6 = iVar6 + 4;
                if (0xf < iVar6) {
                  return;
                }
              }
              uVar8 = FUN_005609b0(0x02CF5680,0,"voodoo2.wav");
              *(uint *)(iVar5 + 0x27ac) = uVar8;
              *(uint *)(iVar6 + 0x1d70a24) = uVar8;
              iVar10 = iVar10 + 1;
              iVar9 = iVar9 + 4;
            }
          }
          else {
            _DAT_01d70a20 = 2;
            iVar6 = 0;
            while (iVar7 = FUN_00560af0(0x02CF5680,*(uint *)(iVar6 + 0x1d70a24)), iVar7 != 0
                  ) {
              iVar6 = iVar6 + 4;
              if (0xf < iVar6) {
                return;
              }
            }
            uVar8 = FUN_005609b0(0x02CF5680,0,"voodoo3.wav");
            *(uint *)(iVar5 + 0x27ac) = uVar8;
            *(uint *)(iVar6 + 0x1d70a24) = uVar8;
            iVar10 = iVar10 + 1;
            iVar9 = iVar9 + 4;
          }
        }
        else {
          _DAT_01d70a20 = 3;
          iVar6 = 0;
          while (iVar7 = FUN_00560af0(0x02CF5680,*(uint *)(iVar6 + 0x1d70a24)), iVar7 != 0)
          {
            iVar6 = iVar6 + 4;
            if (0xf < iVar6) {
              return;
            }
          }
          uVar8 = FUN_005609b0(0x02CF5680,0,"voodoo4.wav");
          *(uint *)(iVar5 + 0x27ac) = uVar8;
          *(uint *)(iVar6 + 0x1d70a24) = uVar8;
          iVar10 = iVar10 + 1;
          iVar9 = iVar9 + 4;
        }
      }
    }
  }
  return;
}
