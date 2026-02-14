// Name: shape_edittool.cpp_CEditorTools_drawCenteredWireframeCube_FUN_004a2510
// Address: 004a2510
// Address Range: [[004a2510, 004a2579]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_drawCenteredWireframeCube_FUN_004a2510(CEditorTools *this_ptr,CVector3f *dimensions,int color_value)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEditorTools_drawCenteredWireframeCube_FUN_004a2510(CEditorTools *this_ptr,CVector3f *dimensions,int color_value)

{
  CVector3f local_1c;
  CVector3f local_10;
  
  local_10.x = dimensions->x * 0.5f;
  local_10.y = dimensions->y * 0.5f;
  local_10.z = dimensions->z * 0.5f;
  local_1c.x = -dimensions->x * 0.5f;
  local_1c.y = -dimensions->y * 0.5f;
  local_1c.z = -dimensions->z * 0.5f;
  shape_edittool_cpp_CEditorTools_draw3DWireframeCube_FUN_004a2050
            (this_ptr,&local_1c,&local_10,color_value);
  return;
}
