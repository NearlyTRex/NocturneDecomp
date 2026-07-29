// Name: engine_3d.c_FUN_00409210
// Address: 00409210
// Address Range: [[00409210, 00409282]]
// Convention: unknown
// Signature: void engine_3d_c_FUN_00409210(int param_1,int param_2)

#include "nocturne.h"

void engine_3d_c_FUN_00409210(int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  SRenderVertex in_stack_ffffff38;
  SRenderVertex in_stack_ffffff68;
  uint local_68 [12];
  uint local_38 [12];
  
  puVar2 = &DAT_005c5014 + param_1 * 0xc;
  puVar3 = local_68;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_005c5014 + param_2 * 0xc;
  puVar3 = local_38;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = local_38;
  puVar3 = (uint *)&stack0xffffff68;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = local_68;
  puVar3 = (uint *)&stack0xffffff38;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  engine_3d_c_clipAndDrawLine2D_FUN_00409290(in_stack_ffffff38,in_stack_ffffff68);
  return;
}
