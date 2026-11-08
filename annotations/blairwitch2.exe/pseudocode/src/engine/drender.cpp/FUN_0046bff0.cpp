// Name: FUN_0046bff0
// Address: 0046bff0
// Address Range: [[0046bff0, 0046c284]]
// Convention: unknown
// Signature: void FUN_0046bff0(int *param_1,ushort *param_2,int param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046bff0(int *param_1,ushort *param_2,int param_3,int param_4)

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
    if (((param_1[4] == 0) && (param_1[3] == 0)) && (DAT_0070ca7c != 0)) {
      if (param_1[1] == 0) {
        if (DAT_006141c0 == 0x20) {
          _DAT_01c35e6c = &LAB_0055b3b1;
        }
        else {
          _DAT_01c35e6c = &LAB_0055bb93;
        }
        _DAT_01c38b54 = param_4;
        _DAT_01c38b58 = 6;
        if (_DAT_01c37788 == 0) {
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
            FUN_00461f70(&local_24,3);
          }
        }
        else {
          iVar4 = 0;
          local_14 = 0;
          if (0 < param_3) {
            local_18 = 0;
            do {
              iVar3 = FUN_0051ca00(param_2);
              if (iVar3 != 0) {
                iVar4 = iVar4 + 1;
                iVar3 = local_18 + 4;
                *(ushort **)(&DAT_0060b288 + local_18) = param_2;
                local_18 = iVar3;
                if (1999 < iVar4) {
                  _DAT_01d046a0 = "..\\engine\\drender.cpp";
                  _DAT_01d046a4 = 0xa30;
                  FUN_004e4500("CDemonRenderer::demonGZFacetList - Too many visible faces at once : %d",iVar4);
                }
              }
              local_14 = local_14 + 1;
              param_2 = param_2 + 9;
            } while (local_14 < param_3);
          }
          if (0 < iVar4) {
            FUN_0055fa90(*param_1,&DAT_0060b288,iVar4,_DAT_01c38b54);
            return;
          }
        }
      }
      else {
        _DAT_01c35e6c = &LAB_0046e936;
        _DAT_01c38b54 = 0;
        _DAT_01c38b58 = 0;
        uVar1 = 0;
        uVar2 = 0;
        if (0 < param_3) {
          do {
            _DAT_01c38b58 = uVar2;
            _DAT_01c38b54 = uVar1;
            local_24 = (uint)*param_2;
            local_20 = (uint)param_2[1];
            local_1c = (uint)param_2[2];
            param_3 = param_3 + -1;
            param_2 = param_2 + 9;
            FUN_004625f0(&local_24,3);
            uVar1 = _DAT_01c38b54;
            uVar2 = _DAT_01c38b58;
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
          FUN_00469e80(param_1,param_2,param_4);
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
        FUN_0046c720(param_1,param_2,param_4);
        param_2 = param_2 + 9;
      } while (iVar4 < param_3);
    }
  }
  return;
}
