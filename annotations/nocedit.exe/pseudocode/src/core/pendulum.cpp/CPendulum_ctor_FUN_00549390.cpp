// Name: core_pendulum.cpp_CPendulum_ctor_FUN_00549390
// Address: 00549390
// Address Range: [[00549390, 0054949a]]
// Convention: __cdecl
// Signature: CPendulum * core_pendulum.cpp_CPendulum_ctor_FUN_00549390(CPendulum * this_ptr)
// Cross-references:
//   core_pendulum.cpp_FUN_00549350 (00549350) at 0054936a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_pend_kfm_0063ec70
//   TerminatedCString s_true_0063ec79
//   undefined4 s_rue_0063ec7a
//   undefined4 s_ue_0063ec7b
//   undefined4 s_e_0063ec7c
//   TerminatedCString s_none_0063ec7e
//   undefined4 s_one_0063ec7f
//   undefined4 s_ne_0063ec80
//   undefined4 s_e_0063ec81
//   CDemonActor_vtable PTR_core_pendulum.cpp_FUN_00662154
// Function calls:
//   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
//   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0

#include "nocturne.h"

CPendulum * __cdecl core_pendulum_cpp_CPendulum_ctor_FUN_00549390(CPendulum *this_ptr)

{
  char cVar1;
  CDemonActor *pCVar2;
  CKeyFramedModelInstance *this_ptr_00;
  char *pcVar3;
  CKeyFramedModelInstance *pCVar4;
  int *piVar5;
  
  pCVar2 = core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base_actor);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
                          ((CKeyFramedModelInstance *)(pCVar2 + 1));
  this_ptr_00[-1].model_ptr = (CKeyFramedModel *)&PTR_core_pendulum_cpp_FUN_00662154;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(this_ptr_00,"pend.kfm")
  ;
  pcVar3 = "true";
  pCVar4 = this_ptr_00 + 1;
  do {
    cVar1 = *pcVar3;
    *(char *)pCVar4->part_visibility_flags = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    *(char *)((int)pCVar4->part_visibility_flags + 1) = cVar1;
    pCVar4 = (CKeyFramedModelInstance *)((int)pCVar4->part_visibility_flags + 2);
  } while (cVar1 != '\0');
  pcVar3 = "none";
  piVar5 = this_ptr_00[1].part_visibility_flags + 0x19;
  do {
    cVar1 = *pcVar3;
    *(char *)piVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    *(char *)((int)piVar5 + 1) = cVar1;
    piVar5 = (int *)((int)piVar5 + 2);
  } while (cVar1 != '\0');
  this_ptr_00[1].model_name[0x50] = '\x01';
  this_ptr_00[1].model_name[0x51] = '\0';
  this_ptr_00[1].model_name[0x52] = '\0';
  this_ptr_00[1].model_name[0x53] = '\0';
  this_ptr_00[1].model_name[0x54] = '\0';
  this_ptr_00[1].model_name[0x55] = '\0';
  this_ptr_00[1].model_name[0x56] = '\0';
  this_ptr_00[1].model_name[0x57] = '\0';
  this_ptr_00[1].model_name[0x5c] = -0x6e;
  this_ptr_00[1].model_name[0x5d] = '\n';
  this_ptr_00[1].model_name[0x5e] = '\x06';
  this_ptr_00[1].model_name[0x5f] = '?';
  this_ptr_00[1].model_name[0x60] = '\0';
  this_ptr_00[1].animation_state[0x20] = '\0';
  this_ptr_00[1].animation_state[0x40] = '\0';
  this_ptr_00[1].animation_state[0x1c] = '\0';
  this_ptr_00[1].animation_state[0x1d] = '\0';
  this_ptr_00[1].animation_state[0x1e] = '\0';
  this_ptr_00[1].animation_state[0x1f] = '\0';
  this_ptr_00[1].animation_state[0x78] = '\0';
  this_ptr_00[1].animation_state[0x79] = '\0';
  this_ptr_00[1].animation_state[0x7a] = '\0';
  this_ptr_00[1].animation_state[0x7b] = '\0';
  this_ptr_00[1].animation_state[0x7c] = '\0';
  this_ptr_00[1].animation_state[0x7d] = '\0';
  this_ptr_00[1].animation_state[0x7e] = '\0';
  this_ptr_00[1].animation_state[0x7f] = '\0';
  this_ptr_00[1].animation_state[0x80] = '\0';
  this_ptr_00[1].animation_state[0x81] = '\0';
  this_ptr_00[1].animation_state[0x82] = '\0';
  this_ptr_00[1].animation_state[0x83] = '\0';
  this_ptr_00[1].animation_state[0x84] = '\0';
  this_ptr_00[1].animation_state[0x85] = '\0';
  this_ptr_00[1].animation_state[0x86] = '\0';
  this_ptr_00[1].animation_state[0x87] = '\0';
  this_ptr_00[1].animation_state[0x90] = '\0';
  this_ptr_00[1].animation_state[0x91] = '\0';
  this_ptr_00[1].animation_state[0x92] = '\0';
  this_ptr_00[1].animation_state[0x93] = '\0';
  this_ptr_00[1].animation_state[0x8c] = '\0';
  this_ptr_00[1].animation_state[0x8d] = '\0';
  this_ptr_00[1].animation_state[0x8e] = '\0';
  this_ptr_00[1].animation_state[0x8f] = '\0';
  return (CPendulum *)(this_ptr_00[-1].part_visibility_flags + 9);
}


