// Name: core_svetlana.cpp_CSvetlana_performBladeAttack_FUN_00594140
// Address: 00594140
// Address Range: [[00594140, 0059432b]]
// Convention: __cdecl
// Signature: void __cdecl core_svetlana_cpp_CSvetlana_performBladeAttack_FUN_00594140(CSvetlana *this_ptr,int bone_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_svetlana_cpp_CSvetlana_performBladeAttack_FUN_00594140(CSvetlana *this_ptr,int bone_index)

{
  CSvetlana *pCVar1;
  CSkeleton *pCVar2;
  CSkeleton *pCVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  uint auStackY_1060 [998];
  uint *puVar8;
  char *pcVar9;
  SDamageInfo local_b4 [4];
  uint local_b0;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_78;
  uint auStack_74 [5];
  uint local_60;
  uint local_54 [3];
  uint local_48 [3];
  uint local_3c [3];
  uint local_30 [3];
  uint local_24;
  int local_18;
  int local_14;
  
  bVar7 = 0;
  iVar5 = 0;
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                     ((CDeformableModelInstance *)&this_ptr->field_0x158);
  local_18 = -1;
  pCVar3 = pCVar2;
  iVar6 = local_18;
  if (0 < pCVar2->bone_count) {
    do {
      iVar6 = iVar5;
      if (bone_index == *(int *)(pCVar3->bone_list + 0x20)) break;
      iVar5 = iVar5 + 1;
      pCVar3 = (CSkeleton *)&pCVar3->field_0x24;
      iVar6 = local_18;
    } while (iVar5 < pCVar2->bone_count);
  }
  local_18 = iVar6;
  if (local_18 == -1) {
    _DAT_01d1d400 = "..\\core\\svetlana.cpp";
    _DAT_01d1d404 = 0x2ef;
    core_main_c_FUN_005030e0("Can't find svetlana's parent bone");
  }
  core_skeleton_cpp_FUN_00569130(&this_ptr->field_0x158,bone_index);
  puVar8 = auStack_74 + 0x11;
  local_30[0] = auStack_74[2];
  auStack_74[(uint)bVar7 * -2 + 0x12] = auStack_74[(uint)bVar7 * -2 + 3];
  auStack_74[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x13] =
       auStack_74[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
  core_actor_cpp_FUN_00408b40(this_ptr,puVar8);
  local_48[0] = local_24;
  auStack_74[(uint)bVar7 * -2 + 0xc] = auStack_74[(uint)bVar7 * -2 + 0x15];
  auStack_74[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd] =
       auStack_74[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x16];
  core_skeleton_cpp_FUN_00569130(&this_ptr->field_0x158,local_18);
  puVar8 = auStack_74 + 0xe;
  local_3c[0] = local_78;
  auStack_74[(uint)bVar7 * -2 + 0xf] = auStack_74[(uint)bVar7 * -2];
  auStack_74[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10] =
       auStack_74[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  core_actor_cpp_FUN_00408b40(this_ptr,puVar8);
  local_54[0] = local_60;
  auStack_74[(uint)bVar7 * -2 + 9] = auStack_74[(uint)bVar7 * -2 + 6];
  auStack_74[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
       auStack_74[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
  iVar5 = 0;
  iVar6 = 0;
  local_14 = 0;
  do {
    while( true ) {
      if (g_CDemonSetPtr->character_count <= iVar6) {
        if (local_14 == 0) {
          pcVar9 = "svetlana-miss?.wav";
        }
        else {
          pcVar9 = "svetlana-attack?.wav";
        }
        (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))(this_ptr,pcVar9);
        return;
      }
      pCVar1 = *(CSvetlana **)((int)g_CDemonSetPtr->characters + iVar5);
      if (pCVar1 != this_ptr) break;
LAB_00594258:
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 4;
    }
    core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(local_b4);
    local_b0 = 0x41700000;
    local_8c = 3;
    local_88 = 0x3f333333;
    local_84 = 0x67;
    iVar4 = (**(code **)(*(int *)&pCVar1->field_0x154 + 0x104))
                      (pCVar1,auStack_74 + 0xb,auStack_74 + 8,local_b4,0);
    if (iVar4 == 0) goto LAB_00594258;
    local_14 = 1;
    iVar6 = iVar6 + 1;
    iVar5 = iVar5 + 4;
  } while( true );
}
