// Name: core_fire.cpp_CToss_process_FUN_004993f0
// Address: 004993f0
// Address Range: [[004993f0, 0049956d]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CToss_process_FUN_004993f0(CToss *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CToss_process_FUN_004993f0(CToss *this_ptr)

{
  CBox *this_ptr_00;
  float fVar1;
  CKeyFramedModel *pCVar2;
  byte bVar3;
  float afStackY_1034 [1010];
  CKeyFramedModelInstance *this_ptr_01;
  float local_4c;
  float local_48;
  float local_44;
  CVector3f local_40;
  CVector3f local_34;
  CVector3f local_28;
  float local_1c;
  float local_18 [3];
  
  bVar3 = 0;
  if (0.0 < this_ptr->fuse_timer) {
    local_18[2] = g_CGamePtr->delta_time_float;
    fVar1 = this_ptr->fuse_timer - local_18[2];
    this_ptr_00 = &this_ptr->physics_box;
    this_ptr->fuse_timer = fVar1;
    if (0.0 < fVar1) {
      core_box_cpp_CBox_process_FUN_005b2290(this_ptr_00,local_18[2]);
      if (this_ptr->toss_type != 0) {
        return;
      }
      this_ptr_01 = &this_ptr->model;
      local_40.x = g_CVector3f_0265370c.x;
      *(uint *)((int)&local_40 + (uint)bVar3 * -8 + 4) =
           *(uint *)((int)&g_CVector3f_0265370c + (uint)bVar3 * -8 + 4);
      *(uint *)((int)&local_40 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
           *(uint *)((uint)bVar3 * -8 + 0x2653714 + (uint)bVar3 * -8);
      pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(this_ptr_01);
      local_40.z = local_40.z + (pCVar2->bounds).max.z;
      core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00449530
                (&(this_ptr->physics_box).rotation_matrix,&local_40,&local_28);
      local_1c = local_28.x;
      local_18[(uint)bVar3 * -2] = *(float *)((int)&local_28 + (uint)bVar3 * -8 + 4);
      local_18[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
           *(float *)((int)&local_28 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
      local_4c = (this_ptr_00->position).x + local_1c;
      local_48 = (this_ptr->physics_box).position.y + local_18[0];
      local_44 = (this_ptr->physics_box).position.z + local_18[1];
      local_34.x = local_4c;
      *(uint *)((int)&local_34 + (uint)bVar3 * -8 + 4) =
           *(uint *)((int)&stack0xffffffb8 + (uint)bVar3 * -8);
      *(uint *)((int)&local_34 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
           *(uint *)((int)&stack0xffffffbc + (uint)bVar3 * -8 + (uint)bVar3 * -8);
      if (&local_40 != &local_34) {
        local_40.x = local_34.x;
        local_40.y = local_34.y;
        local_40.z = local_34.z;
      }
      core_fire_cpp_CFireEffect_createSpark_FUN_0049d090
                (g_CFireEffect_PTR_00614d30,&local_40,(CVector3f *)0x0,0x20000,0x10000,0,0xffff);
      return;
    }
    if (this_ptr->toss_type == 0) {
      core_fire_cpp_CFireEffect_createExplosion_FUN_0049e360
                (g_CFireEffect_PTR_00614d30,&this_ptr_00->position,16.0,100.0,4.0);
      sound_sndmain_cpp_killSfx_FUN_00551050(this_ptr->sfx_handle);
      return;
    }
  }
  return;
}
