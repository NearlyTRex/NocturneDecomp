// Name: core_vampboss.cpp_CVampireBoss_FUN_005e56c0
// Address: 005e56c0
// Address Range: [[005e56c0, 005e58c3]]
// Convention: __cdecl
// Signature: void core_vampboss.cpp_CVampireBoss_FUN_005e56c0(CVampireBoss * this_ptr)
// Globals:
//   TerminatedCString s_batwing_cth_00656adc
//   TerminatedCString s_noscape_cth_00656ae8
//   TerminatedCString s_nosskirt_cth_00656af4
//   TerminatedCString s_Bip01_Spine2_00656b01
//   undefined4 DAT_02f43974
// Function calls:
//   core_cloth.cpp_CCloth_load_FUN_00438cf0
//   core_cloth.cpp_FUN_00439710
//   core_enemy.cpp_CEnemy_FUN_004a9650
//   core_morph.cpp_CMorph_getReady_FUN_0052b680
//   core_morph.cpp_FUN_0052b430
//   core_morph.cpp_FUN_0052b580
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059df80
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059e000
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059fb40
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a0450
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a0820
//   core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0

#include "nocturne.h"

void __cdecl core_vampboss_cpp_CVampireBoss_FUN_005e56c0(CVampireBoss *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CDeformableModelInstance *this_ptr_01;
  char *this_ptr_02;
  CCharacter *pCVar1;
  CSkeleton *this_ptr_03;
  int iVar2;
  CDeformableModelInstance *pCStack00000010;
  char *pcStack00000014;
  undefined4 uStack00000018;
  char *pcStack0000001c;
  char *pcStack00000020;
  undefined4 uStack0000002c;
  undefined4 uStack00000040;
  
  core_enemy_cpp_CEnemy_FUN_004a9650(&this_ptr->base_enemy);
  this_ptr_00 = &(this_ptr->base_enemy).base_character.model;
  core_skeleton_cpp_CDeformableModelInstance_FUN_005a0450(this_ptr_00);
  this_ptr_01 = (CDeformableModelInstance *)(this_ptr->field1_0xbeb4 + 8);
  core_skeleton_cpp_CDeformableModelInstance_FUN_005a0450(this_ptr_01);
  core_cloth_cpp_CCloth_load_FUN_00438cf0
            ((CCloth *)(this_ptr->field1_0xbeb4 + 0x22bc),"batwing.cth");
  core_cloth_cpp_FUN_00439710();
  core_cloth_cpp_CCloth_load_FUN_00438cf0
            ((CCloth *)(this_ptr->field1_0xbeb4 + 0x4212c),"noscape.cth");
  core_cloth_cpp_FUN_00439710();
  core_cloth_cpp_CCloth_load_FUN_00438cf0
            ((CCloth *)(this_ptr->field1_0xbeb4 + 0x81f9c),"nosskirt.cth");
  core_cloth_cpp_FUN_00439710();
  core_skeleton_cpp_CDeformableModelInstance_FUN_0059df80(this_ptr_00);
  core_skeleton_cpp_CDeformableModelInstance_FUN_0059fb40(this_ptr_00);
  core_skeleton_cpp_CDeformableModelInstance_FUN_0059df80(this_ptr_01);
  core_skeleton_cpp_CDeformableModelInstance_FUN_0059fb40(this_ptr_01);
  this_ptr_02 = this_ptr->field3_0xcdcc4;
  DAT_02f43974 = 0;
  pCStack00000010 = this_ptr_00;
  core_morph_cpp_FUN_0052b430();
  pcStack00000014 = (char *)0x0;
  core_morph_cpp_FUN_0052b580();
  uStack00000018 = 0;
  pCStack00000010 = (CDeformableModelInstance *)0x0;
  DAT_02f43974 = 1;
  core_morph_cpp_FUN_0052b580();
  pcStack0000001c = (char *)0x0;
  pcStack00000014 = (char *)0x0;
  DAT_02f43974 = 0;
  pCStack00000010 = (CDeformableModelInstance *)this_ptr_02;
  core_morph_cpp_FUN_0052b580();
  pcStack00000020 = (char *)0x0;
  uStack00000018 = 0;
  DAT_02f43974 = 1;
  pCStack00000010 = (CDeformableModelInstance *)0x5e5818;
  pcStack00000014 = this_ptr_02;
  core_morph_cpp_FUN_0052b580();
  pcStack00000020 = (char *)0x1;
  DAT_02f43974 = 0;
  uStack00000018 = 0x5e582c;
  pcStack0000001c = this_ptr_02;
  core_morph_cpp_FUN_0052b430();
  pcStack00000020 = (char *)0x1;
  uStack00000018 = 0x5e583e;
  pcStack0000001c = this_ptr_02;
  core_morph_cpp_FUN_0052b580();
  uStack0000002c = 0;
  DAT_02f43974 = 1;
  pcStack0000001c = (char *)0x5e585a;
  pcStack00000020 = this_ptr_02;
  core_morph_cpp_FUN_0052b580();
  DAT_02f43974 = 0;
  uStack0000002c = 0x5e586a;
  core_morph_cpp_CMorph_getReady_FUN_0052b680((CMorph *)this_ptr_02);
  core_skeleton_cpp_CDeformableModelInstance_FUN_0059e000();
  core_skeleton_cpp_CDeformableModelInstance_FUN_0059e000();
  (this_ptr->base_enemy).base_character.base_actor.is_transparent = 1;
  core_skeleton_cpp_CDeformableModelInstance_FUN_005a0820(this_ptr_00);
  uStack00000040 = 1;
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_03,"Bip01 Spine2");
  pCVar1 = &(this_ptr->base_enemy).base_character;
  pCVar1->carry_hands[0].field0_0x0[4] = '\0';
  pCVar1->carry_hands[0].field0_0x0[5] = '\0';
  pCVar1->carry_hands[0].field0_0x0[6] = '\0';
  pCVar1->carry_hands[0].field0_0x0[7] = '\0';
  this_ptr->field5_0xce8f4[0xc] = '\0';
  this_ptr->field5_0xce8f4[0xd] = '\0';
  this_ptr->field5_0xce8f4[0xe] = '\0';
  this_ptr->field5_0xce8f4[0xf] = '\0';
  *(int *)(this_ptr->base_enemy).base_character.carry_hands[0].field0_0x0 = iVar2;
  return;
}


