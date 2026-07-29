// Name: core_fire.cpp_CBulletTrail_render_FUN_004856c0
// Address: 004856c0
// Address Range: [[004856c0, 004858e7]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CBulletTrail_render_FUN_004856c0(CBulletTrail *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CBulletTrail_render_FUN_004856c0(CBulletTrail *this_ptr)

{
  int iVar1;
  CKeyFramedModel *pCVar2;
  float fVar3;
  int iVar4;
  double dVar5;
  CVector3f local_7c;
  float local_6c;
  float local_68;
  CVector3f local_64;
  float local_58;
  float local_54;
  float local_50;
  CVector3f local_4c;
  CVector3f local_40;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  int local_24;
  uint local_20;
  float fStack_1c;
  int local_18;
  
  local_64.y = (this_ptr->end_position).x - (this_ptr->start_position).x;
  local_64.z = (this_ptr->end_position).y - (this_ptr->start_position).y;
  local_58 = (this_ptr->end_position).z - (this_ptr->start_position).z;
  pCVar2 = this_ptr->model_ptr;
  local_6c = *(float *)(pCVar2->texture_list[7].textures[1].texture_name + 8) -
             (float)pCVar2->texture_list[7].textures[1].base.count;
  local_68 = *(float *)(pCVar2->texture_list[7].textures[1].texture_name + 0xc) -
             *(float *)pCVar2->texture_list[7].textures[1].texture_name;
  local_64.x = (float)pCVar2->texture_list[7].textures[2].base.type -
               *(float *)(pCVar2->texture_list[7].textures[1].texture_name + 4);
  local_7c.x = SQRT(local_58 * local_58 + local_64.y * local_64.y + local_64.z * local_64.z) -
               local_64.x;
  if (0.0 < local_7c.x) {
    local_20 = 2;
    if (0.0 < this_ptr->segment_length) {
      dVar5 = round((double)(local_7c.x / this_ptr->segment_length));
      local_24 = (int)ROUND(dVar5);
      if (local_24 < 2) {
        local_24 = 2;
      }
      else if (100 < local_24) {
        local_24 = 100;
      }
    }
    local_18 = local_24;
    local_28 = (float)local_24;
    local_50 = 1.0 / local_28;
    local_58 = local_64.x * local_50;
    local_54 = local_64.y * local_50;
    local_50 = local_64.z * local_50;
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(&local_7c,&local_64);
    iVar4 = 0;
    if (0 < local_24) {
      iVar1 = local_24 + -1;
      do {
        while( true ) {
          fStack_1c = (float)iVar4;
          fVar3 = ((float)iVar4 * 5.1640756954075245e-315._0_4_) / (float)iVar1;
          if (fVar3 <= (float)0.01) break;
          local_34 = local_58 * fStack_1c;
          local_30 = local_54 * fStack_1c;
          local_2c = local_50 * fStack_1c;
          local_40.x = (this_ptr->start_position).x + local_34;
          local_40.y = (this_ptr->start_position).y + local_30;
          local_40.z = (this_ptr->start_position).z + local_2c;
          local_18 = iVar1;
          engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
                    (DAT_005ae704,&local_40);
          local_4c.x = 0.0;
          local_4c.y = 0.0;
          local_4c.z = 0.0;
          engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
                    (DAT_005ae704,&local_7c,&local_4c);
          dVar5 = round((double)fVar3);
          fStack_1c = (float)(int)ROUND(dVar5);
          core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00453040
                    (this_ptr->model_ptr,0,(CKeyFramedModelInstance *)0x0,(int)fStack_1c);
          engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0();
          iVar4 = iVar4 + 1;
          if ((int)local_28 <= iVar4) {
            return;
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < local_24);
    }
  }
  return;
}
