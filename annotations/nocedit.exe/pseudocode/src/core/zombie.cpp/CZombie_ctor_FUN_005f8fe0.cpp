// Name: core_zombie.cpp_CZombie_ctor_FUN_005f8fe0
// Address: 005f8fe0
// Address Range: [[005f8fe0, 005f9085]]
// Convention: __cdecl
// Signature: CZombie * core_zombie.cpp_CZombie_ctor_FUN_005f8fe0(CZombie * this_ptr)
// Cross-references:
//   core_zombie.cpp_FUN_005f8fa0 (005f8fa0) at 005f8fbd [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_zombie1_dfm_00658488
//   TerminatedCString s_true_00658494
//   undefined4 s_rue_00658495
//   undefined4 s_ue_00658496
//   undefined4 s_e_00658497
//   undefined4 DAT_006659cc
//   undefined4 PTR_FUN_006659cd+3
//   CDemonActor_vtable PTR_core_zombie.cpp_CZombie_FUN_006659e4
// Function calls:
//   core_actor.cpp_getRandomFloat_FUN_0040cc10
//   core_enemy.cpp_CEnemy_ctor_FUN_004a9500
//   core_skeleton.cpp_FUN_005a0840

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CZombie * __cdecl core_zombie_cpp_CZombie_ctor_FUN_005f8fe0(CZombie *this_ptr)

{
  char cVar1;
  CEnemy *pCVar2;
  undefined4 uVar3;
  CZombie *pCVar4;
  float fVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  
  pCVar4 = (CZombie *)core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base_enemy);
  pcVar8 = "true";
  (pCVar4->base_enemy).base_character.base_actor.metadata.vtable =
       &PTR_core_zombie_cpp_CZombie_FUN_006659e4;
  core_skeleton_cpp_FUN_005a0840();
  pCVar2 = &pCVar4->base_enemy;
  (pCVar2->base_character).cloth_data[0x344] = '\0';
  (pCVar2->base_character).cloth_data[0x345] = '\0';
  (pCVar2->base_character).cloth_data[0x346] = '\0';
  (pCVar2->base_character).cloth_data[0x347] = '?';
  pcVar9 = pCVar4->field1_0xbeb4 + 0x28;
  pCVar2 = &pCVar4->base_enemy;
  (pCVar2->base_character).cloth_data[0x348] = '\0';
  uVar6 = _DAT_006659cc;
  (pCVar2->base_character).cloth_data[0x349] = '\0';
  (pCVar2->base_character).cloth_data[0x34a] = -0x80;
  (pCVar2->base_character).cloth_data[0x34b] = '?';
  pCVar4->field1_0xbeb4[0x18] = '\0';
  uVar3 = _PTR_FUN_006659cd_3;
  pCVar4->field1_0xbeb4[0x19] = '\0';
  pCVar4->field1_0xbeb4[0x1a] = '\0';
  pCVar4->field1_0xbeb4[0x1b] = '\0';
  pCVar4->field1_0xbeb4[0x14] = '\0';
  pCVar4->field1_0xbeb4[0x15] = '\0';
  pCVar4->field1_0xbeb4[0x16] = '\0';
  pCVar4->field1_0xbeb4[0x17] = '\0';
  *(undefined4 *)((pCVar4->base_enemy).base_character.cloth_data + 0x34c) = uVar6;
  *(undefined4 *)((pCVar4->base_enemy).base_character.cloth_data + 0x350) = uVar3;
  do {
    cVar1 = *pcVar8;
    *pcVar9 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar8[1];
    pcVar8 = pcVar8 + 2;
    pcVar9[1] = cVar1;
    pcVar9 = pcVar9 + 2;
  } while (cVar1 != '\0');
  fVar5 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.3,1.0);
  pCVar4->field1_0xbeb4[0x20] = '\0';
  pCVar4->field1_0xbeb4[0x21] = '\0';
  pCVar4->field1_0xbeb4[0x22] = '\0';
  pCVar4->field1_0xbeb4[0x23] = '\0';
  *(float *)(pCVar4->field1_0xbeb4 + 8) = fVar5;
  uVar6 = core_actor_cpp_FUN_0040cc70();
  pCVar4->field1_0xbeb4[0x10] = '\0';
  pCVar4->field1_0xbeb4[0x11] = '\0';
  pCVar4->field1_0xbeb4[0x12] = '\0';
  pCVar4->field1_0xbeb4[0x13] = '\0';
  pCVar4->field1_0xbeb4[0x24] = '\0';
  pCVar4->field1_0xbeb4[0x25] = '\0';
  pCVar4->field1_0xbeb4[0x26] = '\0';
  pCVar4->field1_0xbeb4[0x27] = '\0';
  *(undefined4 *)(pCVar4->field1_0xbeb4 + 0xc) = uVar6;
  pcVar9 = g_CDemonSetPtr->geometry_filename;
  pCVar4->is_miner_zombie = 0;
  pCVar4->field4_0xbf48[0x4c] = '\0';
  pCVar4->field4_0xbf48[0x4d] = '\0';
  pCVar4->field4_0xbf48[0x4e] = '\0';
  pCVar4->field4_0xbf48[0x4f] = '\0';
  iVar7 = crt_string_c_stricmp_FUN_005fe7f0(pcVar9,"mine.geo");
  pCVar4->always_chase_fast = 0;
  pCVar4->field4_0xbf48[0x5c] = '\0';
  pCVar4->field4_0xbf48[0x5d] = '\0';
  pCVar4->field4_0xbf48[0x5e] = '\0';
  pCVar4->field4_0xbf48[0x5f] = '\0';
  pCVar4->field4_0xbf48[0x60] = '\0';
  pCVar4->field4_0xbf48[0x61] = '\0';
  pCVar4->field4_0xbf48[0x62] = '\0';
  pCVar4->field4_0xbf48[99] = '\0';
  pCVar4->field1_0xbeb4[4] = '\0';
  pCVar4->field1_0xbeb4[5] = '\0';
  pCVar4->field1_0xbeb4[6] = '\0';
  pCVar4->field1_0xbeb4[7] = '\0';
  pCVar4->is_miner_zombie = (uint)(iVar7 == 0);
  return pCVar4;
}


