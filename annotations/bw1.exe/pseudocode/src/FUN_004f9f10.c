// Name: FUN_004f9f10
// Address: 004f9f10
// Address Range: [[004f9f10, 004fa468]]
// Convention: unknown
// Signature: void FUN_004f9f10(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f9f10(int param_1)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int local_1c;
  
  if (*(int *)(param_1 + 0x338) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x338) + 0x568) != *(int *)(param_1 + 0x468)) {
      FUN_004fa6c0(param_1,0);
    }
    *(uint *)(param_1 + 0x468) = *(uint *)(*(int *)(param_1 + 0x338) + 0x568);
  }
  local_1c = 0;
  iVar10 = param_1;
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      iVar5 = FUN_0040c600(*(uint *)(iVar10 + 0x14),_DAT_01d1c27c);
      iVar6 = FUN_0040c600(*(uint *)(iVar10 + 0x14),_DAT_01d1c2b8);
      if ((iVar5 != 0) || (iVar6 != 0)) {
        if (iVar5 == 0) {
          if (*(int *)(iVar6 + 0x2d4) != 2) {
            (**(code **)(*(int *)(iVar6 + 0x154) + 0xc))
                      (iVar6,*(uint *)(0x01CCF390 + 0x294));
          }
        }
        else if (*(int *)(iVar5 + 0x2d4) != 2) {
          (**(code **)(*(int *)(iVar5 + 0x154) + 0xc))(iVar5,*(uint *)(0x01CCF390 + 0x294));
        }
      }
      local_1c = local_1c + 1;
      iVar10 = iVar10 + 4;
    } while (local_1c < *(int *)(param_1 + 0x10));
  }
  if ((((*(int *)(0x01CCF390 + 0x25c) != 0) || (*(int *)(0x01CC8004 + 0x40) != 0)) ||
      (DAT_007c3978 != 0)) || (*(int *)(0x01CCF390 + 0x244) != 0)) {
    *(uint *)(param_1 + 0x344) = 0;
    *(uint *)(param_1 + 0x34c) = 0;
    *(uint *)(param_1 + 0x350) = 0;
    *(uint *)(param_1 + 0x340) = 0;
  }
  fVar2 = *(float *)(param_1 + 0x340) - *(float *)(0x01CCF390 + 0x294);
  *(float *)(param_1 + 0x340) = fVar2;
  if (fVar2 <= 0.0) {
    *(uint *)(param_1 + 0x340) = 0;
  }
  fVar2 = *(float *)(param_1 + 0x344) - *(float *)(0x01CCF390 + 0x294);
  *(float *)(param_1 + 0x344) = fVar2;
  if (fVar2 <= 0.0) {
    *(uint *)(param_1 + 0x344) = 0;
  }
  fVar2 = *(float *)(param_1 + 0x348) - *(float *)(0x01CCF390 + 0x294);
  *(float *)(param_1 + 0x348) = fVar2;
  if (fVar2 <= 0.0) {
    *(uint *)(param_1 + 0x348) = 0;
  }
  fVar2 = *(float *)(param_1 + 0x34c) - *(float *)(0x01CCF390 + 0x294);
  *(float *)(param_1 + 0x34c) = fVar2;
  if (fVar2 <= 0.0) {
    *(byte *)(param_1 + 0x354) = 0;
    *(uint *)(param_1 + 0x34c) = 0;
  }
  fVar2 = *(float *)(param_1 + 0x350) - *(float *)(0x01CCF390 + 0x294);
  *(float *)(param_1 + 0x350) = fVar2;
  if (fVar2 < 0.0) {
    *(uint *)(param_1 + 0x350) = 0;
  }
  if ((*(int *)(param_1 + 0xc) != 0) &&
     (_DAT_01d06f70 = _DAT_01d06f70 - *(float *)(0x01CCF390 + 0x294), _DAT_01d06f70 <= 0.0)) {
    _DAT_01d06f70 = (float)FUN_0040cc00(0x3dcccccd,0x3ecccccd);
    iVar5 = 0;
    iVar10 = 0;
    _DAT_01d1bc48 = 0xffffffff;
    while (iVar5 < *(int *)(0x01E82168 + 0x14f0a8)) {
      iVar6 = *(int *)(iVar10 + 0x14f0ac + 0x01E82168);
      if (((*(int *)(iVar6 + 0x27a8) == 0) ||
          (iVar7 = FUN_0040c550(iVar6,"CBird"), iVar7 != 0)) ||
         (iVar7 = FUN_0057d9c0(0x02C82A60,*(uint *)(iVar6 + 0x27ac)), iVar7 != 0)) {
LAB_004fa216:
        iVar5 = iVar5 + 1;
        iVar10 = iVar10 + 4;
      }
      else {
        iVar7 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
        fVar2 = *(float *)(iVar7 + 0x20) - *(float *)(iVar6 + 0x20);
        fVar4 = *(float *)(iVar7 + 0x24) - *(float *)(iVar6 + 0x24);
        fVar3 = *(float *)(iVar7 + 0x28) - *(float *)(iVar6 + 0x28);
        fVar2 = fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2;
        dVar1 = (double)fVar2;
        if ((float)_DAT_005e67f8 < fVar2) goto LAB_004fa216;
        if (dVar1 <= _DAT_005e6800) {
          if (dVar1 <= _DAT_005e6808) {
            if (dVar1 <= _DAT_005e6810) {
              _DAT_01d1bc48 = 0;
              iVar7 = 0;
              while (iVar8 = FUN_0057d9c0(0x02C82A60,*(uint *)(iVar7 + 0x1d1bc4c)),
                    iVar8 != 0) {
                iVar7 = iVar7 + 4;
                if (0xf < iVar7) {
                  return;
                }
              }
              uVar9 = FUN_0057d880(0x02C82A60,0,"sps_full?.wav @ .3");
              *(uint *)(iVar6 + 0x27ac) = uVar9;
              *(uint *)(iVar7 + 0x1d1bc4c) = uVar9;
              iVar5 = iVar5 + 1;
              iVar10 = iVar10 + 4;
            }
            else {
              _DAT_01d1bc48 = 1;
              iVar7 = 0;
              while (iVar8 = FUN_0057d9c0(0x02C82A60,*(uint *)(iVar7 + 0x1d1bc4c)),
                    iVar8 != 0) {
                iVar7 = iVar7 + 4;
                if (0xf < iVar7) {
                  return;
                }
              }
              uVar9 = FUN_0057d880(0x02C82A60,0,"sps_long?.wav @ .3");
              *(uint *)(iVar6 + 0x27ac) = uVar9;
              *(uint *)(iVar7 + 0x1d1bc4c) = uVar9;
              iVar5 = iVar5 + 1;
              iVar10 = iVar10 + 4;
            }
          }
          else {
            _DAT_01d1bc48 = 2;
            iVar7 = 0;
            while (iVar8 = FUN_0057d9c0(0x02C82A60,*(uint *)(iVar7 + 0x1d1bc4c)), iVar8 != 0
                  ) {
              iVar7 = iVar7 + 4;
              if (0xf < iVar7) {
                return;
              }
            }
            uVar9 = FUN_0057d880(0x02C82A60,0,"sps_med?.wav @ .3");
            *(uint *)(iVar6 + 0x27ac) = uVar9;
            *(uint *)(iVar7 + 0x1d1bc4c) = uVar9;
            iVar5 = iVar5 + 1;
            iVar10 = iVar10 + 4;
          }
        }
        else {
          _DAT_01d1bc48 = 3;
          iVar7 = 0;
          while (iVar8 = FUN_0057d9c0(0x02C82A60,*(uint *)(iVar7 + 0x1d1bc4c)), iVar8 != 0)
          {
            iVar7 = iVar7 + 4;
            if (0xf < iVar7) {
              return;
            }
          }
          uVar9 = FUN_0057d880(0x02C82A60,0,"sps_short?.wav @ .3");
          *(uint *)(iVar6 + 0x27ac) = uVar9;
          *(uint *)(iVar7 + 0x1d1bc4c) = uVar9;
          iVar5 = iVar5 + 1;
          iVar10 = iVar10 + 4;
        }
      }
    }
  }
  return;
}
