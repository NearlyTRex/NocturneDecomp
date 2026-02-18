// Name: core_fire.cpp_CBulletTrail_render_FUN_004c21f0
// Address: 004c21f0
// Address Range: [[004c21f0, 004c2400]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CBulletTrail_render_FUN_004c21f0(CBulletTrail *this_ptr)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_fire_cpp_CBulletTrail_render_FUN_004c21f0(CBulletTrail *this_ptr)

{
  int iVar1;
  CKeyFramedModel *pCVar2;
  float fVar3;
  int iVar4;
  CVector3f local_78;
  float local_6c;
  float local_68;
  float local_64;
  CVector3f local_60;
  float local_54;
  float local_50;
  float local_4c;
  CVector3i local_48;
  CVector3f local_3c;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  int local_20;
  float local_18;
  int local_14;
  
  local_60.x = (this_ptr->end_position).x - (this_ptr->start_position).x;
  local_60.y = (this_ptr->end_position).y - (this_ptr->start_position).y;
  local_60.z = (this_ptr->end_position).z - (this_ptr->start_position).z;
  pCVar2 = this_ptr->model_ptr;
  local_6c = (pCVar2->bounds_max).x - (pCVar2->bounds_min).x;
  local_68 = (pCVar2->bounds_max).y - (pCVar2->bounds_min).y;
  local_64 = (pCVar2->bounds_max).z - (pCVar2->bounds_min).z;
  fVar3 = SQRT(local_60.z * local_60.z + local_60.x * local_60.x + local_60.y * local_60.y) -
          local_64;
  if (0.0 < fVar3) {
    local_20 = 2;
    if (0.0 < this_ptr->segment_length) {
      local_20 = (int)ROUND(ROUND(fVar3 / this_ptr->segment_length));
      if (local_20 < 2) {
        local_20 = 2;
      }
      else if (100 < local_20) {
        local_20 = 100;
      }
    }
    local_14 = local_20;
    local_24 = (float)local_20;
    local_4c = 1.0 / local_24;
    local_54 = local_60.x * local_4c;
    local_50 = local_60.y * local_4c;
    local_4c = local_60.z * local_4c;
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_78,&local_60);
    iVar4 = 0;
    if (0 < local_20) {
      iVar1 = local_20 + -1;
      do {
        while( true ) {
          local_18 = (float)iVar4;
          fVar3 = ((float)iVar4 * 0.2f) / (float)iVar1;
          if (fVar3 <= (float)0.01) break;
          local_30 = local_54 * local_18;
          local_2c = local_50 * local_18;
          local_28 = local_4c * local_18;
          local_3c.x = (this_ptr->start_position).x + local_30;
          local_3c.y = (this_ptr->start_position).y + local_2c;
          local_3c.z = (this_ptr->start_position).z + local_28;
          local_14 = iVar1;
          engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                    (g_CDemonRendererPtr2,&local_3c);
          local_48.x = 0;
          local_48.y = 0;
          local_48.z = 0;
          engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                    (g_CDemonRendererPtr2,(CVector3i *)&local_78,&local_48);
          local_14 = (int)ROUND(ROUND(fVar3));
          core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00477850
                    (this_ptr->model_ptr,(CKeyFramedModelInstance *)0x0,0,local_14);
          engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
          iVar4 = iVar4 + 1;
          if (local_20 <= iVar4) {
            return;
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < local_20);
    }
  }
  return;
}
