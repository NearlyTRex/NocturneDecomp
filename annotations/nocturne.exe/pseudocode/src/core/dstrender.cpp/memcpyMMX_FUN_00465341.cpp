// Name: core_dstrender.cpp_memcpyMMX_FUN_00465341
// Address: 00465341
// Address Range: [[00465341, 00465381]]
// Convention: unknown
// Signature: undefined4 core_dstrender_cpp_memcpyMMX_FUN_00465341(uint param_1,uint param_2,uint param_3)

#include "nocturne.h"

uint core_dstrender_cpp_memcpyMMX_FUN_00465341(uint param_1,uint param_2,uint param_3)

{
  bool bVar1;
  uint in_EAX;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  
  uVar2 = param_3;
  do {
    uVar3 = uVar2 - 0x20;
    bVar1 = 0x1f < (int)uVar2;
    uVar2 = uVar3;
  } while (uVar3 != 0 && bVar1);
  puVar5 = (ulonglong *)(param_2 & 0xfffffff8);
  puVar6 = (ulonglong *)(param_1 & 0xfffffff8);
  iVar4 = (param_3 >> 3) + 1;
  do {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
    bVar1 = 0 < iVar4;
    iVar4 = iVar4 + -1;
  } while (bVar1);
  return in_EAX;
}
