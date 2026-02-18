// Name: shape_spotview.cpp_CSpotView_applyCamera_FUN_005b9a20
// Address: 005b9a20
// Address Range: [[005b9a20, 005b9af3]]
// Convention: __cdecl
// Signature: void __cdecl shape_spotview_cpp_CSpotView_applyCamera_FUN_005b9a20(CSpotView *this_ptr)

#include "nocturne.h"

void __cdecl shape_spotview_cpp_CSpotView_applyCamera_FUN_005b9a20(CSpotView *this_ptr)

{
  CVector3f *pCVar1;
  CMatrix3x3f local_6c;
  CVector3i local_44;
  CVector3f local_38;
  CVector3f local_2c;
  CVector3f local_20;
  float local_14;
  float local_10;
  float local_c;
  
  engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_0048c650(g_CDemonRendererPtr2,28.0);
  local_38.x = this_ptr->pitch;
  local_38.z = 0.0;
  local_38.y = this_ptr->yaw;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&local_6c,&local_38);
  local_20.x = this_ptr->pan_x;
  local_20.y = this_ptr->pan_y;
  local_20.z = -this_ptr->distance;
  local_14 = local_20.z;
  local_10 = local_20.x;
  local_c = local_20.y;
  pCVar1 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0(&local_6c,&local_2c,&local_20);
  local_44.x = (int)((this_ptr->loat_at).x + pCVar1->x);
  local_44.y = (int)((this_ptr->loat_at).y + pCVar1->y);
  local_44.z = (int)((this_ptr->loat_at).z + pCVar1->z);
  engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
            (g_CDemonRendererPtr2,&local_44);
  engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0(g_CDemonRendererPtr2);
  return;
}
