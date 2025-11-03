// Name: core_charactr.cpp_CCharacter_FUN_0042f300
// Address: 0042f300
// Address Range: [[0042f300, 0042f330]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_0042f300(CCharacter * this_ptr)
// Cross-references:
//   core_batcreat.cpp_FUN_00415dd0 (00415dd0) at 00415fee [UNCONDITIONAL_CALL]
//   core_batman.cpp_FUN_00417660 (00417660) at 004177fb [UNCONDITIONAL_CALL]
//   core_bride.cpp_FUN_00424600 (00424600) at 00424725 [UNCONDITIONAL_CALL]
//   core_cow.cpp_FUN_004448c0 (004448c0) at 00444a43 [UNCONDITIONAL_CALL]
//   core_ghoul.cpp_FUN_004e8520 (004e8520) at 004e86b6 [UNCONDITIONAL_CALL]
//   core_imp.cpp_FUN_004fab60 (004fab60) at 004facfb [UNCONDITIONAL_CALL]
//   core_mobster.cpp_FUN_00527380 (00527380) at 00527586 [UNCONDITIONAL_CALL]
//   core_smiley.cpp_FUN_005a32a0 (005a32a0) at 005a3455 [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_FUN_005fc220 (005fc220) at 005fc3b6 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042f300(CCharacter *this_ptr)

{
  CDemonActor_vtable *pCVar1;
  char *in_stack_00000008;
  
  if (0.0 < *(float *)(this_ptr->cloth_data + 0x340)) {
    return;
  }
  pCVar1 = (this_ptr->base_actor).vtable;
  this_ptr->cloth_data[0x340] = -0x33;
  this_ptr->cloth_data[0x341] = -0x34;
  this_ptr->cloth_data[0x342] = -0x34;
  this_ptr->cloth_data[0x343] = '=';
  (*pCVar1->playSound)(&this_ptr->base_actor,in_stack_00000008);
  return;
}


// Assembly code:
// 0042f300: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_charactr.cpp_CCharacter_FUN_0042f300
//   XREF to: Stack[0x4] (READ)
// 0042f304: FLD float ptr [EDX + 0x2dd8]
// 0042f30a: FLDZ
// 0042f30c: FCOMPP
// 0042f30e: FNSTSW AX
// 0042f310: SAHF
// 0042f311: JNC 0x0042f314
//   XREF to: 0042f314 (CONDITIONAL_JUMP)
// 0042f313: RET
// 0042f314: MOV ECX,dword ptr [ESP + 0x8]
//   Label: LAB_0042f314
//   XREF to: Stack[0x8] (READ)
// 0042f318: PUSH ECX
// 0042f319: MOV EAX,dword ptr [EDX + 0x154]
// 0042f31f: PUSH EDX
// 0042f320: MOV dword ptr [EDX + 0x2dd8],0x3dcccccd
// 0042f32a: CALL dword ptr [EAX + 0x24]
// 0042f32d: ADD ESP,0x8
// 0042f330: RET
