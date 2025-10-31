// Name: core_skeleton.cpp_CDeformableModelInstance_FUN_0059fa20
// Address: 0059fa20
// Address Range: [[0059fa20, 0059faf3]]
// Convention: unknown
// Signature: undefined core_skeleton.cpp_CDeformableModelInstance_FUN_0059fa20()
// Cross-references:
//   core_batcreat.cpp_CBatCreature_process_FUN_00415470 (00415470) at 004156ff [UNCONDITIONAL_CALL]
//   core_batman.cpp_CBatman_process_FUN_00416870 (00416870) at 00416e1a [UNCONDITIONAL_CALL]
//   core_bride.cpp_FUN_00423a30 (00423a30) at 00423bed [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042ec40 (0042ec40) at 0042eca1 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042f3e0 (0042f3e0) at 0042f66f [UNCONDITIONAL_CALL]
//   core_cow.cpp_FUN_00444310 (00444310) at 0044464a [UNCONDITIONAL_CALL]
//   core_dog.cpp_CZombieDog_process_FUN_0047f140 (0047f140) at 0047f4d0 [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_FUN_00484410 (00484410) at 00484fd7 [UNCONDITIONAL_CALL]
//   core_drone.cpp_FUN_0048ec70 (0048ec70) at 0048f0aa [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d4890 (004d4890) at 004d48dd [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d4cf0 (004d4cf0) at 004d4d28 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d6540 (004d6540) at 004d688f [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d6f80 (004d6f80) at 004d6fb3 [UNCONDITIONAL_CALL]
//   core_ghoul.cpp_CGhoul_FUN_004e6600 (004e6600) at 004e7127 [UNCONDITIONAL_CALL]
//   core_hostage.cpp_RelatedToRescuedTownsfolk_FUN_004f4bd0 (004f4bd0) at 004f5031 [UNCONDITIONAL_CALL]
//   core_hotdemon.cpp_FUN_004f6f20 (004f6f20) at 004f71a9 [UNCONDITIONAL_CALL]
//   core_imp.cpp_FUN_004f9c30 (004f9c30) at 004f9e3f [UNCONDITIONAL_CALL]
//   core_larva.cpp_FUN_00503080 (00503080) at 0050352b [UNCONDITIONAL_CALL]
//   core_mimic.cpp_FUN_0051fcc0 (0051fcc0) at 0051fcf0 [UNCONDITIONAL_CALL]
//   core_mobster.cpp_FUN_00525840 (00525840) at 005260ce [UNCONDITIONAL_CALL]
//   core_npc.cpp_CNPC_process_FUN_005448b0 (005448b0) at 00544960 [UNCONDITIONAL_CALL]
//   core_scat.cpp_FUN_00558720 (00558720) at 00558b39 [UNCONDITIONAL_CALL]
//   core_sentinel.cpp_FUN_00568030 (00568030) at 00568548 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModel_LoadingSomethingMemory_FUN_0059c2f0 (0059c2f0) at 0059c3ae [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_FUN_0059fdd0 (0059fdd0) at 0059fe1c [UNCONDITIONAL_CALL]
//   core_smiley.cpp_FUN_005a2800 (005a2800) at 005a2daf [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005bb4b0 (005bb4b0) at 005bb705 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005bdd20 (005bdd20) at 005bdd9a [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005be490 (005be490) at 005be4c8 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005be520 (005be520) at 005bf541 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c1680 (005c1680) at 005c1cb0 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c3960 (005c3960) at 005c3e02 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c4c20 (005c4c20) at 005c4f54 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_aimLeftPistol_FUN_005c4370 (005c4370) at 005c457e [UNCONDITIONAL_CALL]
//   core_werewolf.cpp_CWerewolf_process_FUN_005efde0 (005efde0) at 005efec2 [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_process_FUN_005f9470 (005f9470) at 005f9d18 [UNCONDITIONAL_CALL]
// Function calls:
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059f820
//   core_skeleton.cpp_CDeformableModelInstance_GetModelPtrAndSomething_FUN_005a0820
//   core_xform.cpp_transformVector3x4_FUN_005f4dc0

