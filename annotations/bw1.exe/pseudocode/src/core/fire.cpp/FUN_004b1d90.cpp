// Name: core_fire.cpp_FUN_004b1d90
// Address: 004b1d90
// Address Range: [[004b1d90, 004b1f0d]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_FUN_004b1d90(CToss *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_FUN_004b1d90(CToss *this_ptr)

{
  byte *position;
  float fVar1;
  CKeyFramedModel *pCVar2;
  byte bVar3;
  float afStackY_1034 [1010];
  CKeyFramedModelInstance *this_ptr_00;
  float local_4c;
  float local_48;
  float local_44;
  byte local_40 [8];
  float local_38 [4];
  float local_28;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  
  bVar3 = 0;
  if (0.0 < *(float *)&this_ptr->field_0x3dc) {
    local_10 = *(float *)&g_CGamePtr->field_0x294;
    fVar1 = *(float *)&this_ptr->field_0x3dc - local_10;
    position = &this_ptr->field_0x180;
    *(float *)&this_ptr->field_0x3dc = fVar1;
    if (0.0 < fVar1) {
      core_box_cpp_CBox_process_FUN_0041e0d0((CBox *)position,local_10);
      if (*(int *)this_ptr != 0) {
        return;
      }
      this_ptr_00 = (CKeyFramedModelInstance *)&this_ptr->field_0x4;
      local_40._0_4_ = _DAT_02c8af28;
      *(uint *)(local_40 + (uint)bVar3 * -8 + 4) =
           *(uint *)(&DAT_02c8af2c + (uint)bVar3 * -8);
      local_38[(uint)bVar3 * -2 + (uint)bVar3 * -2] =
           *(float *)(&DAT_02c8af30 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
      pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(this_ptr_00);
      local_38[0] = local_38[0] + *(float *)&pCVar2->field_0x34c;
      core_dirmat_cpp_FUN_0045f690(&this_ptr->field_0x198,local_40);
      local_1c = local_28;
      local_38[(uint)bVar3 * 0xfffffffe + 8] = local_38[(uint)bVar3 * 0xfffffffe + 5];
      local_38[(uint)bVar3 * 0xfffffffe + (uint)bVar3 * 0xfffffffe + 9] =
           local_38[(uint)bVar3 * 0xfffffffe + (uint)bVar3 * 0xfffffffe + 6];
      local_4c = *(float *)position + local_1c;
      local_48 = *(float *)&this_ptr->field_0x184 + local_18;
      local_44 = *(float *)&this_ptr->field_0x188 + local_14;
      local_38[1] = *(float *)position + local_1c;
      local_38[(uint)bVar3 * 0xfffffffe + 2] =
           (float)*(uint *)((int)&stack0xffffffb8 + (uint)bVar3 * -8);
      local_38[(uint)bVar3 * 0xfffffffe + (uint)bVar3 * 0xfffffffe + 3] =
           (float)*(uint *)((int)&stack0xffffffbc + (uint)bVar3 * -8 + (uint)bVar3 * -8);
      if ((float *)local_40 != local_38 + 1) {
        local_40._0_4_ = local_38[1];
        local_40._4_4_ = local_38[2];
        local_38[0] = local_38[3];
      }
      core_fire_cpp_CFireEffect_createSpark_FUN_004b59e0
                (0x01C57074,(CVector3f *)local_40,(CVector3f *)0x0,0x20000,0x10000,0,0xffff);
      return;
    }
    if (*(int *)this_ptr == 0) {
      core_fire_cpp_CFireEffect_createExplosion_FUN_004b6c60
                (0x01C57074,(CVector3f *)position,16.0,100.0,4.0);
      sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)&this_ptr->field_0x3e0);
      return;
    }
  }
  return;
}
