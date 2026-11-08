// Name: FUN_00484280
// Address: 00484280
// Address Range: [[00484280, 004844ed]]
// Convention: unknown
// Signature: void FUN_00484280(int *param_1,int param_2,int param_3,int param_4,undefined4 param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00484280(int *param_1,int param_2,int param_3,int param_4,uint param_5)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  if (((param_1[4] == 0) && (param_1[3] == 0)) && (DAT_00713a7c != 0)) {
    if (param_1[1] == 0) {
      if (DAT_0061b4a0 == 0x20) {
        _DAT_01c4f02c = &LAB_0057de01;
      }
      else {
        _DAT_01c4f02c = &LAB_0057e5e3;
      }
      _DAT_01c51d14 = param_5;
      _DAT_01c51d18 = 6;
      if (_DAT_01c50948 == 0) {
        for (; 0 < param_3; param_3 = param_3 + -1) {
          local_28 = *(int *)(param_2 + 0x18);
          local_24 = *(int *)(param_2 + 0x24);
          local_20 = *(int *)(param_2 + 0x30);
          if (*(int *)(param_2 + 4) == 4) {
            local_1c = *(int *)(param_2 + 0x3c);
          }
          if (param_1[8] == 0) {
            *(uint *)(local_28 * 0x30 + *param_1 + 0x18) = *(uint *)(param_2 + 0x1c);
            *(uint *)(*param_1 + local_28 * 0x30 + 0x1c) = *(uint *)(param_2 + 0x20);
            *(uint *)(*param_1 + local_24 * 0x30 + 0x18) = *(uint *)(param_2 + 0x28);
            *(uint *)(local_24 * 0x30 + *param_1 + 0x1c) = *(uint *)(param_2 + 0x2c);
            *(uint *)(*param_1 + local_20 * 0x30 + 0x18) = *(uint *)(param_2 + 0x34);
            *(uint *)(local_20 * 0x30 + *param_1 + 0x1c) = *(uint *)(param_2 + 0x38);
            if (*(int *)(param_2 + 4) == 4) {
              *(uint *)(*param_1 + local_1c * 0x30 + 0x18) = *(uint *)(param_2 + 0x40);
              *(uint *)(local_1c * 0x30 + *param_1 + 0x1c) = *(uint *)(param_2 + 0x44);
            }
          }
          FUN_0047a480(&local_28,*(uint *)(param_2 + 4));
          param_2 = param_2 + param_4;
        }
      }
      else {
        iVar3 = 0;
        local_14 = 0;
        if (0 < param_3) {
          local_18 = 0;
          do {
            iVar2 = FUN_0053de20(param_2);
            if (iVar2 != 0) {
              iVar3 = iVar3 + 1;
              iVar2 = local_18 + 4;
              *(int *)(&DAT_00612568 + local_18) = param_2;
              local_18 = iVar2;
              if (1999 < iVar3) {
                _DAT_01d1d400 = "..\\engine\\drender.cpp";
                _DAT_01d1d404 = 0x9b6;
                FUN_005030e0("CDemonRenderer::demonGZFacetList - Too many visible faces at once : %d",iVar3);
              }
            }
            local_14 = local_14 + 1;
            param_2 = param_2 + param_4;
          } while (local_14 < param_3);
        }
        if (0 < iVar3) {
          FUN_005823a0(*param_1,&DAT_00612568,iVar3,_DAT_01c51d14);
          return;
        }
      }
    }
    else {
      _DAT_01c4f02c = &LAB_00486e26;
      _DAT_01c51d14 = 0;
      _DAT_01c51d18 = _DAT_01c51d14;
      for (; 0 < param_3; param_3 = param_3 + -1) {
        local_28 = *(int *)(param_2 + 0x18);
        local_24 = *(uint *)(param_2 + 0x24);
        local_20 = *(uint *)(param_2 + 0x30);
        if (*(int *)(param_2 + 4) == 4) {
          local_1c = *(int *)(param_2 + 0x3c);
        }
        puVar1 = (uint *)(param_2 + 4);
        param_2 = param_2 + param_4;
        FUN_0047ab00(&local_28,*puVar1);
      }
    }
  }
  else {
    iVar3 = 0;
    if (0 < param_3) {
      do {
        FUN_00482210(param_1,param_2,param_5);
        iVar3 = iVar3 + 1;
        param_2 = param_2 + param_4;
      } while (iVar3 < param_3);
    }
  }
  return;
}
