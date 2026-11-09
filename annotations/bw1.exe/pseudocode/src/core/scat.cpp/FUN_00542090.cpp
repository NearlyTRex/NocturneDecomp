// Name: core_scat.cpp_FUN_00542090
// Address: 00542090
// Address Range: [[00542090, 00542264]]
// Convention: __cdecl
// Signature: void __cdecl core_scat_cpp_FUN_00542090(CScat *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_scat_cpp_FUN_00542090(CScat *this_ptr)

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
  if (*(int *)(&this_ptr->field_0x27c8 + *(int *)&this_ptr->field_0x2c98 * 0x38) == 0) {
    local_28 = *(float *)&this_ptr->field_0x2c9c;
  }
  if (*(int *)(&this_ptr->field_0x27cc + *(int *)&this_ptr->field_0x2c98 * 0x38) == 0) {
    local_28 = (1.0 - *(float *)&this_ptr->field_0x2c9c) * local_28;
  }
  puVar1 = &this_ptr->field_0x158;
  fVar2 = (float)core_motion_cpp_FUN_00524a40(puVar1,4);
  fVar3 = (float)core_motion_cpp_FUN_00524a40(puVar1,5);
  fVar4 = (float)core_motion_cpp_FUN_00524a40(puVar1,0xc);
  fVar5 = (float)core_motion_cpp_FUN_00524a40(puVar1,0xd);
  fVar6 = (float)core_motion_cpp_FUN_00524a40(puVar1,0xe);
  local_28 = (1.0 - (fVar6 + fVar5 + fVar4 + fVar3 + fVar2)) * local_28;
  if (local_28 < 0.0) {
    local_28 = 0.0;
  }
  if ((float)_DAT_005edebf < local_28) {
    if (1.0 < local_28) {
      local_28 = 1.0;
    }
    iVar8 = 1;
    motion_name = &this_ptr->field_0x27d0 + *(int *)&this_ptr->field_0x2c98 * 0x38;
    puVar1 = &this_ptr->field_0x158;
    this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                            ((CDeformableModelInstance *)puVar1);
    iVar8 = core_motion_cpp_FUN_005240c0((CMotionList *)this_ptr_00,motion_name,iVar8);
    uVar7 = core_motion_cpp_FUN_00525110(puVar1,iVar8,*(uint *)&this_ptr->field_0x2c9c);
    core_skeleton_cpp_FUN_00568100
              (puVar1,iVar8,uVar7,local_28,_DAT_01e7e054,core_skeleton_cpp_FUN_00567360);
    if (*(int *)&this_ptr->field_0x2c98 == 1) {
      core_scat_cpp_FUN_00542270(this_ptr,1);
      return;
    }
  }
  return;
}
