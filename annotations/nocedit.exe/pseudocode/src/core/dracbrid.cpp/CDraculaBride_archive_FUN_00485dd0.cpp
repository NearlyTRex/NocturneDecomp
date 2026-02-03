// Name: core_dracbrid.cpp_CDraculaBride_archive_FUN_00485dd0
// Address: 00485dd0
// Address Range: [[00485dd0, 00486019]]
// Convention: __cdecl
// Signature: void __cdecl core_dracbrid_cpp_CDraculaBride_archive_FUN_00485dd0(CDraculaBride *this_ptr)

#include "nocturne.h"

void __cdecl core_dracbrid_cpp_CDraculaBride_archive_FUN_00485dd0(CDraculaBride *this_ptr)

{
  int iVar1;
  CDemonActor *actor_ptr;
  char *pcVar2;
  int local_14;
  
  core_enemy_cpp_CEnemy_archive_FUN_004a9660(&this_ptr->base);
  if (g_CDraculaBrideClassVersion < 2) {
    core_actor_cpp_archiveFloat_FUN_0040b770(&(this_ptr->base).speed,"speed");
  }
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040b970
            (&(this_ptr->base).base.model,"modelName");
  if ((1 < g_CDraculaBrideClassVersion) && (g_CDraculaBrideClassVersion < 6)) {
    core_actor_cpp_archiveFloat_FUN_0040b770
              (&(this_ptr->base).guard_distance,"guardDistance");
  }
  if (((2 < g_CDraculaBrideClassVersion) &&
      (core_actor_cpp_archiveString_FUN_0040b5c0(this_ptr->unk + 0x2c,"riseEvent"),
      g_CDraculaBrideClassVersion < 4)) &&
     (core_actor_cpp_archiveInteger_FUN_0040b7f0(&local_14,"initialState"),
     g_ActorReadingMode == 1)) {
    if (local_14 == 1) {
      pcVar2 = "vincoffin";
    }
    else {
      pcVar2 = "incoffin";
    }
    core_motion_cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0
              (&(this_ptr->base).base.model.motion_controller,pcVar2,0.0);
  }
  if (3 < g_CDraculaBrideClassVersion) {
    core_actor_cpp_archiveMotionState_FUN_0040b9f0
              (&(this_ptr->base).base.model.motion_controller,"motionState");
  }
  if (g_CDraculaBrideClassVersion == 4) {
    iVar1 = 0;
    core_actor_cpp_archiveInteger_FUN_0040b7f0
              (&(this_ptr->base).base.cloth_count,"clothCount");
    if (0 < (this_ptr->base).base.cloth_count) {
      pcVar2 = (this_ptr->base).base.cloth_data;
      do {
        iVar1 = iVar1 + 1;
        core_actor_cpp_archiveString_FUN_0040b5c0(pcVar2,(char *)0x0);
        pcVar2 = pcVar2 + 0x28;
      } while (iVar1 < (this_ptr->base).base.cloth_count);
    }
  }
  if (6 < g_CDraculaBrideClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b7f0
              (&this_ptr->freakyVoiceNumber,"freakyVoiceNumber");
  }
  if (7 < g_CDraculaBrideClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->exploded,"exploded");
    core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->partCount,"partCount");
    iVar1 = 0;
    core_actor_cpp_archiveFloat_FUN_0040b770(&this_ptr->fadeTimer,"fadeTimer");
    if (0 < this_ptr->partCount) {
      actor_ptr = (CDemonActor *)this_ptr->padding_0xbf6c;
      do {
        iVar1 = iVar1 + 1;
        core_actor_cpp_archiveActor_FUN_0040b870(actor_ptr,"partList");
        actor_ptr = (CDemonActor *)(actor_ptr->actor_name + 4);
      } while (iVar1 < this_ptr->partCount);
    }
  }
  if (8 < g_CDraculaBrideClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->mistState,"mistState");
    core_actor_cpp_archiveFloat_FUN_0040b770(&this_ptr->vanishTimer,"vanishTimer");
    core_actor_cpp_archiveVector_FUN_0040b340(&this_ptr->newPos,"newPos");
    return;
  }
  return;
}
