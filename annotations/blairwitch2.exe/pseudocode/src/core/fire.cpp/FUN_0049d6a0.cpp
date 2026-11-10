// Name: core_fire.cpp_FUN_0049d6a0
// Address: 0049d6a0
// Address Range: [[0049d6a0, 0049d766]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_0049d6a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fire_cpp_FUN_0049d6a0(uint param_1,uint param_2,uint param_3,uint param_4,int param_5,uint param_6,uint param_7,uint param_8,uint param_9)

{
  int iVar1;
  int iVar2;
  CFirefly *pCVar3;
  
  iVar1 = _DAT_01c848f4;
  iVar2 = _DAT_01c848f4 + 1;
  pCVar3 = CFirefly_ARRAY_01c848f8 + _DAT_01c848f4;
  _DAT_01c848f4 = iVar2;
  if (0x3f < iVar2) {
    _DAT_01c848f4 = 0;
  }
  (*(code *)**(uint **)&CFirefly_ARRAY_01c848f8[iVar1].field_0x3c)(pCVar3,param_2,param_3);
  iVar2 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0xc000,0xffff);
  *(uint *)&CFirefly_ARRAY_01c848f8[iVar1].field_0x40 =
       (uint)((longlong)param_5 * (longlong)iVar2) >> 0x10 |
       (int)((ulonglong)((longlong)param_5 * (longlong)iVar2) >> 0x20) << 0x10;
  *(uint *)&CFirefly_ARRAY_01c848f8[iVar1].field_0x44 = param_4;
  *(uint *)&CFirefly_ARRAY_01c848f8[iVar1].field_0x54 = param_6;
  *(uint *)&CFirefly_ARRAY_01c848f8[iVar1].field_0x58 = param_7;
  *(uint *)&CFirefly_ARRAY_01c848f8[iVar1].field_0x48 = param_8;
  *(uint *)&CFirefly_ARRAY_01c848f8[iVar1].field_0x50 = param_9;
  *(uint *)&CFirefly_ARRAY_01c848f8[iVar1].field_0x4c = 0;
  *(uint *)&CFirefly_ARRAY_01c848f8[iVar1].field_0x14 = 0;
  *(uint *)&CFirefly_ARRAY_01c848f8[iVar1].field_0x10 =
       *(uint *)&CFirefly_ARRAY_01c848f8[iVar1].field_0x14;
  *(uint *)&CFirefly_ARRAY_01c848f8[iVar1].field_0xc =
       *(uint *)&CFirefly_ARRAY_01c848f8[iVar1].field_0x10;
  *(uint *)&CFirefly_ARRAY_01c848f8[iVar1].field_0x20 = 0;
  *(uint *)&CFirefly_ARRAY_01c848f8[iVar1].field_0x1c =
       *(uint *)&CFirefly_ARRAY_01c848f8[iVar1].field_0x20;
  *(uint *)&CFirefly_ARRAY_01c848f8[iVar1].field_0x18 =
       *(uint *)&CFirefly_ARRAY_01c848f8[iVar1].field_0x1c;
  return;
}
