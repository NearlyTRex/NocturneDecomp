// Name: core_dtri.cpp_CDemonTriangle_render_FUN_00479e10
// Address: 00479e10
// Address Range: [[00479e10, 00479f5b]]
// Convention: __cdecl
// Signature: void __cdecl core_dtri_cpp_CDemonTriangle_render_FUN_00479e10(CDemonTriangle *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dtri_cpp_CDemonTriangle_render_FUN_00479e10(CDemonTriangle *this_ptr)

{
  float10 fVar1;
  float10 fVar2;
  CDemonRenderer *this_ptr_00;
  SMRGLPrimitivePoly *poly;
  int iStack_74;
  UIntegerFloat UStack_70;
  UIntegerFloat UStack_6c;
  UIntegerFloat UStack_68;
  UIntegerFloat UStack_64;
  int iStack_60;
  int iStack_54;
  int iStack_48;
  CVector3i CStack_30;
  CVector3i CStack_24;
  CVector3i CStack_18;
  
  CStack_30.x = (int)ROUND((this_ptr->vertex1).x * _DAT_005f5b50);
  CStack_30.y = (int)ROUND((this_ptr->vertex1).y * _DAT_005f5b50);
  CStack_30.z = (int)ROUND((this_ptr->vertex1).z * _DAT_005f5b50);
  engine_special_cpp_transformAndProjectPoint_FUN_0055d723
            (&DAT_0060b27c->vertex_buffer_ptr->projected_vertex,&CStack_30);
  CStack_18.x = (int)ROUND((this_ptr->vertex2).x * _DAT_005f5b50);
  CStack_18.y = (int)ROUND((this_ptr->vertex2).y * _DAT_005f5b50);
  CStack_18.z = (int)ROUND((this_ptr->vertex2).z * _DAT_005f5b50);
  engine_special_cpp_transformAndProjectPoint_FUN_0055d723
            (&DAT_0060b27c->vertex_buffer_ptr[1].projected_vertex,&CStack_18);
  CStack_24.x = (int)ROUND((this_ptr->vertex3).x * _DAT_005f5b50);
  CStack_24.y = (int)ROUND((this_ptr->vertex3).y * _DAT_005f5b50);
  CStack_24.z = (int)ROUND((this_ptr->vertex3).z * _DAT_005f5b50);
  engine_special_cpp_transformAndProjectPoint_FUN_0055d723
            (&DAT_0060b27c->vertex_buffer_ptr[2].projected_vertex,&CStack_24);
  poly = (SMRGLPrimitivePoly *)&stack0xffffff88;
  iStack_74 = 3;
  fVar1 = (float10)_DAT_005d1e23;
  fVar2 = (float10)(this_ptr->normal).x * fVar1;
  round();
  UStack_70.i = (int)ROUND(fVar2);
  fVar2 = (float10)(this_ptr->normal).y * fVar1;
  round();
  UStack_6c.i = (int)ROUND(fVar2);
  fVar1 = fVar1 * (float10)(this_ptr->normal).z;
  round();
  UStack_68.i = (int)ROUND(fVar1);
  fVar2 = (float10)this_ptr->plane_distance * (float10)_DAT_005d1e2b * (float10)_DAT_005d1e33;
  iStack_60 = 0;
  iStack_54 = 1;
  iStack_48 = 2;
  this_ptr_00 = 0x01BA5C50;
  round();
  UStack_64.i = (int)ROUND(fVar2);
  engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_004696f0(this_ptr_00,poly);
  return;
}
