// Name: core_mobster.cpp_CMobster_ctor_FUN_00525200
// Address: 00525200
// Address Range: [[00525200, 00525337]]
// Convention: __cdecl
// Signature: CMobster * core_mobster.cpp_CMobster_ctor_FUN_00525200(CMobster * this_ptr)
// Cross-references:
//   core_mobster.cpp_FUN_005251c0 (005251c0) at 005251dd [UNCONDITIONAL_CALL]
//   core_vehicle.cpp_CVehicle_process_FUN_005e7e80 (005e7e80) at 005e842d [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_mobster1_dfm_006396ca
//   undefined1 DAT_006396d7
//   undefined1 DAT_006396d8
//   undefined1 DAT_006396d9
//   undefined1 DAT_006396da
//   undefined4 DAT_00661780
//   undefined4 DAT_00661784
//   CDemonActor_vtable PTR_core_mobster.cpp_FUN_00525340_00661794
// Function calls:
//   core_actor.cpp_FUN_0040cc70
//   core_enemy.cpp_CEnemy_ctor_FUN_004a9500
//   core_skeleton.cpp_FUN_005a0840

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CMobster * __cdecl core_mobster_cpp_CMobster_ctor_FUN_00525200(CMobster *this_ptr)

{
  CEnemy *pCVar1;
  undefined4 uVar2;
  char cVar3;
  CMobster *pCVar4;
  undefined4 uVar5;
  char *pcVar6;
  char *pcVar7;
  
  pCVar4 = (CMobster *)core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base_enemy);
  (pCVar4->base_enemy).base_character.base_actor.metadata.vtable =
       &PTR_core_mobster_cpp_FUN_00525340_00661794;
  core_skeleton_cpp_FUN_005a0840();
  uVar5 = _DAT_00661780;
  pCVar1 = &pCVar4->base_enemy;
  (pCVar1->base_character).cloth_data[0x344] = -0x66;
  uVar2 = _DAT_00661784;
  (pCVar1->base_character).cloth_data[0x345] = -0x67;
  (pCVar1->base_character).cloth_data[0x346] = '\x19';
  (pCVar1->base_character).cloth_data[0x347] = '?';
  pCVar1 = &pCVar4->base_enemy;
  (pCVar1->base_character).cloth_data[0x348] = 'f';
  (pCVar1->base_character).cloth_data[0x349] = 'f';
  (pCVar1->base_character).cloth_data[0x34a] = 'f';
  (pCVar1->base_character).cloth_data[0x34b] = '?';
  *(undefined4 *)((pCVar4->base_enemy).base_character.cloth_data + 0x34c) = uVar5;
  *(undefined4 *)((pCVar4->base_enemy).base_character.cloth_data + 0x350) = uVar2;
  uVar5 = core_actor_cpp_FUN_0040cc70();
  pCVar4->field1_0xbeb4[0xc] = '\0';
  pCVar4->field1_0xbeb4[0xd] = '\0';
  pCVar4->field1_0xbeb4[0xe] = '\0';
  pCVar4->field1_0xbeb4[0xf] = '\0';
  pCVar4->field1_0xbeb4[0x10] = '\0';
  pCVar4->field1_0xbeb4[0x11] = '\0';
  pCVar4->field1_0xbeb4[0x12] = '\0';
  pCVar4->field1_0xbeb4[0x13] = '\0';
  pCVar4->field1_0xbeb4[0x14] = '\0';
  pCVar4->field1_0xbeb4[0x15] = '\0';
  pCVar4->field1_0xbeb4[0x16] = '\0';
  pCVar4->field1_0xbeb4[0x17] = '\0';
  pCVar4->field6_0xbeec[0xa0] = '\0';
  pCVar4->field6_0xbeec[0xa1] = '\0';
  pCVar4->field6_0xbeec[0xa2] = '\0';
  pCVar4->field6_0xbeec[0xa3] = '\0';
  pCVar4->field6_0xbeec[0xa4] = '\0';
  pCVar4->field6_0xbeec[0xa5] = '\0';
  pCVar4->field6_0xbeec[0xa6] = '\0';
  pCVar4->field6_0xbeec[0xa7] = '\0';
  (pCVar4->base_enemy).victim_height = 40.0;
  *(undefined4 *)(pCVar4->field1_0xbeb4 + 8) = uVar5;
  cVar3 = core_actor_cpp_FUN_0040cc70();
  pCVar4->field1_0xbeb4[0x20] = '\0';
  pCVar4->field1_0xbeb4[0x21] = '\0';
  pCVar4->field1_0xbeb4[0x22] = '\0';
  pCVar4->field1_0xbeb4[0x23] = '\0';
  pCVar4->field1_0xbeb4[0x18] = '\0';
  pCVar4->field1_0xbeb4[0x19] = '\0';
  pCVar4->field1_0xbeb4[0x1a] = '\0';
  pCVar4->field1_0xbeb4[0x1b] = '\0';
  pCVar4->post_mode = 0;
  pCVar4->field3_0xbedc[0] = '\0';
  pCVar4->field3_0xbedc[1] = '\0';
  pCVar4->field3_0xbedc[2] = '\0';
  pCVar4->field3_0xbedc[3] = '\0';
  pCVar4->field3_0xbedc[4] = '\0';
  pCVar4->field3_0xbedc[5] = '\0';
  pCVar4->field3_0xbedc[6] = '\0';
  pCVar4->field3_0xbedc[7] = '\0';
  pcVar6 = &DAT_006396d7;
  pCVar4->side_of_car = 0;
  pCVar4->hold_pos_flag = 0;
  pcVar7 = pCVar4->field6_0xbeec;
  pCVar4->field1_0xbeb4[0x1c] = cVar3;
  do {
    cVar3 = *pcVar6;
    *pcVar7 = cVar3;
    if (cVar3 == '\0') break;
    cVar3 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar7[1] = cVar3;
    pcVar7 = pcVar7 + 2;
  } while (cVar3 != '\0');
  pCVar4->field1_0xbeb4[4] = '\0';
  pCVar4->field1_0xbeb4[5] = '\0';
  pCVar4->field1_0xbeb4[6] = '\0';
  pCVar4->field1_0xbeb4[7] = '\0';
  return pCVar4;
}


