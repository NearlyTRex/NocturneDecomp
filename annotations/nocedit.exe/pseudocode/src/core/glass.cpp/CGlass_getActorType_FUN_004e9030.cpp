// Name: core_glass.cpp_CGlass_getActorType_FUN_004e9030
// Address: 004e9030
// Address Range: [[004e9030, 004e9035]]
// Convention: __cdecl
// Signature: CDemonActorType * core_glass.cpp_CGlass_getActorType_FUN_004e9030(CGlass * this_ptr)
// Globals:
//   CDemonActorType g_CGlassClassInfo

#include "nocturne.h"

CDemonActorType * __cdecl core_glass_cpp_CGlass_getActorType_FUN_004e9030(CGlass *this_ptr)

{
  return &g_CGlassClassInfo;
}


// Assembly code:
// 004e9030: MOV EAX,0x2d83328
//   Label: core_glass.cpp_CGlass_getActorType_FUN_004e9030
//   XREF to: 02d83328 (DATA)
// 004e9035: RET
