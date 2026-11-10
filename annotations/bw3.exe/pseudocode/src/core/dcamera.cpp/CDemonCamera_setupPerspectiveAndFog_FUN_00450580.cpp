// Name: core_dcamera.cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00450580
// Address: 00450580
// Address Range: [[00450580, 0045066d]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00450580(CDemonCamera *this_ptr,CVector3f *position,SProjectedVertex *projected_vertex)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00450580(CDemonCamera *this_ptr,CVector3f *position,SProjectedVertex *projected_vertex)

{
  uint uVar1;
  uint uVar2;
  int local_10;
  int local_c;
  int local_8;
  
  if (position == (CVector3f *)0x0) {
    _DAT_01c6e24c = position;
    return;
  }
  if (_DAT_0149ef08 != 0) {
    _DAT_01c6e24c = (CVector3f *)0x0;
    return;
  }
  local_10 = (int)ROUND(position->x * _DAT_005ddfbc);
  local_c = (int)ROUND(position->y * _DAT_005ddfbc);
  local_8 = (int)ROUND(position->z * _DAT_005ddfbc);
  _DAT_01c6e24c =
       (CVector3f *)(**(code **)((this_ptr->base).vtable + 8))(this_ptr,&local_10,projected_vertex);
  uVar1 = *(uint *)(&DAT_00b9e14c + DAT_005f17ec * 4) & 0xff;
  if (DAT_005fba20 == 0x20) {
    uVar2 = (*(uint *)(&DAT_00b9e14c + DAT_005f17e4 * 4) & 0xff) << (DAT_01c6af74 & 0x1f) |
            (*(uint *)(&DAT_00b9e14c + DAT_005f17e8 * 4) & 0xff) << (DAT_01c6af80 & 0x1f);
    uVar1 = uVar1 << (DAT_01c6af8c & 0x1f);
  }
  else {
    uVar2 = (*(uint *)(&DAT_00b9e14c + DAT_005f17e4 * 4) & 0xff) << 0x10 |
            (*(uint *)(&DAT_00b9e14c + DAT_005f17e8 * 4) & 0xff) << 8;
  }
  _DAT_01c6e2bc = uVar2 | uVar1;
  return;
}
