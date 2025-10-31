// Name: core_hostage.cpp_FUN_004f4840
// Address: 004f4840
// Address Range: [[004f4840, 004f4962]]
// Convention: __cdecl
// Signature: CHostage * core_hostage.cpp_FUN_004f4840(CHostage * this_ptr)
// Cross-references:
//   core_hostage.cpp_FUN_004f4800 (004f4800) at 004f481a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_hickdad_dfm_0062ee2f
//   TerminatedCString s_true_0062ee3b
//   undefined4 s_rue_0062ee3c
//   undefined4 s_ue_0062ee3d
//   undefined4 s_e_0062ee3e
//   CDemonActor_vtable PTR_core_hostage.cpp_NPCSFromZombieTown_FUN_0065fb34
// Function calls:
//   core_npc.cpp_FUN_005447e0
//   core_skeleton.cpp_FUN_005a0840

#include "nocturne.h"

CHostage * __cdecl core_hostage_cpp_FUN_004f4840(CHostage *this_ptr)

{
  char cVar1;
  CHostage *pCVar2;
  char *pcVar3;
  char *pcVar4;
  
  pCVar2 = (CHostage *)core_npc_cpp_FUN_005447e0(&this_ptr->base_npc);
  (pCVar2->base_npc).base_character.base_actor.metadata.vtable =
       &PTR_core_hostage_cpp_NPCSFromZombieTown_FUN_0065fb34;
  core_skeleton_cpp_FUN_005a0840();
  pCVar2->follow_state = 0;
  pCVar2->hostage_state = 0;
  pcVar3 = "true";
  pCVar2->field6_0x1fac0[0] = '\0';
  pCVar2->field6_0x1fac0[1] = '\0';
  pCVar2->field6_0x1fac0[2] = '\0';
  pCVar2->field6_0x1fac0[3] = '\0';
  pCVar2->field6_0x1fac0[4] = '\0';
  pCVar2->field6_0x1fac0[5] = '\0';
  pCVar2->field6_0x1fac0[6] = '\0';
  pCVar2->field6_0x1fac0[7] = '\0';
  pcVar4 = pCVar2->field2_0x1f70c;
  pCVar2->rescue_distance = 5.0;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pCVar2->field6_0x1fac0[8] = '\0';
  pCVar2->field6_0x1fac0[9] = '\0';
  pCVar2->field6_0x1fac0[10] = '\0';
  pCVar2->field6_0x1fac0[0xb] = '\0';
  (pCVar2->base_npc).base_character.grabbed_by = (CDemonActor *)0x0;
  pCVar2->field8_0x1fae0[0] = '\0';
  pCVar2->field8_0x1fae0[1] = '\0';
  pCVar2->field8_0x1fae0[2] = '\0';
  pCVar2->field8_0x1fae0[3] = '\0';
  pCVar2->field8_0x1fae0[4] = '\0';
  pCVar2->field8_0x1fae0[5] = '\0';
  pCVar2->field8_0x1fae0[6] = '\0';
  pCVar2->field8_0x1fae0[7] = '\0';
  pCVar2->field2_0x1f70c[100] = '\0';
  pCVar2->field2_0x1f70c[0x84] = '\0';
  pCVar2->field2_0x1f70c[0xe8] = '\0';
  pCVar2->field2_0x1f70c[0x14c] = '\0';
  pCVar2->field2_0x1f70c[0x1b0] = '\0';
  pCVar2->field2_0x1f70c[0x214] = '\0';
  pCVar2->field2_0x1f70c[0x278] = '\0';
  pCVar2->field8_0x1fae0[8] = '\0';
  pCVar2->field8_0x1fae0[9] = '\0';
  pCVar2->field8_0x1fae0[10] = '\0';
  pCVar2->field8_0x1fae0[0xb] = '\0';
  pCVar2->field8_0x1fae0[0xc] = '\0';
  pCVar2->field8_0x1fae0[0xd] = '\0';
  pCVar2->field8_0x1fae0[0xe] = '\0';
  pCVar2->field8_0x1fae0[0xf] = '\0';
  pCVar2->no_shadows_when_saved = 0;
  (pCVar2->base_npc).base_character.descriptive_name[0] = '\0';
  pCVar2->field2_0x1f70c[0x2dc] = '\0';
  pCVar2->field2_0x1f70c[0x340] = '\0';
  (pCVar2->base_npc).base_character.health_bar_mode = 1;
  return pCVar2;
}


