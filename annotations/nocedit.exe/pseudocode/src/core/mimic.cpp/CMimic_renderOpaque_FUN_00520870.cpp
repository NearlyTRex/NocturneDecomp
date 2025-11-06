// Name: core_mimic.cpp_CMimic_renderOpaque_FUN_00520870
// Address: 00520870
// Address Range: [[00520870, 00520889]]
// Convention: __cdecl
// Signature: int core_mimic.cpp_CMimic_renderOpaque_FUN_00520870(CMimic * this_ptr)
// Function calls:
//   core_mimic.cpp_CMimic_FUN_005205f0

#include "nocturne.h"

int __cdecl core_mimic_cpp_CMimic_renderOpaque_FUN_00520870(CMimic *this_ptr)

{
  int iVar1;
  
  if ((this_ptr->field0_0x0).base_character.base_actor.is_transparent != 0) {
    return 0;
  }
  iVar1 = core_mimic_cpp_CMimic_FUN_005205f0(this_ptr);
  return iVar1;
}


// Assembly code:
// 00520870: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_mimic.cpp_CMimic_renderOpaque_FUN_00520870
//   XREF to: Stack[0x4] (READ)
// 00520874: CMP dword ptr [EAX + 0xfc],0x0
// 0052087b: JZ 0x00520880
//   XREF to: 00520880 (CONDITIONAL_JUMP)
// 0052087d: XOR EAX,EAX
// 0052087f: RET
// 00520880: PUSH EAX
//   Label: LAB_00520880
// 00520881: CALL core_mimic.cpp_CMimic_FUN_005205f0
//   XREF to: 005205f0 (UNCONDITIONAL_CALL)
// 00520886: ADD ESP,0x4
// 00520889: RET
