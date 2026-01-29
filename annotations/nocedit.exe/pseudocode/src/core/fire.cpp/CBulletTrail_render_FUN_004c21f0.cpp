// Name: core_fire.cpp_CBulletTrail_render_FUN_004c21f0
// Address: 004c21f0
// Address Range: [[004c21f0, 004c2400]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CBulletTrail_render_FUN_004c21f0(CBulletTrail *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CBulletTrail_render_FUN_004c21f0(CBulletTrail *this_ptr)

{
  int iVar1;
  float fVar2;
  int iVar3;
  double dVar4;
  CVector3f local_7c;
  float local_6c;
  float local_68;
  CVector3f local_64;
  float local_58;
  float local_54;
  float local_50;
  CVector3i local_4c;
  CVector3f local_40;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  int local_24;
  uint local_20;
  float fStack_1c;
  int local_18;
  
  local_64.y = *(float *)(this_ptr->unk + 0xc) - *(float *)this_ptr->unk;
  local_64.z = *(float *)(this_ptr->unk + 0x10) - *(float *)(this_ptr->unk + 4);
  local_58 = *(float *)(this_ptr->unk + 0x14) - *(float *)(this_ptr->unk + 8);
  iVar3 = *(int *)(this_ptr->unk + 0x18);
  local_6c = *(float *)(iVar3 + 0x5684) - *(float *)(iVar3 + 0x5678);
  local_68 = *(float *)(iVar3 + 0x5688) - *(float *)(iVar3 + 0x567c);
  local_64.x = *(float *)(iVar3 + 0x568c) - *(float *)(iVar3 + 0x5680);
  local_7c.x = SQRT(local_58 * local_58 + local_64.y * local_64.y + local_64.z * local_64.z) -
               local_64.x;
  if (0.0 < local_7c.x) {
    local_20 = 2;
    if (0.0 < *(float *)(this_ptr->unk + 0x1c)) {
      dVar4 = round((double)(local_7c.x / *(float *)(this_ptr->unk + 0x1c)))
      ;
      local_24 = (int)ROUND(dVar4);
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
    core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_7c,&local_64);
    iVar3 = 0;
    if (0 < local_24) {
      iVar1 = local_24 + -1;
      do {
        while( true ) {
          fStack_1c = (float)iVar3;
          fVar2 = ((float)iVar3 * 0.2f) / (float)iVar1;
          if (fVar2 <= (float)0.01) break;
          local_34 = local_58 * fStack_1c;
          local_30 = local_54 * fStack_1c;
          local_2c = local_50 * fStack_1c;
          local_40.x = *(float *)this_ptr->unk + local_34;
          local_40.y = *(float *)(this_ptr->unk + 4) + local_30;
          local_40.z = *(float *)(this_ptr->unk + 8) + local_2c;
          local_18 = iVar1;
          engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                    (g_CDemonRendererPtr2,&local_40);
          local_4c.x = 0;
          local_4c.y = 0;
          local_4c.z = 0;
          engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                    (g_CDemonRendererPtr2,(CVector3i *)&local_7c,&local_4c);
          dVar4 = round((double)fVar2);
          fStack_1c = (float)(int)ROUND(dVar4);
          core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00477850
                    (*(CKeyFramedModel **)(this_ptr->unk + 0x18),(CKeyFramedModelInstance *)0x0,0,
                     (int)fStack_1c);
          engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
          iVar3 = iVar3 + 1;
          if ((int)local_28 <= iVar3) {
            return;
          }
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < local_24);
    }
  }
  return;
}
