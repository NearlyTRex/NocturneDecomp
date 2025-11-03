// Name: core_emitter.cpp_ctor_FUN_004a7ca0
// Address: 004a7ca0
// Address Range: [[004a7ca0, 004a7df6]]
// Convention: __cdecl
// Signature: CEmitter * core_emitter.cpp_ctor_FUN_004a7ca0(CEmitter * this_ptr)
// Cross-references:
//   core_emitter.cpp_FUN_004a7c60 (004a7c60) at 004a7c7a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_none_00624067
//   undefined4 s_one_00624068
//   undefined4 s_ne_00624069
//   undefined4 s_e_0062406a
//   TerminatedCString s_none_0062406c
//   undefined4 s_one_0062406d
//   undefined4 s_ne_0062406e
//   undefined4 s_e_0062406f
//   TerminatedCString s_stalrock_kfm_00624071
//   CDemonActor_vtable PTR_core_emitter.cpp_FUN_0065d684
// Function calls:
//   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
//   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0

#include "nocturne.h"

CEmitter * __cdecl core_emitter_cpp_ctor_FUN_004a7ca0(CEmitter *this_ptr)

{
  char cVar1;
  CDemonActor *pCVar2;
  CKeyFramedModelInstance *this_ptr_00;
  char *pcVar3;
  char *pcVar4;
  
  pCVar2 = core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base_actor);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
                          ((CKeyFramedModelInstance *)&pCVar2[1].field13_0xec.y);
  *(CDemonActor_vtable **)(this_ptr_00[-1].model_name + 0x10) = &PTR_core_emitter_cpp_FUN_0065d684;
  this_ptr_00[-0xffffffff00000001].model_name[0x18] = '\0';
  this_ptr_00[-0xffffffff00000001].model_name[0x19] = '\0';
  this_ptr_00[-0xffffffff00000001].model_name[0x1a] = -0x80;
  this_ptr_00[-0xffffffff00000001].model_name[0x1b] = '?';
  pcVar3 = "none";
  this_ptr_00[-0xffffffff00000001].model_name[0x1c] = '\0';
  this_ptr_00[-0xffffffff00000001].model_name[0x1d] = '\0';
  this_ptr_00[-0xffffffff00000001].model_name[0x1e] = -0x80;
  this_ptr_00[-0xffffffff00000001].model_name[0x1f] = '?';
  this_ptr_00[-0xffffffff00000001].model_name[0x20] = '\0';
  this_ptr_00[-0xffffffff00000001].model_name[0x21] = '\0';
  this_ptr_00[-0xffffffff00000001].model_name[0x22] = -0x80;
  this_ptr_00[-0xffffffff00000001].model_name[0x23] = '?';
  pcVar4 = this_ptr_00[-1].model_name + 0x28;
  this_ptr_00[-0xffffffff00000001].model_name[0x14] = '\0';
  this_ptr_00[-0xffffffff00000001].model_name[0x15] = '\0';
  this_ptr_00[-0xffffffff00000001].model_name[0x16] = '\0';
  this_ptr_00[-0xffffffff00000001].model_name[0x17] = '\0';
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = "none";
  pcVar4 = this_ptr_00[-1].animation_state + 0x28;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  this_ptr_00[1].model_name[4] = '\0';
  this_ptr_00[1].model_name[5] = '\0';
  this_ptr_00[1].model_name[6] = '\0';
  this_ptr_00[1].model_name[7] = '\0';
  this_ptr_00[1].model_name[8] = -0x33;
  this_ptr_00[1].model_name[9] = -0x34;
  this_ptr_00[1].model_name[10] = -0x34;
  this_ptr_00[1].model_name[0xb] = '=';
  this_ptr_00[-0xffffffff00000001].model_name[0x24] = '\x01';
  this_ptr_00[-0xffffffff00000001].model_name[0x25] = '\0';
  this_ptr_00[-0xffffffff00000001].model_name[0x26] = '\0';
  this_ptr_00[-0xffffffff00000001].model_name[0x27] = '\0';
  this_ptr_00[-0xffffffff00000001].animation_state[0x94] = -1;
  this_ptr_00[-0xffffffff00000001].animation_state[0x95] = '\0';
  this_ptr_00[-0xffffffff00000001].animation_state[0x96] = '\0';
  this_ptr_00[-0xffffffff00000001].animation_state[0x97] = '\0';
  this_ptr_00[-0xffffffff00000001].animation_state[0x98] = '\0';
  this_ptr_00[-0xffffffff00000001].animation_state[0x99] = '\0';
  this_ptr_00[-0xffffffff00000001].animation_state[0x9a] = '\0';
  this_ptr_00[-0xffffffff00000001].animation_state[0x9b] = '\0';
  this_ptr_00[-1].model_ptr = (CKeyFramedModel *)0x0;
  this_ptr_00[-0xffffffff00000001].animation_state[0x90] = '\x01';
  this_ptr_00[-0xffffffff00000001].animation_state[0x91] = '\0';
  this_ptr_00[-0xffffffff00000001].animation_state[0x92] = '\0';
  this_ptr_00[-0xffffffff00000001].animation_state[0x93] = '\0';
  this_ptr_00[-0xffffffff00000001].animation_state[0x8c] = '\0';
  this_ptr_00[-0xffffffff00000001].animation_state[0x8d] = '\0';
  this_ptr_00[-0xffffffff00000001].animation_state[0x8e] = '\0';
  this_ptr_00[-0xffffffff00000001].animation_state[0x8f] = '\0';
  this_ptr_00[1].model_name[0xc] = '\0';
  this_ptr_00[1].model_name[0xd] = '\0';
  this_ptr_00[1].model_name[0xe] = '\0';
  this_ptr_00[1].model_name[0xf] = '\0';
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (this_ptr_00,"stalrock.kfm");
  this_ptr_00[1].part_visibility_flags[0] = 0x41a00000;
  this_ptr_00[1].part_visibility_flags[1] = 0;
  this_ptr_00[1].part_visibility_flags[2] = 0;
  this_ptr_00[1].part_visibility_flags[3] = 0;
  *(undefined1 *)(this_ptr_00[1].part_visibility_flags + 4) = 0;
  this_ptr_00[1].model_name[0] = '\x01';
  this_ptr_00[1].model_name[1] = '\0';
  this_ptr_00[1].model_name[2] = '\0';
  this_ptr_00[1].model_name[3] = '\0';
  this_ptr_00[1].model_name[0x50] = '\0';
  this_ptr_00[1].model_name[0x51] = '\0';
  this_ptr_00[1].model_name[0x52] = '\0';
  this_ptr_00[1].model_name[0x53] = '\0';
  return (CEmitter *)(this_ptr_00[-2].model_name + 0x38);
}