#include "nocturne.h"

/* Signature: undefined1 core_skeleton.cpp_CDeformableModelInstance_FUN_0059fa20(undefined4 param_1,
   undefined4 param_2, undefined4 param_3) */

CVector3f * core_skeleton_cpp_CDeformableModelInstance_FUN_0059fa20(void)

{
  CVector3f *input_vector;
  int iVar1;
  BADSPACEBASE *in_ESP;
  float *pfVar2;
  CMatrix3x4f *pCVar3;
  byte bVar4;
  int in_stack_00000004;
  CVector3f *in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  CMatrix3x4f CStack_68;
  float afStack_38 [10];
  
  bVar4 = 0;
  if (in_stack_0000000c < 0) {
    in_stack_00000008->x = *(float *)(in_stack_00000004 + 0x6a4);
    in_stack_00000008->y = *(float *)(in_stack_00000004 + 0x6a8);
    in_stack_00000008->z = *(float *)(in_stack_00000004 + 0x6ac);
    return in_stack_00000008;
  }
  iVar1 = core_skeleton_cpp_CDeformableModelInstance_GetModelPtrAndSomething_FUN_005a0820();
  input_vector = (CVector3f *)(in_stack_00000004 + 0x58 + in_stack_00000010 * 0xc);
  if (*(int *)(in_stack_00000010 * 0x24 + iVar1 + 0x2857c) < 0) {
    in_stack_00000008->x = input_vector->x + *(float *)(in_stack_00000004 + 0x6a4);
    in_stack_00000008->y = input_vector->y + *(float *)(in_stack_00000004 + 0x6a8);
    in_stack_00000008->z = input_vector->z + *(float *)(in_stack_00000004 + 0x6ac);
    return in_stack_00000008;
  }
  core_skeleton_cpp_CDeformableModelInstance_FUN_0059f820();
  pfVar2 = afStack_38;
  pCVar3 = &CStack_68;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar3->m[0].w = *pfVar2;
    pfVar2 = pfVar2 + (uint)bVar4 * -2 + 1;
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar4 * -2 + 1) * 4);
  }
  core_xform_cpp_transformVector3x4_FUN_005f4dc0(in_stack_00000008,input_vector,&CStack_68);
  return in_stack_00000008;
}


