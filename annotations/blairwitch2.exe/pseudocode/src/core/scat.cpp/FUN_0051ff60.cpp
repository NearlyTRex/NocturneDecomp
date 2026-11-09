// Name: core_scat.cpp_FUN_0051ff60
// Address: 0051ff60
// Address Range: [[0051ff60, 00520134]]
// Convention: __cdecl
// Signature: void __cdecl core_scat_cpp_FUN_0051ff60(CScat *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_scat_cpp_FUN_0051ff60(CScat *this_ptr)

{
  byte *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  CSkeleton *this_ptr_00;
  uint uVar7;
  char *motion_name;
  int iVar8;
  float local_28;
  
  local_28 = 1.0;
  if (*(int *)(&this_ptr->field_0x2834 + *(int *)&this_ptr->field_0x2d04 * 0x38) == 0) {
    local_28 = *(float *)&this_ptr->field_0x2d08;
  }
  if (*(int *)(&this_ptr->field_0x2838 + *(int *)&this_ptr->field_0x2d04 * 0x38) == 0) {
    local_28 = (1.0 - *(float *)&this_ptr->field_0x2d08) * local_28;
  }
  puVar1 = &this_ptr->field_0x2b4;
  fVar2 = (float)core_motion_cpp_FUN_005038a0(puVar1,4);
  fVar3 = (float)core_motion_cpp_FUN_005038a0(puVar1,5);
  fVar4 = (float)core_motion_cpp_FUN_005038a0(puVar1,0xc);
  fVar5 = (float)core_motion_cpp_FUN_005038a0(puVar1,0xd);
  fVar6 = (float)core_motion_cpp_FUN_005038a0(puVar1,0xe);
  local_28 = (1.0 - (fVar6 + fVar5 + fVar4 + fVar3 + fVar2)) * local_28;
  if (local_28 < 0.0) {
    local_28 = 0.0;
  }
  if ((float)_DAT_005e2bb3 < local_28) {
    if (1.0 < local_28) {
      local_28 = 1.0;
    }
    iVar8 = 1;
    motion_name = &this_ptr->field_0x283c + *(int *)&this_ptr->field_0x2d04 * 0x38;
    puVar1 = &this_ptr->field_0x2b4;
    this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                            ((CDeformableModelInstance *)puVar1);
    iVar8 = core_motion_cpp_FUN_00502f10((CMotionList *)this_ptr_00,motion_name,iVar8);
    uVar7 = core_motion_cpp_FUN_00503f50(puVar1,iVar8,*(uint *)&this_ptr->field_0x2d08);
    core_skeleton_cpp_FUN_00545a60
              (puVar1,iVar8,uVar7,local_28,_DAT_01e620a8,core_skeleton_cpp_FUN_00544cc0);
    if (*(int *)&this_ptr->field_0x2d04 == 1) {
      core_scat_cpp_FUN_00520140(this_ptr,1);
      return;
    }
  }
  return;
}