// Assembly code:
// 004a7ca0: PUSH EBX
//   Label: core_emitter.cpp_ctor_FUN_004a7ca0
// 004a7ca1: PUSH ESI
// 004a7ca2: PUSH EDI
// 004a7ca3: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004a7ca7: PUSH EBX
// 004a7ca8: CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   XREF to: 004088b0 (UNCONDITIONAL_CALL)
// 004a7cad: ADD ESP,0x4
// 004a7cb0: ADD EAX,0x248
// 004a7cb5: PUSH EAX
// 004a7cb6: CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
//   XREF to: 00478ce0 (UNCONDITIONAL_CALL)
// 004a7cbb: LEA EBX,[EAX + 0xfffffdb8]
// 004a7cc1: MOV dword ptr [EBX + 0x154],0x65d684
//   XREF to: 0065d684 (DATA)
// 004a7ccb: MOV dword ptr [EBX + 0x15c],0x3f800000
// 004a7cd5: MOV ESI,0x624067
//   XREF to: 00624067 (DATA)
// 004a7cda: MOV dword ptr [EBX + 0x160],0x3f800000
// 004a7ce4: ADD ESP,0x4
// 004a7ce7: MOV dword ptr [EBX + 0x164],0x3f800000
// 004a7cf1: LEA EDI,[EBX + 0x16c]
// 004a7cf7: MOV dword ptr [EBX + 0x158],0x0
// 004a7d01: PUSH EDI
// 004a7d02: MOV AL,byte ptr [ESI]
//   Label: LAB_004a7d02
//   XREF to: 00624067 (READ)
//   XREF to: 00624069 (READ)
// 004a7d04: MOV byte ptr [EDI],AL
// 004a7d06: CMP AL,0x0
// 004a7d08: JZ 0x004a7d1a
//   XREF to: 004a7d1a (CONDITIONAL_JUMP)
// 004a7d0a: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00624068 (READ)
//   XREF to: 0062406a (READ)
// 004a7d0d: ADD ESI,0x2
// 004a7d10: MOV byte ptr [EDI + 0x1],AL
// 004a7d13: ADD EDI,0x2
// 004a7d16: CMP AL,0x0
// 004a7d18: JNZ 0x004a7d02
//   XREF to: 004a7d02 (CONDITIONAL_JUMP)
// 004a7d1a: POP EDI
//   Label: LAB_004a7d1a
// 004a7d1b: MOV ESI,0x62406c
//   XREF to: 0062406c (DATA)
// 004a7d20: LEA EDI,[EBX + 0x1d0]
// 004a7d26: PUSH EDI
// 004a7d27: MOV AL,byte ptr [ESI]
//   Label: LAB_004a7d27
//   XREF to: 0062406c (READ)
//   XREF to: 0062406e (READ)
// 004a7d29: MOV byte ptr [EDI],AL
// 004a7d2b: CMP AL,0x0
// 004a7d2d: JZ 0x004a7d3f
//   XREF to: 004a7d3f (CONDITIONAL_JUMP)
// 004a7d2f: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 0062406d (READ)
//   XREF to: 0062406f (READ)
// 004a7d32: ADD ESI,0x2
// 004a7d35: MOV byte ptr [EDI + 0x1],AL
// 004a7d38: ADD EDI,0x2
// 004a7d3b: CMP AL,0x0
// 004a7d3d: JNZ 0x004a7d27
//   XREF to: 004a7d27 (CONDITIONAL_JUMP)
// 004a7d3f: POP EDI
//   Label: LAB_004a7d3f
// 004a7d40: MOV dword ptr [EBX + 0x440],0x0
// 004a7d4a: MOV dword ptr [EBX + 0x444],0x3dcccccd
// 004a7d54: MOV dword ptr [EBX + 0x168],0x1
// 004a7d5e: MOV dword ptr [EBX + 0x23c],0xff
// 004a7d68: MOV dword ptr [EBX + 0x240],0x0
// 004a7d72: MOV dword ptr [EBX + 0x244],0x0
// 004a7d7c: PUSH 0x624071
//   XREF to: 00624071 (DATA)
// 004a7d81: MOV dword ptr [EBX + 0x238],0x1
// 004a7d8b: LEA EAX,[EBX + 0x248]
// 004a7d91: MOV dword ptr [EBX + 0x234],0x0
// 004a7d9b: PUSH EAX
// 004a7d9c: MOV dword ptr [EBX + 0x448],0x0
// 004a7da6: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 004a7dab: MOV dword ptr [EBX + 0x3c4],0x41a00000
// 004a7db5: MOV dword ptr [EBX + 0x3c8],0x0
// 004a7dbf: MOV dword ptr [EBX + 0x3cc],0x0
// 004a7dc9: MOV dword ptr [EBX + 0x3d0],0x0
// 004a7dd3: MOV byte ptr [EBX + 0x3d4],0x0
// 004a7dda: ADD ESP,0x8
// 004a7ddd: MOV dword ptr [EBX + 0x43c],0x1
// 004a7de7: MOV EAX,EBX
// 004a7de9: MOV dword ptr [EBX + 0x48c],0x0
// 004a7df3: POP EDI
// 004a7df4: POP ESI
// 004a7df5: POP EBX
// 004a7df6: RET
