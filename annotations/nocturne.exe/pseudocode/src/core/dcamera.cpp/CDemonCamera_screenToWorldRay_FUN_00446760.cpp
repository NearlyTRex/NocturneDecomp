// Name: core_dcamera.cpp_CDemonCamera_screenToWorldRay_FUN_00446760
// Address: 00446760
// Address Range: [[00446760, 004467f4]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_screenToWorldRay_FUN_00446760(CDemonCamera *this_ptr,CVector3f *output_ray,int screen_x,int screen_y)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_screenToWorldRay_FUN_00446760(CDemonCamera *this_ptr,CVector3f *output_ray,int screen_x,int screen_y)

{
  float fVar1;
  byte bVar2;
  int aiStackY_1028 [1015];
  int local_40;
  int local_3c;
  int local_38;
  uint local_34;
  int local_28;
  uint local_1c;
  
  bVar2 = 0;
  core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_004410c0(this_ptr,screen_x,screen_y);
  local_1c = local_34;
  *(uint *)((int)&stack0xffffffe8 + (uint)bVar2 * 0xfffffffe * 4) =
       *(uint *)(&stack0xffffffd0 + (uint)bVar2 * -8);
  *(uint *)(&stack0xffffffec + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffd4 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_004411b0(this_ptr,&stack0xffffffe4);
  local_40 = local_28;
  *(uint *)((int)&stack0xffffffc4 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffdc + (uint)bVar2 * -8);
  *(uint *)((int)&stack0xffffffc8 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffe0 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  fVar1 = (float)_DAT_0057b9f3;
  output_ray->x = (float)local_40 * fVar1;
  output_ray->y = (float)local_3c * fVar1;
  output_ray->z = (float)local_38 * fVar1;
  return;
}
