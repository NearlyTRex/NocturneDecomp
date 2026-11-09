// Name: core_dtrace.cpp_CDemonRaytrace_restoreShadowBitFromBuffer_FUN_004785c0
// Address: 004785c0
// Address Range: [[004785c0, 004786ed]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_restoreShadowBitFromBuffer_FUN_004785c0(CDemonRaytrace *this_ptr,CVector3f *world_position)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dtrace_cpp_CDemonRaytrace_restoreShadowBitFromBuffer_FUN_004785c0(CDemonRaytrace *this_ptr,CVector3f *world_position)

{
  CDemonCube *this_ptr_00;
  byte bVar1;
  int aiStackY_1028 [1014];
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_1c;
  
  bVar1 = 0;
  core_dtrace_cpp_FUN_00477a10(this_ptr,world_position);
  local_34 = local_28;
  *(uint *)((int)&stack0xffffffd0 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffdc + (uint)bVar1 * -8);
  *(uint *)((int)&stack0xffffffd4 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffe0 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  if ((((-1 < local_34) && (-1 < local_30)) && (-1 < local_2c)) &&
     (((local_34 < *(int *)&this_ptr->field_0x40 && (local_30 < *(int *)&this_ptr->field_0x44)) &&
      (local_2c < *(int *)&this_ptr->field_0x48)))) {
    core_dtrace_cpp_FUN_00477ac0(this_ptr,world_position);
    local_40 = local_1c;
    *(uint *)((int)&stack0xffffffc4 + (uint)bVar1 * -8) =
         *(uint *)(&stack0xffffffe8 + (uint)bVar1 * -8);
    *(uint *)((int)&stack0xffffffc8 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
         *(uint *)(&stack0xffffffec + (uint)bVar1 * -8 + (uint)bVar1 * -8);
    local_40 = local_40 % 8;
    local_3c = local_3c % 8;
    local_38 = local_38 % 8;
    this_ptr_00 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_00473b60
                            (this_ptr,local_34,local_30,local_2c);
    if (this_ptr_00 == (CDemonCube *)0x0) {
      _DAT_01d71de0 = "..\\core\\dtrace.cpp";
      _DAT_01d71de4 = 0xb55;
      core_main_c_FUN_004e4330("Parity Check 999");
    }
    if (*(int *)this_ptr_00 == 0) {
      core_dcube_cpp_CDemonCube_allocVoxelMemory_FUN_00453d10(this_ptr_00);
    }
    local_3c = local_38 * 8 + local_3c;
    *(byte *)(*(int *)this_ptr_00 + local_3c) =
         *(byte *)(*(int *)this_ptr_00 + local_3c) & ((&DAT_005fb0e8)[local_40] ^ 0xff);
    *(byte *)(*(int *)this_ptr_00 + local_3c) =
         *(byte *)(*(int *)this_ptr_00 + local_3c) |
         *(byte *)(*(int *)&this_ptr_00->field_0x4 + local_3c) & (&DAT_005fb0e8)[local_40];
    return;
  }
  return;
}
