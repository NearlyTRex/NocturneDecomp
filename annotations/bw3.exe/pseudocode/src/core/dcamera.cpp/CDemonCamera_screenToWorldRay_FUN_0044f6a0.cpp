// Name: core_dcamera.cpp_CDemonCamera_screenToWorldRay_FUN_0044f6a0
// Address: 0044f6a0
// Address Range: [[0044f6a0, 0044f73e]]
// Convention: __stack3_esi
// Signature: void __stack3_esi core_dcamera_cpp_CDemonCamera_screenToWorldRay_FUN_0044f6a0(CDemonCamera *this_ptr,int screen_x,int screen_y,CVector3f *output_ray)

#include "nocturne.h"

void __stack3_esi core_dcamera_cpp_CDemonCamera_screenToWorldRay_FUN_0044f6a0(CDemonCamera *this_ptr,int screen_x,int screen_y,CVector3f *output_ray)

{
  float fVar1;
  float *pfVar2;
  byte bVar3;
  int aiStackY_1030 [6];
  float afStackY_1018 [6];
  int aiStackY_1000 [1003];
  CVector3i CStack_48;
  CVector3i CStack_3c;
  float fStack_30;
  float afStack_2c [2];
  CVector3i CStack_24;
  int iStack_18;
  int aiStack_14 [3];
  
  bVar3 = 0;
  core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_00449eb0
            (this_ptr,screen_x,screen_y,&CStack_3c);
  CStack_24.x = CStack_3c.x;
  *(uint *)((int)&CStack_24 + (uint)bVar3 * -8 + 4) =
       *(uint *)((int)&CStack_3c + (uint)bVar3 * -8 + 4);
  *(uint *)((int)&CStack_24 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
       *(uint *)((int)&CStack_3c + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
  core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_00449f80(this_ptr,&CStack_24,&CStack_48);
  iStack_18 = CStack_48.x;
  aiStack_14[(uint)bVar3 * -2] = *(int *)((int)&CStack_48 + (uint)bVar3 * -8 + 4);
  aiStack_14[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
       *(int *)((int)&CStack_48 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
  fVar1 = (float)0.00390625;
  aiStack_14[2] = aiStack_14[1];
  fStack_30 = (float)iStack_18 * fVar1;
  afStack_2c[0] = (float)aiStack_14[0] * fVar1;
  afStack_2c[1] = (float)aiStack_14[1] * fVar1;
  pfVar2 = (float *)((int)output_ray + (uint)bVar3 * -8 + 4);
  output_ray->x = (float)iStack_18 * fVar1;
  *pfVar2 = afStack_2c[(uint)bVar3 * -2];
  pfVar2[(uint)bVar3 * -2 + 1] = afStack_2c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
  return;
}
