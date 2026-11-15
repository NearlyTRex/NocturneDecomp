// Name: shape_edittool.cpp_CEditorTools_drawCenteredWireframeCube_FUN_00481920
// Address: 00481920
// Address Range: [[00481920, 004819bd]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_drawCenteredWireframeCube_FUN_00481920(CEditorTools *this_ptr,CVector3f *dimensions,int color_value)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CEditorTools_drawCenteredWireframeCube_FUN_00481920(CEditorTools *this_ptr,CVector3f *dimensions,int color_value)

{
  CVector3f CStack_48;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  CVector3f CStack_30;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  
  CStack_48.x = dimensions->x * _DAT_005bd34d;
  CStack_48.y = dimensions->y * _DAT_005bd34d;
  CStack_48.z = dimensions->z * _DAT_005bd34d;
  fStack_24 = -dimensions->x;
  fStack_20 = -dimensions->y;
  fStack_1c = -dimensions->z;
  CStack_30.x = fStack_24 * _DAT_005bd34d;
  CStack_30.y = fStack_20 * _DAT_005bd34d;
  CStack_30.z = fStack_1c * _DAT_005bd34d;
  fStack_3c = CStack_48.x;
  fStack_38 = CStack_48.y;
  fStack_34 = CStack_48.z;
  fStack_18 = CStack_30.x;
  fStack_14 = CStack_30.y;
  fStack_10 = CStack_30.z;
  shape_edittool_cpp_CEditorTools_draw3DWireframeCube_FUN_00481350
            (this_ptr,&CStack_30,&CStack_48,color_value);
  return;
}
