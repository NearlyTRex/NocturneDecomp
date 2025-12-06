// Name: core_hostage.cpp_CHostage_FUN_004f6450
// Address: 004f6450
// Address Range: [[004f6450, 004f654f]]
// Convention: __cdecl
// Signature: void core_hostage.cpp_CHostage_FUN_004f6450(CHostage * this_ptr)

#include "nocturne.h"

void __cdecl core_hostage_cpp_CHostage_FUN_004f6450(CHostage *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  int iVar2;
  uint uVar3;
  int in_stack_00000008;
  uint uStack0000001c;
  uint uStack00000030;
  
  if (*(int *)this_ptr->field4_0x1fab8 == 0) {
    *(uint *)(in_stack_00000008 + 4) = 0;
  }
  fVar1 = (this_ptr->base_npc).base_character.hit_points - *(float *)(in_stack_00000008 + 4);
  this_ptr_00 = &(this_ptr->base_npc).base_character.model;
  (this_ptr->base_npc).base_character.hit_points = fVar1;
  if (fVar1 <= 0.0) {
    (this_ptr->base_npc).base_character.hit_points = 0.0;
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&this_ptr_00->motion_controller,6,1);
    (*((this_ptr->base_npc).base_character.base_actor.vtable)->spawnFlies)
              ((CDemonActor *)this_ptr,0x32,25.0);
    (*((this_ptr->base_npc).base_character.base_actor.vtable)->playSound)
              ((CDemonActor *)this_ptr,this_ptr->field2_0x1f70c + 0x340);
  }
  else if (0.0 < *(float *)(in_stack_00000008 + 4)) {
    if ((this_ptr->base_npc).base_character.grabbed_by == (CDemonActor *)0x0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&this_ptr_00->motion_controller,4,1);
      uVar3 = DAT_00821ff4;
      this_ptr->field8_0x1fae0[0xc] = '\0';
      this_ptr->field8_0x1fae0[0xd] = '\0';
      this_ptr->field8_0x1fae0[0xe] = '@';
      this_ptr->field8_0x1fae0[0xf] = '@';
      *(uint *)(this_ptr->field8_0x1fae0 + 8) = uVar3;
    }
    uStack0000001c = 0x4f64ca;
    iVar2 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)(this_ptr->field2_0x1f70c + 0x3a4))
    ;
    if (iVar2 == 0) {
      uStack0000001c = 0x4f6539;
      uVar3 = (*((this_ptr->base_npc).base_character.base_actor.vtable)->playSound)
                        ((CDemonActor *)this_ptr,this_ptr->field2_0x1f70c + 0x2dc);
      *(uint *)(this_ptr->field2_0x1f70c + 0x3a4) = uVar3;
      uStack00000030 = 0x4f6549;
      core_npc_cpp_CNPC_FUN_00544d30(&this_ptr->base_npc);
      return;
    }
  }
  uStack0000001c = 0x4f64d8;
  core_npc_cpp_CNPC_FUN_00544d30(&this_ptr->base_npc);
  return;
}
