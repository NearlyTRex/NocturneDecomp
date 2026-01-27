// Name: core_fire.cpp_CToss_process_FUN_004c4000
// Address: 004c4000
// Address Range: [[004c4000, 004c415b]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CToss_process_FUN_004c4000(CToss * this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CToss_process_FUN_004c4000(CToss *this_ptr)

{
  float fVar1;
  CKeyFramedModel *pCVar2;
  CVector3f *pCVar3;
  CVector3f local_30;
  float local_24;
  float local_20;
  float local_1c;
  CVector3f local_18;
  float local_c;
  
  if (0.0 < *(float *)(this_ptr->unk + 0x3dc)) {
    local_c = g_CGamePtr->delta_time_float;
    fVar1 = *(float *)(this_ptr->unk + 0x3dc) - local_c;
    *(float *)(this_ptr->unk + 0x3dc) = fVar1;
    if (0.0 < fVar1) {
      core_box_cpp_CBox_process_FUN_0041e2f0((CBox *)(this_ptr->unk + 0x180),local_c);
      if (*(int *)this_ptr->unk != 0) {
        return;
      }
      local_30.x = g_ZeroVector.x;
      local_30.y = g_ZeroVector.y;
      local_30.z = g_ZeroVector.z;
      pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                         ((CKeyFramedModelInstance *)(this_ptr->unk + 4));
      local_30.z = local_30.z + (pCVar2->bounds_max).z;
      pCVar3 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                         ((CMatrix3x3f *)(this_ptr->unk + 0x198),&local_18,&local_30);
      local_24 = (((CBox *)(this_ptr->unk + 0x180))->position).x + pCVar3->x;
      local_20 = *(float *)(this_ptr->unk + 0x184) + pCVar3->y;
      local_1c = *(float *)(this_ptr->unk + 0x188) + pCVar3->z;
      if (&local_30 != (CVector3f *)&local_24) {
        local_30.x = local_24;
        local_30.y = local_20;
        local_30.z = local_1c;
      }
      core_fire_cpp_CFireEffect_FUN_004c79d0(g_CFireEffectPtr);
      return;
    }
    if (*(int *)this_ptr->unk == 0) {
      core_fire_cpp_CFireEffect_FUN_004c8c10(g_CFireEffectPtr);
      sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(this_ptr->unk + 0x3e0));
      return;
    }
  }
  return;
}
