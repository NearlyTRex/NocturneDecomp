// Name: FUN_00430590
// Address: 00430590
// Address Range: [[00430590, 0043062a]]
// Convention: unknown
// Signature: void FUN_00430590(int param_1,int param_2,undefined2 param_3,undefined2 param_4,undefined2 param_5,ushort param_6,byte param_7)

#include "nocturne.h"

void FUN_00430590(int param_1,int param_2,ushort param_3,ushort param_4,ushort param_5,ushort param_6,byte param_7)

{
  ushort uVar1;
  ushort *puVar2;
  
  puVar2 = (ushort *)(param_2 * 8 + param_1);
  *puVar2 = 0;
  puVar2[1] = 0;
  uVar1 = puVar2[3];
  *puVar2 = param_3;
  puVar2[2] = 0;
  puVar2[1] = param_4;
  puVar2[3] = uVar1 & 0x8000;
  puVar2[3] = uVar1 & 0x8000 | param_6 & 0x7fff;
  *(byte *)((int)puVar2 + 7) = *(byte *)((int)puVar2 + 7) & 0x7f;
  puVar2[2] = param_5;
  puVar2[3] = puVar2[3] | (ushort)param_7 << 0xf;
  return;
}