// Assembly code:
// 005e56c0: PUSH EBX
//   Label: core_vampboss.cpp_CVampireBoss_FUN_005e56c0
// 005e56c1: PUSH ESI
// 005e56c2: PUSH EDI
// 005e56c3: PUSH EBP
// 005e56c4: SUB ESP,0x10
// 005e56c7: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 005e56cb: PUSH EBX
// 005e56cc: CALL core_enemy.cpp_CEnemy_FUN_004a9650
//   XREF to: 004a9650 (UNCONDITIONAL_CALL)
// 005e56d1: ADD ESP,0x4
// 005e56d4: LEA EDI,[EBX + 0x158]
// 005e56da: PUSH EDI
// 005e56db: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a0450
//   XREF to: 005a0450 (UNCONDITIONAL_CALL)
// 005e56e0: ADD ESP,0x4
// 005e56e3: LEA EBP,[EBX + 0xbebc]
// 005e56e9: PUSH EBP
// 005e56ea: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a0450
//   XREF to: 005a0450 (UNCONDITIONAL_CALL)
// 005e56ef: ADD ESP,0x4
// 005e56f2: PUSH 0x656adc
//   XREF to: 00656adc (DATA)
// 005e56f7: LEA EAX,[EBX + 0xe170]
// 005e56fd: PUSH EAX
// 005e56fe: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005e5702: CALL core_cloth.cpp_CCloth_load_FUN_00438cf0
//   XREF to: 00438cf0 (UNCONDITIONAL_CALL)
// 005e5707: ADD ESP,0x8
// 005e570a: PUSH EBP
// 005e570b: LEA EAX,[EBX + 0x30]
// 005e570e: PUSH EAX
// 005e570f: LEA ESI,[EBX + 0x20]
// 005e5712: PUSH ESI
// 005e5713: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 005e5717: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x18] (READ)
// 005e571b: PUSH EAX
// 005e571c: CALL core_cloth.cpp_FUN_00439710
//   XREF to: 00439710 (UNCONDITIONAL_CALL)
// 005e5721: ADD ESP,0x10
// 005e5724: PUSH 0x656ae8
//   XREF to: 00656ae8 (DATA)
// 005e5729: LEA EAX,[EBX + 0x4dfe0]
// 005e572f: PUSH EAX
// 005e5730: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005e5734: CALL core_cloth.cpp_CCloth_load_FUN_00438cf0
//   XREF to: 00438cf0 (UNCONDITIONAL_CALL)
// 005e5739: ADD ESP,0x8
// 005e573c: PUSH EDI
// 005e573d: MOV ECX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x20] (READ)
// 005e5741: PUSH ECX
// 005e5742: PUSH ESI
// 005e5743: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x14] (READ)
// 005e5747: PUSH EAX
// 005e5748: CALL core_cloth.cpp_FUN_00439710
//   XREF to: 00439710 (UNCONDITIONAL_CALL)
// 005e574d: ADD ESP,0x10
// 005e5750: PUSH 0x656af4
//   XREF to: 00656af4 (DATA)
// 005e5755: LEA EAX,[EBX + 0x8de50]
// 005e575b: PUSH EAX
// 005e575c: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 005e5760: CALL core_cloth.cpp_CCloth_load_FUN_00438cf0
//   XREF to: 00438cf0 (UNCONDITIONAL_CALL)
// 005e5765: ADD ESP,0x8
// 005e5768: PUSH EDI
// 005e5769: MOV ECX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x20] (READ)
// 005e576d: PUSH ECX
// 005e576e: PUSH ESI
// 005e576f: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x1c] (READ)
// 005e5773: PUSH ESI
// 005e5774: CALL core_cloth.cpp_FUN_00439710
//   XREF to: 00439710 (UNCONDITIONAL_CALL)
// 005e5779: ADD ESP,0x10
// 005e577c: PUSH EDI
// 005e577d: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059df80
//   XREF to: 0059df80 (UNCONDITIONAL_CALL)
// 005e5782: ADD ESP,0x4
// 005e5785: PUSH EDI
// 005e5786: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059fb40
//   XREF to: 0059fb40 (UNCONDITIONAL_CALL)
// 005e578b: ADD ESP,0x4
// 005e578e: PUSH EBP
// 005e578f: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059df80
//   XREF to: 0059df80 (UNCONDITIONAL_CALL)
// 005e5794: ADD ESP,0x4
// 005e5797: PUSH EBP
// 005e5798: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059fb40
//   XREF to: 0059fb40 (UNCONDITIONAL_CALL)
// 005e579d: ADD ESP,0x4
// 005e57a0: PUSH EDI
// 005e57a1: XOR EAX,EAX
// 005e57a3: PUSH EAX
// 005e57a4: LEA ESI,[EBX + 0xcdcc4]
// 005e57aa: PUSH ESI
// 005e57ab: MOV [0x02f43974],EAX
//   XREF to: 02f43974 (WRITE)
// 005e57b0: CALL core_morph.cpp_FUN_0052b430
//   XREF to: 0052b430 (UNCONDITIONAL_CALL)
// 005e57b5: ADD ESP,0xc
// 005e57b8: PUSH 0x0
// 005e57ba: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x14] (READ)
// 005e57be: PUSH EDX
// 005e57bf: PUSH 0x0
// 005e57c1: PUSH ESI
// 005e57c2: CALL core_morph.cpp_FUN_0052b580
//   XREF to: 0052b580 (UNCONDITIONAL_CALL)
// 005e57c7: ADD ESP,0x10
// 005e57ca: PUSH 0x0
// 005e57cc: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x14] (READ)
// 005e57d0: PUSH EAX
// 005e57d1: PUSH 0x0
// 005e57d3: MOV ECX,0x1
// 005e57d8: PUSH ESI
// 005e57d9: MOV dword ptr [0x02f43974],ECX
//   XREF to: 02f43974 (WRITE)
// 005e57df: CALL core_morph.cpp_FUN_0052b580
//   XREF to: 0052b580 (UNCONDITIONAL_CALL)
// 005e57e4: ADD ESP,0x10
// 005e57e7: XOR EDX,EDX
// 005e57e9: PUSH EDX
// 005e57ea: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x1c] (READ)
// 005e57ee: PUSH ECX
// 005e57ef: PUSH EDX
// 005e57f0: PUSH ESI
// 005e57f1: MOV dword ptr [0x02f43974],EDX
//   XREF to: 02f43974 (WRITE)
// 005e57f7: CALL core_morph.cpp_FUN_0052b580
//   XREF to: 0052b580 (UNCONDITIONAL_CALL)
// 005e57fc: ADD ESP,0x10
// 005e57ff: PUSH 0x0
// 005e5801: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x1c] (READ)
// 005e5805: PUSH EDX
// 005e5806: PUSH 0x0
// 005e5808: MOV EAX,0x1
// 005e580d: PUSH ESI
// 005e580e: MOV [0x02f43974],EAX
//   XREF to: 02f43974 (WRITE)
// 005e5813: CALL core_morph.cpp_FUN_0052b580
//   XREF to: 0052b580 (UNCONDITIONAL_CALL)
// 005e5818: ADD ESP,0x10
// 005e581b: PUSH EBP
// 005e581c: PUSH 0x1
// 005e581e: XOR ECX,ECX
// 005e5820: PUSH ESI
// 005e5821: MOV dword ptr [0x02f43974],ECX
//   XREF to: 02f43974 (WRITE)
// 005e5827: CALL core_morph.cpp_FUN_0052b430
//   XREF to: 0052b430 (UNCONDITIONAL_CALL)
// 005e582c: ADD ESP,0xc
// 005e582f: PUSH 0x0
// 005e5831: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x18] (READ)
// 005e5835: PUSH EAX
// 005e5836: PUSH 0x1
// 005e5838: PUSH ESI
// 005e5839: CALL core_morph.cpp_FUN_0052b580
//   XREF to: 0052b580 (UNCONDITIONAL_CALL)
// 005e583e: ADD ESP,0x10
// 005e5841: PUSH 0x0
// 005e5843: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x18] (READ)
// 005e5847: PUSH ECX
// 005e5848: MOV EDX,0x1
// 005e584d: PUSH EDX
// 005e584e: PUSH ESI
// 005e584f: MOV dword ptr [0x02f43974],EDX
//   XREF to: 02f43974 (WRITE)
// 005e5855: CALL core_morph.cpp_FUN_0052b580
//   XREF to: 0052b580 (UNCONDITIONAL_CALL)
// 005e585a: ADD ESP,0x10
// 005e585d: XOR EAX,EAX
// 005e585f: PUSH ESI
// 005e5860: MOV [0x02f43974],EAX
//   XREF to: 02f43974 (WRITE)
// 005e5865: CALL core_morph.cpp_CMorph_getReady_FUN_0052b680
//   XREF to: 0052b680 (UNCONDITIONAL_CALL)
// 005e586a: ADD ESP,0x4
// 005e586d: PUSH EDI
// 005e586e: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059e000
//   XREF to: 0059e000 (UNCONDITIONAL_CALL)
// 005e5873: ADD ESP,0x4
// 005e5876: PUSH EBP
// 005e5877: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059e000
//   XREF to: 0059e000 (UNCONDITIONAL_CALL)
// 005e587c: ADD ESP,0x4
// 005e587f: PUSH EDI
// 005e5880: MOV dword ptr [EBX + 0xfc],0x1
// 005e588a: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a0820
//   XREF to: 005a0820 (UNCONDITIONAL_CALL)
// 005e588f: ADD ESP,0x4
// 005e5892: PUSH 0x1
// 005e5894: PUSH 0x656b01
//   XREF to: 00656b01 (DATA)
// 005e5899: PUSH EAX
// 005e589a: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005e589f: MOV dword ptr [EBX + 0x24b0],0x0
// 005e58a9: MOV dword ptr [EBX + 0xce900],0x0
// 005e58b3: ADD ESP,0xc
// 005e58b6: MOV dword ptr [EBX + 0x24ac],EAX
// 005e58bc: ADD ESP,0x10
// 005e58bf: POP EBP
// 005e58c0: POP EDI
// 005e58c1: POP ESI
// 005e58c2: POP EBX
// 005e58c3: RET
