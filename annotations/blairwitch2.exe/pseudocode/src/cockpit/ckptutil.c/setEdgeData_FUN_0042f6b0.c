// Name: cockpit_ckptutil.c_setEdgeData_FUN_0042f6b0
// Address: 0042f6b0
// Address Range: [[0042f6b0, 0042f74a]]
// Convention: unknown
// Signature: void cockpit_ckptutil_c_setEdgeData_FUN_0042f6b0(int param_1,int param_2,undefined2 param_3,undefined2 param_4,undefined2 param_5,ushort param_6,byte param_7)

#include "nocturne.h"

void cockpit_ckptutil_c_setEdgeData_FUN_0042f6b0(int param_1,int param_2,ushort param_3,ushort param_4,ushort param_5,ushort param_6,byte param_7)

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
