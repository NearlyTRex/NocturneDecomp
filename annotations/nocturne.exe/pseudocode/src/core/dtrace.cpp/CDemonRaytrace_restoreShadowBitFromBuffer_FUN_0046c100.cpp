// Name: core_dtrace.cpp_CDemonRaytrace_restoreShadowBitFromBuffer_FUN_0046c100
// Address: 0046c100
// Address Range: [[0046c100, 0046c22d]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_restoreShadowBitFromBuffer_FUN_0046c100(CDemonRaytrace *this_ptr,CVector3f *world_position)

#include "nocturne.h"

void __cdecl core_dtrace_cpp_CDemonRaytrace_restoreShadowBitFromBuffer_FUN_0046c100(CDemonRaytrace *this_ptr,CVector3f *world_position)

{
  CDemonCube *this_ptr_00;
  uchar *puVar1;
  byte bVar2;
  int aiStackY_1028 [1014];
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_1c;
  
  bVar2 = 0;
  core_dtrace_cpp_CDemonRaytrace_worldPositionToGridCoords_FUN_0046b650(this_ptr,world_position);
  local_34 = local_28;
  *(uint *)((int)&stack0xffffffd0 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffdc + (uint)bVar2 * -8);
  *(uint *)((int)&stack0xffffffd4 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffe0 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  if ((((-1 < local_34) && (-1 < local_30)) && (-1 < local_2c)) &&
     (((local_34 < (this_ptr->grid_coord).x && (local_30 < (this_ptr->grid_coord).y)) &&
      (local_2c < (this_ptr->grid_coord).z)))) {
    core_dtrace_cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_0046b700(this_ptr,world_position);
    local_40 = local_1c;
    *(uint *)((int)&stack0xffffffc4 + (uint)bVar2 * -8) =
         *(uint *)(&stack0xffffffe8 + (uint)bVar2 * -8);
    *(uint *)((int)&stack0xffffffc8 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
         *(uint *)(&stack0xffffffec + (uint)bVar2 * -8 + (uint)bVar2 * -8);
    local_40 = local_40 % 8;
    local_3c = local_3c % 8;
    local_38 = local_38 % 8;
    this_ptr_00 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004678d0
                            (this_ptr,local_34,local_30,local_2c);
    if (this_ptr_00 == (CDemonCube *)0x0) {
      g_CHAR_PTR_01cc4800 = "..\\core\\dtrace.cpp";
      g_INT_01cc4804 = 0xb55;
      core_main_c_FUN_004c8440("Parity Check 999");
    }
    if (this_ptr_00->voxel_buffer1 == (SVoxelGrid *)0x0) {
      core_dcube_cpp_CDemonCube_allocVoxelMemory_FUN_0044ac30(this_ptr_00);
    }
    puVar1 = this_ptr_00->voxel_buffer1->voxels[local_38] + local_3c;
    *puVar1 = *puVar1 & ((&DAT_005b6d08)[local_40] ^ 0xff);
    puVar1 = this_ptr_00->voxel_buffer1->voxels[local_38] + local_3c;
    *puVar1 = *puVar1 | this_ptr_00->voxel_buffer2->voxels[local_38][local_3c] &
                        (&DAT_005b6d08)[local_40];
    return;
  }
  return;
}
