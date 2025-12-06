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
  float fVar3;
  uint extraout_EAX;
  uint extraout_EDX;
  int unaff_EBX;
  BADSPACEBASE *in_ESP;
  int iVar4;
  float10 fVar5;
  double dVar6;
  float in_stack_ffffff90;
  CVector3i local_6c;
  float local_60;
  CVector3f local_5c;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  byte local_3c [12];
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  int iStack_1c;
  int local_18;
  
  local_60 = *(float *)(this_ptr->field0_0x0 + 0xc) - *(float *)this_ptr->field0_0x0;
  local_5c.x = *(float *)(this_ptr->field0_0x0 + 0x10) - *(float *)(this_ptr->field0_0x0 + 4);
  local_5c.y = *(float *)(this_ptr->field0_0x0 + 0x14) - *(float *)(this_ptr->field0_0x0 + 8);
  iVar4 = *(int *)(this_ptr->field0_0x0 + 0x18);
  local_6c.x = (int)(*(float *)(iVar4 + 0x5684) - *(float *)(iVar4 + 0x5678));
  local_6c.y = (int)(*(float *)(iVar4 + 0x5688) - *(float *)(iVar4 + 0x567c));
  local_6c.z = (int)(*(float *)(iVar4 + 0x568c) - *(float *)(iVar4 + 0x5680));
  fVar3 = SQRT(local_5c.y * local_5c.y + local_60 * local_60 + local_5c.x * local_5c.x) -
          (float)local_6c.z;
  if (0.0 < fVar3) {
    fVar2 = *(float *)(this_ptr->field0_0x0 + 0x1c);
    local_20 = 2.8026e-45;
    if (0.0 < fVar2) {
      fVar5 = (float10)fVar3 / (float10)*(float *)(this_ptr->field0_0x0 + 0x1c);
      dVar6 = crt_math_c_round_FUN_005fe6b0
                        ((double)CONCAT44 /* combine 2-byte values */(2,CONCAT22 /* combine 2-byte values */((short)((uint)iVar4 >> 0x10),
                                                     (ushort)(0.0 < fVar2) << 8 |
                                                     (ushort)NAN(fVar2) << 10 |
                                                     (ushort)(fVar2 == 0.0) << 0xe)));
      iStack_1c = (int)((ulonglong)dVar6 >> 0x20);
      iVar4 = (int)ROUND(fVar5);
      if ((iStack_1c <= iVar4) && (iStack_1c = iVar4, 100 < iVar4)) {
        iStack_1c = 100;
      }
    }
    local_20 = (float)iStack_1c;
    local_48 = 1.0 / local_20;
    local_50 = local_5c.x * local_48;
    local_4c = local_5c.y * local_48;
    local_48 = local_5c.z * local_48;
    core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
              ((CVector3f *)&stack0xffffff8c,&local_5c);
    iVar4 = 0;
    if (0 < local_18) {
      iVar1 = local_18 + -1;
      do {
        while (local_20 = (float)iVar4,
              (float)0.01 < ((float)iVar4 * 0.2f) / (float)iVar1) {
          local_28 = local_4c * local_20;
          local_24 = local_48 * local_20;
          local_20 = local_44 * local_20;
          local_3c._8_4_ = *(float *)this_ptr->field0_0x0 + local_28;
          local_30 = *(float *)(this_ptr->field0_0x0 + 4) + local_24;
          local_2c = *(float *)(this_ptr->field0_0x0 + 8) + local_20;
          engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                    (g_CDemonRendererPtr,(CVector3f *)(local_3c + 8));
          local_3c._0_4_ = 0;
          local_3c._4_4_ = 0;
          local_3c._8_4_ = 0;
          engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                    (g_CDemonRendererPtr,&local_6c,(CVector3i *)local_3c);
          fVar5 = (float10)in_stack_ffffff90;
          crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX,extraout_EAX));
          core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00477850
                    (*(CKeyFramedModel **)(this_ptr->field0_0x0 + 0x18),
                     (CKeyFramedModelInstance *)0x0,0,(int)ROUND(fVar5));
          local_6c.x = (int)g_CDemonRendererPtr;
          in_stack_ffffff90 = 6.992413e-39;
          engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
          iVar4 = iVar4 + 1;
          if (unaff_EBX <= iVar4) {
            return;
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < local_18);
    }
  }
  return;
}
