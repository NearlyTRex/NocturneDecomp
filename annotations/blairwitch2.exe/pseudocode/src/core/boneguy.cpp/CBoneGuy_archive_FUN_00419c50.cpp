// Name: core_boneguy.cpp_CBoneGuy_archive_FUN_00419c50
// Address: 00419c50
// Address Range: [[00419c50, 00419e92]]
// Convention: __cdecl
// Signature: void __cdecl core_boneguy_cpp_CBoneGuy_archive_FUN_00419c50(CBoneGuy *this_ptr)

#include "nocturne.h"

void __cdecl core_boneguy_cpp_CBoneGuy_archive_FUN_00419c50(CBoneGuy *this_ptr)

{
  CDeformableModelInstance *pCVar1;
  int iVar2;
  CVector3f *pCVar3;
  CVector3f *pCVar4;
  CQuaternion4f *pCVar5;
  SBoneGuyBox *pSVar6;
  CQuaternion4f *pCVar7;
  CBodyPart **ppCVar8;
  
  core_enemy_cpp_CEnemy_archive_FUN_00487ec0(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&(this_ptr->base).speed,"@speed" + 1);
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040bae0
            (&(this_ptr->base).base.model,"modelName");
  if (g_CBoneGuyClassVersion < 4) {
    core_actor_cpp_archiveFloat_FUN_0040b8e0
              (&(this_ptr->base).guard_distance,"guardDistance");
  }
  pCVar1 = &(this_ptr->base).base.model;
  core_actor_cpp_archiveMotionState_FUN_0040bb60(pCVar1,"motion state");
  if (1 < g_CBoneGuyClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b730(this_ptr->death_event,"deathEvent");
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->recombine_time,"recombineTime");
    core_actor_cpp_archiveInteger_FUN_0040b960(&this_ptr->blown_up,"blownUp");
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->recombine_interpolation,"param");
    core_actor_cpp_archiveInteger_FUN_0040b960(&this_ptr->box_count,"boxCount");
    core_actor_cpp_archivePartStatus_FUN_0040bc50(pCVar1,"partStatus");
    iVar2 = 0;
    if (0 < this_ptr->box_count) {
      pSVar6 = this_ptr->boxes;
      ppCVar8 = &this_ptr->boxes[0].body_part;
      pCVar4 = &this_ptr->boxes[0].source_pos;
      pCVar5 = &this_ptr->boxes[0].dest_orient;
      pCVar7 = &this_ptr->boxes[0].start_orient;
      pCVar3 = &this_ptr->boxes[0].orient;
      do {
        core_actor_cpp_archiveVector_FUN_0040b4b0
                  (pSVar6 + iVar2,"boxListPos",pSVar6,pCVar7,ppCVar8);
        core_actor_cpp_archiveVector_FUN_0040b4b0(pCVar3,"boxListOrient");
        core_actor_cpp_archiveQuaternion_FUN_0040b690(pCVar5,"boxListDestOrient");
        core_actor_cpp_archiveQuaternion_FUN_0040b690(pCVar7,"boxListStartOrient");
        core_actor_cpp_archiveVector_FUN_0040b4b0(pCVar4,"sourcePos");
        iVar2 = iVar2 + 1;
        pCVar3 = pCVar3 + 6;
        pCVar5 = (CQuaternion4f *)((int)(pCVar5 + 4) + 8);
        core_actor_cpp_archiveActor_FUN_0040b9e0(ppCVar8,"boxListPart");
        pCVar4 = pCVar4 + 6;
        ppCVar8 = ppCVar8 + 0x12;
        pCVar7 = (CQuaternion4f *)((int)(pCVar7 + 4) + 8);
      } while (iVar2 < this_ptr->box_count);
    }
  }
  if ((2 < g_CBoneGuyClassVersion) && (g_CBoneGuyClassVersion < 5)) {
    core_actor_cpp_archiveFloat_FUN_0040b8e0
              (&(this_ptr->base).victim_height,"victimHeight");
    return;
  }
  return;
}
