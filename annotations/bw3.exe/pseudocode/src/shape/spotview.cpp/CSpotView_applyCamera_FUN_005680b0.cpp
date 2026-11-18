// Name: shape_spotview.cpp_CSpotView_applyCamera_FUN_005680b0
// Address: 005680b0
// Address Range: [[005680b0, 005681a7]]
// Convention: __cdecl
// Signature: void __cdecl shape_spotview_cpp_CSpotView_applyCamera_FUN_005680b0(CSpotView *this_ptr)

#include "nocturne.h"

void __cdecl shape_spotview_cpp_CSpotView_applyCamera_FUN_005680b0(CSpotView *this_ptr)

{
  byte bVar1;
  float afStackY_1048 [1006];
  CDemonRenderer *this_ptr_00;
  CVector3f *point_ptr;
  CMatrix3x3f CStack_88;
  CVector3f CStack_60;
  CVector3f CStack_54;
  CVector3f CStack_48;
  float fStack_3c;
  float afStack_38 [2];
  CVector3f CStack_30;
  float fStack_24;
  float afStack_20 [4];
  float fStack_10;
  
  bVar1 = 0;
  engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_0046d090
            (g_CDemonRenderer_PTR_005f2afc,28.0);
  CStack_54.x = this_ptr->pitch;
  CStack_54.z = 0.0;
  CStack_54.y = this_ptr->yaw;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550(&CStack_88,&CStack_54);
  CStack_48.x = this_ptr->pan_x;
  CStack_48.y = this_ptr->pan_y;
  CStack_48.z = -this_ptr->distance;
  afStack_20[2] = CStack_48.z;
  afStack_20[3] = CStack_48.x;
  fStack_10 = CStack_48.y;
  core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0045b800(&CStack_88,&CStack_48,&CStack_30);
  point_ptr = &CStack_60;
  fStack_3c = CStack_30.x;
  afStack_38[(uint)bVar1 * -2] = *(float *)((int)&CStack_30 + (uint)bVar1 * -8 + 4);
  afStack_38[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1] =
       *(float *)((int)&CStack_30 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
  fStack_24 = (this_ptr->loat_at).x + fStack_3c;
  afStack_20[0] = (this_ptr->loat_at).y + afStack_38[0];
  afStack_20[1] = (this_ptr->loat_at).z + afStack_38[1];
  CStack_60.x = fStack_24;
  *(float *)((int)&CStack_60 + (uint)bVar1 * -8 + 4) = afStack_20[(uint)bVar1 * -2];
  this_ptr_00 = g_CDemonRenderer_PTR_005f2afc;
  *(float *)((int)&CStack_60 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       afStack_20[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1];
  engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046cb90
            (this_ptr_00,point_ptr);
  engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_0046cc10
            (g_CDemonRenderer_PTR_005f2afc,&CStack_54);
  return;
}
