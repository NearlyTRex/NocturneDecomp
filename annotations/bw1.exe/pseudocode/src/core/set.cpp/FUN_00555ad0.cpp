// Name: core_set.cpp_FUN_00555ad0
// Address: 00555ad0
// Address Range: [[00555ad0, 00555c91]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_FUN_00555ad0(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_set_cpp_FUN_00555ad0(CDemonSet *this_ptr)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  CDemonSet *pCVar6;
  
  *(uint *)&this_ptr->field_0x150fec = 0;
  *(uint *)&this_ptr->field_0x152f30 = 0;
  *(uint *)&this_ptr->field_0x154e74 = 0;
  *(uint *)&this_ptr->field_0x158cfc = 0;
  *(uint *)&this_ptr->field_0x14f0a8 = 0;
  iVar5 = 0;
  pCVar6 = this_ptr;
  if (0 < *(int *)&this_ptr->field_0x14d164) {
    do {
      iVar1 = *(int *)&pCVar6->field_0x14d168;
      if ((*(int *)(iVar1 + 0xfc) != 0) || (*(int *)(iVar1 + 0xf8) != 0)) {
        *(int *)(&this_ptr->field_0x158d00 + *(int *)&this_ptr->field_0x158cfc * 4) = iVar1;
        *(int *)&this_ptr->field_0x158cfc = *(int *)&this_ptr->field_0x158cfc + 1;
      }
      uVar3 = (CCharacter *)core_actor_cpp_castToClassHash_FUN_0040c600(iVar1,g_CCharacterClassInfo.name_hash);
      *(uint *)(&this_ptr->field_0x14f0ac + *(int *)&this_ptr->field_0x14f0a8 * 4) = uVar3;
      uVar2 = g_CEnemyClassInfo.name_hash;
      if (*(int *)(&this_ptr->field_0x14f0ac + *(int *)&this_ptr->field_0x14f0a8 * 4) == 0) {
        uVar3 = (CWayPoint *)core_actor_cpp_castToClassHash_FUN_0040c600(iVar1,g_CWayPointClassInfo.name_hash);
        *(uint *)(&this_ptr->field_0x154e78 + *(int *)&this_ptr->field_0x154e74 * 4) = uVar3;
        if (*(int *)(&this_ptr->field_0x154e78 + *(int *)&this_ptr->field_0x154e74 * 4) != 0) {
          *(int *)&this_ptr->field_0x154e74 = *(int *)&this_ptr->field_0x154e74 + 1;
        }
        iVar4 = (CTrigger *)core_actor_cpp_castToClassHash_FUN_0040c600(iVar1,g_CTriggerClassInfo.name_hash);
        if (((iVar4 != 0) && (*(int *)(iVar4 + 0x174) == 4)) && (*(int *)(iVar4 + 0x304) != 0)) {
          *(int *)(&this_ptr->field_0x152f34 + *(int *)&this_ptr->field_0x152f30 * 4) = iVar1;
          *(int *)&this_ptr->field_0x152f30 = *(int *)&this_ptr->field_0x152f30 + 1;
        }
      }
      else {
        *(int *)&this_ptr->field_0x14f0a8 = *(int *)&this_ptr->field_0x14f0a8 + 1;
        uVar3 = core_actor_cpp_castToClassHash_FUN_0040c600(iVar1,uVar2);
        *(uint *)(&this_ptr->field_0x150ff0 + *(int *)&this_ptr->field_0x150fec * 4) = uVar3;
        iVar4 = *(int *)(&this_ptr->field_0x150ff0 + *(int *)&this_ptr->field_0x150fec * 4);
        if (iVar4 != 0) {
          iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x10c))(iVar4);
          if ((iVar4 == 0) &&
             (iVar4 = (**(code **)(*(int *)(*(int *)(&this_ptr->field_0x150ff0 +
                                                    *(int *)&this_ptr->field_0x150fec * 4) + 0x154)
                                  + 0x70))
                                (*(int *)(&this_ptr->field_0x150ff0 +
                                         *(int *)&this_ptr->field_0x150fec * 4)), iVar4 == 0)) {
            *(int *)(&this_ptr->field_0x152f34 + *(int *)&this_ptr->field_0x152f30 * 4) = iVar1;
            *(int *)&this_ptr->field_0x152f30 = *(int *)&this_ptr->field_0x152f30 + 1;
          }
          *(int *)&this_ptr->field_0x150fec = *(int *)&this_ptr->field_0x150fec + 1;
        }
      }
      iVar5 = iVar5 + 1;
      pCVar6 = (CDemonSet *)&pCVar6->field_0x4;
    } while (iVar5 < *(int *)&this_ptr->field_0x14d164);
  }
  return;
}
