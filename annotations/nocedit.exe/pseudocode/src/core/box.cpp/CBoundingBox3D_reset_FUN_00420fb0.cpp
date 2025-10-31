// Name: core_box.cpp_CBoundingBox3D_reset_FUN_00420fb0
// Address: 00420fb0
// Address Range: [[00420fb0, 00420fd6]]
// Convention: __cdecl
// Signature: void core_box.cpp_CBoundingBox3D_reset_FUN_00420fb0(CBoundingBox3D * this_ptr)
// Cross-references:
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a16c0 (005a16c0) at 005a16ee [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_FUN_0059d9e0 (0059d9e0) at 0059da11 [UNCONDITIONAL_CALL]
//   core_spike.cpp_FUN_005b8950 (005b8950) at 005b89f7 [UNCONDITIONAL_CALL]
//   core_turret.cpp_FUN_005e2d50 (005e2d50) at 005e2d90 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl core_box_cpp_CBoundingBox3D_reset_FUN_00420fb0(CBoundingBox3D *this_ptr)

{
  float fVar1;
  
  (this_ptr->min).z = 1e+37;
  (this_ptr->max).z = -1e+37;
  fVar1 = (this_ptr->max).z;
  (this_ptr->min).y = (this_ptr->min).z;
  (this_ptr->max).y = fVar1;
  (this_ptr->min).x = (this_ptr->min).y;
  (this_ptr->max).x = fVar1;
  return;
}


// Assembly code:
// 00420fb0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_box.cpp_CBoundingBox3D_reset_FUN_00420fb0
// 00420fb4: MOV dword ptr [EAX + 0x8],0x7cf0bdc2
// 00420fbb: MOV dword ptr [EAX + 0x14],0xfcf0bdc2
// 00420fc2: FLD float ptr [EAX + 0x14]
// 00420fc5: MOV EDX,dword ptr [EAX + 0x8]
// 00420fc8: MOV dword ptr [EAX + 0x4],EDX
// 00420fcb: FST float ptr [EAX + 0x10]
// 00420fce: MOV EDX,dword ptr [EAX + 0x4]
// 00420fd1: MOV dword ptr [EAX],EDX
// 00420fd3: FSTP float ptr [EAX + 0xc]
// 00420fd6: RET
