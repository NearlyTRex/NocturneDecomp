// Name: core_armour.cpp_CArmour_ctor_FUN_004121a0
// Address: 004121a0
// Address Range: [[004121a0, 00412232]]
// Convention: __cdecl
// Signature: CArmour * core_armour.cpp_CArmour_ctor_FUN_004121a0(CArmour * this_ptr)
// Cross-references:
//   core_armour.cpp_constructor_FUN_00412160 (00412160) at 0041217a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_armour_dfm_00614dbb
//   TerminatedCString s_none_00614dc6
//   undefined4 s_one_00614dc7
//   undefined4 s_ne_00614dc8
//   undefined4 s_e_00614dc9
//   undefined4 DAT_00659d28
//   undefined4 PTR_FUN_00659d29+3
//   CDemonActor_vtable g_CArmourVTable
// Function calls:
//   core_enemy.cpp_CEnemy_ctor_FUN_004a9500
//   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CArmour * __cdecl core_armour_cpp_CArmour_ctor_FUN_004121a0(CArmour *this_ptr)

{
  char cVar1;
  CEnemy *pCVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  CArmour *pCVar5;
  char *pcVar6;
  char *pcVar7;
  
  pCVar5 = (CArmour *)core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base_enemy);
  pcVar6 = "none";
  (pCVar5->base_enemy).base_character.base_actor.vtable = &g_CArmourVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&(pCVar5->base_enemy).base_character.model,"armour.dfm");
  uVar4 = _PTR_FUN_00659d29_3;
  uVar3 = _DAT_00659d28;
  pCVar2 = &pCVar5->base_enemy;
  (pCVar2->base_character).cloth_data[0x344] = -0x66;
  (pCVar2->base_character).cloth_data[0x345] = -0x67;
  (pCVar2->base_character).cloth_data[0x346] = '\x19';
  (pCVar2->base_character).cloth_data[0x347] = '?';
  pCVar2 = &pCVar5->base_enemy;
  (pCVar2->base_character).cloth_data[0x348] = '\0';
  (pCVar2->base_character).cloth_data[0x349] = '\0';
  (pCVar2->base_character).cloth_data[0x34a] = '\0';
  (pCVar2->base_character).cloth_data[0x34b] = '@';
  pcVar7 = pCVar5->field1_0xbeb4 + 8;
  *(undefined4 *)((pCVar5->base_enemy).base_character.cloth_data + 0x34c) = uVar3;
  *(undefined4 *)((pCVar5->base_enemy).base_character.cloth_data + 0x350) = uVar4;
  do {
    cVar1 = *pcVar6;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  pCVar2 = &pCVar5->base_enemy;
  (pCVar2->base_character).field11_0x25a0[0x70] = '\x02';
  (pCVar2->base_character).field11_0x25a0[0x71] = '\0';
  (pCVar2->base_character).field11_0x25a0[0x72] = '\0';
  (pCVar2->base_character).field11_0x25a0[0x73] = '\0';
  return pCVar5;
}


// Assembly code:
// 004121a0: PUSH EBX
//   Label: core_armour.cpp_CArmour_ctor_FUN_004121a0
// 004121a1: PUSH ESI
// 004121a2: PUSH EDI
// 004121a3: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004121a7: PUSH EDX
// 004121a8: CALL core_enemy.cpp_CEnemy_ctor_FUN_004a9500
//   XREF to: 004a9500 (UNCONDITIONAL_CALL)
// 004121ad: ADD ESP,0x4
// 004121b0: PUSH 0x614dbb
//   XREF to: 00614dbb (DATA)
// 004121b5: MOV EBX,EAX
// 004121b7: LEA EDI,[EAX + 0x158]
// 004121bd: PUSH EDI
// 004121be: MOV ESI,0x614dc6
//   XREF to: 00614dc6 (DATA)
// 004121c3: MOV dword ptr [EAX + 0x154],0x659d34
//   XREF to: 00659d34 (DATA)
// 004121cd: CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
//   XREF to: 005a0840 (UNCONDITIONAL_CALL)
// 004121d2: FLD float ptr [0x00659d28]
//   XREF to: 00659d28 (READ)
// 004121d8: FLD float ptr [0x00659d2c]
//   XREF to: 00659d2c (READ)
// 004121de: MOV dword ptr [EBX + 0x2ddc],0x3f19999a
// 004121e8: ADD ESP,0x8
// 004121eb: MOV dword ptr [EBX + 0x2de0],0x40000000
// 004121f5: LEA EDI,[EBX + 0xbebc]
// 004121fb: FXCH
// 004121fd: FSTP float ptr [EBX + 0x2de4]
// 00412203: FSTP float ptr [EBX + 0x2de8]
// 00412209: PUSH EDI
// 0041220a: MOV AL,byte ptr [ESI]
//   Label: LAB_0041220a
//   XREF to: 00614dc6 (READ)
//   XREF to: 00614dc8 (READ)
// 0041220c: MOV byte ptr [EDI],AL
// 0041220e: CMP AL,0x0
// 00412210: JZ 0x00412222
//   XREF to: 00412222 (CONDITIONAL_JUMP)
// 00412212: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00614dc7 (READ)
//   XREF to: 00614dc9 (READ)
// 00412215: ADD ESI,0x2
// 00412218: MOV byte ptr [EDI + 0x1],AL
// 0041221b: ADD EDI,0x2
// 0041221e: CMP AL,0x0
// 00412220: JNZ 0x0041220a
//   XREF to: 0041220a (CONDITIONAL_JUMP)
// 00412222: POP EDI
//   Label: LAB_00412222
// 00412223: MOV EAX,EBX
// 00412225: MOV dword ptr [EBX + 0x2610],0x2
// 0041222f: POP EDI
// 00412230: POP ESI
// 00412231: POP EBX
// 00412232: RET
