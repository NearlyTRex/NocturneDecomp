// Name: core_fire.cpp_CBulletTrail_render_FUN_004c21f0
// Address: 004c21f0
// Address Range: [[004c21f0, 004c2400]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CBulletTrail_render_FUN_004c21f0(CBulletTrail * this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CBulletTrail_render_FUN_004c21f0(CBulletTrail *this_ptr)

{
  int iVar1;
  float fVar2;
  int extraout_EDX;
  int iVar3;
  double dVar4;
  byte local_7c [16];
  float local_6c;
  float local_68;
  CVector3f local_64;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  CVector3i local_48;
  CVector3f local_3c;
  float local_30;
  float local_2c;
  float local_28;
  int local_24;
  int local_20;
  float local_18;
  int local_14;
  
  local_64.y = *(float *)(this_ptr->field0_0x0 + 0xc) - *(float *)this_ptr->field0_0x0;
  local_64.z = *(float *)(this_ptr->field0_0x0 + 0x10) - *(float *)(this_ptr->field0_0x0 + 4);
  local_58 = *(float *)(this_ptr->field0_0x0 + 0x14) - *(float *)(this_ptr->field0_0x0 + 8);
  iVar3 = *(int *)(this_ptr->field0_0x0 + 0x18);
  local_6c = *(float *)(iVar3 + 0x5684) - *(float *)(iVar3 + 0x5678);
  local_68 = *(float *)(iVar3 + 0x5688) - *(float *)(iVar3 + 0x567c);
  local_64.x = *(float *)(iVar3 + 0x568c) - *(float *)(iVar3 + 0x5680);
  local_7c._0_4_ =
       SQRT(local_58 * local_58 + local_64.y * local_64.y + local_64.z * local_64.z) - local_64.x;
  if (0.0 < (float)local_7c._0_4_) {
    local_20 = 2;
    if (0.0 < *(float *)(this_ptr->field0_0x0 + 0x1c)) {
      dVar4 = crt_math_c_round_FUN_005fe6b0
                        ((double)((float)local_7c._0_4_ / *(float *)(this_ptr->field0_0x0 + 0x1c)));
      iVar3 = (int)ROUND(dVar4);
      local_24 = extraout_EDX;
      if ((extraout_EDX <= iVar3) && (local_24 = iVar3, 100 < iVar3)) {
        local_24 = 100;
      }
    }
    local_18 = (float)local_24;
    local_28 = (float)local_24;
    local_50 = 1.0 / local_28;
    local_58 = local_64.x * local_50;
    local_54 = local_64.y * local_50;
    local_50 = local_64.z * local_50;
    core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
              ((CVector3f *)local_7c,&local_64);
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
          local_3c.x = *(float *)this_ptr->field0_0x0 + local_30;
          local_3c.y = *(float *)(this_ptr->field0_0x0 + 4) + local_2c;
          local_3c.z = *(float *)(this_ptr->field0_0x0 + 8) + local_28;
          local_14 = iVar1;
          engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                    (g_CDemonRendererPtr,&local_3c);
          local_48.x = 0;
          local_48.y = 0;
          local_48.z = 0;
          engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                    (g_CDemonRendererPtr,(CVector3i *)(local_7c + 4),&local_48);
          dVar4 = crt_math_c_round_FUN_005fe6b0((double)fVar2);
          local_18 = (float)(int)ROUND(dVar4);
          core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00477850
                    (*(CKeyFramedModel **)(this_ptr->field0_0x0 + 0x18),
                     (CKeyFramedModelInstance *)0x0,0,(int)local_18);
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
