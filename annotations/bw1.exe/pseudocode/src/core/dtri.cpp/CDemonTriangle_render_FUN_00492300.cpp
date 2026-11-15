// Name: core_dtri.cpp_CDemonTriangle_render_FUN_00492300
// Address: 00492300
// Address Range: [[00492300, 0049244b]]
// Convention: __cdecl
// Signature: void __cdecl core_dtri_cpp_CDemonTriangle_render_FUN_00492300(CDemonTriangle *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dtri_cpp_CDemonTriangle_render_FUN_00492300(CDemonTriangle *this_ptr)

{
  double dVar1;
  CDemonRenderer *this_ptr_00;
  SMRGLPrimitivePoly *poly;
  CVector3i CStack_30;
  CVector3i CStack_24;
  CVector3i CStack_18;
  
  CStack_30.x = (int)ROUND((this_ptr->vertex1).x * _DAT_005ff660);
  CStack_30.y = (int)ROUND((this_ptr->vertex1).y * _DAT_005ff660);
  CStack_30.z = (int)ROUND((this_ptr->vertex1).z * _DAT_005ff660);
  engine_special_cpp_transformAndProjectPoint_FUN_00580173
            ((SProjectedVertex *)(0x01BC120C->base).base.type,&CStack_30);
  CStack_18.x = (int)ROUND((this_ptr->vertex2).x * _DAT_005ff660);
  CStack_18.y = (int)ROUND((this_ptr->vertex2).y * _DAT_005ff660);
  CStack_18.z = (int)ROUND((this_ptr->vertex2).z * _DAT_005ff660);
  engine_special_cpp_transformAndProjectPoint_FUN_00580173
            ((SProjectedVertex *)((0x01BC120C->base).base.type + 0x30),&CStack_18);
  CStack_24.x = (int)ROUND((this_ptr->vertex3).x * _DAT_005ff660);
  CStack_24.y = (int)ROUND((this_ptr->vertex3).y * _DAT_005ff660);
  CStack_24.z = (int)ROUND((this_ptr->vertex3).z * _DAT_005ff660);
  engine_special_cpp_transformAndProjectPoint_FUN_00580173
            ((SProjectedVertex *)((0x01BC120C->base).base.type + 0x60),&CStack_24);
  dVar1 = _DAT_005dbc1c;
  round((double)(this_ptr->normal).x * _DAT_005dbc1c);
  round((double)(this_ptr->normal).y * dVar1);
  round(dVar1 * (double)(this_ptr->normal).z);
  this_ptr_00 = (CDemonRenderer *)0x492439;
  poly = 0x01BC120C;
  round
            ((double)(this_ptr->plane_distance * (float)_DAT_005dbc24 * (float)_DAT_005dbc2c));
  engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_00481c00(this_ptr_00,poly);
  return;
}
