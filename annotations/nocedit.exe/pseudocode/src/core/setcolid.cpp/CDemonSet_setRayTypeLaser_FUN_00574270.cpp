// Name: core_setcolid.cpp_CDemonSet_setRayTypeLaser_FUN_00574270
// Address: 00574270
// Address Range: [[00574270, 005742a6]]
// Convention: __cdecl
// Signature: void core_setcolid.cpp_CDemonSet_setRayTypeLaser_FUN_00574270(CDemonSet * this_ptr, float f1, float f2, float f3, float f4)
// Cross-references:
//   core_fire.cpp_CFireEffect_FUN_004c8230 (004c8230) at 004c82b9 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_aimLeftPistol_FUN_005c4370 (005c4370) at 005c4459 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl
core_setcolid_cpp_CDemonSet_setRayTypeLaser_FUN_00574270
          (CDemonSet *this_ptr,float f1,float f2,float f3,float f4)

{
  this_ptr->ray_type = 3;
  this_ptr->field52_0x15f684 = f1;
  this_ptr->field53_0x15f688 = f2;
  this_ptr->field54_0x15f68c = f3;
  this_ptr->field55_0x15f690 = f4;
  return;
}


// Assembly code:
// 00574270: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_setcolid.cpp_CDemonSet_setRayTypeLaser_FUN_00574270
//   XREF to: Stack[0x4] (READ)
// 00574274: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 00574278: MOV dword ptr [EAX + 0x15f680],0x3
// 00574282: MOV dword ptr [EAX + 0x15f684],EDX
// 00574288: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 0057428c: MOV dword ptr [EAX + 0x15f688],EDX
// 00574292: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x10] (READ)
// 00574296: MOV dword ptr [EAX + 0x15f68c],EDX
// 0057429c: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x14] (READ)
// 005742a0: MOV dword ptr [EAX + 0x15f690],EDX
// 005742a6: RET
