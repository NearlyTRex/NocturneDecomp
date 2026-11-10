// Name: core_boneguy.cpp_CBoneGuy_archive_FUN_00419c50
// Address: 00419c50
// Address Range: [[00419c50, 00419e92]]
// Convention: __cdecl
// Signature: void __cdecl core_boneguy_cpp_CBoneGuy_archive_FUN_00419c50(CBoneGuy *this_ptr)

#include "nocturne.h"

void __cdecl core_boneguy_cpp_CBoneGuy_archive_FUN_00419c50(CBoneGuy *this_ptr)

{
  byte *puVar1;
  byte *puVar2;
  CDeformableModelInstance *pCVar3;
  int iVar4;
  byte *puVar5;
  byte *puVar6;
  byte *puVar7;
  SBoneGuyBox *pSVar8;
  
  core_enemy_cpp_CEnemy_archive_FUN_00487ec0(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&(this_ptr->base).speed,"@speed" + 1);
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040bae0
            (&(this_ptr->base).base.model,"modelName");
  if (g_CBoneGuyClassVersion < 4) {
    core_actor_cpp_archiveFloat_FUN_0040b8e0
              (&(this_ptr->base).guard_distance,"guardDistance");
  }
  pCVar3 = &(this_ptr->base).base.model;
  core_actor_cpp_archiveMotionState_FUN_0040bb60(pCVar3,"motion state");
  if (1 < g_CBoneGuyClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b730(this_ptr->death_event,"deathEvent");
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->recombine_time,"recombineTime");
    core_actor_cpp_archiveInteger_FUN_0040b960(&this_ptr->blown_up,"blownUp");
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->recombine_interpolation,"param");
    core_actor_cpp_archiveInteger_FUN_0040b960(&this_ptr->box_count,"boxCount");
    core_actor_cpp_archivePartStatus_FUN_0040bc50(pCVar3,"partStatus");
    iVar4 = 0;
    if (0 < this_ptr->box_count) {
      pSVar8 = this_ptr->boxes;
      puVar2 = &this_ptr->boxes[0].field_0x44;
      puVar6 = &this_ptr->boxes[0].field_0x38;
      puVar7 = &this_ptr->boxes[0].field_0x18;
      puVar1 = &this_ptr->boxes[0].field_0x28;
      puVar5 = &this_ptr->boxes[0].field_0xc;
      do {
        core_actor_cpp_archiveVector_FUN_0040b4b0
                  (pSVar8 + iVar4,"boxListPos",pSVar8,puVar1,puVar2);
        core_actor_cpp_archiveVector_FUN_0040b4b0(puVar5,"boxListOrient");
        core_actor_cpp_archiveQuaternion_FUN_0040b690(puVar7,"boxListDestOrient");
        core_actor_cpp_archiveQuaternion_FUN_0040b690(puVar1,"boxListStartOrient");
        core_actor_cpp_archiveVector_FUN_0040b4b0(puVar6,"sourcePos");
        iVar4 = iVar4 + 1;
        puVar5 = puVar5 + 0x48;
        puVar7 = puVar7 + 0x48;
        core_actor_cpp_archiveActor_FUN_0040b9e0(puVar2,"boxListPart");
        puVar6 = puVar6 + 0x48;
        puVar2 = puVar2 + 0x48;
        puVar1 = puVar1 + 0x48;
      } while (iVar4 < this_ptr->box_count);
    }
  }
  if ((2 < g_CBoneGuyClassVersion) && (g_CBoneGuyClassVersion < 5)) {
    core_actor_cpp_archiveFloat_FUN_0040b8e0
              (&(this_ptr->base).victim_height,"victimHeight");
    return;
  }
  return;
}
