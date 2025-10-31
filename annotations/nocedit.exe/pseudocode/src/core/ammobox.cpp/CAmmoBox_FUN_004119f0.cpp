// Name: core_ammobox.cpp_CAmmoBox_FUN_004119f0
// Address: 004119f0
// Address Range: [[004119f0, 00411a1b]]
// Convention: __cdecl
// Signature: int core_ammobox.cpp_CAmmoBox_FUN_004119f0(CAmmoBox * this_ptr)
// Globals:
//   TerminatedCString s_CHero_00614c69
// Function calls:
//   core_actor.cpp_isOfClass_FUN_0040c6d0

#include "nocturne.h"

int __cdecl core_ammobox_cpp_CAmmoBox_FUN_004119f0(CAmmoBox *this_ptr)

{
  int iVar1;
  CDemonActor *in_stack_00000008;
  
  if (this_ptr->ammo_count != 0) {
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(in_stack_00000008,"CHero");
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}


// Assembly code:
// 004119f0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_ammobox.cpp_CAmmoBox_FUN_004119f0
// 004119f4: CMP dword ptr [EAX + 0x314],0x0
// 004119fb: JNZ 0x00411a00
//   XREF to: 00411a00 (CONDITIONAL_JUMP)
// 004119fd: XOR EAX,EAX
//   Label: LAB_004119fd
// 004119ff: RET
// 00411a00: PUSH 0x614c69
//   Label: LAB_00411a00
//   XREF to: 00614c69 (DATA)
// 00411a05: MOV ECX,dword ptr [ESP + 0xc]
// 00411a09: PUSH ECX
// 00411a0a: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 00411a0f: ADD ESP,0x8
// 00411a12: TEST EAX,EAX
// 00411a14: JZ 0x004119fd
//   XREF to: 004119fd (CONDITIONAL_JUMP)
// 00411a16: MOV EAX,0x1
// 00411a1b: RET
