// Name: shape_spotview.cpp_CSpotView_FUN_005b9a20
// Address: 005b9a20
// Address Range: [[005b9a20, 005b9af3]]
// Convention: __cdecl
// Signature: void __cdecl shape_spotview_cpp_CSpotView_FUN_005b9a20(CSpotView *this_ptr)

#include "nocturne.h"

void __cdecl shape_spotview_cpp_CSpotView_FUN_005b9a20(CSpotView *this_ptr)

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
  local_38.x = *(float *)(this_ptr->unk + 0x24);
  local_38.z = 0.0;
  local_38.y = *(float *)(this_ptr->unk + 0x28);
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&local_6c,&local_38);
  local_20.x = *(float *)(this_ptr->unk + 0x30);
  local_20.y = *(float *)(this_ptr->unk + 0x34);
  local_20.z = -*(float *)(this_ptr->unk + 0x2c);
  local_14 = local_20.z;
  local_10 = local_20.x;
  local_c = local_20.y;
  pCVar1 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0(&local_6c,&local_2c,&local_20);
  local_44.x = (int)(*(float *)(this_ptr->unk + 0x18) + pCVar1->x);
  local_44.y = (int)(*(float *)(this_ptr->unk + 0x1c) + pCVar1->y);
  local_44.z = (int)(*(float *)(this_ptr->unk + 0x20) + pCVar1->z);
  engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
            (g_CDemonRendererPtr2,&local_44);
  engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0(g_CDemonRendererPtr2);
  return;
}
