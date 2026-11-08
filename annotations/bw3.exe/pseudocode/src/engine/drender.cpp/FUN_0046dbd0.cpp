// Name: FUN_0046dbd0
// Address: 0046dbd0
// Address Range: [[0046dbd0, 0046de64]]
// Convention: unknown
// Signature: void FUN_0046dbd0(int *param_1,ushort *param_2,int param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046dbd0(int *param_1,ushort *param_2,int param_3,int param_4)

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
    if (((param_1[4] == 0) && (param_1[3] == 0)) && (DAT_007303fc != 0)) {
      if (param_1[1] == 0) {
        if (DAT_005fba20 == 0x20) {
          _DAT_01c6b5cc = &LAB_00560f31;
        }
        else {
          _DAT_01c6b5cc = &LAB_00561713;
        }
        _DAT_01c6e2b4 = param_4;
        _DAT_01c6e2b8 = 6;
        if (_DAT_01c6cee8 == 0) {
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
              *(uint *)(*param_1 + 0x1c + local_1c * 0x30) = (uint)param_2[8] << 8;
            }
            param_2 = param_2 + 9;
            FUN_00466d50(&local_24,3);
          }
        }
        else {
          iVar4 = 0;
          local_14 = 0;
          if (0 < param_3) {
            local_18 = 0;
            do {
              iVar3 = FUN_00515d60(param_2);
              if (iVar3 != 0) {
                iVar4 = iVar4 + 1;
                iVar3 = local_18 + 4;
                *(ushort **)(&DAT_005f2b04 + local_18) = param_2;
                local_18 = iVar3;
                if (1999 < iVar4) {
                  _DAT_01d71de0 = "..\\engine\\drender.cpp";
                  _DAT_01d71de4 = 0xa30;
                  FUN_004e4330("CDemonRenderer::demonGZFacetList - Too many visible faces at once : %d",iVar4);
                }
              }
              local_14 = local_14 + 1;
              param_2 = param_2 + 9;
            } while (local_14 < param_3);
          }
          if (0 < iVar4) {
            FUN_00565db0(*param_1,&DAT_005f2b04,iVar4,_DAT_01c6e2b4);
            return;
          }
        }
      }
      else {
        _DAT_01c6b5cc = &LAB_0046f9a6;
        _DAT_01c6e2b4 = 0;
        _DAT_01c6e2b8 = 0;
        uVar1 = 0;
        uVar2 = 0;
        if (0 < param_3) {
          do {
            _DAT_01c6e2b8 = uVar2;
            _DAT_01c6e2b4 = uVar1;
            local_24 = (uint)*param_2;
            local_20 = (uint)param_2[1];
            local_1c = (uint)param_2[2];
            param_3 = param_3 + -1;
            param_2 = param_2 + 9;
            FUN_004673d0(&local_24,3);
            uVar1 = _DAT_01c6e2b4;
            uVar2 = _DAT_01c6e2b8;
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
          FUN_0046ba70(param_1,param_2,param_4);
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
        FUN_0046e300(param_1,param_2,param_4);
        param_2 = param_2 + 9;
      } while (iVar4 < param_3);
    }
  }
  return;
}