// Assembly code:
// 00549390: PUSH EBX
//   Label: core_pendulum.cpp_CPendulum_ctor_FUN_00549390
// 00549391: PUSH ESI
// 00549392: PUSH EDI
// 00549393: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00549397: PUSH EBX
// 00549398: CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   XREF to: 004088b0 (UNCONDITIONAL_CALL)
// 0054939d: ADD ESP,0x4
// 005493a0: ADD EAX,0x158
// 005493a5: PUSH EAX
// 005493a6: CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
//   XREF to: 00478ce0 (UNCONDITIONAL_CALL)
// 005493ab: ADD ESP,0x4
// 005493ae: LEA EBX,[EAX + 0xfffffea8]
// 005493b4: PUSH 0x63ec70
//   XREF to: 0063ec70 (DATA)
// 005493b9: LEA EAX,[EBX + 0x158]
// 005493bf: PUSH EAX
// 005493c0: MOV dword ptr [EBX + 0x154],0x662154
//   XREF to: 00662154 (DATA)
// 005493ca: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 005493cf: ADD ESP,0x8
// 005493d2: MOV ESI,0x63ec79
//   XREF to: 0063ec79 (DATA)
// 005493d7: LEA EDI,[EBX + 0x2d4]
// 005493dd: PUSH EDI
// 005493de: MOV AL,byte ptr [ESI]
//   Label: LAB_005493de
//   XREF to: 0063ec79 (READ)
//   XREF to: 0063ec7b (READ)
// 005493e0: MOV byte ptr [EDI],AL
// 005493e2: CMP AL,0x0
// 005493e4: JZ 0x005493f6
//   XREF to: 005493f6 (CONDITIONAL_JUMP)
// 005493e6: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 0063ec7a (READ)
//   XREF to: 0063ec7c (READ)
// 005493e9: ADD ESI,0x2
// 005493ec: MOV byte ptr [EDI + 0x1],AL
// 005493ef: ADD EDI,0x2
// 005493f2: CMP AL,0x0
// 005493f4: JNZ 0x005493de
//   XREF to: 005493de (CONDITIONAL_JUMP)
// 005493f6: POP EDI
//   Label: LAB_005493f6
// 005493f7: MOV ESI,0x63ec7e
//   XREF to: 0063ec7e (DATA)
// 005493fc: LEA EDI,[EBX + 0x338]
// 00549402: PUSH EDI
// 00549403: MOV AL,byte ptr [ESI]
//   Label: LAB_00549403
//   XREF to: 0063ec7e (READ)
//   XREF to: 0063ec80 (READ)
// 00549405: MOV byte ptr [EDI],AL
// 00549407: CMP AL,0x0
// 00549409: JZ 0x0054941b
//   XREF to: 0054941b (CONDITIONAL_JUMP)
// 0054940b: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 0063ec7f (READ)
//   XREF to: 0063ec81 (READ)
// 0054940e: ADD ESI,0x2
// 00549411: MOV byte ptr [EDI + 0x1],AL
// 00549414: ADD EDI,0x2
// 00549417: CMP AL,0x0
// 00549419: JNZ 0x00549403
//   XREF to: 00549403 (CONDITIONAL_JUMP)
// 0054941b: POP EDI
//   Label: LAB_0054941b
// 0054941c: MOV dword ptr [EBX + 0x39c],0x1
// 00549426: MOV dword ptr [EBX + 0x3a0],0x0
// 00549430: MOV dword ptr [EBX + 0x3a8],0x3f060a92
// 0054943a: MOV byte ptr [EBX + 0x3ac],0x0
// 00549441: MOV byte ptr [EBX + 0x3d0],0x0
// 00549448: MOV byte ptr [EBX + 0x3f0],0x0
// 0054944f: MOV dword ptr [EBX + 0x3cc],0x0
// 00549459: MOV dword ptr [EBX + 0x428],0x0
// 00549463: MOV dword ptr [EBX + 0x42c],0x0
// 0054946d: MOV dword ptr [EBX + 0x430],0x0
// 00549477: MOV dword ptr [EBX + 0x434],0x0
// 00549481: MOV dword ptr [EBX + 0x440],0x0
// 0054948b: MOV EAX,EBX
// 0054948d: MOV dword ptr [EBX + 0x43c],0x0
// 00549497: POP EDI
// 00549498: POP ESI
// 00549499: POP EBX
// 0054949a: RET
