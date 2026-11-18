// Name: core_cross.cpp_CCross_renderTransparent_FUN_005a6bc0
// Address: 005a6bc0
// Address Range: [[005a6bc0, 005a6ce3]]
// Convention: __cdecl
// Signature: int __cdecl core_cross_cpp_CCross_renderTransparent_FUN_005a6bc0(CCross *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl core_cross_cpp_CCross_renderTransparent_FUN_005a6bc0(CCross *this_ptr)

{
  float fVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  CVector3f CStack_24;
  int iStack_18;
  int iStack_14;
  
  if ((g_BYTE_026686f8 & 1) == 0) {
    g_BYTE_026686f8 = g_BYTE_026686f8 | 1;
  }
  CStack_24.x = (this_ptr->base).base.base.location.position.x;
  CStack_24.y = (this_ptr->base).base.base.location.position.y;
  CStack_24.z = (this_ptr->base).base.base.location.position.z;
  if (this_ptr->corona_queued != 0) {
    core_set_cpp_CDemonSet_removeCoronaGlobe_FUN_005306e0(g_CDemonSetPtr,&g_CDemonGlobe_026686b8);
    this_ptr->corona_queued = 0;
  }
  core_dglobe_cpp_CDemonGlobe_setPosition_FUN_00448810(&g_CDemonGlobe_026686b8,&CStack_24);
  fVar1 = this_ptr->charge;
  dVar4 = round((double)(fVar1 * (float)16384));
  iStack_14 = (int)ROUND(dVar4);
  dVar4 = round((double)((float)iStack_14 * this_ptr->glow_intensity));
  g_CDemonGlobe_026686b8.intensity_multiplier = (int)ROUND(dVar4);
  iVar2 = (g_CDemonGlobe_026686b8.intensity_multiplier +
          (g_CDemonGlobe_026686b8.intensity_multiplier >> 0x1f) * -0x100) -
          (uint)((g_CDemonGlobe_026686b8.intensity_multiplier >> 0x1f) << 7 < 0);
  iVar3 = iVar2 >> 0x1f;
  g_CDemonGlobe_026686b8.intensity.bytes[0] =
       (uchar)((int)(((iVar2 >> 8) + iVar3 * -4) - (uint)(iVar3 << 1 < 0)) >> 2);
  iStack_18 = g_CDemonGlobe_026686b8.intensity_multiplier;
  core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_00448860
            (&g_CDemonGlobe_026686b8,fVar1 * (float)10);
  g_CDemonGlobe_026686b8.corona_mode = 1;
  core_set_cpp_CDemonSet_addQueuedCoronaGlobe_FUN_00530750(g_CDemonSetPtr,&g_CDemonGlobe_026686b8);
  iVar2 = (this_ptr->base).base.is_rendered;
  this_ptr->corona_queued = 1;
  return iVar2;
}
