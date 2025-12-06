// Name: core_set.cpp_CDemonSet_FUN_0056d380
// Address: 0056d380
// Address Range: [[0056d380, 0056d49b]]
// Convention: __cdecl
// Signature: void core_set.cpp_CDemonSet_FUN_0056d380(CDemonSet * this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_FUN_0056d380(CDemonSet *this_ptr)

{
  int iVar1;
  uint *puVar2;
  uint *in_stack_00000008;
  uint *in_stack_0000000c;
  uint *in_stack_00000010;
  uint *in_stack_00000014;
  uint *in_stack_00000018;
  
  if (in_stack_00000008 == (uint *)0x0) {
    g_LightingSystemDirty = 1;
  }
  else {
    if (in_stack_00000008 != &DAT_032c1c68) {
      DAT_032c1c68 = *in_stack_00000008;
      DAT_032c1c70 = in_stack_00000008[2];
      DAT_032c1c6c = in_stack_00000008[1];
    }
    if (in_stack_0000000c != (uint *)&DAT_032c1c74) {
      _DAT_032c1c74 = *in_stack_0000000c;
      _DAT_032c1c7c = in_stack_0000000c[2];
      _DAT_032c1c78 = in_stack_0000000c[1];
    }
    if (in_stack_00000010 != (uint *)&DAT_032c1c80) {
      _DAT_032c1c80 = *in_stack_00000010;
      _DAT_032c1c88 = in_stack_00000010[2];
      _DAT_032c1c84 = in_stack_00000010[1];
    }
    if (in_stack_00000014 != (uint *)&DAT_032c1c8c) {
      _DAT_032c1c8c = *in_stack_00000014;
      _DAT_032c1c94 = in_stack_00000014[2];
      _DAT_032c1c90 = in_stack_00000014[1];
    }
    if (in_stack_00000018 == (uint *)0x0) {
      DAT_032c1c9c = in_stack_00000018;
      _DAT_032c1ca0 = in_stack_00000018;
      _DAT_032c1ca4 = in_stack_00000018;
      _DAT_032c1cac = in_stack_00000018;
      _DAT_032c1cb0 = in_stack_00000018;
      _DAT_032c1cb4 = in_stack_00000018;
      _DAT_032c1ca8 = 0x3f800000;
      _DAT_032c1cb8 = 0x3f800000;
      DAT_032c1c98 = 0x3f800000;
      g_LightingSystemDirty = 2;
      return;
    }
    puVar2 = &DAT_032c1c98;
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *in_stack_00000018;
      in_stack_00000018 = in_stack_00000018 + 1;
      puVar2 = puVar2 + 1;
    }
    g_LightingSystemDirty = 2;
  }
  return;
}