// Assembly code:
// 00525200: PUSH EBX
//   Label: core_mobster.cpp_CMobster_ctor_FUN_00525200
// 00525201: PUSH ESI
// 00525202: PUSH EDI
// 00525203: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00525207: PUSH EDX
// 00525208: CALL core_enemy.cpp_CEnemy_ctor_FUN_004a9500
//   XREF to: 004a9500 (UNCONDITIONAL_CALL)
// 0052520d: ADD ESP,0x4
// 00525210: PUSH 0x6396ca
//   XREF to: 006396ca (DATA)
// 00525215: MOV EBX,EAX
// 00525217: ADD EAX,0x158
// 0052521c: PUSH EAX
// 0052521d: MOV dword ptr [EAX + -0x4],0x661794
//   XREF to: 00661794 (DATA)
// 00525224: CALL core_skeleton.cpp_FUN_005a0840
//   XREF to: 005a0840 (UNCONDITIONAL_CALL)
// 00525229: FLD float ptr [0x00661780]
//   XREF to: 00661780 (READ)
// 0052522f: ADD ESP,0x8
// 00525232: MOV dword ptr [EBX + 0x2ddc],0x3f19999a
// 0052523c: FLD float ptr [0x00661784]
//   XREF to: 00661784 (READ)
// 00525242: MOV dword ptr [EBX + 0x2de0],0x3f666666
// 0052524c: PUSH 0xff
// 00525251: FXCH
// 00525253: FSTP float ptr [EBX + 0x2de4]
// 00525259: PUSH 0x0
// 0052525b: FSTP float ptr [EBX + 0x2de8]
// 00525261: CALL core_actor.cpp_FUN_0040cc70
//   XREF to: 0040cc70 (UNCONDITIONAL_CALL)
// 00525266: MOV dword ptr [EBX + 0xbec0],0x0
// 00525270: MOV dword ptr [EBX + 0xbec4],0x0
// 0052527a: MOV dword ptr [EBX + 0xbec8],0x0
// 00525284: MOV dword ptr [EBX + 0xbf8c],0x0
// 0052528e: ADD ESP,0x8
// 00525291: MOV dword ptr [EBX + 0xbf90],0x0
// 0052529b: PUSH 0x65
// 0052529d: MOV dword ptr [EBX + 0xbeb0],0x42200000
// 005252a7: PUSH 0x62
// 005252a9: MOV dword ptr [EBX + 0xbebc],EAX
// 005252af: CALL core_actor.cpp_FUN_0040cc70
//   XREF to: 0040cc70 (UNCONDITIONAL_CALL)
// 005252b4: MOV dword ptr [EBX + 0xbed4],0x0
// 005252be: MOV dword ptr [EBX + 0xbecc],0x0
// 005252c8: MOV dword ptr [EBX + 0xbed8],0x0
// 005252d2: MOV dword ptr [EBX + 0xbedc],0x0
// 005252dc: MOV dword ptr [EBX + 0xbee0],0x0
// 005252e6: MOV ESI,0x6396d7
//   XREF to: 006396d7 (DATA)
// 005252eb: MOV dword ptr [EBX + 0xbee4],0x0
// 005252f5: ADD ESP,0x8
// 005252f8: MOV dword ptr [EBX + 0xbee8],0x0
// 00525302: LEA EDI,[EBX + 0xbeec]
// 00525308: MOV byte ptr [EBX + 0xbed0],AL
// 0052530e: PUSH EDI
// 0052530f: MOV AL,byte ptr [ESI]
//   Label: LAB_0052530f
//   XREF to: 006396d7 (READ)
//   XREF to: 006396d9 (READ)
// 00525311: MOV byte ptr [EDI],AL
// 00525313: CMP AL,0x0
// 00525315: JZ 0x00525327
//   XREF to: 00525327 (CONDITIONAL_JUMP)
// 00525317: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 006396d8 (READ)
//   XREF to: 006396da (READ)
// 0052531a: ADD ESI,0x2
// 0052531d: MOV byte ptr [EDI + 0x1],AL
// 00525320: ADD EDI,0x2
// 00525323: CMP AL,0x0
// 00525325: JNZ 0x0052530f
//   XREF to: 0052530f (CONDITIONAL_JUMP)
// 00525327: POP EDI
//   Label: LAB_00525327
// 00525328: MOV EAX,EBX
// 0052532a: MOV dword ptr [EBX + 0xbeb8],0x0
// 00525334: POP EDI
// 00525335: POP ESI
// 00525336: POP EBX
// 00525337: RET
