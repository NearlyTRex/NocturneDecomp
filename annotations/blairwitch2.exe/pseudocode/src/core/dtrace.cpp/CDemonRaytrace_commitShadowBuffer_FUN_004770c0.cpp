// Name: core_dtrace.cpp_CDemonRaytrace_commitShadowBuffer_FUN_004770c0
// Address: 004770c0
// Address Range: [[004770c0, 00477156]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_commitShadowBuffer_FUN_004770c0(CDemonRaytrace *this_ptr)

#include "nocturne.h"

void __cdecl core_dtrace_cpp_CDemonRaytrace_commitShadowBuffer_FUN_004770c0(CDemonRaytrace *this_ptr)

{
  CDemonCube *pCVar1;
  int iVar2;
  int grid_z;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  int local_18;
  int local_14;
  
  bVar5 = 0;
  local_18 = 0;
  if (0 < *(int *)&this_ptr->field_0x40) {
    do {
      local_14 = 0;
      if (0 < *(int *)&this_ptr->field_0x44) {
        do {
          grid_z = 0;
          if (0 < *(int *)&this_ptr->field_0x48) {
            do {
              pCVar1 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_00472af0
                                 (this_ptr,local_18,local_14,grid_z);
              if (((pCVar1 != (CDemonCube *)0x0) && (*(uint **)pCVar1 != (uint *)0x0))
                 && (*(uint **)&pCVar1->field_0x4 != (uint *)0x0)) {
                puVar3 = *(uint **)&pCVar1->field_0x4;
                puVar4 = *(uint **)pCVar1;
                for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
                  *puVar4 = *puVar3;
                  puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
                  puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
                }
                for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
                  *(byte *)puVar4 = *(byte *)puVar3;
                  puVar3 = (uint *)((int)puVar3 + (uint)bVar5 * -2 + 1);
                  puVar4 = (uint *)((int)puVar4 + (uint)bVar5 * -2 + 1);
                }
              }
              grid_z = grid_z + 1;
            } while (grid_z < *(int *)&this_ptr->field_0x48);
          }
          local_14 = local_14 + 1;
        } while (local_14 < *(int *)&this_ptr->field_0x44);
      }
      local_18 = local_18 + 1;
    } while (local_18 < *(int *)&this_ptr->field_0x40);
  }
  return;
}
