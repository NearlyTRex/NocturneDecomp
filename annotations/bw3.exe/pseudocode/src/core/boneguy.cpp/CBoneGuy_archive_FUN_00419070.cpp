// Name: core_boneguy.cpp_CBoneGuy_archive_FUN_00419070
// Address: 00419070
// Address Range: [[00419070, 004192b2]]
// Convention: __cdecl
// Signature: void __cdecl core_boneguy_cpp_CBoneGuy_archive_FUN_00419070(CBoneGuy *this_ptr)

#include "nocturne.h"

void __cdecl core_boneguy_cpp_CBoneGuy_archive_FUN_00419070(CBoneGuy *this_ptr)

{
  CDeformableModelInstance *model_ptr;
  int iVar1;
  CVector3f *pCVar2;
  CVector3f *pCVar3;
  CQuaternion4f *pCVar4;
  SBoneGuyBox *pSVar5;
  CQuaternion4f *pCVar6;
  CBodyPart **ppCVar7;
  
  core_enemy_cpp_CEnemy_archive_FUN_00489120(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040b830(&(this_ptr->base).speed,"@speed" + 1);
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ba30
            (&(this_ptr->base).base.model,"modelName");
  if (g_CBoneGuyClassVersion < 4) {
    core_actor_cpp_archiveFloat_FUN_0040b830
              (&(this_ptr->base).guard_distance,"guardDistance");
  }
  model_ptr = &(this_ptr->base).base.model;
  core_actor_cpp_archiveMotionState_FUN_0040bab0(&model_ptr->base,"motion state");
  if (1 < g_CBoneGuyClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b680(this_ptr->death_event,"deathEvent");
    core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->recombine_time,"recombineTime");
    core_actor_cpp_archiveInteger_FUN_0040b8b0(&this_ptr->blown_up,"blownUp");
    core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->recombine_interpolation,"param");
    core_actor_cpp_archiveInteger_FUN_0040b8b0(&this_ptr->box_count,"boxCount");
    core_actor_cpp_archivePartStatus_FUN_0040bba0(model_ptr,"partStatus");
    iVar1 = 0;
    if (0 < this_ptr->box_count) {
      pSVar5 = this_ptr->boxes;
      ppCVar7 = &this_ptr->boxes[0].body_part;
      pCVar3 = &this_ptr->boxes[0].source_pos;
      pCVar4 = &this_ptr->boxes[0].dest_orient;
      pCVar6 = &this_ptr->boxes[0].start_orient;
      pCVar2 = &this_ptr->boxes[0].orient;
      do {
        core_actor_cpp_archiveVector_FUN_0040b400
                  (pSVar5 + iVar1,"boxListPos",pSVar5,pCVar6,ppCVar7);
        core_actor_cpp_archiveVector_FUN_0040b400(pCVar2,"boxListOrient");
        core_actor_cpp_archiveQuaternion_FUN_0040b5e0(pCVar4,"boxListDestOrient");
        core_actor_cpp_archiveQuaternion_FUN_0040b5e0(pCVar6,"boxListStartOrient");
        core_actor_cpp_archiveVector_FUN_0040b400(pCVar3,"sourcePos");
        iVar1 = iVar1 + 1;
        pCVar2 = pCVar2 + 6;
        pCVar4 = (CQuaternion4f *)((int)(pCVar4 + 4) + 8);
        core_actor_cpp_archiveActor_FUN_0040b930(ppCVar7,"boxListPart");
        pCVar3 = pCVar3 + 6;
        ppCVar7 = ppCVar7 + 0x12;
        pCVar6 = (CQuaternion4f *)((int)(pCVar6 + 4) + 8);
      } while (iVar1 < this_ptr->box_count);
    }
  }
  if ((2 < g_CBoneGuyClassVersion) && (g_CBoneGuyClassVersion < 5)) {
    core_actor_cpp_archiveFloat_FUN_0040b830
              (&(this_ptr->base).victim_height,"victimHeight");
    return;
  }
  return;
}
