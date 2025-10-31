// Name: core_batman.cpp_CBatman_ctor_FUN_00416450
// Address: 00416450
// Address Range: [[00416450, 00416500]]
// Convention: __cdecl
// Signature: CBatman * core_batman.cpp_CBatman_ctor_FUN_00416450(CBatman * this_ptr)
// Cross-references:
//   core_batman.cpp_FUN_00416410 (00416410) at 0041642a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_batman_dfm_006156e0
//   TerminatedCString s_none_006156eb
//   undefined4 s_one_006156ec
//   undefined4 s_ne_006156ed
//   undefined4 s_e_006156ee
//   undefined4 DAT_0065a770
//   undefined4 PTR_FUN_0065a771+3
//   CDemonActor_vtable g_CBatmanVTable
// Function calls:
//   core_enemy.cpp_CEnemy_ctor_FUN_004a9500
//   core_skeleton.cpp_FUN_005a0840

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CBatman * __cdecl core_batman_cpp_CBatman_ctor_FUN_00416450(CBatman *this_ptr)

{
  char cVar1;
  CEnemy *pCVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  CBatman *pCVar5;
  char *pcVar6;
  char *pcVar7;
  
  pCVar5 = (CBatman *)core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base_enemy);
  pcVar6 = "none";
  (pCVar5->base_enemy).base_character.base_actor.metadata.vtable = &g_CBatmanVTable;
  pcVar7 = pCVar5->field1_0xbeb4 + 8;
  core_skeleton_cpp_FUN_005a0840();
  uVar3 = _DAT_0065a770;
  pCVar2 = &pCVar5->base_enemy;
  (pCVar2->base_character).cloth_data[0x344] = -0x66;
  uVar4 = _PTR_FUN_0065a771_3;
  (pCVar2->base_character).cloth_data[0x345] = -0x67;
  (pCVar2->base_character).cloth_data[0x346] = '\x19';
  (pCVar2->base_character).cloth_data[0x347] = '?';
  pCVar2 = &pCVar5->base_enemy;
  (pCVar2->base_character).cloth_data[0x348] = '\0';
  (pCVar2->base_character).cloth_data[0x349] = '\0';
  (pCVar2->base_character).cloth_data[0x34a] = '\0';
  (pCVar2->base_character).cloth_data[0x34b] = '@';
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
  pCVar5->mist_state = 0;
  pCVar5->vanish_timer = 0.0;
  (pCVar5->new_pos).z = 0.0;
  (pCVar5->new_pos).y = (pCVar5->new_pos).z;
  (pCVar5->new_pos).x = (pCVar5->new_pos).y;
  return pCVar5;
}


// Assembly code:
// 00416450: PUSH EBX
//   Label: core_batman.cpp_CBatman_ctor_FUN_00416450
// 00416451: PUSH ESI
// 00416452: PUSH EDI
// 00416453: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00416457: PUSH EDX
// 00416458: CALL core_enemy.cpp_CEnemy_ctor_FUN_004a9500
//   XREF to: 004a9500 (UNCONDITIONAL_CALL)
// 0041645d: ADD ESP,0x4
// 00416460: MOV EBX,EAX
// 00416462: PUSH 0x6156e0
//   XREF to: 006156e0 (DATA)
// 00416467: ADD EAX,0x158
// 0041646c: MOV ESI,0x6156eb
//   XREF to: 006156eb (DATA)
// 00416471: PUSH EAX
// 00416472: MOV dword ptr [EAX + -0x4],0x65a784
//   XREF to: 0065a784 (DATA)
// 00416479: LEA EDI,[EBX + 0xbebc]
// 0041647f: CALL core_skeleton.cpp_FUN_005a0840
//   XREF to: 005a0840 (UNCONDITIONAL_CALL)
// 00416484: FLD float ptr [0x0065a770]
//   XREF to: 0065a770 (READ)
// 0041648a: MOV dword ptr [EBX + 0x2ddc],0x3f19999a
// 00416494: FLD float ptr [0x0065a774]
//   XREF to: 0065a774 (READ)
// 0041649a: MOV dword ptr [EBX + 0x2de0],0x40000000
// 004164a4: ADD ESP,0x8
// 004164a7: FXCH
// 004164a9: FSTP float ptr [EBX + 0x2de4]
// 004164af: FSTP float ptr [EBX + 0x2de8]
// 004164b5: PUSH EDI
// 004164b6: MOV AL,byte ptr [ESI]
//   Label: LAB_004164b6
//   XREF to: 006156eb (READ)
//   XREF to: 006156ed (READ)
// 004164b8: MOV byte ptr [EDI],AL
// 004164ba: CMP AL,0x0
// 004164bc: JZ 0x004164ce
//   XREF to: 004164ce (CONDITIONAL_JUMP)
// 004164be: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 006156ec (READ)
//   XREF to: 006156ee (READ)
// 004164c1: ADD ESI,0x2
// 004164c4: MOV byte ptr [EDI + 0x1],AL
// 004164c7: ADD EDI,0x2
// 004164ca: CMP AL,0x0
// 004164cc: JNZ 0x004164b6
//   XREF to: 004164b6 (CONDITIONAL_JUMP)
// 004164ce: POP EDI
//   Label: LAB_004164ce
// 004164cf: MOV dword ptr [EBX + 0xbf58],0x0
// 004164d9: LEA EAX,[EBX + 0xbf60]
// 004164df: MOV dword ptr [EBX + 0xbf5c],0x0
// 004164e9: MOV dword ptr [EAX + 0x8],0x0
// 004164f0: MOV EDX,dword ptr [EAX + 0x8]
// 004164f3: MOV dword ptr [EAX + 0x4],EDX
// 004164f6: MOV EDX,dword ptr [EAX + 0x4]
// 004164f9: MOV dword ptr [EAX],EDX
// 004164fb: MOV EAX,EBX
// 004164fd: POP EDI
// 004164fe: POP ESI
// 004164ff: POP EBX
// 00416500: RET
