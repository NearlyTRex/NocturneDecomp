// Name: core_spike.cpp_CSpike_ctor_FUN_005b8220
// Address: 005b8220
// Address Range: [[005b8220, 005b8359]]
// Convention: __cdecl
// Signature: CSpike * core_spike.cpp_CSpike_ctor_FUN_005b8220(CSpike * this_ptr)
// Cross-references:
//   core_spike.cpp_FUN_005b81e0 (005b81e0) at 005b81fa [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_bgate_kfm_00652de1
//   TerminatedCString s_none_00652deb
//   undefined4 s_one_00652dec
//   undefined4 s_ne_00652ded
//   undefined4 s_e_00652dee
//   TerminatedCString s_none_00652df0
//   undefined4 s_one_00652df1
//   undefined4 s_ne_00652df2
//   undefined4 s_e_00652df3
//   TerminatedCString s_none_00652df5
//   undefined4 s_one_00652df6
//   undefined4 s_ne_00652df7
//   undefined4 s_e_00652df8
//   TerminatedCString s_none_00652dfa
//   undefined4 s_one_00652dfb
//   undefined4 s_ne_00652dfc
//   undefined4 s_e_00652dfd
//   CDemonActor_vtable g_CSpikeVTable
// Function calls:
//   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
//   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0

#include "nocturne.h"

CSpike * __cdecl core_spike_cpp_CSpike_ctor_FUN_005b8220(CSpike *this_ptr)

