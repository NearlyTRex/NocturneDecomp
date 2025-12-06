// Name: core_set.cpp_CDemonSet_FUN_00570fc0
// Address: 00570fc0
// Address Range: [[00570fc0, 0057112f]]
// Convention: __cdecl
// Signature: void core_set.cpp_CDemonSet_FUN_00570fc0(CDemonSet * this_ptr)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_FUN_00570fc0(CDemonSet *this_ptr)

{
  CDemonActor *actor_ptr;
  uint class_name_hash;
  CDemonActor *pCVar1;
  int iVar2;
  CDemonSet *pCVar3;
  
  this_ptr->field19_0x14f0a0[0x1f3c] = '\0';
  this_ptr->field19_0x14f0a0[0x1f3d] = '\0';
  this_ptr->field19_0x14f0a0[0x1f3e] = '\0';
  this_ptr->field19_0x14f0a0[7999] = '\0';
  this_ptr->field19_0x14f0a0[16000] = '\0';
  this_ptr->field19_0x14f0a0[0x3e81] = '\0';
  this_ptr->field19_0x14f0a0[0x3e82] = '\0';
  this_ptr->field19_0x14f0a0[0x3e83] = '\0';
  this_ptr->field19_0x14f0a0[0x5dc4] = '\0';
  this_ptr->field19_0x14f0a0[0x5dc5] = '\0';
  this_ptr->field19_0x14f0a0[0x5dc6] = '\0';
  this_ptr->field19_0x14f0a0[0x5dc7] = '\0';
  this_ptr->field19_0x14f0a0[0x9c4c] = '\0';
  this_ptr->field19_0x14f0a0[0x9c4d] = '\0';
  this_ptr->field19_0x14f0a0[0x9c4e] = '\0';
  this_ptr->field19_0x14f0a0[0x9c4f] = '\0';
  this_ptr->damage_listener_count = 0;
  iVar2 = 0;
  pCVar3 = this_ptr;
  if (0 < (int)this_ptr->actor_list_ptr) {
    do {
      actor_ptr = *(CDemonActor **)pCVar3->actor_list_data;
      if ((actor_ptr->is_transparent != 0) || (actor_ptr->field14_0xf8 != 0)) {
        *(CDemonActor **)
         (this_ptr->field19_0x14f0a0 + *(int *)(this_ptr->field19_0x14f0a0 + 0x9c4c) * 4 + 0x9c50) =
             actor_ptr;
        *(int *)(this_ptr->field19_0x14f0a0 + 0x9c4c) =
             *(int *)(this_ptr->field19_0x14f0a0 + 0x9c4c) + 1;
      }
      pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790
                         (actor_ptr,g_CCharacterClassInfo.name_hash);
      *(CDemonActor **)(this_ptr->field19_0x14f0a0 + this_ptr->damage_listener_count * 4 + -4) =
           pCVar1;
      class_name_hash = g_CEnemyClassInfo.name_hash;
      if (*(int *)(this_ptr->field19_0x14f0a0 + this_ptr->damage_listener_count * 4 + -4) == 0) {
        pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (actor_ptr,g_CWayPointClassInfo.name_hash);
        *(CDemonActor **)
         (this_ptr->field19_0x14f0a0 + *(int *)(this_ptr->field19_0x14f0a0 + 0x5dc4) * 4 + 0x5dc8) =
             pCVar1;
        if (*(int *)(this_ptr->field19_0x14f0a0 +
                    *(int *)(this_ptr->field19_0x14f0a0 + 0x5dc4) * 4 + 0x5dc8) != 0) {
          *(int *)(this_ptr->field19_0x14f0a0 + 0x5dc4) =
               *(int *)(this_ptr->field19_0x14f0a0 + 0x5dc4) + 1;
        }
        pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (actor_ptr,g_CTriggerClassInfo.name_hash);
        if (((pCVar1 != (CDemonActor *)0x0) && (*(int *)(pCVar1[1].actor_name + 0x1c) == 4)) &&
           (pCVar1[2].orient_matrix.m[1].z != 0.0)) goto LAB_005710a5;
      }
      else {
        this_ptr->damage_listener_count = this_ptr->damage_listener_count + 1;
        pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790(actor_ptr,class_name_hash);
        *(CDemonActor **)
         (this_ptr->field19_0x14f0a0 + *(int *)(this_ptr->field19_0x14f0a0 + 0x1f3c) * 4 + 8000) =
             pCVar1;
        if (*(int *)(this_ptr->field19_0x14f0a0 +
                    *(int *)(this_ptr->field19_0x14f0a0 + 0x1f3c) * 4 + 8000) != 0) {
          *(int *)(this_ptr->field19_0x14f0a0 + 0x1f3c) =
               *(int *)(this_ptr->field19_0x14f0a0 + 0x1f3c) + 1;
LAB_005710a5:
          *(CDemonActor **)
           (this_ptr->field19_0x14f0a0 + *(int *)(this_ptr->field19_0x14f0a0 + 16000) * 4 + 0x3e84)
               = actor_ptr;
          *(int *)(this_ptr->field19_0x14f0a0 + 16000) =
               *(int *)(this_ptr->field19_0x14f0a0 + 16000) + 1;
        }
      }
      iVar2 = iVar2 + 1;
      pCVar3 = (CDemonSet *)pCVar3->cameras;
    } while (iVar2 < (int)this_ptr->actor_list_ptr);
  }
  return;
}
