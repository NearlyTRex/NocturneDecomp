// Name: FUN_00461720
// Address: 00461720
// Address Range: [[00461720, 004619ec]]
// Convention: unknown
// Signature: void FUN_00461720(int *param_1,ushort *param_2,int param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00461720(int *param_1,ushort *param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  int local_14;
  
  if (param_4 == -1) {
    param_4 = 0x2cd;
  }
  if (param_1[7] == 0) {
    if (((param_1[4] == 0) && (param_1[3] == 0)) && (DAT_006b0280 != 0)) {
      if (param_1[1] == 0) {
        if (DAT_005b7624 == 0x20) {
          _DAT_01c00c7c = &LAB_0052f031;
        }
        else {
          _DAT_01c00c7c = &LAB_0052f823;
        }
        _DAT_01c039a0 = param_4;
        _DAT_01c039a4 = 6;
        if (_DAT_01c02594 == 0) {
          for (; 0 < param_3; param_3 = param_3 + -1) {
            local_24 = (uint)*param_2;
            local_20 = (uint)param_2[1];
            local_1c = (uint)param_2[2];
            if (param_1[8] == 0) {
              *(uint *)(local_24 * 0x30 + 0x18 + *param_1) = (uint)param_2[3] << 8;
              *(uint *)(*param_1 + 0x1c + local_24 * 0x30) = (uint)param_2[6] << 8;
              *(uint *)(local_20 * 0x30 + 0x18 + *param_1) = (uint)param_2[4] << 8;
              *(uint *)(*param_1 + 0x1c + local_20 * 0x30) = (uint)param_2[7] << 8;
              *(uint *)(local_1c * 0x30 + 0x18 + *param_1) = (uint)param_2[5] << 8;
              *(uint *)(local_1c * 0x30 + 0x1c + *param_1) = (uint)param_2[8] << 8;
            }
            param_2 = param_2 + 9;
            FUN_00457a00(&local_24,3);
          }
        }
        else {
          iVar4 = 0;
          local_18 = 0;
          if (0 < param_3) {
            local_14 = 0;
            do {
              iVar3 = FUN_004f9cb0(param_2);
              if (iVar3 != 0) {
                iVar4 = iVar4 + 1;
                iVar3 = local_14 + 4;
                *(ushort **)(&DAT_005ae70c + local_14) = param_2;
                local_14 = iVar3;
                if (1999 < iVar4) {
                  _DAT_01cc4800 = "..\\engine\\drender.cpp";
                  _DAT_01cc4804 = 0x9e1;
                  FUN_004c8440("CDemonRenderer::demonGZFacetList - Too many visible faces at once : %d",iVar4);
                }
              }
              local_18 = local_18 + 1;
              param_2 = param_2 + 9;
            } while (local_18 < param_3);
          }
          if (0 < iVar4) {
            FUN_005327c0(*param_1,&DAT_005ae70c,iVar4,_DAT_01c039a0);
            return;
          }
        }
      }
      else {
        _DAT_01c00c7c = &LAB_00463a79;
        _DAT_01c039a0 = 0;
        _DAT_01c039a4 = 0;
        uVar1 = 0;
        uVar2 = 0;
        if (0 < param_3) {
          do {
            _DAT_01c039a4 = uVar2;
            _DAT_01c039a0 = uVar1;
            local_24 = (uint)*param_2;
            local_20 = (uint)param_2[1];
            local_1c = (uint)param_2[2];
            param_3 = param_3 + -1;
            param_2 = param_2 + 9;
            FUN_00458080(&local_24,3);
            uVar1 = _DAT_01c039a0;
            uVar2 = _DAT_01c039a4;
          } while (0 < param_3);
          return;
        }
      }
    }
    else {
      iVar4 = 0;
      if (0 < param_3) {
        do {
          iVar4 = iVar4 + 1;
          FUN_0045f5e0(param_1,param_2,param_4);
          param_2 = param_2 + 9;
        } while (iVar4 < param_3);
        return;
      }
    }
  }
  else {
    iVar4 = 0;
    if (0 < param_3) {
      do {
        iVar4 = iVar4 + 1;
        FUN_00461bd0(param_1,param_2,param_4);
        param_2 = param_2 + 9;
      } while (iVar4 < param_3);
    }
  }
  return;
}
