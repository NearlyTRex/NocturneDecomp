// Name: FUN_10002f60
// Address: 10002f60
// Address Range: [[10002f60, 10003085]]
// Convention: unknown
// Signature: int FUN_10002f60(int param_1)

#include "nocturne.h"

int FUN_10002f60(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  uint *puVar6;
  int local_7c [6];
  int local_64;
  uint local_34 [8];
  uint local_14;
  
  piVar5 = local_7c;
  for (iVar3 = 0x1f; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar5 = 0;
    piVar5 = piVar5 + 1;
  }
  puVar4 = &DAT_10226a58;
  puVar6 = local_34;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  local_7c[0] = 0x7c;
  local_7c[1] = 0x101007;
  if (*DAT_1022691c == 0) {
    param_1 = param_1 / 2;
  }
  local_14 = 0x5000;
  local_7c[2] = param_1;
  local_7c[3] = param_1;
  if (DAT_10060670 == 0) {
    if (DAT_10014168 == 0) {
      local_7c[1] = 0x121007;
      local_64 = 1;
      local_14 = 0x405008;
    }
  }
  else {
    local_7c[1] = 0x121007;
    local_64 = FUN_10003090(param_1);
    local_14 = local_14 | 0x400008;
    local_64 = local_64 + -3;
  }
  iVar3 = DAT_10014214 * 2;
  iVar1 = DAT_10014214 * 2;
  iVar2 = (**(code **)(*DAT_10014188 + 0x18))(DAT_10014188,local_7c,&DAT_1020de44 + iVar3,0);
  if (iVar2 != 0) {
    return -1;
  }
  puVar4 = (uint *)(&DAT_1020de44)[iVar3];
  iVar3 = (**(code **)*puVar4)(puVar4,&DAT_100121f8,&DAT_1020de40 + iVar1);
  if (iVar3 != 0) {
    FUN_10002340("D3D won't let me convert a surface to a texture.");
  }
  iVar3 = DAT_10014214;
  DAT_10014214 = DAT_10014214 + 1;
  if (0x1000 < DAT_10014214) {
    FUN_10002340("Too many textures requested");
  }
  return iVar3;
}
