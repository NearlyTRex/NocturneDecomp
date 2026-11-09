// Name: core_dcamera.cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00454430
// Address: 00454430
// Address Range: [[00454430, 0045451d]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00454430(CDemonCamera *this_ptr,CVector3f *position,SProjectedVertex *projected_vertex)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00454430(CDemonCamera *this_ptr,CVector3f *position,SProjectedVertex *projected_vertex)

{
  uint uVar1;
  uint uVar2;
  int local_10;
  int local_c;
  int local_8;
  
  if (position == (CVector3f *)0x0) {
    _DAT_01c51cac = position;
    return;
  }
  if (_DAT_01482658 != 0) {
    _DAT_01c51cac = (CVector3f *)0x0;
    return;
  }
  local_10 = (int)ROUND(*(float *)position * _DAT_005fe5fc);
  local_c = (int)ROUND(*(float *)&position->field_0x4 * _DAT_005fe5fc);
  local_8 = (int)ROUND(*(float *)&position->field_0x8 * _DAT_005fe5fc);
  _DAT_01c51cac =
       (CVector3f *)
       (**(code **)(*(int *)&this_ptr->field_0x3c + 8))(this_ptr,&local_10,projected_vertex);
  uVar1 = *(uint *)(&DAT_00b8189c + DAT_00611238 * 4) & 0xff;
  if (DAT_0061b4a0 == 0x20) {
    uVar2 = (*(uint *)(&DAT_00b8189c + DAT_00611230 * 4) & 0xff) << (DAT_01c4e9d4 & 0x1f) |
            (*(uint *)(&DAT_00b8189c + DAT_00611234 * 4) & 0xff) << (DAT_01c4e9e0 & 0x1f);
    uVar1 = uVar1 << (DAT_01c4e9ec & 0x1f);
  }
  else {
    uVar2 = (*(uint *)(&DAT_00b8189c + DAT_00611230 * 4) & 0xff) << 0x10 |
            (*(uint *)(&DAT_00b8189c + DAT_00611234 * 4) & 0xff) << 8;
  }
  _DAT_01c51d1c = uVar2 | uVar1;
  return;
}
