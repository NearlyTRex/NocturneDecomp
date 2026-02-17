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
  float fVar2;
  int iVar3;
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
  
  local_60.x = *(float *)(this_ptr->unk + 0xc) - *(float *)this_ptr->unk;
  local_60.y = *(float *)(this_ptr->unk + 0x10) - *(float *)(this_ptr->unk + 4);
  local_60.z = *(float *)(this_ptr->unk + 0x14) - *(float *)(this_ptr->unk + 8);
  iVar3 = *(int *)(this_ptr->unk + 0x18);
  local_6c = *(float *)(iVar3 + 0x5684) - *(float *)(iVar3 + 0x5678);
  local_68 = *(float *)(iVar3 + 0x5688) - *(float *)(iVar3 + 0x567c);
  local_64 = *(float *)(iVar3 + 0x568c) - *(float *)(iVar3 + 0x5680);
  fVar2 = SQRT(local_60.z * local_60.z + local_60.x * local_60.x + local_60.y * local_60.y) -
          local_64;
  if (0.0 < fVar2) {
    local_20 = 2;
    if (0.0 < *(float *)(this_ptr->unk + 0x1c)) {
      local_20 = (int)ROUND(ROUND(fVar2 / *(float *)(this_ptr->unk + 0x1c)));
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
    core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_78,&local_60);
    iVar3 = 0;
    if (0 < local_20) {
      iVar1 = local_20 + -1;
      do {
        while( true ) {
          local_18 = (float)iVar3;
          fVar2 = ((float)iVar3 * 0.2f) / (float)iVar1;
          if (fVar2 <= (float)0.01) break;
          local_30 = local_54 * local_18;
          local_2c = local_50 * local_18;
          local_28 = local_4c * local_18;
          local_3c.x = *(float *)this_ptr->unk + local_30;
          local_3c.y = *(float *)(this_ptr->unk + 4) + local_2c;
          local_3c.z = *(float *)(this_ptr->unk + 8) + local_28;
          local_14 = iVar1;
          engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                    (g_CDemonRendererPtr2,&local_3c);
          local_48.x = 0;
          local_48.y = 0;
          local_48.z = 0;
          engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                    (g_CDemonRendererPtr2,(CVector3i *)&local_78,&local_48);
          local_14 = (int)ROUND(ROUND(fVar2));
          core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00477850
                    (*(CKeyFramedModel **)(this_ptr->unk + 0x18),(CKeyFramedModelInstance *)0x0,0,
                     local_14);
          engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
          iVar3 = iVar3 + 1;
          if (local_20 <= iVar3) {
            return;
          }
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < local_20);
    }
  }
  return;
}
