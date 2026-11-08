// Name: FUN_004f6bb0
// Address: 004f6bb0
// Address Range: [[004f6bb0, 004f6e87]]
// Convention: unknown
// Signature: void FUN_004f6bb0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f6bb0(void)

{
  double dVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  
  _DAT_01d06f70 = _DAT_01d06f70 - *(float *)(0x01CCF390 + 0x294);
  if (_DAT_01d06f70 <= 0.0) {
    _DAT_01d06f70 = (float)FUN_0040cc00(0x3dcccccd,0x3ecccccd);
    iVar9 = 0;
    iVar10 = 0;
    _DAT_01d1bc48 = 0xffffffff;
    while (iVar9 < *(int *)(0x01E82168 + 0x14f0a8)) {
      iVar2 = *(int *)(iVar10 + 0x14f0ac + 0x01E82168);
      if (*(int *)(iVar2 + 0x27a8) == 0) {
LAB_004f6c34:
        iVar9 = iVar9 + 1;
        iVar10 = iVar10 + 4;
      }
      else {
        iVar6 = FUN_0040c550(iVar2,"CBird");
        if (iVar6 != 0) goto LAB_004f6c34;
        iVar6 = FUN_0057d9c0(0x02C82A60,*(uint *)(iVar2 + 0x27ac));
        if (iVar6 != 0) goto LAB_004f6c34;
        iVar6 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
        fVar3 = *(float *)(iVar6 + 0x20) - *(float *)(iVar2 + 0x20);
        fVar5 = *(float *)(iVar6 + 0x24) - *(float *)(iVar2 + 0x24);
        fVar4 = *(float *)(iVar6 + 0x28) - *(float *)(iVar2 + 0x28);
        fVar3 = fVar4 * fVar4 + fVar5 * fVar5 + fVar3 * fVar3;
        dVar1 = (double)fVar3;
        if ((float)_DAT_005e6020 < fVar3) goto LAB_004f6c34;
        if (dVar1 <= _DAT_005e6028) {
          if (dVar1 <= _DAT_005e6030) {
            if (dVar1 <= _DAT_005e6038) {
              _DAT_01d1bc48 = 0;
              iVar6 = 0;
              while( true ) {
                iVar7 = FUN_0057d9c0(0x02C82A60,*(uint *)(iVar6 + 0x1d1bc4c));
                if (iVar7 == 0) break;
                iVar6 = iVar6 + 4;
                if (0xf < iVar6) {
                  return;
                }
              }
              uVar8 = FUN_0057d880(0x02C82A60,0,"sps_full?.wav @ .3");
              *(uint *)(iVar2 + 0x27ac) = uVar8;
              *(uint *)(iVar6 + 0x1d1bc4c) = uVar8;
              iVar9 = iVar9 + 1;
              iVar10 = iVar10 + 4;
            }
            else {
              _DAT_01d1bc48 = 1;
              iVar6 = 0;
              while( true ) {
                iVar7 = FUN_0057d9c0(0x02C82A60,*(uint *)(iVar6 + 0x1d1bc4c));
                if (iVar7 == 0) break;
                iVar6 = iVar6 + 4;
                if (0xf < iVar6) {
                  return;
                }
              }
              uVar8 = FUN_0057d880(0x02C82A60,0,"sps_long?.wav @ .3");
              *(uint *)(iVar2 + 0x27ac) = uVar8;
              *(uint *)(iVar6 + 0x1d1bc4c) = uVar8;
              iVar9 = iVar9 + 1;
              iVar10 = iVar10 + 4;
            }
          }
          else {
            _DAT_01d1bc48 = 2;
            iVar6 = 0;
            while( true ) {
              iVar7 = FUN_0057d9c0(0x02C82A60,*(uint *)(iVar6 + 0x1d1bc4c));
              if (iVar7 == 0) break;
              iVar6 = iVar6 + 4;
              if (0xf < iVar6) {
                return;
              }
            }
            uVar8 = FUN_0057d880(0x02C82A60,0,"sps_med?.wav @ .3");
            *(uint *)(iVar2 + 0x27ac) = uVar8;
            *(uint *)(iVar6 + 0x1d1bc4c) = uVar8;
            iVar9 = iVar9 + 1;
            iVar10 = iVar10 + 4;
          }
        }
        else {
          _DAT_01d1bc48 = 3;
          iVar6 = 0;
          while( true ) {
            iVar7 = FUN_0057d9c0(0x02C82A60,*(uint *)(iVar6 + 0x1d1bc4c));
            if (iVar7 == 0) break;
            iVar6 = iVar6 + 4;
            if (0xf < iVar6) {
              return;
            }
          }
          uVar8 = FUN_0057d880(0x02C82A60,0,"sps_short?.wav @ .3");
          *(uint *)(iVar2 + 0x27ac) = uVar8;
          *(uint *)(iVar6 + 0x1d1bc4c) = uVar8;
          iVar9 = iVar9 + 1;
          iVar10 = iVar10 + 4;
        }
      }
    }
  }
  return;
}
