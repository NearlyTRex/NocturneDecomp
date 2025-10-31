// Name: core_simbox.cpp_CSimBox_getActorType_FUN_00588d30
// Address: 00588d30
// Address Range: [[00588d30, 00588d35]]
// Convention: __cdecl
// Signature: CDemonActorType * core_simbox.cpp_CSimBox_getActorType_FUN_00588d30(CSimBox * this_ptr)
// Globals:
//   CDemonActorType g_CSimBoxClassInfo

#include "nocturne.h"

CDemonActorType * __cdecl core_simbox_cpp_CSimBox_getActorType_FUN_00588d30(CSimBox *this_ptr)

{
  return &g_CSimBoxClassInfo;
}


// Assembly code:
// 00588d30: MOV EAX,0x36597e8
//   Label: core_simbox.cpp_CSimBox_getActorType_FUN_00588d30
//   XREF to: 036597e8 (DATA)
// 00588d35: RET
