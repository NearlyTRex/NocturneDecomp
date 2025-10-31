// Name: core_ammobox.cpp_CAmmoBox_FUN_004119d0
// Address: 004119d0
// Address Range: [[004119d0, 004119e3]]
// Convention: __cdecl
// Signature: int core_ammobox.cpp_CAmmoBox_FUN_004119d0(CAmmoBox * this_ptr)

#include "nocturne.h"

int __cdecl core_ammobox_cpp_CAmmoBox_FUN_004119d0(CAmmoBox *this_ptr)

{
  return (uint)(this_ptr->has_collision != 0);
}


// Assembly code:
// 004119d0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_ammobox.cpp_CAmmoBox_FUN_004119d0
//   XREF to: Stack[0x4] (READ)
// 004119d4: CMP dword ptr [EAX + 0x324],0x0
// 004119db: SETNZ AL
// 004119de: AND EAX,0xff
// 004119e3: RET
