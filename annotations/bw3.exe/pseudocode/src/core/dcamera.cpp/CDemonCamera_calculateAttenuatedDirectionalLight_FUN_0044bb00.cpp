// Name: core_dcamera.cpp_CDemonCamera_calculateAttenuatedDirectionalLight_FUN_0044bb00
// Address: 0044bb00
// Address Range: [[0044bb00, 0044bc4f]]
// Convention: __cdecl
// Signature: int __cdecl core_dcamera_cpp_CDemonCamera_calculateAttenuatedDirectionalLight_FUN_0044bb00(CDemonCamera *this_ptr,CVector3i *world_pos,CDemonLight *light_source,CVector3i *light_direction)

#include "nocturne.h"

int __cdecl core_dcamera_cpp_CDemonCamera_calculateAttenuatedDirectionalLight_FUN_0044bb00(CDemonCamera *this_ptr,CVector3i *world_pos,CDemonLight *light_source,CVector3i *light_direction)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float fVar8;
  
  if (light_direction == (CVector3i *)0x0) {
    iVar7 = 0xaaaa;
  }
  else {
    fVar4 = (float)world_pos->x * 0.00390625f - (light_source->base).base.position.f.x;
    fVar5 = (float)world_pos->y * 0.00390625f - (light_source->base).base.position.f.y;
    fVar6 = (float)world_pos->z * 0.00390625f - (light_source->base).base.position.f.z;
    fVar8 = (float)(g_INT_01d1a0a8 - ((int)(fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5) >> 1));
    lVar1 = (longlong)(int)ROUND(fVar4 * fVar8 * 65536.0f) * (longlong)light_direction->x;
    lVar2 = (longlong)(int)ROUND(fVar5 * fVar8 * 65536.0f) * (longlong)light_direction->y;
    lVar3 = (longlong)(int)ROUND(fVar6 * fVar8 * 65536.0f) * (longlong)light_direction->z;
    iVar7 = ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
            ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
            ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
    if (-1 < iVar7) {
      return 0;
    }
    iVar7 = -iVar7;
  }
  iVar7 = core_dcamera_cpp_CDemonCamera_sampleLightingAntialiased_FUN_0044b4a0
                    (this_ptr,world_pos,light_source,iVar7);
  return iVar7;
}
