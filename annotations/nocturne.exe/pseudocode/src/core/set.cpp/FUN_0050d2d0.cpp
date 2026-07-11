// Name: FUN_0050d2d0
// Address: 0050d2d0
// Address Range: [[0050d2d0, 0050d636]]
// Convention: unknown
// Signature: void FUN_0050d2d0(int param_1,uint param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0050d2d0(int param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte auStack_84 [24];
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  int local_28;
  uint local_24;
  int local_14;
  
  if (*(int *)(0x01C775EC + 0x20c) != 0) {
    local_28 = FUN_00558a30();
  }
  _DAT_02080430 = 0;
  FUN_00460d10();
  FUN_00460d30(DAT_005ae704,&local_60);
  if (_DAT_007f7370 == 0) {
    _DAT_01cc4800 = "..\\core\\set.cpp";
    _DAT_01cc4804 = 0xedb;
    FUN_004c8440();
  }
  local_24 = 0xc;
  if ((_DAT_01fba2d8 != 0) || (*(int *)(0x01C775EC + 0x240) != 0)) {
    local_24 = 0xd;
  }
  if (_DAT_01fb9b54 != 0) {
    local_24 = local_24 | 0x22;
  }
  iVar7 = 0;
  iVar3 = param_1;
  if (0 < *(int *)(param_1 + 0x158904)) {
    do {
      iVar6 = *(int *)(iVar3 + 0x158908);
      if (iVar6 != *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8)) {
        if ((((*(float *)(iVar6 + 0x20) == *(float *)(iVar6 + 0x128)) &&
             (*(float *)(iVar6 + 0x24) == *(float *)(iVar6 + 300))) &&
            (*(float *)(iVar6 + 0x28) == *(float *)(iVar6 + 0x130))) &&
           (((*(float *)(iVar6 + 0x30) == *(float *)(iVar6 + 0x134) &&
             (*(float *)(iVar6 + 0x34) == *(float *)(iVar6 + 0x138))) &&
            (*(float *)(iVar6 + 0x38) == *(float *)(iVar6 + 0x13c))))) {
          if ((*(uint *)(iVar6 + 0x140) & local_24) == 0) goto LAB_0050d39b;
        }
        else {
          *(uint *)(iVar6 + 0x140) = *(uint *)(iVar6 + 0x140) | param_2;
        }
        if ((*(uint *)(iVar6 + 0x140) & local_24) != 0) {
          pfVar4 = (float *)(**(code **)(*(int *)(iVar6 + 0x14c) + 0x14))(iVar6,auStack_84);
          fStack_48 = *pfVar4 + pfVar4[3];
          fStack_44 = pfVar4[1] + pfVar4[4];
          fStack_54 = fStack_48 * _DAT_00590812;
          fStack_50 = fStack_44 * _DAT_00590812;
          fStack_40 = pfVar4[2] + pfVar4[5];
          fStack_4c = fStack_40 * _DAT_00590812;
          FUN_0040a240(iVar6);
          *(int *)(&DAT_02080434 + _DAT_02080430 * 8) = iVar6;
          iVar6 = _DAT_02080430 * 8;
          _DAT_02080430 = _DAT_02080430 + 1;
          *(float *)(&DAT_02080438 + iVar6) =
               (fStack_58 - fStack_64) * (fStack_58 - fStack_64) +
               (fStack_5c - fStack_68) * (fStack_5c - fStack_68) +
               (local_60 - fStack_6c) * (local_60 - fStack_6c);
        }
      }
LAB_0050d39b:
      iVar7 = iVar7 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar7 < *(int *)(param_1 + 0x158904));
  }
  FUN_00563db8(&DAT_02080434,_DAT_02080430,8,&LAB_0050d2a0);
  iVar7 = _DAT_02080430;
  iVar3 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
  if (iVar3 == 0) {
    iVar7 = 0;
    iVar3 = _DAT_02080430;
    if (0 < _DAT_02080430) {
      iVar5 = 0;
      iVar6 = param_1;
      do {
        iVar2 = _DAT_02080430;
        puVar1 = (uint *)(&DAT_02080434 + iVar5);
        iVar5 = iVar5 + 8;
        iVar7 = iVar7 + 1;
        *(uint *)(iVar6 + 0x15f300) = *puVar1;
        iVar6 = iVar6 + 4;
        iVar3 = _DAT_02080430;
      } while (iVar7 < iVar2);
    }
  }
  else {
    iVar6 = 0;
    *(int *)(param_1 + 0x15f300) = iVar3;
    if (0 < iVar7) {
      iVar7 = 0;
      iVar3 = param_1;
      do {
        iVar5 = _DAT_02080430;
        puVar1 = (uint *)(&DAT_02080434 + iVar7);
        iVar7 = iVar7 + 8;
        iVar6 = iVar6 + 1;
        *(uint *)(iVar3 + 0x15f304) = *puVar1;
        iVar3 = iVar3 + 4;
      } while (iVar6 < iVar5);
    }
    iVar3 = _DAT_02080430 + 1;
  }
  *(int *)(param_1 + 0x15f2fc) = iVar3;
  if (*(int *)(0x01C775EC + 0x20c) != 0) {
    local_14 = FUN_00558a30();
    local_14 = local_14 - local_28;
    FUN_0043ac60(PTR_DAT_005ad350,"buildDispList %d items : %3.2f ms\n",_DAT_02080430,
                 ((double)local_14 * _DAT_0059081a * _DAT_00590822 * _DAT_0059082a) /
                 (double)*(float *)(0x01C775EC + 0x264));
    return;
  }
  return;
}
