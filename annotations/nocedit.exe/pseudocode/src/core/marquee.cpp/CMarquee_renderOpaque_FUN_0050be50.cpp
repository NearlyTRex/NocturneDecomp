// Name: core_marquee.cpp_CMarquee_renderOpaque_FUN_0050be50
// Address: 0050be50
// Address Range: [[0050be50, 0050beb3]]
// Convention: __cdecl
// Signature: int __cdecl core_marquee_cpp_CMarquee_renderOpaque_FUN_0050be50(CMarquee *this_ptr)

#include "nocturne.h"

int __cdecl core_marquee_cpp_CMarquee_renderOpaque_FUN_0050be50(CMarquee *this_ptr)

{
  int iVar1;
  CBoundingBox3D *this_ptr_00;
  float fStack_1c;
  
  iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
  if (iVar1 != 0) {
    return 0;
  }
  this_ptr->unk2[0x18] = '\0';
  this_ptr->unk2[0x19] = '\0';
  this_ptr->unk2[0x1a] = '\0';
  this_ptr->unk2[0x1b] = '\0';
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base);
  this_ptr_00 = (*((this_ptr->base).vtable._ub)->getBoundingBox)
                          (&this_ptr->base,(CBoundingBox3D *)&fStack_1c);
  fStack_1c = 7.41521e-39;
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
  *(int *)(this_ptr->unk2 + 0x18) = iVar1;
  fStack_1c = 7.415231e-39;
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base);
  return *(int *)(this_ptr->unk2 + 0x18);
}
