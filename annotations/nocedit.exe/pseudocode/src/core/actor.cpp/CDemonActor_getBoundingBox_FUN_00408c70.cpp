// Name: core_actor.cpp_CDemonActor_getBoundingBox_FUN_00408c70
// Address: 00408c70
// Address Range: [[00408c70, 00408c9d]]
// Convention: __cdecl
// Signature: CBoundingBox3D * core_actor.cpp_CDemonActor_getBoundingBox_FUN_00408c70(CDemonActor * this_ptr, CBoundingBox3D * out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl
core_actor_cpp_CDemonActor_getBoundingBox_FUN_00408c70
          (CDemonActor *this_ptr,CBoundingBox3D *out_box)

{
  (out_box->min).y = 0.0;
  (out_box->min).z = -4.0;
  (out_box->max).x = 4.0;
  (out_box->max).y = 8.0;
  (out_box->max).z = 4.0;
  (out_box->min).x = -4.0;
  return out_box;
}


// Assembly code:
// 00408c70: MOV EAX,dword ptr [ESP + 0x8]
//   Label: core_actor.cpp_CDemonActor_getBoundingBox_FUN_00408c70
//   XREF to: Stack[0x8] (READ)
// 00408c74: MOV dword ptr [EAX + 0x4],0x0
// 00408c7b: MOV dword ptr [EAX + 0x8],0xc0800000
// 00408c82: MOV dword ptr [EAX + 0xc],0x40800000
// 00408c89: MOV dword ptr [EAX + 0x10],0x41000000
// 00408c90: MOV dword ptr [EAX + 0x14],0x40800000
// 00408c97: MOV dword ptr [EAX],0xc0800000
// 00408c9d: RET
