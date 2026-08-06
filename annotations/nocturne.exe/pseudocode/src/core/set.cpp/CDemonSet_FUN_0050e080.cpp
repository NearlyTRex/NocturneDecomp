// Name: core_set.cpp_CDemonSet_FUN_0050e080
// Address: 0050e080
// Address Range: [[0050e080, 0050e18a]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_FUN_0050e080(CDemonSet *this_ptr,int mirror_index,int enable_flag)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_FUN_0050e080(CDemonSet *this_ptr,int mirror_index,int enable_flag)

{
  CVector3f *pCVar1;
  CVector3f CStack_2c;
  CVector3f local_20;
  float local_14;
  
  pCVar1 = engine_drender_cpp_CDemonRenderer_getCameraOriginWorld_FUN_00460d30
                     (g_CDemonRenderer_PTR_005ae704,&local_20);
  if (pCVar1 != (CVector3f *)&DAT_020842b4) {
    _DAT_020842b4 = pCVar1->x;
    _DAT_020842bc = pCVar1->z;
    _DAT_020842b8 = pCVar1->y;
  }
  pCVar1 = engine_drender_cpp_CDemonRenderer_getCameraRotationRadians_FUN_00460db0
                     (g_CDemonRenderer_PTR_005ae704,&CStack_2c);
  if (pCVar1 != (CVector3f *)&DAT_020842c0) {
    _DAT_020842c0 = pCVar1->x;
    _DAT_020842c8 = pCVar1->z;
    _DAT_020842c4 = pCVar1->y;
  }
  _DAT_020842cc =
       engine_drender_cpp_CDemonRenderer_calculateProjectionFactor_FUN_00460e20
                 (g_CDemonRenderer_PTR_005ae704);
  local_14 = _DAT_020842cc;
  core_mirror_cpp_CMirrorReflection_setupMirrorReflection_FUN_004d6650
            (&(this_ptr->mirror_glass_actors[mirror_index]->mirror).reflection,
             (CVector3f *)&DAT_020842b4,(CVector3f *)&DAT_020842c0,_DAT_020842cc);
  engine_drender_cpp_CDemonRenderer_enableAdvancedCulling_FUN_004613c0
            (g_CDemonRenderer_PTR_005ae704,1);
  core_dcamera_cpp_CDemonCamera_saveAlphaTransform_FUN_004477f0(_DAT_007f7370,mirror_index + 1);
  engine_drender_cpp_CDemonRenderer_setAlphaMask_FUN_004613a0
            (g_CDemonRenderer_PTR_005ae704,mirror_index + 1);
  this_ptr->active_mirror = &this_ptr->mirror_glass_actors[mirror_index]->mirror;
  return;
}
