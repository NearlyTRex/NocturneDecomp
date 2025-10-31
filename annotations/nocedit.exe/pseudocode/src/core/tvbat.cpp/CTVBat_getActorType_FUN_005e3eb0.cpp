// Name: core_tvbat.cpp_CTVBat_getActorType_FUN_005e3eb0
// Address: 005e3eb0
// Address Range: [[005e3eb0, 005e3eb5]]
// Convention: __cdecl
// Signature: CDemonActorType * core_tvbat.cpp_CTVBat_getActorType_FUN_005e3eb0(CTVBat * this_ptr)
// Globals:
//   CDemonActorType g_CTVBatClassInfo

#include "nocturne.h"

CDemonActorType * __cdecl core_tvbat_cpp_CTVBat_getActorType_FUN_005e3eb0(CTVBat *this_ptr)

{
  return &g_CTVBatClassInfo;
}


// Assembly code:
// 005e3eb0: MOV EAX,0x3f874e0
//   Label: core_tvbat.cpp_CTVBat_getActorType_FUN_005e3eb0
//   XREF to: 03f874e0 (DATA)
// 005e3eb5: RET
