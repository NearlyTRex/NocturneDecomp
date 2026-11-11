// Name: core_cross.cpp_CCross_renderTransparent_FUN_005a6bc0
// Address: 005a6bc0
// Address Range: [[005a6bc0, 005a6ce3]]
// Convention: __cdecl
// Signature: int __cdecl core_cross_cpp_CCross_renderTransparent_FUN_005a6bc0(CCross *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_cross_cpp_CCross_renderTransparent_FUN_005a6bc0(CCross *this_ptr)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  CVector3f CStack_24;
  int iStack_10;
  
  if ((DAT_026686f8 & 1) == 0) {
    DAT_026686f8 = DAT_026686f8 | 1;
  }
  CStack_24.x = (this_ptr->base).base.base.location.position.x;
  CStack_24.y = (this_ptr->base).base.base.location.position.y;
  CStack_24.z = (this_ptr->base).base.base.location.position.z;
  if (this_ptr->corona_queued != 0) {
    core_set_cpp_FUN_005306e0(g_CDemonSetPtr,0x26686b8);
    this_ptr->corona_queued = 0;
  }
  core_dglobe_cpp_CDemonGlobe_setPosition_FUN_00448810((CDemonGlobe *)0x26686b8,&CStack_24);
  fVar3 = (float10)this_ptr->charge;
  fVar4 = fVar3 * (float10)_DAT_005f071d;
  round();
  iStack_10 = (int)ROUND(fVar4);
  fVar4 = (float10)iStack_10 * (float10)this_ptr->glow_intensity;
  round();
  _DAT_026686f4 = (int)ROUND(fVar4);
  iVar1 = (_DAT_026686f4 + (_DAT_026686f4 >> 0x1f) * -0x100) -
          (uint)((_DAT_026686f4 >> 0x1f) << 7 < 0);
  iVar2 = iVar1 >> 0x1f;
  DAT_026686d4 = (byte)((int)(((iVar1 >> 8) + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2);
  iStack_10 = _DAT_026686f4;
  core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_00448860
            ((CDemonGlobe *)0x26686b8,(float)(fVar3 * (float10)_DAT_005f0725));
  _DAT_026686d8 = 1;
  core_set_cpp_CDemonSet_addQueuedCoronaGlobe_FUN_00530750(g_CDemonSetPtr,(CDemonGlobe *)0x26686b8);
  iVar1 = (this_ptr->base).base.is_rendered;
  this_ptr->corona_queued = 1;
  return iVar1;
}
