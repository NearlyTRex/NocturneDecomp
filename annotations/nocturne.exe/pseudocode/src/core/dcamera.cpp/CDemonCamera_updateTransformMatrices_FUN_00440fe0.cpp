// Name: core_dcamera.cpp_CDemonCamera_updateTransformMatrices_FUN_00440fe0
// Address: 00440fe0
// Address Range: [[00440fe0, 004410b5]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_updateTransformMatrices_FUN_00440fe0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_updateTransformMatrices_FUN_00440fe0(int param_1)

{
  uint uVar1;
  uint *puVar2;
  byte bVar3;
  uint auStackY_1000 [1017];
  uint local_18;
  
  bVar3 = 0;
  *(uint *)(param_1 + 0x178) = _DAT_01c039e8;
  *(uint *)(param_1 + 0x17c) = _DAT_01c039ec;
  *(uint *)(param_1 + 0x180) = _DAT_01c039f0;
  *(uint *)(param_1 + 0x184) = _DAT_01c039f4;
  *(uint *)(param_1 + 0x188) = _DAT_01c039f8;
  *(uint *)(param_1 + 0x18c) = _DAT_01c039fc;
  *(uint *)(param_1 + 400) = _DAT_01c03a00;
  uVar1 = DAT_005ae704;
  *(uint *)(param_1 + 0x194) = _DAT_01c03a04;
  *(uint *)(param_1 + 0x198) = _DAT_01c03a08;
  FUN_00460d10(uVar1);
  puVar2 = (uint *)(param_1 + 0x170 + (uint)bVar3 * -8);
  *(uint *)(param_1 + 0x16c) = local_18;
  *puVar2 = *(uint *)(&stack0xffffffec + (uint)bVar3 * -8);
  puVar2[(uint)bVar3 * -2 + 1] =
       *(uint *)(&stack0xfffffff0 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  *(uint *)(param_1 + 0x1c0) = _DAT_01c00c48;
  *(uint *)(param_1 + 0x1c4) = _DAT_01c00c4c;
  *(uint *)(param_1 + 0x1c8) = _DAT_01c00c50;
  *(uint *)(param_1 + 0x1cc) = _DAT_01c00c54;
  core_dcamera_cpp_CDemonCamera_calculateInverseTransform_FUN_00440d40(param_1);
  return;
}
