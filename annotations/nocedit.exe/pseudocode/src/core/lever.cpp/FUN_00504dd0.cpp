// Name: core_lever.cpp_FUN_00504dd0
// Address: 00504dd0
// Address Range: [[00504dd0, 00504e7f]]
// Convention: unknown
// Signature: undefined core_lever.cpp_FUN_00504dd0()
// Cross-references:
//   core_stranger.cpp_CStranger_FUN_005be520 (005be520) at 005be8cf [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_006608f8
// Function calls:
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   crt_math.c_round_FUN_005fe6b0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_other_lever.cpp_FUN_00504dd0(undefined4 param_1, undefined4 param_2)
    */

CVector3f * core_lever_cpp_FUN_00504dd0(void)

{
  CVector3i **ppCVar1;
  CKeyFramedModel *pCVar2;
  undefined4 extraout_EDX;
  BADSPACEBASE *in_ESP;
  int unaff_ESI;
  CDemonActor *in_stack_00000004;
  CVector3f *in_stack_00000008;
  CKeyFramedModelInstance *in_stack_ffffffe4;
  float local_14;
  
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)(in_stack_00000004 + 1));
  ppCVar1 = pCVar2->vertex_list;
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)(in_stack_00000004 + 1));
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX,pCVar2->frame_count + -1));
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(in_stack_ffffffe4);
  local_14 = (float)(int)ppCVar1[(*(int *)(in_stack_00000004[3].actor_name + 0xc) +
                                 pCVar2->vertex_count * unaff_ESI) * 3] * _DAT_006608f8;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (in_stack_00000004,in_stack_00000008,(CVector3f *)&local_14);
  return in_stack_00000008;
}


// Assembly code:
// 00504dd0: PUSH EBX
//   Label: core_lever.cpp_FUN_00504dd0
// 00504dd1: PUSH ESI
// 00504dd2: PUSH EDI
// 00504dd3: PUSH EBP
// 00504dd4: SUB ESP,0x14
// 00504dd7: MOV ESI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 00504ddb: MOV EBP,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x8] (READ)
// 00504ddf: LEA EBX,[ESI + 0x158]
// 00504de5: PUSH EBX
// 00504de6: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 00504deb: ADD ESP,0x4
// 00504dee: PUSH EBX
// 00504def: MOV EDI,dword ptr [EAX + 0x10c]
// 00504df5: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 00504dfa: MOV EAX,dword ptr [EAX + 0x100]
// 00504e00: ADD ESP,0x4
// 00504e03: DEC EAX
// 00504e04: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00504e08: FILD dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x14] (READ)
// 00504e0c: FMUL float ptr [ESI + 0x2dc]
// 00504e12: PUSH EBX
// 00504e13: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00504e18: FISTP dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x18] (WRITE)
// 00504e1c: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 00504e21: ADD ESP,0x4
// 00504e24: MOV EAX,dword ptr [EAX + 0x104]
// 00504e2a: IMUL EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x18] (READ)
// 00504e2f: MOV EBX,dword ptr [ESI + 0x414]
// 00504e35: ADD EBX,EAX
// 00504e37: LEA EAX,[EBX*0x4 + 0x0]
// 00504e3e: SUB EAX,EBX
// 00504e40: SHL EAX,0x2
// 00504e43: MOV EBX,ESP
// 00504e45: ADD EAX,EDI
// 00504e47: FILD dword ptr [EAX]
// 00504e49: FMUL float ptr [0x006608f8]
//   XREF to: 006608f8 (READ)
// 00504e4f: FSTP float ptr [EBX]
//   XREF to: Stack[-0x24] (DATA)
// 00504e51: FILD dword ptr [EAX + 0x4]
// 00504e54: FMUL float ptr [0x006608f8]
//   XREF to: 006608f8 (READ)
// 00504e5a: FSTP float ptr [EBX + 0x4]
//   XREF to: Stack[-0x20] (WRITE)
// 00504e5d: FILD dword ptr [EAX + 0x8]
// 00504e60: FMUL float ptr [0x006608f8]
//   XREF to: 006608f8 (READ)
// 00504e66: FSTP float ptr [EBX + 0x8]
//   XREF to: Stack[-0x1c] (WRITE)
// 00504e69: MOV EAX,ESP
// 00504e6b: PUSH EAX
// 00504e6c: PUSH EBP
// 00504e6d: PUSH ESI
// 00504e6e: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 00504e73: ADD ESP,0xc
// 00504e76: MOV EAX,EBP
// 00504e78: ADD ESP,0x14
// 00504e7b: POP EBP
// 00504e7c: POP EDI
// 00504e7d: POP ESI
// 00504e7e: POP EBX
// 00504e7f: RET
