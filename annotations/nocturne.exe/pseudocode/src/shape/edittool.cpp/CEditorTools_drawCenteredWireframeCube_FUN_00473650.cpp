// Name: shape_edittool.cpp_CEditorTools_drawCenteredWireframeCube_FUN_00473650
// Address: 00473650
// Address Range: [[00473650, 004736b9]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_drawCenteredWireframeCube_FUN_00473650(CEditorTools *this_ptr,CVector3f *dimensions,int color_value)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEditorTools_drawCenteredWireframeCube_FUN_00473650(CEditorTools *this_ptr,CVector3f *dimensions,int color_value)

{
  CVector3f local_1c;
  CVector3f local_10;
  
  local_10.x = dimensions->x * 3.0517585321376802e-05._4_4_;
  local_10.y = dimensions->y * 3.0517585321376802e-05._4_4_;
  local_10.z = dimensions->z * 3.0517585321376802e-05._4_4_;
  local_1c.x = -dimensions->x * 3.0517585321376802e-05._4_4_;
  local_1c.y = -dimensions->y * 3.0517585321376802e-05._4_4_;
  local_1c.z = -dimensions->z * 3.0517585321376802e-05._4_4_;
  shape_edittool_cpp_CEditorTools_draw3DWireframeCube_FUN_00473190
            (this_ptr,&local_1c,&local_10,color_value);
  return;
}
