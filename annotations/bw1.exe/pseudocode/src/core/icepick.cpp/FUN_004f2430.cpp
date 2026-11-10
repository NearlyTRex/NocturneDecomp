// Name: core_icepick.cpp_FUN_004f2430
// Address: 004f2430
// Address Range: [[004f2430, 004f254a]]
// Convention: __cdecl
// Signature: void __cdecl core_icepick_cpp_FUN_004f2430(CIcePick *this_ptr,int bone_index)

#include "nocturne.h"

void __cdecl core_icepick_cpp_FUN_004f2430(CIcePick *this_ptr,int bone_index)

{
  CIcePick *pCVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  uint auStackY_1030 [999];
  uint *puVar6;
  uint local_84;
  float local_80;
  uint local_58;
  CIcePick *local_50;
  CIcePick *local_4c;
  uint local_48;
  uint auStack_44 [5];
  uint local_30 [3];
  uint local_24;
  int local_18;
  float local_14;
  
  bVar5 = 0;
  core_skeleton_cpp_FUN_00569130(&this_ptr->field_0x158,bone_index);
  puVar6 = &local_48;
  local_48 = auStack_44[2];
  auStack_44[(uint)bVar5 * -2] = auStack_44[(uint)bVar5 * -2 + 3];
  auStack_44[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       auStack_44[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
  core_actor_cpp_FUN_00408b40(this_ptr,puVar6);
  local_30[0] = local_24;
  auStack_44[(uint)bVar5 * -2 + 6] = auStack_44[(uint)bVar5 * -2 + 9];
  auStack_44[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
       auStack_44[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10];
  local_18 = 0;
  iVar4 = 0;
  iVar3 = 0;
  do {
    while( true ) {
      if (g_CDemonSetPtr->character_count <= iVar4) {
        if (local_18 == 0) {
          return;
        }
        (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))(this_ptr,"icepick-punch?.wav");
        return;
      }
      pCVar1 = *(CIcePick **)((int)g_CDemonSetPtr->characters + iVar3);
      if (pCVar1 != this_ptr) break;
LAB_004f24a7:
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
    }
    core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010((SDamageInfo *)&local_84);
    local_80 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(90.0,130.0);
    local_58 = 0x3f000000;
    local_84 = 0xffffffff;
    local_50 = this_ptr;
    local_4c = this_ptr;
    local_14 = local_80;
    iVar2 = (**(code **)(*(int *)&pCVar1->field_0x154 + 0x100))
                      (pCVar1,auStack_44 + 5,0x3f800000,&local_84);
    if (iVar2 == 0) goto LAB_004f24a7;
    local_18 = 1;
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 4;
  } while( true );
}