{
  char cVar1;
  CDemonActor *pCVar2;
  CKeyFramedModelInstance *this_ptr_00;
  char *pcVar3;
  char *pcVar4;
  int *piVar5;
  
  pCVar2 = core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base_actor);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
                          ((CKeyFramedModelInstance *)(pCVar2 + 1));
  pcVar3 = "none";
  this_ptr_00[-1].model_ptr = (CKeyFramedModel *)&g_CSpikeVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (this_ptr_00,"bgate.kfm");
  this_ptr_00[1].part_visibility_flags[0] = 0;
  this_ptr_00[1].part_visibility_flags[1] = 0;
  piVar5 = this_ptr_00[1].part_visibility_flags + 7;
  this_ptr_00[1].part_visibility_flags[2] = 0;
  do {
    cVar1 = *pcVar3;
    *(char *)piVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    *(char *)((int)piVar5 + 1) = cVar1;
    piVar5 = (int *)((int)piVar5 + 2);
  } while (cVar1 != '\0');
  pcVar4 = "none";
  pcVar3 = this_ptr_00[1].model_name + 8;
  do {
    cVar1 = *pcVar4;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  pcVar4 = "none";
  pcVar3 = this_ptr_00[1].animation_state + 8;
  do {
    cVar1 = *pcVar4;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  pcVar4 = "none";
  pcVar3 = this_ptr_00[1].animation_state + 0x6c;
  do {
    cVar1 = *pcVar4;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  this_ptr_00[2].part_visibility_flags[0xc] = 0x3f800000;
  this_ptr_00[2].part_visibility_flags[0xd] = 0x3f800000;
  *(undefined1 *)(this_ptr_00[2].part_visibility_flags + 0xf) = 0;
  this_ptr_00[2].model_name[0x28] = '\0';
  this_ptr_00[2].animation_state[0x28] = '\0';
  this_ptr_00[2].animation_state[0x29] = '\0';
  this_ptr_00[2].animation_state[0x2a] = -0x80;
  this_ptr_00[2].animation_state[0x2b] = '?';
  this_ptr_00[2].animation_state[0x2c] = -0x33;
  this_ptr_00[2].animation_state[0x2d] = -0x34;
  this_ptr_00[2].animation_state[0x2e] = -0x34;
  this_ptr_00[2].animation_state[0x2f] = '=';
  this_ptr_00[2].animation_state[0x30] = '\0';
  this_ptr_00[2].animation_state[0x31] = '\0';
  this_ptr_00[2].animation_state[0x32] = '\0';
  this_ptr_00[2].animation_state[0x33] = '\0';
  return (CSpike *)(this_ptr_00[-1].part_visibility_flags + 9);
}


// Assembly code:
// 005b8220: PUSH EBX
//   Label: core_spike.cpp_CSpike_ctor_FUN_005b8220
// 005b8221: PUSH ESI
// 005b8222: PUSH EDI
// 005b8223: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005b8227: PUSH EBX
// 005b8228: CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   XREF to: 004088b0 (UNCONDITIONAL_CALL)
// 005b822d: ADD ESP,0x4
// 005b8230: ADD EAX,0x158
// 005b8235: PUSH EAX
// 005b8236: CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
//   XREF to: 00478ce0 (UNCONDITIONAL_CALL)
// 005b823b: ADD ESP,0x4
// 005b823e: LEA EBX,[EAX + 0xfffffea8]
// 005b8244: PUSH 0x652de1
//   XREF to: 00652de1 (DATA)
// 005b8249: LEA EAX,[EBX + 0x158]
// 005b824f: PUSH EAX
// 005b8250: MOV ESI,0x652deb
//   XREF to: 00652deb (DATA)
// 005b8255: MOV dword ptr [EBX + 0x154],0x663364
//   XREF to: 00663364 (DATA)
// 005b825f: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 005b8264: MOV dword ptr [EBX + 0x2d4],0x0
// 005b826e: ADD ESP,0x8
// 005b8271: MOV dword ptr [EBX + 0x2d8],0x0
// 005b827b: LEA EDI,[EBX + 0x2f0]
// 005b8281: MOV dword ptr [EBX + 0x2dc],0x0
// 005b828b: PUSH EDI
// 005b828c: MOV AL,byte ptr [ESI]
//   Label: LAB_005b828c
//   XREF to: 00652deb (READ)
//   XREF to: 00652ded (READ)
// 005b828e: MOV byte ptr [EDI],AL
// 005b8290: CMP AL,0x0
// 005b8292: JZ 0x005b82a4
//   XREF to: 005b82a4 (CONDITIONAL_JUMP)
// 005b8294: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00652dec (READ)
//   XREF to: 00652dee (READ)
// 005b8297: ADD ESI,0x2
// 005b829a: MOV byte ptr [EDI + 0x1],AL
// 005b829d: ADD EDI,0x2
// 005b82a0: CMP AL,0x0
// 005b82a2: JNZ 0x005b828c
//   XREF to: 005b828c (CONDITIONAL_JUMP)
// 005b82a4: POP EDI
//   Label: LAB_005b82a4
// 005b82a5: MOV ESI,0x652df0
//   XREF to: 00652df0 (DATA)
// 005b82aa: LEA EDI,[EBX + 0x354]
// 005b82b0: PUSH EDI
// 005b82b1: MOV AL,byte ptr [ESI]
//   Label: LAB_005b82b1
//   XREF to: 00652df0 (READ)
//   XREF to: 00652df2 (READ)
// 005b82b3: MOV byte ptr [EDI],AL
// 005b82b5: CMP AL,0x0
// 005b82b7: JZ 0x005b82c9
//   XREF to: 005b82c9 (CONDITIONAL_JUMP)
// 005b82b9: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00652df1 (READ)
//   XREF to: 00652df3 (READ)
// 005b82bc: ADD ESI,0x2
// 005b82bf: MOV byte ptr [EDI + 0x1],AL
// 005b82c2: ADD EDI,0x2
// 005b82c5: CMP AL,0x0
// 005b82c7: JNZ 0x005b82b1
//   XREF to: 005b82b1 (CONDITIONAL_JUMP)
// 005b82c9: POP EDI
//   Label: LAB_005b82c9
// 005b82ca: MOV ESI,0x652df5
//   XREF to: 00652df5 (DATA)
// 005b82cf: LEA EDI,[EBX + 0x3b8]
// 005b82d5: PUSH EDI
// 005b82d6: MOV AL,byte ptr [ESI]
//   Label: LAB_005b82d6
//   XREF to: 00652df5 (READ)
//   XREF to: 00652df7 (READ)
// 005b82d8: MOV byte ptr [EDI],AL
// 005b82da: CMP AL,0x0
// 005b82dc: JZ 0x005b82ee
//   XREF to: 005b82ee (CONDITIONAL_JUMP)
// 005b82de: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00652df6 (READ)
//   XREF to: 00652df8 (READ)
// 005b82e1: ADD ESI,0x2
// 005b82e4: MOV byte ptr [EDI + 0x1],AL
// 005b82e7: ADD EDI,0x2
// 005b82ea: CMP AL,0x0
// 005b82ec: JNZ 0x005b82d6
//   XREF to: 005b82d6 (CONDITIONAL_JUMP)
// 005b82ee: POP EDI
//   Label: LAB_005b82ee
// 005b82ef: MOV ESI,0x652dfa
//   XREF to: 00652dfa (DATA)
// 005b82f4: LEA EDI,[EBX + 0x41c]
// 005b82fa: PUSH EDI
// 005b82fb: MOV AL,byte ptr [ESI]
//   Label: LAB_005b82fb
//   XREF to: 00652dfa (READ)
//   XREF to: 00652dfc (READ)
// 005b82fd: MOV byte ptr [EDI],AL
// 005b82ff: CMP AL,0x0
// 005b8301: JZ 0x005b8313
//   XREF to: 005b8313 (CONDITIONAL_JUMP)
// 005b8303: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00652dfb (READ)
//   XREF to: 00652dfd (READ)
// 005b8306: ADD ESI,0x2
// 005b8309: MOV byte ptr [EDI + 0x1],AL
// 005b830c: ADD EDI,0x2
// 005b830f: CMP AL,0x0
// 005b8311: JNZ 0x005b82fb
//   XREF to: 005b82fb (CONDITIONAL_JUMP)
// 005b8313: POP EDI
//   Label: LAB_005b8313
// 005b8314: MOV dword ptr [EBX + 0x480],0x3f800000
// 005b831e: MOV dword ptr [EBX + 0x484],0x3f800000
// 005b8328: MOV byte ptr [EBX + 0x48c],0x0
// 005b832f: MOV byte ptr [EBX + 0x4f0],0x0
// 005b8336: MOV dword ptr [EBX + 0x554],0x3f800000
// 005b8340: MOV dword ptr [EBX + 0x558],0x3dcccccd
// 005b834a: MOV EAX,EBX
// 005b834c: MOV dword ptr [EBX + 0x55c],0x0
// 005b8356: POP EDI
// 005b8357: POP ESI
// 005b8358: POP EBX
// 005b8359: RET
