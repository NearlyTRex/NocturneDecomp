// Name: shape_spotview.cpp_CSpotView_FUN_005b9a20
// Address: 005b9a20
// Address Range: [[005b9a20, 005b9af3]]
// Convention: __cdecl
// Signature: void shape_spotview.cpp_CSpotView_FUN_005b9a20(CSpotView * this_ptr)

#include "nocturne.h"

void __cdecl shape_spotview_cpp_CSpotView_FUN_005b9a20(CSpotView *this_ptr)

{
  CVector3f *pCVar1;
  BADSPACEBASE *in_ESP;
  byte local_38 [8];
  float local_30;
  uint local_2c;
  CVector3f CStack_24;
  CVector3f local_18;
  float local_c;
  
  engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_0048c650(g_CDemonRendererPtr,28.0);
  local_38._4_4_ = *(uint *)(this_ptr->field0_0x0 + 0x24);
  local_2c = 0;
  local_30 = *(float *)(this_ptr->field0_0x0 + 0x28);
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            ((CMatrix3x3f *)&stack0xffffff98,(CVector3f *)(local_38 + 4));
  local_18.x = *(float *)(this_ptr->field0_0x0 + 0x30);
  local_18.y = *(float *)(this_ptr->field0_0x0 + 0x34);
  local_18.z = -*(float *)(this_ptr->field0_0x0 + 0x2c);
  local_c = local_18.z;
  pCVar1 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                     ((CMatrix3x3f *)&stack0xffffff9c,&CStack_24,&local_18);
  local_38._0_4_ = *(float *)(this_ptr->field0_0x0 + 0x18) + pCVar1->x;
  local_38._4_4_ = *(float *)(this_ptr->field0_0x0 + 0x1c) + pCVar1->y;
  local_30 = *(float *)(this_ptr->field0_0x0 + 0x20) + pCVar1->z;
  engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
            (g_CDemonRendererPtr,(CVector3i *)local_38);
  engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0(g_CDemonRendererPtr);
  return;
}