// Assembly code:
// 004f4840: PUSH EBX
//   Label: core_hostage.cpp_FUN_004f4840
// 004f4841: PUSH ESI
// 004f4842: PUSH EDI
// 004f4843: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004f4847: PUSH EDX
// 004f4848: CALL core_npc.cpp_FUN_005447e0
//   XREF to: 005447e0 (UNCONDITIONAL_CALL)
// 004f484d: ADD ESP,0x4
// 004f4850: PUSH 0x62ee2f
//   XREF to: 0062ee2f (DATA)
// 004f4855: MOV EBX,EAX
// 004f4857: LEA EDI,[EAX + 0x158]
// 004f485d: PUSH EDI
// 004f485e: MOV dword ptr [EAX + 0x154],0x65fb34
//   XREF to: 0065fb34 (DATA)
// 004f4868: CALL core_skeleton.cpp_FUN_005a0840
//   XREF to: 005a0840 (UNCONDITIONAL_CALL)
// 004f486d: MOV dword ptr [EBX + 0x1fab4],0x0
// 004f4877: MOV dword ptr [EBX + 0x1fabc],0x0
// 004f4881: MOV ESI,0x62ee3b
//   XREF to: 0062ee3b (DATA)
// 004f4886: MOV dword ptr [EBX + 0x1fac0],0x0
// 004f4890: ADD ESP,0x8
// 004f4893: MOV dword ptr [EBX + 0x1fac4],0x0
// 004f489d: LEA EDI,[EBX + 0x1f70c]
// 004f48a3: MOV dword ptr [EBX + 0x1f708],0x40a00000
// 004f48ad: PUSH EDI
// 004f48ae: MOV AL,byte ptr [ESI]
//   Label: LAB_004f48ae
//   XREF to: 0062ee3b (READ)
//   XREF to: 0062ee3d (READ)
// 004f48b0: MOV byte ptr [EDI],AL
// 004f48b2: CMP AL,0x0
// 004f48b4: JZ 0x004f48c6
//   XREF to: 004f48c6 (CONDITIONAL_JUMP)
// 004f48b6: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 0062ee3c (READ)
//   XREF to: 0062ee3e (READ)
// 004f48b9: ADD ESI,0x2
// 004f48bc: MOV byte ptr [EDI + 0x1],AL
// 004f48bf: ADD EDI,0x2
// 004f48c2: CMP AL,0x0
// 004f48c4: JNZ 0x004f48ae
//   XREF to: 004f48ae (CONDITIONAL_JUMP)
// 004f48c6: POP EDI
//   Label: LAB_004f48c6
// 004f48c7: MOV dword ptr [EBX + 0x1fac8],0x0
// 004f48d1: MOV dword ptr [EBX + 0x2598],0x0
// 004f48db: MOV dword ptr [EBX + 0x1fae0],0x0
// 004f48e5: MOV dword ptr [EBX + 0x1fae4],0x0
// 004f48ef: MOV byte ptr [EBX + 0x1f770],0x0
// 004f48f6: MOV byte ptr [EBX + 0x1f790],0x0
// 004f48fd: MOV byte ptr [EBX + 0x1f7f4],0x0
// 004f4904: MOV byte ptr [EBX + 0x1f858],0x0
// 004f490b: MOV byte ptr [EBX + 0x1f8bc],0x0
// 004f4912: MOV byte ptr [EBX + 0x1f920],0x0
// 004f4919: MOV byte ptr [EBX + 0x1f984],0x0
// 004f4920: MOV dword ptr [EBX + 0x1fae8],0x0
// 004f492a: MOV dword ptr [EBX + 0x1faec],0x0
// 004f4934: MOV dword ptr [EBX + 0x1fadc],0x0
// 004f493e: MOV byte ptr [EBX + 0x2448],0x0
// 004f4945: MOV byte ptr [EBX + 0x1f9e8],0x0
// 004f494c: MOV byte ptr [EBX + 0x1fa4c],0x0
// 004f4953: MOV EAX,EBX
// 004f4955: MOV dword ptr [EBX + 0x2444],0x1
// 004f495f: POP EDI
// 004f4960: POP ESI
// 004f4961: POP EBX
// 004f4962: RET
