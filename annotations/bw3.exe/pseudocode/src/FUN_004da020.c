// Name: FUN_004da020
// Address: 004da020
// Address Range: [[004da020, 004da310]]
// Convention: unknown
// Signature: void FUN_004da020(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004da020(void)

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
  
  _DAT_01d5be80 = _DAT_01d5be80 - *(float *)(0x01D2130C + 0x314);
  if (_DAT_01d5be80 <= 0.0) {
    _DAT_01d5be80 = (float)FUN_0040ce40(0x3dcccccd,0x3ecccccd);
    iVar10 = 0;
    iVar9 = 0;
    _DAT_01d70a20 = 0xffffffff;
    while (iVar10 < *(int *)(0x01ED78C8 + 0x14f0a8)) {
      iVar5 = FUN_0040c840(*(uint *)(iVar9 + 0x14f0ac + 0x01ED78C8),_DAT_01c5bc48);
      if (iVar5 == 0) {
LAB_004da0b1:
        iVar10 = iVar10 + 1;
        iVar9 = iVar9 + 4;
      }
      else {
        iVar6 = (**(code **)(*(int *)(iVar5 + 0x154) + 0x10c))(iVar5);
        if (iVar6 != 0) goto LAB_004da0b1;
        iVar6 = FUN_0040c790(iVar5,"CTVBat");
        if (iVar6 != 0) goto LAB_004da0b1;
        iVar6 = FUN_0040c790(iVar5,"CWhitewolf");
        if (iVar6 != 0) goto LAB_004da0b1;
        iVar6 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
        fVar2 = *(float *)(iVar6 + 0x20) - *(float *)(iVar5 + 0x20);
        fVar4 = *(float *)(iVar6 + 0x24) - *(float *)(iVar5 + 0x24);
        fVar3 = *(float *)(iVar6 + 0x28) - *(float *)(iVar5 + 0x28);
        fVar2 = fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2;
        dVar1 = (double)fVar2;
        if ((float)_DAT_005c5ee7 < fVar2) goto LAB_004da0b1;
        if (dVar1 <= _DAT_005c5eef) {
          if (dVar1 <= _DAT_005c5ef7) {
            if (dVar1 <= _DAT_005c5eff) {
              _DAT_01d70a20 = 0;
              iVar6 = 0;
              while( true ) {
                iVar7 = FUN_00560af0(0x02CF5680,*(uint *)(iVar6 + 0x1d70a24));
                if (iVar7 == 0) break;
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
              while( true ) {
                iVar7 = FUN_00560af0(0x02CF5680,*(uint *)(iVar6 + 0x1d70a24));
                if (iVar7 == 0) break;
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
            while( true ) {
              iVar7 = FUN_00560af0(0x02CF5680,*(uint *)(iVar6 + 0x1d70a24));
              if (iVar7 == 0) break;
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
          while( true ) {
            iVar7 = FUN_00560af0(0x02CF5680,*(uint *)(iVar6 + 0x1d70a24));
            if (iVar7 == 0) break;
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
