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
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float afStack_38 [5];
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  
  bVar1 = 0;
  engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_0046d090(DAT_005f2afc,28.0);
  CStack_54.x = this_ptr->pitch;
  CStack_54.z = 0.0;
  CStack_54.y = this_ptr->yaw;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550(&CStack_88,&CStack_54);
  fStack_48 = this_ptr->pan_x;
  fStack_44 = this_ptr->pan_y;
  fStack_40 = -this_ptr->distance;
  fStack_18 = fStack_40;
  fStack_14 = fStack_48;
  fStack_10 = fStack_44;
  core_dirmat_cpp_FUN_0045b800(&CStack_88,&fStack_48);
  point_ptr = &CStack_60;
  fStack_3c = afStack_38[2];
  afStack_38[(uint)bVar1 * -2] = afStack_38[(uint)bVar1 * -2 + 3];
  afStack_38[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1] =
       afStack_38[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 4];
  fStack_24 = (this_ptr->loat_at).x + fStack_3c;
  fStack_20 = (this_ptr->loat_at).y + afStack_38[0];
  fStack_1c = (this_ptr->loat_at).z + afStack_38[1];
  CStack_60.x = fStack_24;
  *(float *)((int)&CStack_60 + (uint)bVar1 * -8 + 4) = afStack_38[(uint)bVar1 * -2 + 6];
  this_ptr_00 = DAT_005f2afc;
  *(float *)((int)&CStack_60 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       afStack_38[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 7];
  engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046cb90
            (this_ptr_00,point_ptr);
  engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_0046cc10(DAT_005f2afc,&CStack_54);
  return;
}
