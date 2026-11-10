// Name: core_mimic.cpp_CMimic_processMorph_FUN_00510c20
// Address: 00510c20
// Address Range: [[00510c20, 00510d87]]
// Convention: __cdecl
// Signature: void __cdecl core_mimic_cpp_CMimic_processMorph_FUN_00510c20(CMimic *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mimic_cpp_CMimic_processMorph_FUN_00510c20(CMimic *this_ptr,float delta_time)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float local_18 [2];
  
  if (this_ptr->morph_target_actor == (CDemonActor *)0x0) {
    _DAT_01d1d400 = "..\\core\\mimic.cpp";
    _DAT_01d1d404 = 0x4c9;
    core_main_c_FUN_005030e0("CMimic::processMorph - can't process morph unless we've started morph!");
  }
  fVar1 = delta_time / _DAT_006039d4 + this_ptr->morph_blend;
  this_ptr->morph_blend = fVar1;
  if (1.0 <= fVar1) {
    core_mission_cpp_CDemonMission_generateActorName_FUN_0051bd60
              (0x01D2C900,this_ptr->morph_target_actor);
    core_mission_cpp_CDemonMission_addActorToList_FUN_0051b160
              (0x01D2C900,this_ptr->morph_target_actor);
    this_ptr->morph_target_actor = (CDemonActor *)0x0;
    core_mission_cpp_FUN_0051b740(0x01D2C900,this_ptr,1);
  }
  else {
    local_18[0] = delta_time;
    while (0.0 < local_18[0]) {
      core_motion_cpp_CMotionController_advance_FUN_00524270
                (&(this_ptr->base).base.model.base,local_18);
    }
    local_18[0] = delta_time;
    while (0.0 < local_18[0]) {
      core_motion_cpp_CMotionController_advance_FUN_00524270
                ((CMotionController *)(this_ptr->morph_target_actor + 1),local_18);
    }
    core_morph_cpp_CMorph_updateModelFromDeformable_FUN_00523290
              ((CMorph *)&this_ptr->field_0x46e90,0,&(this_ptr->base).base.model,0);
    core_morph_cpp_CMorph_updateModelFromDeformable_FUN_00523290
              ((CMorph *)&this_ptr->field_0x46e90,1,
               (CDeformableModelInstance *)(this_ptr->morph_target_actor + 1),0);
    iVar2 = 0;
    if (0 < *(int *)&this_ptr->field_0x46ee4) {
      iVar3 = 0;
      do {
        iVar2 = iVar2 + 1;
        *(float *)(*(int *)&this_ptr->field_0x46ee8 + 4 + iVar3) =
             -*(float *)(*(int *)&this_ptr->field_0x46ee8 + 4 + iVar3);
        iVar3 = iVar3 + 0x10;
      } while (iVar2 < *(int *)&this_ptr->field_0x46ee4);
      return;
    }
  }
  return;
}
