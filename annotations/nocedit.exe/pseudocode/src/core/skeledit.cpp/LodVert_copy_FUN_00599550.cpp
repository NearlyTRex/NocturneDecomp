// Name: core_skeledit.cpp_LodVert_copy_FUN_00599550
// Address: 00599550
// Address Range: [[00599550, 005995ba]]
// Convention: __cdecl
// Signature: CLodVert * core_skeledit.cpp_LodVert_copy_FUN_00599550(void * n1, void * n2, CLodVert * other2, CLodVert * other3)

#include "nocturne.h"

CLodVert * __cdecl
core_skeledit_cpp_LodVert_copy_FUN_00599550(void *n1,void *n2,CLodVert *other2,CLodVert *other3)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  
  bVar4 = 0;
  crt_stack_c_stack_probe_FUN_005ff9f3(0xc);
  *(uint *)n1 = *(uint *)n2;
  *(uint *)((int)n1 + 4) = *(uint *)((int)n2 + 4);
  *(uint *)((int)n1 + 8) = *(uint *)((int)n2 + 8);
  puVar2 = (uint *)((int)n2 + 0xc);
  puVar3 = (uint *)((int)n1 + 0xc);
  for (iVar1 = 0xfa; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  *(uint *)((int)n1 + 0x3f4) = *(uint *)((int)n2 + 0x3f4);
  *(uint *)((int)n1 + 0x3f8) = *(uint *)((int)n2 + 0x3f8);
  puVar2 = (uint *)((int)n2 + 0x3fc);
  puVar3 = (uint *)((int)n1 + 0x3fc);
  for (iVar1 = 0x32; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  return n1;
}
