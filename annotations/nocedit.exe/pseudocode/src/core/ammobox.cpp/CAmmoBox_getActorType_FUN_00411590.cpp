// Name: core_ammobox.cpp_CAmmoBox_getActorType_FUN_00411590
// Address: 00411590
// Address Range: [[00411590, 00411595]]
// Convention: __cdecl
// Signature: CDemonActorType * core_ammobox.cpp_CAmmoBox_getActorType_FUN_00411590(CAmmoBox * this_ptr)
// Globals:
//   CDemonActorType g_CAmmoBoxClassInfo

#include "nocturne.h"

CDemonActorType * __cdecl core_ammobox_cpp_CAmmoBox_getActorType_FUN_00411590(CAmmoBox *this_ptr)

{
  return &g_CAmmoBoxClassInfo;
}


// Assembly code:
// 00411590: MOV EAX,0x8223a8
//   Label: core_ammobox.cpp_CAmmoBox_getActorType_FUN_00411590
//   XREF to: 008223a8 (DATA)
// 00411595: RET
