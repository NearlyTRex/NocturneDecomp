// Name: FUN_004844f0
// Address: 004844f0
// Address Range: [[004844f0, 00484784]]
// Convention: unknown
// Signature: void FUN_004844f0(int *param_1,ushort *param_2,int param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004844f0(int *param_1,ushort *param_2,int param_3,int param_4)

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
    if (((param_1[4] == 0) && (param_1[3] == 0)) && (DAT_00713a7c != 0)) {
      if (param_1[1] == 0) {
        if (DAT_0061b4a0 == 0x20) {
          _DAT_01c4f02c = &LAB_0057de01;
        }
        else {
          _DAT_01c4f02c = &LAB_0057e5e3;
        }
        _DAT_01c51d14 = param_4;
        _DAT_01c51d18 = 6;
        if (_DAT_01c50948 == 0) {
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
            FUN_0047a480(&local_24,3);
          }
        }
        else {
          iVar4 = 0;
          local_14 = 0;
          if (0 < param_3) {
            local_18 = 0;
            do {
              iVar3 = FUN_0053e000(param_2);
              if (iVar3 != 0) {
                iVar4 = iVar4 + 1;
                iVar3 = local_18 + 4;
                *(ushort **)(&DAT_00612568 + local_18) = param_2;
                local_18 = iVar3;
                if (1999 < iVar4) {
                  _DAT_01d1d400 = "..\\engine\\drender.cpp";
                  _DAT_01d1d404 = 0xa30;
                  FUN_005030e0("CDemonRenderer::demonGZFacetList - Too many visible faces at once : %d",iVar4);
                }
              }
              local_14 = local_14 + 1;
              param_2 = param_2 + 9;
            } while (local_14 < param_3);
          }
          if (0 < iVar4) {
            FUN_005824e0(*param_1,&DAT_00612568,iVar4,_DAT_01c51d14);
            return;
          }
        }
      }
      else {
        _DAT_01c4f02c = &LAB_00486e26;
        _DAT_01c51d14 = 0;
        _DAT_01c51d18 = 0;
        uVar1 = 0;
        uVar2 = 0;
        if (0 < param_3) {
          do {
            _DAT_01c51d18 = uVar2;
            _DAT_01c51d14 = uVar1;
            local_24 = (uint)*param_2;
            local_20 = (uint)param_2[1];
            local_1c = (uint)param_2[2];
            param_3 = param_3 + -1;
            param_2 = param_2 + 9;
            FUN_0047ab00(&local_24,3);
            uVar1 = _DAT_01c51d14;
            uVar2 = _DAT_01c51d18;
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
          FUN_00482390(param_1,param_2,param_4);
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
        FUN_00484c20(param_1,param_2,param_4);
        param_2 = param_2 + 9;
      } while (iVar4 < param_3);
    }
  }
  return;
}
