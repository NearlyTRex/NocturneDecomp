// Name: core_fire.cpp_CBulletTrail_render_FUN_004c21f0
// Address: 004c21f0
// Address Range: [[004c21f0, 004c2400]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CBulletTrail_render_FUN_004c21f0(CBulletTrail * this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CBulletTrail_render_FUN_004c21f0(CBulletTrail *this_ptr)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  int iVar2;
  double dVar3;
  byte local_7c [16];
  float local_6c;
  float local_68;
  CVector3f local_64;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  byte local_44 [12];
  float local_38;
  float local_34;
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
  iVar2 = *(int *)(this_ptr->field0_0x0 + 0x18);
  local_6c = *(float *)(iVar2 + 0x5684) - *(float *)(iVar2 + 0x5678);
  local_68 = *(float *)(iVar2 + 0x5688) - *(float *)(iVar2 + 0x567c);
  local_64.x = *(float *)(iVar2 + 0x568c) - *(float *)(iVar2 + 0x5680);
  local_7c._0_4_ =
       SQRT(local_58 * local_58 + local_64.y * local_64.y + local_64.z * local_64.z) - local_64.x;
  if (0.0 < (float)local_7c._0_4_) {
    local_20 = 2;
    if (0.0 < *(float *)(this_ptr->field0_0x0 + 0x1c)) {
      dVar3 = crt_math_c_round_FUN_005fe6b0
                        ((double)((float)local_7c._0_4_ / *(float *)(this_ptr->field0_0x0 + 0x1c)));
      local_24 = (int)ROUND(dVar3);
      if (local_24 < 2) {
        local_24 = 2;
      }
      else if (100 < local_24) {
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
    iVar2 = 0;
    if (0 < local_20) {
      iVar1 = local_20 + -1;
      do {
        while( true ) {
          local_18 = (float)iVar2;
          if (((float)iVar2 * 0.2f) / (float)iVar1 <= (float)0.01) break;
          local_30 = local_54 * local_18;
          local_2c = local_50 * local_18;
          local_28 = local_4c * local_18;
          local_44._8_4_ = *(float *)this_ptr->field0_0x0 + local_30;
          local_38 = *(float *)(this_ptr->field0_0x0 + 4) + local_2c;
          local_34 = *(float *)(this_ptr->field0_0x0 + 8) + local_28;
          local_14 = iVar1;
          engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                    (g_CDemonRendererPtr,(CVector3f *)(local_44 + 8));
          local_44._0_4_ = 0;
          local_44._4_4_ = 0;
          local_44._8_4_ = 0;
          engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                    (g_CDemonRendererPtr,(CVector3i *)(local_7c + 8),(CVector3i *)local_44);
          local_7c._0_4_ = 6.992362e-39;
          dVar3 = crt_math_c_round_FUN_005fe6b0((double)(float)local_7c._4_4_);
          core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00477850
                    (*(CKeyFramedModel **)(this_ptr->field0_0x0 + 0x18),
                     (CKeyFramedModelInstance *)0x0,0,(int)ROUND(dVar3));
          local_7c._0_4_ = g_CDemonRendererPtr;
          engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
          iVar2 = iVar2 + 1;
          if (local_14 <= iVar2) {
            return;
          }
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < local_20);
    }
  }
  return;
}