// Assembly code:
// 005f8fe0: PUSH EBX
//   Label: core_zombie.cpp_CZombie_ctor_FUN_005f8fe0
// 005f8fe1: PUSH ESI
// 005f8fe2: PUSH EDI
// 005f8fe3: PUSH EBP
// 005f8fe4: SUB ESP,0x4
// 005f8fe7: MOV EBP,dword ptr [ESP + 0x18]
// 005f8feb: PUSH EBP
// 005f8fec: CALL core_enemy.cpp_CEnemy_ctor_FUN_004a9500
//   XREF to: 004a9500 (UNCONDITIONAL_CALL)
// 005f8ff1: ADD ESP,0x4
// 005f8ff4: PUSH 0x658488
//   XREF to: 00658488 (DATA)
// 005f8ff9: MOV EBX,EAX
// 005f8ffb: ADD EAX,0x158
// 005f9000: PUSH EAX
// 005f9001: MOV ESI,0x658494
//   XREF to: 00658494 (DATA)
// 005f9006: MOV dword ptr [EAX + -0x4],0x6659e4
//   XREF to: 006659e4 (DATA)
// 005f900d: CALL core_skeleton.cpp_FUN_005a0840
//   XREF to: 005a0840 (UNCONDITIONAL_CALL)
// 005f9012: MOV dword ptr [EBX + 0x2ddc],0x3f000000
// 005f901c: LEA EDI,[EBX + 0xbedc]
// 005f9022: MOV dword ptr [EBX + 0x2de0],0x3f800000
// 005f902c: FLD float ptr [0x006659cc]
//   XREF to: 006659cc (READ)
// 005f9032: MOV dword ptr [EBX + 0xbecc],0x0
// 005f903c: FLD float ptr [0x006659d0]
//   XREF to: 006659d0 (READ)
// 005f9042: MOV dword ptr [EBX + 0xbec8],0x0
// 005f904c: ADD ESP,0x8
// 005f904f: FXCH
// 005f9051: FSTP float ptr [EBX + 0x2de4]
// 005f9057: FSTP float ptr [EBX + 0x2de8]
// 005f905d: PUSH EDI
// 005f905e: MOV AL,byte ptr [ESI]
//   Label: LAB_005f905e
//   XREF to: 00658494 (READ)
//   XREF to: 00658496 (READ)
// 005f9060: MOV byte ptr [EDI],AL
// 005f9062: CMP AL,0x0
// 005f9064: JZ 0x005f9076
//   XREF to: 005f9076 (CONDITIONAL_JUMP)
// 005f9066: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00658495 (READ)
//   XREF to: 00658497 (READ)
// 005f9069: ADD ESI,0x2
// 005f906c: MOV byte ptr [EDI + 0x1],AL
// 005f906f: ADD EDI,0x2
// 005f9072: CMP AL,0x0
// 005f9074: JNZ 0x005f905e
//   XREF to: 005f905e (CONDITIONAL_JUMP)
// 005f9076: POP EDI
//   Label: LAB_005f9076
// 005f9077: PUSH 0x3f800000
// 005f907c: PUSH 0x3e99999a
// 005f9081: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
