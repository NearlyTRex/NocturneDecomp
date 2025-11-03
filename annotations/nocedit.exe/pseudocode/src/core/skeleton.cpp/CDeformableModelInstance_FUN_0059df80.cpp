// Name: core_skeleton.cpp_CDeformableModelInstance_FUN_0059df80
// Address: 0059df80
// Address Range: [[0059df80, 0059dffd]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_CDeformableModelInstance_FUN_0059df80(CDeformableModelInstance * this_ptr)
// Cross-references:
//   core_cloth.cpp_BoneAndClothEditor_FUN_0043c880 (0043c880) at 0043c9df [UNCONDITIONAL_CALL]
//   core_cloth.cpp_FUN_00439710 (00439710) at 00439aec [UNCONDITIONAL_CALL]
//   core_mimic.cpp_CMimic_setup_FUN_0051f3e0 (0051f3e0) at 0051f6ec [UNCONDITIONAL_CALL]
//   core_morph.cpp_FUN_0052bcb0 (0052bcb0) at 0052c44d [UNCONDITIONAL_CALL]
//   core_passngr.cpp_FUN_00545d30 (00545d30) at 00545d5a [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModelInstance_FUN_005968b0 (005968b0) at 00596c67 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModel_computeBoneDominantPart_FUN_0059c2f0 (0059c2f0) at 0059c38b [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModel_computePartDominantBones_FUN_0059d460 (0059d460) at 0059d52e [UNCONDITIONAL_CALL]
//   core_succubus.cpp_CSuccubus_FUN_005c6b60 (005c6b60) at 005c6d8a [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_CVampireBoss_FUN_005e56c0 (005e56c0) at 005e578f [UNCONDITIONAL_CALL]
// Function calls:
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a0820
//   core_xform.cpp_setIdentityQuaternion_FUN_005f7620

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModelInstance_FUN_0059df80(CDeformableModelInstance *this_ptr)

{
  int extraout_EAX;
  int iVar1;
  CQuaternion4f *quaternion;
  int in_stack_00000008;
  int in_stack_0000000c;
  
  iVar1 = 0;
  core_skeleton_cpp_CDeformableModelInstance_FUN_005a0820(this_ptr);
  if (0 < *(int *)(extraout_EAX + 0x28558)) {
    quaternion = (CQuaternion4f *)(in_stack_00000008 + 0x6b0);
    do {
      core_xform_cpp_setIdentityQuaternion_FUN_005f7620(quaternion);
      iVar1 = iVar1 + 1;
      *(undefined4 *)(in_stack_00000008 + 0xcf0) = *(undefined4 *)(in_stack_00000008 + 0x514);
      quaternion = quaternion + 1;
      in_stack_00000008 = in_stack_00000008 + 4;
    } while (iVar1 < *(int *)(extraout_EAX + 0x28558));
  }
  *(undefined4 *)(in_stack_0000000c + 0x6ac) = 0;
  *(undefined4 *)(in_stack_0000000c + 0x6a8) = *(undefined4 *)(in_stack_0000000c + 0x6ac);
  *(undefined4 *)(in_stack_0000000c + 0x6a4) = *(undefined4 *)(in_stack_0000000c + 0x6a8);
  return;
}


// Assembly code:
// 0059df80: PUSH EBX
//   Label: core_skeleton.cpp_CDeformableModelInstance_FUN_0059df80
// 0059df81: PUSH ESI
// 0059df82: PUSH EBP
// 0059df83: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0059df87: PUSH EDX
// 0059df88: XOR ESI,ESI
// 0059df8a: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a0820
//   XREF to: 005a0820 (UNCONDITIONAL_CALL)
// 0059df8f: ADD ESP,0x4
// 0059df92: MOV ECX,dword ptr [EAX + 0x28558]
// 0059df98: MOV EBP,EAX
// 0059df9a: TEST ECX,ECX
// 0059df9c: JLE 0x0059dfd4
//   XREF to: 0059dfd4 (CONDITIONAL_JUMP)
// 0059df9e: PUSH EDI
// 0059df9f: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0059dfa3: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0059dfa7: ADD EDI,0x6b0
// 0059dfad: PUSH EDI
//   Label: LAB_0059dfad
// 0059dfae: ADD EBX,0x4
// 0059dfb1: CALL core_xform.cpp_setIdentityQuaternion_FUN_005f7620
//   XREF to: 005f7620 (UNCONDITIONAL_CALL)
// 0059dfb6: INC ESI
// 0059dfb7: FLD float ptr [EBX + 0x510]
// 0059dfbd: ADD ESP,0x4
// 0059dfc0: FSTP float ptr [EBX + 0xcec]
// 0059dfc6: MOV EAX,dword ptr [EBP + 0x28558]
// 0059dfcc: ADD EDI,0x10
// 0059dfcf: CMP ESI,EAX
// 0059dfd1: JL 0x0059dfad
//   XREF to: 0059dfad (CONDITIONAL_JUMP)
// 0059dfd3: POP EDI
// 0059dfd4: MOV EBX,dword ptr [ESP + 0x10]
//   Label: LAB_0059dfd4
//   XREF to: Stack[0x4] (READ)
// 0059dfd8: MOV dword ptr [EBX + 0x6ac],0x0
// 0059dfe2: MOV EAX,dword ptr [EBX + 0x6ac]
// 0059dfe8: MOV dword ptr [EBX + 0x6a8],EAX
// 0059dfee: MOV EAX,dword ptr [EBX + 0x6a8]
// 0059dff4: MOV dword ptr [EBX + 0x6a4],EAX
// 0059dffa: POP EBP
// 0059dffb: POP ESI
// 0059dffc: POP EBX
// 0059dffd: RET
