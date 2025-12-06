// Name: core_manpuz.cpp_FUN_005098f0
// Address: 005098f0
// Address Range: [[005098f0, 00509b1a]]
// Convention: unknown
// Signature: undefined core_manpuz.cpp_FUN_005098f0()

#include "nocturne.h"

void core_manpuz_cpp_FUN_005098f0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_stack_00000004;
  int in_stack_00000008;
  
  iVar3 = in_stack_00000004;
  iVar2 = in_stack_00000004;
  do {
    *(uint *)(iVar2 + 0x5f4) = 0;
    *(uint *)(iVar2 + 0x5f8) = 0;
    *(uint *)(iVar2 + 0x63c) = 0;
    *(uint *)(iVar2 + 0x640) = 0;
    *(uint *)(iVar2 + 0x644) = 0;
    iVar1 = iVar3 + 4;
    *(uint *)(iVar2 + 0x5f0) = 1;
    *(uint *)(iVar3 + 0x1400) = 0;
    *(uint *)(iVar3 + 0x1430) = 0;
    *(uint *)(iVar3 + 0x1460) = 0;
    iVar2 = iVar2 + 100;
    *(uint *)(iVar3 + 0x1490) = 0;
    iVar3 = iVar1;
  } while (iVar1 != in_stack_00000004 + 0x30);
  *(uint *)(in_stack_00000004 + 0x644) = 0xff;
  *(uint *)(in_stack_00000004 + 0x6a0) = 0xff;
  *(uint *)(in_stack_00000004 + 0x704) = 0xff;
  *(uint *)(in_stack_00000004 + 0x71c) = 0;
  *(uint *)(in_stack_00000004 + 0x7cc) = 0xff;
  *(uint *)(in_stack_00000004 + 0x838) = 0xff;
  *(uint *)(in_stack_00000004 + 0x848) = 0;
  *(uint *)(in_stack_00000004 + 0x8f8) = 0xff;
  *(uint *)(in_stack_00000004 + 0x964) = 0xff;
  *(uint *)(in_stack_00000004 + 0x9c0) = 0xff;
  *(uint *)(in_stack_00000004 + 0xa2c) = 0xff;
  *(uint *)(in_stack_00000004 + 0xa90) = 0xff;
  *(uint *)(in_stack_00000004 + 0x1460) = 0xff;
  *(uint *)(in_stack_00000004 + 0x1464) = 0xff;
  *(uint *)(in_stack_00000004 + 0x1408) = 0xff;
  *(uint *)(in_stack_00000004 + 0x140c) = 0xff;
  *(uint *)(in_stack_00000004 + 0x1470) = 0xff;
  *(uint *)(in_stack_00000004 + 0x1414) = 0xff;
  *(uint *)(in_stack_00000004 + 0x1418) = 0xff;
  *(uint *)(in_stack_00000004 + 0x147c) = 0xff;
  *(uint *)(in_stack_00000004 + 0x1480) = 0xff;
  *(uint *)(in_stack_00000004 + 0x1484) = 0xff;
  *(uint *)(in_stack_00000004 + 0x1428) = 0xff;
  *(uint *)(in_stack_00000004 + 0x63c) = *(uint *)(in_stack_00000004 + 0x644);
  iVar3 = 0;
  *(uint *)(in_stack_00000004 + 0x1400) = *(uint *)(in_stack_00000004 + 0x1460);
  *(uint *)(in_stack_00000004 + 0x142c) = 0xff;
  do {
    iVar2 = iVar3 * 0xb8 + in_stack_00000004 + 0xaa0;
    core_manpuz_cpp_FUN_0050a420();
    *(uint *)(iVar2 + 0x14) = 0;
    iVar3 = iVar3 + 1;
    *(uint *)(iVar2 + 0x20) = 0;
    *(uint *)(iVar2 + 0x10) = *(uint *)(iVar2 + 0x14);
    *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x20);
    *(uint *)(iVar2 + 0xc) = *(uint *)(iVar2 + 0x10);
    *(uint *)(iVar2 + 0x18) = *(uint *)(iVar2 + 0x20);
  } while (iVar3 < 0xc);
  *(uint *)(in_stack_00000008 + 0x139c) = 1;
  *(uint *)(in_stack_00000008 + 0x13b8) = 0;
  *(uint *)(in_stack_00000008 + 0x13fc) = 0xb;
  *(uint *)(in_stack_00000008 + 0x1358) = 0;
  return;
}
