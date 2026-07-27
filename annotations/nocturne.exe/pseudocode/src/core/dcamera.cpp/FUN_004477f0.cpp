// Name: core_dcamera.cpp_FUN_004477f0
// Address: 004477f0
// Address Range: [[004477f0, 00447903]]
// Convention: unknown
// Signature: void core_dcamera_cpp_FUN_004477f0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dcamera_cpp_FUN_004477f0(int param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  byte bVar4;
  int unaff_retaddr;
  uint auStack_1000 [1022];
  
  bVar4 = 0;
  engine_matrix_c_getCameraOrigin_FUN_004ce760(auStack_1000 + 0x3fb);
  iVar1 = param_1 * 0xc + unaff_retaddr;
  iVar2 = param_1 * 4 + unaff_retaddr;
  puVar3 = (uint *)(iVar1 + 0x11f0 + (uint)bVar4 * -8);
  *(uint *)(iVar1 + 0x11ec) = 0x4477fc;
  *puVar3 = auStack_1000[(uint)bVar4 * -2 + 0x3fb];
  puVar3[(uint)bVar4 * -2 + 1] = auStack_1000[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x3fc];
  *(uint *)(iVar2 + 0x124c) = _DAT_01c039e8;
  *(uint *)(iVar2 + 0x126c) = _DAT_01c039ec;
  *(uint *)(iVar2 + 0x128c) = _DAT_01c039f0;
  *(uint *)(iVar2 + 0x12ac) = _DAT_01c039f4;
  *(uint *)(iVar2 + 0x12cc) = _DAT_01c039f8;
  *(uint *)(iVar2 + 0x12ec) = _DAT_01c039fc;
  *(uint *)(iVar2 + 0x130c) = _DAT_01c03a00;
  *(uint *)(iVar2 + 0x132c) = _DAT_01c03a04;
  *(uint *)(iVar2 + 0x134c) = _DAT_01c03a08;
  *(uint *)(iVar2 + 0x136c) = _DAT_01cc5118;
  *(uint *)(iVar2 + 0x138c) = _DAT_01cc511c;
  *(uint *)(iVar2 + 0x13ac) = _DAT_01cc5120;
  *(uint *)(iVar2 + 0x13cc) = _DAT_01cc5124;
  *(uint *)(iVar2 + 0x13ec) = _DAT_01cc5128;
  *(uint *)(iVar2 + 0x140c) = _DAT_01cc512c;
  *(uint *)(iVar2 + 0x142c) = _DAT_01cc5130;
  *(uint *)(iVar2 + 0x144c) = _DAT_01cc5134;
  *(uint *)(iVar2 + 0x146c) = _DAT_01cc5138;
  return;
}
