// Name: core_path.cpp_CPathMap_updateIfNeeded_FUN_005121a0
// Address: 005121a0
// Address Range: [[005121a0, 005122e8]]
// Convention: __cdecl
// Signature: void __cdecl core_path_cpp_CPathMap_updateIfNeeded_FUN_005121a0(CPathMap *this_ptr,CVector3f *source_position,int force_update)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_path_cpp_CPathMap_updateIfNeeded_FUN_005121a0(CPathMap *this_ptr,CVector3f *source_position,int force_update)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  float afStackY_1008 [1010];
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  uint local_20;
  
  bVar5 = 0;
  if (force_update == 0) {
    iVar2 = *(int *)&this_ptr->field_0x138d8 - _DAT_01c2a370;
    *(int *)&this_ptr->field_0x138d8 = iVar2;
    if (iVar2 < 0) {
      *(int *)&this_ptr->field_0x138d8 = iVar2 + 0x4000;
    }
    else {
      local_38 = *(float *)source_position - *(float *)&this_ptr->field_0x138c0;
      local_34 = *(float *)&source_position->field_0x4 - *(float *)&this_ptr->field_0x138c4;
      local_30 = *(float *)&source_position->field_0x8 - *(float *)&this_ptr->field_0x138c8;
      local_2c = local_38;
      local_28 = local_34;
      local_24 = local_30;
      if (((ABS(local_38) < (float)_DAT_005e1799) && (ABS(local_34) < (float)_DAT_005e1799)) &&
         (ABS(local_30) < (float)_DAT_005e1799)) {
        return;
      }
    }
  }
  else {
    uVar1 = rand();
    *(uint *)&this_ptr->field_0x138d8 = uVar1 & 0x3fff;
  }
  if (this_ptr != (CPathMap *)source_position) {
    *(uint *)this_ptr = *(uint *)source_position;
    *(uint *)&this_ptr->field_0x4 = *(uint *)&source_position->field_0x4;
    *(uint *)&this_ptr->field_0x8 = *(uint *)&source_position->field_0x8;
  }
  core_dtrace_cpp_FUN_00476a50(&g_CDemonRaytraceInstance,this_ptr);
  puVar3 = (uint *)((int)this_ptr + (uint)bVar5 * -8 + 0x10);
  *(uint *)&this_ptr->field_0xc = local_20;
  *puVar3 = *(uint *)(&stack0xffffffe4 + (uint)bVar5 * -8);
  puVar3[(uint)bVar5 * -2 + 1] =
       *(uint *)(&stack0xffffffe8 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  if (((*(int *)&this_ptr->field_0xc == *(int *)&this_ptr->field_0x138b0) &&
      (*(int *)&this_ptr->field_0x138b4 == *(int *)&this_ptr->field_0x10)) &&
     (*(int *)&this_ptr->field_0x138b8 == *(int *)&this_ptr->field_0x14)) {
    return;
  }
  puVar4 = (uint *)((int)this_ptr + (uint)bVar5 * -8 + 0x138b4);
  puVar3 = (uint *)((int)this_ptr + (uint)bVar5 * -8 + 0x10);
  *(uint *)&this_ptr->field_0x138b0 = *(uint *)&this_ptr->field_0xc;
  *puVar4 = *puVar3;
  puVar4[(uint)bVar5 * -2 + 1] = puVar3[(uint)bVar5 * -2 + 1];
  *(int *)&this_ptr->field_0x24 = *(int *)&this_ptr->field_0xc + -0x32;
  *(uint *)&this_ptr->field_0x28 = *(uint *)&this_ptr->field_0x10;
  *(int *)&this_ptr->field_0x2c = *(int *)&this_ptr->field_0x14 + -0x32;
  core_path_cpp_CPathMap_reset_FUN_00513eb0(this_ptr);
  return;
}