// Assembly code:
// 0059fa20: PUSH EBX
//   Label: core_skeleton.cpp_CDeformableModelInstance_FUN_0059fa20
// 0059fa21: PUSH ESI
// 0059fa22: PUSH EDI
// 0059fa23: PUSH EBP
// 0059fa24: SUB ESP,0x60
// 0059fa27: MOV EDI,dword ptr [ESP + 0x74]
//   XREF to: Stack[0x4] (READ)
// 0059fa2b: MOV EBX,dword ptr [ESP + 0x78]
//   XREF to: Stack[0x8] (READ)
// 0059fa2f: MOV EDX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[0xc] (READ)
// 0059fa33: LEA ESI,[EDI + 0x6a4]
// 0059fa39: TEST EDX,EDX
// 0059fa3b: JGE 0x0059fa5f
//   XREF to: 0059fa5f (CONDITIONAL_JUMP)
// 0059fa3d: MOV EAX,dword ptr [ESI]
// 0059fa3f: LEA EDX,[ESI + 0x4]
// 0059fa42: MOV dword ptr [EBX],EAX
// 0059fa44: LEA EAX,[EBX + 0x4]
// 0059fa47: MOV EDX,dword ptr [EDX]
// 0059fa49: MOV dword ptr [EAX],EDX
// 0059fa4b: LEA EDX,[EAX + 0x4]
// 0059fa4e: LEA EAX,[ESI + 0x8]
// 0059fa51: MOV EAX,dword ptr [EAX]
// 0059fa53: MOV dword ptr [EDX],EAX
// 0059fa55: MOV EAX,EBX
// 0059fa57: ADD ESP,0x60
// 0059fa5a: POP EBP
// 0059fa5b: POP EDI
// 0059fa5c: POP ESI
// 0059fa5d: POP EBX
// 0059fa5e: RET
// 0059fa5f: PUSH EDI
//   Label: LAB_0059fa5f
// 0059fa60: CALL core_skeleton.cpp_CDeformableModelInstance_GetModelPtrAndSomething_FUN_005a0820
//   XREF to: 005a0820 (UNCONDITIONAL_CALL)
// 0059fa65: ADD ESP,0x4
// 0059fa68: MOV EDX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[0xc] (READ)
// 0059fa6c: MOV EBP,EAX
// 0059fa6e: LEA EAX,[EDX*0x8 + 0x0]
// 0059fa75: ADD EAX,EDX
// 0059fa77: SHL EAX,0x2
// 0059fa7a: LEA EDX,[EAX + EBP*0x1]
// 0059fa7d: MOV EBP,dword ptr [ESP + 0x7c]
//   XREF to: Stack[0xc] (READ)
// 0059fa81: LEA EAX,[EBP*0x4 + 0x0]
// 0059fa88: SUB EAX,EBP
// 0059fa8a: LEA ECX,[EDI + 0x58]
// 0059fa8d: SHL EAX,0x2
// 0059fa90: MOV EDX,dword ptr [EDX + 0x2857c]
// 0059fa96: LEA EBP,[ECX + EAX*0x1]
// 0059fa99: TEST EDX,EDX
// 0059fa9b: JGE 0x0059fac0
//   XREF to: 0059fac0 (CONDITIONAL_JUMP)
// 0059fa9d: FLD float ptr [EBP]
// 0059faa0: FADD float ptr [ESI]
// 0059faa2: FSTP float ptr [EBX]
// 0059faa4: FLD float ptr [EBP + 0x4]
// 0059faa7: FADD float ptr [ESI + 0x4]
// 0059faaa: FSTP float ptr [EBX + 0x4]
// 0059faad: FLD float ptr [EBP + 0x8]
// 0059fab0: FADD float ptr [ESI + 0x8]
// 0059fab3: FSTP float ptr [EBX + 0x8]
// 0059fab6: MOV EAX,EBX
// 0059fab8: ADD ESP,0x60
// 0059fabb: POP EBP
// 0059fabc: POP EDI
// 0059fabd: POP ESI
// 0059fabe: POP EBX
// 0059fabf: RET
// 0059fac0: PUSH EDX
//   Label: LAB_0059fac0
// 0059fac1: PUSH EDI
// 0059fac2: LEA ESI,[ESP + 0x38]
//   XREF to: Stack[-0x40] (DATA)
// 0059fac6: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059f820
//   XREF to: 0059f820 (UNCONDITIONAL_CALL)
// 0059facb: ADD ESP,0x8
// 0059face: MOV EAX,ESP
// 0059fad0: PUSH EAX
// 0059fad1: MOV ECX,0xc
// 0059fad6: PUSH EBP
// 0059fad7: LEA EDI,[ESP + 0x8]
//   XREF to: Stack[-0x70] (DATA)
// 0059fadb: LEA ESI,[ESP + 0x38]
//   XREF to: Stack[-0x40] (DATA)
// 0059fadf: PUSH EBX
// 0059fae0: MOVSD.REP ES:EDI,ESI
// 0059fae2: CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
// 0059fae7: ADD ESP,0xc
// 0059faea: MOV EAX,EBX
// 0059faec: ADD ESP,0x60
// 0059faef: POP EBP
// 0059faf0: POP EDI
// 0059faf1: POP ESI
// 0059faf2: POP EBX
// 0059faf3: RET
