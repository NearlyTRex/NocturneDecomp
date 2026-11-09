// Name: core_icepick.cpp_FUN_004d6230
// Address: 004d6230
// Address Range: [[004d6230, 004d634a]]
// Convention: __cdecl
// Signature: void __cdecl core_icepick_cpp_FUN_004d6230(CIcePick *this_ptr,int bone_index)

#include "nocturne.h"

void __cdecl core_icepick_cpp_FUN_004d6230(CIcePick *this_ptr,int bone_index)

{
  CIcePick *pCVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  uint auStackY_1030 [999];
  uint *puVar6;
  uint local_84;
  uint local_80;
  uint local_58;
  CIcePick *local_50;
  CIcePick *local_4c;
  uint local_48;
  uint auStack_44 [5];
  uint local_30 [3];
  uint local_24;
  int local_18;
  uint local_14;
  
  bVar5 = 0;
  core_skeleton_cpp_FUN_00546a90(&this_ptr->field_0x2b4,bone_index);
  puVar6 = &local_48;
  local_48 = auStack_44[2];
  auStack_44[(uint)bVar5 * -2] = auStack_44[(uint)bVar5 * -2 + 3];
  auStack_44[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       auStack_44[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
  core_actor_cpp_FUN_00408d70(this_ptr,puVar6);
  local_30[0] = local_24;
  auStack_44[(uint)bVar5 * -2 + 6] = auStack_44[(uint)bVar5 * -2 + 9];
  auStack_44[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
       auStack_44[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10];
  local_18 = 0;
  iVar4 = 0;
  iVar3 = 0;
  do {
    while( true ) {
      if (*(int *)&g_CDemonSetPtr->field_0x14f0a8 <= iVar4) {
        if (local_18 == 0) {
          return;
        }
        (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x34))(this_ptr,"icepick-punch?.wav");
        return;
      }
      pCVar1 = *(CIcePick **)(&g_CDemonSetPtr->field_0x14f0ac + iVar3);
      if (pCVar1 != this_ptr) break;
LAB_004d62a7:
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
    }
    core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0((SDamageInfo *)&local_84);
    local_80 = core_actor_cpp_FUN_0040cf60(0x42b40000,0x43020000);
    local_58 = 0x3f000000;
    local_84 = 0xffffffff;
    local_50 = this_ptr;
    local_4c = this_ptr;
    local_14 = local_80;
    iVar2 = (**(code **)(*(int *)&pCVar1->field_0x2b0 + 0x108))
                      (pCVar1,auStack_44 + 5,0x3f800000,&local_84);
    if (iVar2 == 0) goto LAB_004d62a7;
    local_18 = 1;
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 4;
  } while( true );
}
