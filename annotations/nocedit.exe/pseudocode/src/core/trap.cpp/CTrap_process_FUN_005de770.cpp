// Name: core_trap.cpp_CTrap_process_FUN_005de770
// Address: 005de770
// Address Range: [[005de770, 005de918]]
// Convention: __cdecl
// Signature: void core_trap.cpp_CTrap_process_FUN_005de770(CTrap * this_ptr, float delta_time)

#include "nocturne.h"

void __cdecl core_trap_cpp_CTrap_process_FUN_005de770(CTrap *this_ptr,float delta_time)

{
  CDemonActor *this_ptr_00;
  float unaff_EBX;
  float unaff_EBP;
  int iVar1;
  float unaff_EDI;
  int iVar2;
  float in_stack_ffffff78;
  byte auStack_54 [36];
  void *pvStack_30;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  if (*(int *)(this_ptr->field2_0x15c + 0x178) == 0) {
    if (this_ptr->wolf_in_trap != 0) {
      iVar1 = (**(code **)(*(int *)(this_ptr->wolf_in_trap + 0x154) + 0x120))();
      if (iVar1 == 0) {
        return;
      }
      *(uint *)(this_ptr->wolf_in_trap + 0xbee8) = 0;
      this_ptr->wolf_in_trap = 0;
    }
    iVar2 = 0;
    (*((this_ptr->base_actor).vtable)->getBoundingBox)
              (&this_ptr->base_actor,(CBoundingBox3D *)(auStack_54 + 0x20));
    for (iVar1 = 0; iVar1 < *(int *)(g_CDemonSetPtr->field19_0x14f0a0 + 0x1f3c); iVar1 = iVar1 + 1)
    {
      this_ptr_00 = core_actor_cpp_castToClassHash_FUN_0040c790
                              (*(CDemonActor **)(g_CDemonSetPtr->field19_0x14f0a0 + iVar2 + 8000),
                               g_CWerewolfClassInfo.name_hash);
      if ((this_ptr_00 != (CDemonActor *)0x0) &&
         (*(int *)(this_ptr_00[0x8e].actor_name + 0x18) == 0)) {
        core_setcolid_cpp_SCollisionInfo_ctor_FUN_005743c0((SCollisionInfo *)auStack_54);
        (*this_ptr_00->vtable->hasCollision)(this_ptr_00,(SCollisionInfo *)auStack_54);
        if (((this_ptr_00->location).position.y <=
             (this_ptr->base_actor).location.position.y + fStack_14) &&
           ((this_ptr->base_actor).location.position.y + fStack_20 <=
            (this_ptr_00->location).position.y + (float)auStack_54._32_4_)) {
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                    (&this_ptr->base_actor,(CVector3f *)&stack0xfffffff4,
                     &(this_ptr_00->location).position);
          if ((((fStack_24 <= unaff_EDI + (float)pvStack_30) &&
               (unaff_EDI - (float)pvStack_30 <= fStack_18)) &&
              (fStack_1c <= unaff_EBX + (float)pvStack_30)) &&
             (unaff_EBX - (float)pvStack_30 <= unaff_EBP)) {
            this_ptr->wolf_in_trap = (int)this_ptr_00;
            this_ptr_00[0x8e].actor_name[0x1c] = '\0';
            this_ptr_00[0x8e].actor_name[0x1d] = '\0';
            this_ptr_00[0x8e].actor_name[0x1e] = '\0';
            this_ptr_00[0x8e].actor_name[0x1f] = '@';
            *(CTrap **)(this_ptr_00[0x8e].actor_name + 0x18) = this_ptr;
            core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xffffff78);
            (*this_ptr_00->vtable[1].playAmbientSoundWithVolume)
                      (this_ptr_00,&stack0xffffff78,in_stack_ffffff78);
            return;
          }
        }
      }
      iVar2 = iVar2 + 4;
    }
  }
  return;
}
