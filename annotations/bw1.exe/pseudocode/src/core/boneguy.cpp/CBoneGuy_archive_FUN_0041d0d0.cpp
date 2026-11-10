// Name: core_boneguy.cpp_CBoneGuy_archive_FUN_0041d0d0
// Address: 0041d0d0
// Address Range: [[0041d0d0, 0041d312]]
// Convention: __cdecl
// Signature: void __cdecl core_boneguy_cpp_CBoneGuy_archive_FUN_0041d0d0(CBoneGuy *this_ptr)

#include "nocturne.h"

void __cdecl core_boneguy_cpp_CBoneGuy_archive_FUN_0041d0d0(CBoneGuy *this_ptr)

{
  byte *puVar1;
  byte *puVar2;
  CDeformableModelInstance *model_ptr;
  int iVar3;
  byte *puVar4;
  byte *puVar5;
  byte *puVar6;
  SBoneGuyBox *pSVar7;
  
  core_enemy_cpp_CEnemy_archive_FUN_004a0520(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&(this_ptr->base).speed,"@speed" + 1);
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040b7f0
            (&(this_ptr->base).base.model,"modelName");
  if (g_CBoneGuyClassVersion < 4) {
    core_actor_cpp_archiveFloat_FUN_0040b5f0
              (&(this_ptr->base).guard_distance,"guardDistance");
  }
  model_ptr = &(this_ptr->base).base.model;
  core_actor_cpp_archiveMotionState_FUN_0040b870(&model_ptr->base,"motion state");
  if (1 < g_CBoneGuyClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b440(this_ptr->death_event,"deathEvent");
    core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->recombine_time,"recombineTime");
    core_actor_cpp_archiveInteger_FUN_0040b670(&this_ptr->blown_up,"blownUp");
    core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->recombine_interpolation,"param");
    core_actor_cpp_archiveInteger_FUN_0040b670(&this_ptr->box_count,"boxCount");
    core_actor_cpp_archivePartStatus_FUN_0040b960(model_ptr,"partStatus");
    iVar3 = 0;
    if (0 < this_ptr->box_count) {
      pSVar7 = this_ptr->boxes;
      puVar2 = &this_ptr->boxes[0].field_0x44;
      puVar5 = &this_ptr->boxes[0].field_0x38;
      puVar6 = &this_ptr->boxes[0].field_0x18;
      puVar1 = &this_ptr->boxes[0].field_0x28;
      puVar4 = &this_ptr->boxes[0].field_0xc;
      do {
        core_actor_cpp_archiveVector_FUN_0040b1c0
                  (pSVar7 + iVar3,"boxListPos",pSVar7,puVar1,puVar2);
        core_actor_cpp_archiveVector_FUN_0040b1c0(puVar4,"boxListOrient");
        core_actor_cpp_archiveQuaternion_FUN_0040b3a0(puVar6,"boxListDestOrient");
        core_actor_cpp_archiveQuaternion_FUN_0040b3a0(puVar1,"boxListStartOrient");
        core_actor_cpp_archiveVector_FUN_0040b1c0(puVar5,"sourcePos");
        iVar3 = iVar3 + 1;
        puVar4 = puVar4 + 0x48;
        puVar6 = puVar6 + 0x48;
        core_actor_cpp_archiveActor_FUN_0040b6f0(puVar2,"boxListPart");
        puVar5 = puVar5 + 0x48;
        puVar2 = puVar2 + 0x48;
        puVar1 = puVar1 + 0x48;
      } while (iVar3 < this_ptr->box_count);
    }
  }
  if ((2 < g_CBoneGuyClassVersion) && (g_CBoneGuyClassVersion < 5)) {
    core_actor_cpp_archiveFloat_FUN_0040b5f0
              (&(this_ptr->base).victim_height,"victimHeight");
    return;
  }
  return;
}
