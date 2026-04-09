// Name: core_fire.cpp_CBulletTrail_render_FUN_004c21f0
// Address: 004c21f0
// Address Range: [[004c21f0, 004c2417]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CBulletTrail_render_FUN_004c21f0(CBulletTrail *this_ptr)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_fire_cpp_CBulletTrail_render_FUN_004c21f0(CBulletTrail *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar4;
  float fVar5;
  float fVar6;
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
  int iStack_1c;
  float local_18;
  int local_14;
  CKeyFramedModel *pCVar2;
  int iVar1;
  float fVar3;
  
  local_60.x = (this_ptr->end_position).x - (this_ptr->start_position).x;
  local_60.y = (this_ptr->end_position).y - (this_ptr->start_position).y;
  local_60.z = (this_ptr->end_position).z - (this_ptr->start_position).z;
  pCVar2 = this_ptr->model_ptr;
  fVar3 = SQRT(local_60.z * local_60.z + local_60.x * local_60.x + local_60.y * local_60.y) -
          ((pCVar2->bounds_max).z - (pCVar2->bounds_min).z);
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
    fVar5 = 1.0 / (float)local_20;
    fVar2 = local_60.x * fVar5;
    fVar4 = local_60.y * fVar5;
    fVar5 = local_60.z * fVar5;
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_78,&local_60);
    iVar4 = 0;
    if (0 < local_20) {
      do {
        while( true ) {
          fVar1 = (float)iVar4;
          fVar6 = ((float)iVar4 * 0.2f) / (float)(local_20 + -1);
          if (fVar6 <= (float)0.01) break;
          local_3c.x = (this_ptr->start_position).x + fVar2 * fVar1;
          local_3c.y = (this_ptr->start_position).y + fVar4 * fVar1;
          local_3c.z = (this_ptr->start_position).z + fVar5 * fVar1;
          engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                    (g_CDemonRendererPtr2,&local_3c);
          local_48.x = 0;
          local_48.y = 0;
          local_48.z = 0;
          engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                    (g_CDemonRendererPtr2,(CVector3i *)&local_78,&local_48);
          core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00477850
                    (this_ptr->model_ptr,0,(CKeyFramedModelInstance *)0x0,(int)ROUND(ROUND(fVar6)));
          engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0048c640(g_CDemonRendererPtr2);
          iVar4 = iVar4 + 1;
          if (iStack_1c <= iVar4) {
            return;
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < local_20);
    }
  }
  return;
}
