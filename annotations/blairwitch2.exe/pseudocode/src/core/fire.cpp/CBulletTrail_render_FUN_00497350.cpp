// Name: core_fire.cpp_CBulletTrail_render_FUN_00497350
// Address: 00497350
// Address Range: [[00497350, 00497656]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CBulletTrail_render_FUN_00497350(CBulletTrail *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CBulletTrail_render_FUN_00497350(CBulletTrail *this_ptr)

{
  CKeyFramedModel *pCVar1;
  float fVar2;
  int iVar3;
  byte bVar4;
  double dVar5;
  float afStackY_10b0 [1008];
  CDemonRenderer *this_ptr_00;
  CVector3f *world_position;
  uint uStack_dc;
  float local_d8;
  CVector3f local_d4;
  float local_c8;
  float local_c4 [4];
  float local_b4;
  float local_b0;
  float local_ac [4];
  float fStack_9c;
  CVector3f local_98;
  float local_88;
  float local_84;
  float local_80;
  float local_7c [4];
  float local_6c;
  CVector3f local_68;
  float fStack_5c;
  float local_58 [4];
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  int iStack_30;
  int local_2c;
  float local_28;
  int local_24;
  float local_20;
  int local_1c;
  
  bVar4 = 0;
  local_88 = (this_ptr->end_position).x - (this_ptr->start_position).x;
  local_84 = (this_ptr->end_position).y - (this_ptr->start_position).y;
  local_b0 = (this_ptr->end_position).z - (this_ptr->start_position).z;
  local_80 = local_b0;
  local_c4[3] = local_88;
  local_b4 = local_84;
  pCVar1 = this_ptr->model_ptr;
  local_7c[3] = (pCVar1->bounds).max.x - (pCVar1->bounds).min.x;
  local_6c = (pCVar1->bounds).max.y - (pCVar1->bounds).min.y;
  local_68.x = (pCVar1->bounds).max.z - (pCVar1->bounds).min.z;
  local_ac[3] = local_7c[3];
  fStack_9c = local_6c;
  local_98.x = local_68.x;
  local_d8 = SQRT(local_b0 * local_b0 + local_88 * local_88 + local_84 * local_84) - local_68.x;
  if (0.0 < local_d8) {
    local_28 = 2.8026e-45;
    if (0.0 < this_ptr->segment_length) {
      uStack_dc = 0x497429;
      dVar5 = round((double)(local_d8 / this_ptr->segment_length));
      local_2c = (int)ROUND(dVar5);
      if (local_2c < 2) {
        local_2c = 2;
      }
      else if (100 < local_2c) {
        local_2c = 100;
      }
    }
    local_1c = local_2c;
    local_28 = (float)local_2c;
    fVar2 = 1.0 / (float)local_2c;
    local_b0 = local_c4[2] * fVar2;
    local_ac[0] = local_c4[3] * fVar2;
    local_ac[1] = local_b4 * fVar2;
    fStack_5c = local_c4[2] * fVar2;
    local_58[(uint)bVar4 * -2] = local_ac[(uint)bVar4 * -2];
    local_58[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         local_ac[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(local_c4 + 2);
    iVar3 = local_2c;
    local_24 = 0;
    local_98.x = local_c8;
    *(float *)((int)&local_98 + (uint)bVar4 * -8 + 4) = local_c4[(uint)bVar4 * -2];
    *(float *)((int)&local_98 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
         local_c4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    if (0 < iVar3) {
      iStack_30 = iVar3 + -1;
      do {
        local_20 = (float)local_24;
        local_1c = iStack_30;
        local_d8 = ((float)local_24 * _DAT_005d5462) / (float)iStack_30;
        if ((float)_DAT_005d546a < local_d8) {
          world_position = &local_68;
          local_58[2] = fStack_5c * local_20;
          local_58[3] = local_58[0] * local_20;
          local_48 = local_58[1] * local_20;
          local_44 = fStack_5c * local_20;
          local_58[(uint)bVar4 * -2 + 6] = local_58[(uint)bVar4 * -2 + 3];
          local_58[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
               local_58[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
          local_80 = (this_ptr->start_position).x + local_44;
          local_7c[0] = (this_ptr->start_position).y + local_40;
          local_7c[1] = (this_ptr->start_position).z + local_3c;
          local_68.x = local_80;
          *(float *)((int)&local_68 + (uint)bVar4 * -8 + 4) = local_7c[(uint)bVar4 * -2];
          this_ptr_00 = DAT_0060b280;
          *(float *)((int)&local_68 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
               local_7c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
          engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
                    (this_ptr_00,world_position);
          local_d4.x = 0.0;
          local_d4.y = 0.0;
          local_d4.z = 0.0;
          engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
                    (DAT_0060b280,&local_98,&local_d4);
          dVar5 = round((double)local_d8);
          local_20 = (float)(int)ROUND(dVar5);
          core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_0044e6a0
                    (this_ptr->model_ptr,0,(CKeyFramedModelInstance *)0x0,(int)local_20);
          engine_drender_cpp_pop_FUN_0046b4a0();
        }
        local_24 = local_24 + 1;
      } while (local_24 < local_2c);
    }
  }
  return;
}
