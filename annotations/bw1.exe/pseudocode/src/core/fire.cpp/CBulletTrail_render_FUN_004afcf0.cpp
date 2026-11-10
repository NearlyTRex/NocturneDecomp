// Name: core_fire.cpp_CBulletTrail_render_FUN_004afcf0
// Address: 004afcf0
// Address Range: [[004afcf0, 004afff6]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CBulletTrail_render_FUN_004afcf0(CBulletTrail *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CBulletTrail_render_FUN_004afcf0(CBulletTrail *this_ptr)

{
  CKeyFramedModel *pCVar1;
  float fVar2;
  int iVar3;
  int extraout_EDX;
  byte bVar4;
  float10 fVar5;
  float afStackY_10ac [1009];
  CDemonRenderer *this_ptr_00;
  CVector3f *world_position;
  float local_d8;
  float local_d4;
  CVector3f local_d0;
  float local_c4;
  float afStack_c0 [4];
  float local_b0;
  float local_ac;
  float local_a8 [4];
  float local_98;
  CVector3f local_94;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78 [4];
  float local_68;
  CVector3f local_64;
  float local_58;
  float local_54 [4];
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  int local_2c;
  int local_28;
  float local_24;
  int local_20;
  float local_1c;
  int local_18;
  
  bVar4 = 0;
  local_88 = (this_ptr->end_position).x - (this_ptr->start_position).x;
  local_84 = (this_ptr->end_position).y - (this_ptr->start_position).y;
  local_80 = (this_ptr->end_position).z - (this_ptr->start_position).z;
  afStack_c0[2] = local_88;
  afStack_c0[3] = local_84;
  local_b0 = local_80;
  pCVar1 = this_ptr->model_ptr;
  local_78[2] = (pCVar1->bounds).max.x - (pCVar1->bounds).min.x;
  local_78[3] = (pCVar1->bounds).max.y - (pCVar1->bounds).min.y;
  local_68 = (pCVar1->bounds).max.z - (pCVar1->bounds).min.z;
  local_a8[2] = local_78[2];
  local_a8[3] = local_78[3];
  local_98 = local_68;
  local_d8 = SQRT(local_80 * local_80 + local_88 * local_88 + local_84 * local_84) - local_68;
  if (0.0 < local_d8) {
    local_28 = 2;
    if (0.0 < this_ptr->segment_length) {
      fVar5 = (float10)local_d8 / (float10)this_ptr->segment_length;
      round();
      local_28 = (int)ROUND(fVar5);
      if (local_28 < extraout_EDX) {
        local_28 = extraout_EDX;
      }
      else if (100 < local_28) {
        local_28 = 100;
      }
    }
    local_18 = local_28;
    local_24 = (float)local_28;
    fVar2 = 1.0 / (float)local_28;
    local_ac = afStack_c0[2] * fVar2;
    local_a8[0] = afStack_c0[3] * fVar2;
    local_a8[1] = local_b0 * fVar2;
    local_58 = afStack_c0[2] * fVar2;
    local_54[(uint)bVar4 * -2] = local_a8[(uint)bVar4 * -2];
    local_54[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         local_a8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(afStack_c0 + 2);
    iVar3 = local_28;
    local_20 = 0;
    local_94.x = local_c4;
    *(float *)((int)&local_94 + (uint)bVar4 * -8 + 4) = afStack_c0[(uint)bVar4 * -2];
    *(float *)((int)&local_94 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
         afStack_c0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    if (0 < iVar3) {
      local_2c = iVar3 + -1;
      do {
        local_1c = (float)local_20;
        local_18 = local_2c;
        local_d4 = ((float)local_20 * _DAT_005df2a4) / (float)local_2c;
        if ((float)_DAT_005df2ac < local_d4) {
          world_position = &local_64;
          local_54[2] = local_58 * local_1c;
          local_54[3] = local_54[0] * local_1c;
          local_44 = local_54[1] * local_1c;
          local_40 = local_58 * local_1c;
          local_54[(uint)bVar4 * -2 + 6] = local_54[(uint)bVar4 * -2 + 3];
          local_54[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
               local_54[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
          local_7c = (this_ptr->start_position).x + local_40;
          local_78[0] = (this_ptr->start_position).y + local_3c;
          local_78[1] = (this_ptr->start_position).z + local_38;
          local_64.x = local_7c;
          *(float *)((int)&local_64 + (uint)bVar4 * -8 + 4) = local_78[(uint)bVar4 * -2];
          this_ptr_00 = DAT_00612560;
          *(float *)((int)&local_64 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
               local_78[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
          engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
                    (this_ptr_00,world_position);
          local_d0.x = 0.0;
          local_d0.y = 0.0;
          local_d0.z = 0.0;
          engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
                    (DAT_00612560,&local_94,&local_d0);
          fVar5 = (float10)local_d4;
          round();
          local_18 = (int)ROUND(fVar5);
          core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00467270
                    (this_ptr->model_ptr,0,(CKeyFramedModelInstance *)0x0,local_18);
          engine_matrix_c_pop_FUN_004839a0();
        }
        local_20 = local_20 + 1;
      } while (local_20 < local_28);
    }
  }
  return;
}
