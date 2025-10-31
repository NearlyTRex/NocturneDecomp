// Name: core_setcolid.cpp_SDamageInfo_copy_FUN_005746d0
// Address: 005746d0
// Address Range: [[005746d0, 0057474c]]
// Convention: __cdecl
// Signature: void core_setcolid.cpp_SDamageInfo_copy_FUN_005746d0(SDamageInfo * this_ptr, SDamageInfo * other)

#include "nocturne.h"

void __cdecl
core_setcolid_cpp_SDamageInfo_copy_FUN_005746d0(SDamageInfo *this_ptr,SDamageInfo *other)

{
  this_ptr->field0_0x0 = other->field0_0x0;
  this_ptr->damage_amount = other->damage_amount;
  this_ptr->damage_flags = other->damage_flags;
  (this_ptr->impact_point).x = (other->impact_point).x;
  (this_ptr->impact_point).y = (other->impact_point).y;
  (this_ptr->impact_point).z = (other->impact_point).z;
  this_ptr->impact_force = other->impact_force;
  (this_ptr->impact_direction).x = (other->impact_direction).x;
  (this_ptr->impact_direction).y = (other->impact_direction).y;
  (this_ptr->impact_direction).z = (other->impact_direction).z;
  this_ptr->ammo_type = other->ammo_type;
  this_ptr->weapon_damage_modifier = other->weapon_damage_modifier;
  this_ptr->damage_type = other->damage_type;
  this_ptr->attacker = other->attacker;
  this_ptr->wielder = other->wielder;
  return;
}


// Assembly code:
// 005746d0: PUSH EBX
//   Label: core_setcolid.cpp_SDamageInfo_copy_FUN_005746d0
// 005746d1: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005746d5: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005746d9: MOV ECX,dword ptr [EDX]
// 005746db: MOV dword ptr [EAX],ECX
// 005746dd: FLD float ptr [EDX + 0x4]
// 005746e0: LEA ECX,[EAX + 0xc]
// 005746e3: FSTP float ptr [EAX + 0x4]
// 005746e6: MOV EBX,dword ptr [EDX + 0x8]
// 005746e9: MOV dword ptr [EAX + 0x8],EBX
// 005746ec: LEA EAX,[EDX + 0xc]
// 005746ef: MOV EBX,dword ptr [EAX]
// 005746f1: MOV dword ptr [ECX],EBX
// 005746f3: LEA EBX,[EAX + 0x4]
// 005746f6: ADD ECX,0x4
// 005746f9: MOV EBX,dword ptr [EBX]
// 005746fb: MOV dword ptr [ECX],EBX
// 005746fd: ADD ECX,0x4
// 00574700: MOV EAX,dword ptr [EAX + 0x8]
// 00574703: MOV dword ptr [ECX],EAX
// 00574705: LEA EAX,[ECX + -0x14]
// 00574708: FLD float ptr [EDX + 0x18]
// 0057470b: LEA ECX,[EAX + 0x1c]
// 0057470e: FSTP float ptr [EAX + 0x18]
// 00574711: LEA EAX,[EDX + 0x1c]
// 00574714: MOV EBX,dword ptr [EAX]
// 00574716: MOV dword ptr [ECX],EBX
// 00574718: LEA EBX,[EAX + 0x4]
// 0057471b: ADD ECX,0x4
// 0057471e: MOV EBX,dword ptr [EBX]
// 00574720: MOV dword ptr [ECX],EBX
// 00574722: ADD ECX,0x4
// 00574725: MOV EAX,dword ptr [EAX + 0x8]
// 00574728: MOV dword ptr [ECX],EAX
// 0057472a: LEA EAX,[ECX + -0x24]
// 0057472d: MOV ECX,dword ptr [EDX + 0x28]
// 00574730: MOV dword ptr [EAX + 0x28],ECX
// 00574733: MOV ECX,dword ptr [EDX + 0x2c]
// 00574736: MOV dword ptr [EAX + 0x2c],ECX
// 00574739: MOV ECX,dword ptr [EDX + 0x30]
// 0057473c: MOV dword ptr [EAX + 0x30],ECX
// 0057473f: MOV ECX,dword ptr [EDX + 0x34]
// 00574742: MOV dword ptr [EAX + 0x34],ECX
// 00574745: MOV EDX,dword ptr [EDX + 0x38]
// 00574748: MOV dword ptr [EAX + 0x38],EDX
// 0057474b: POP EBX
// 0057474c: RET
