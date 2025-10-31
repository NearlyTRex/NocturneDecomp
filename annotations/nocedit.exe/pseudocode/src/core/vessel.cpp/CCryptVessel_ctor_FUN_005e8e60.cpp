// Name: core_vessel.cpp_CCryptVessel_ctor_FUN_005e8e60
// Address: 005e8e60
// Address Range: [[005e8e60, 005e8fb7]]
// Convention: __cdecl
// Signature: CCryptVessel * core_vessel.cpp_CCryptVessel_ctor_FUN_005e8e60(CCryptVessel * this_ptr)
// Cross-references:
//   core_vessel.cpp_FUN_005e8e20 (005e8e20) at 005e8e3a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_vsslbase_kfm_00657001
//   TerminatedCString s_none_0065700e
//   undefined4 s_one_0065700f
//   undefined4 s_ne_00657010
//   undefined4 s_e_00657011
//   TerminatedCString s_none_00657013
//   undefined4 s_one_00657014
//   undefined4 s_ne_00657015
//   undefined4 s_e_00657016
//   TerminatedCString s_vsslorb_kfm_00657018
//   CDemonActor_vtable g_CCryptVesselVTable
// Function calls:
//   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
//   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   core_flame.cpp_CFlame_ctor_FUN_004c9aa0

#include "nocturne.h"

CCryptVessel * __cdecl core_vessel_cpp_CCryptVessel_ctor_FUN_005e8e60(CCryptVessel *this_ptr)

{
  char cVar1;
  CDemonActor *pCVar2;
  CKeyFramedModelInstance *pCVar3;
  CFlame *pCVar4;
  char *pcVar5;
  char *pcVar6;
  
  pCVar2 = core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base_actor);
  pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
                     ((CKeyFramedModelInstance *)(pCVar2 + 1));
  pCVar4 = core_flame_cpp_CFlame_ctor_FUN_004c9aa0((CFlame *)(pCVar3[1].animation_state + 0x14));
  pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
                     ((CKeyFramedModelInstance *)(pCVar4[1].base_actor.actor_name + 4));
  pcVar5 = "none";
  *(CDemonActor_vtable **)(pCVar3[-4].model_name + 0x60) = &g_CCryptVesselVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            ((CKeyFramedModelInstance *)pCVar3[-4].animation_state,"vsslbase.kfm");
  pCVar3[-0xffffffff00000003].animation_state[0] = '\0';
  pCVar3[-0xffffffff00000003].animation_state[1] = '\0';
  pCVar3[-0xffffffff00000003].animation_state[2] = '\0';
  pCVar3[-0xffffffff00000003].animation_state[3] = '\0';
  pCVar3[-0xffffffff00000003].animation_state[4] = '\0';
  pCVar3[-0xffffffff00000003].animation_state[5] = '\0';
  pCVar3[-0xffffffff00000003].animation_state[6] = '\0';
  pCVar3[-0xffffffff00000003].animation_state[7] = '\0';
  pcVar6 = pCVar3[-3].animation_state + 0xc;
  pCVar3[-0xffffffff00000003].animation_state[8] = '\0';
  pCVar3[-0xffffffff00000003].animation_state[9] = '\0';
  pCVar3[-0xffffffff00000003].animation_state[10] = '\0';
  pCVar3[-0xffffffff00000003].animation_state[0xb] = '\0';
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  pCVar3[-2].part_visibility_flags[0xd] = 0;
  pCVar3[-2].part_visibility_flags[0xe] = 0;
  pcVar5 = "none";
  pCVar3[-2].part_visibility_flags[0x12] = 0;
  pcVar6 = pCVar3[-3].animation_state + 0x70;
  pCVar3[-2].part_visibility_flags[0x11] = 0;
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  pCVar3[-2].part_visibility_flags[0xf] = 0x41200000;
  pCVar3[-2].part_visibility_flags[0x13] = 1;
  pCVar3[-2].part_visibility_flags[0x10] = 0;
  pCVar3[-1].model_ptr = (CKeyFramedModel *)0x0;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(pCVar3,"vsslorb.kfm");
  pCVar3[1].part_visibility_flags[0] = 1;
  pCVar3[-0xffffffff00000004].model_name[8] = '\x01';
  pCVar3[-0xffffffff00000004].model_name[9] = '\0';
  pCVar3[-0xffffffff00000004].model_name[10] = '\0';
  pCVar3[-0xffffffff00000004].model_name[0xb] = '\0';
  pCVar3[1].part_visibility_flags[1] = 0;
  pCVar3[1].part_visibility_flags[2] = 0;
  return (CCryptVessel *)(pCVar3[-5].animation_state + 0x24);
}


// Assembly code:
// 005e8e60: PUSH EBX
//   Label: core_vessel.cpp_CCryptVessel_ctor_FUN_005e8e60
// 005e8e61: PUSH ESI
// 005e8e62: PUSH EDI
// 005e8e63: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005e8e67: PUSH EBX
// 005e8e68: CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   XREF to: 004088b0 (UNCONDITIONAL_CALL)
// 005e8e6d: ADD ESP,0x4
// 005e8e70: ADD EAX,0x158
// 005e8e75: PUSH EAX
// 005e8e76: CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
//   XREF to: 00478ce0 (UNCONDITIONAL_CALL)
// 005e8e7b: ADD ESP,0x4
// 005e8e7e: ADD EAX,0x26c
// 005e8e83: PUSH EAX
// 005e8e84: CALL core_flame.cpp_CFlame_ctor_FUN_004c9aa0
//   XREF to: 004c9aa0 (UNCONDITIONAL_CALL)
// 005e8e89: ADD ESP,0x4
// 005e8e8c: ADD EAX,0x2a8
// 005e8e91: PUSH EAX
// 005e8e92: CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
//   XREF to: 00478ce0 (UNCONDITIONAL_CALL)
// 005e8e97: ADD ESP,0x4
// 005e8e9a: LEA EBX,[EAX + 0xfffff994]
// 005e8ea0: PUSH 0x657001
//   XREF to: 00657001 (DATA)
// 005e8ea5: LEA EAX,[EBX + 0x158]
// 005e8eab: PUSH EAX
// 005e8eac: MOV ESI,0x65700e
//   XREF to: 0065700e (DATA)
// 005e8eb1: MOV dword ptr [EBX + 0x154],0x6651b4
//   XREF to: 006651b4 (DATA)
// 005e8ebb: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 005e8ec0: MOV dword ptr [EBX + 0x2d4],0x0
// 005e8eca: ADD ESP,0x8
// 005e8ecd: MOV dword ptr [EBX + 0x2d8],0x0
// 005e8ed7: LEA EDI,[EBX + 0x2e0]
// 005e8edd: MOV dword ptr [EBX + 0x2dc],0x0
// 005e8ee7: PUSH EDI
// 005e8ee8: MOV AL,byte ptr [ESI]
//   Label: LAB_005e8ee8
//   XREF to: 0065700e (READ)
//   XREF to: 00657010 (READ)
// 005e8eea: MOV byte ptr [EDI],AL
// 005e8eec: CMP AL,0x0
// 005e8eee: JZ 0x005e8f00
//   XREF to: 005e8f00 (CONDITIONAL_JUMP)
// 005e8ef0: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 0065700f (READ)
//   XREF to: 00657011 (READ)
// 005e8ef3: ADD ESI,0x2
// 005e8ef6: MOV byte ptr [EDI + 0x1],AL
// 005e8ef9: ADD EDI,0x2
// 005e8efc: CMP AL,0x0
// 005e8efe: JNZ 0x005e8ee8
//   XREF to: 005e8ee8 (CONDITIONAL_JUMP)
// 005e8f00: POP EDI
//   Label: LAB_005e8f00
// 005e8f01: MOV dword ptr [EBX + 0x3a8],0x0
// 005e8f0b: MOV dword ptr [EBX + 0x3ac],0x0
// 005e8f15: MOV ESI,0x657013
//   XREF to: 00657013 (DATA)
// 005e8f1a: MOV dword ptr [EBX + 0x3bc],0x0
// 005e8f24: LEA EDI,[EBX + 0x344]
// 005e8f2a: MOV dword ptr [EBX + 0x3b8],0x0
// 005e8f34: PUSH EDI
// 005e8f35: MOV AL,byte ptr [ESI]
//   Label: LAB_005e8f35
//   XREF to: 00657013 (READ)
//   XREF to: 00657015 (READ)
// 005e8f37: MOV byte ptr [EDI],AL
// 005e8f39: CMP AL,0x0
// 005e8f3b: JZ 0x005e8f4d
//   XREF to: 005e8f4d (CONDITIONAL_JUMP)
// 005e8f3d: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00657014 (READ)
//   XREF to: 00657016 (READ)
// 005e8f40: ADD ESI,0x2
// 005e8f43: MOV byte ptr [EDI + 0x1],AL
// 005e8f46: ADD EDI,0x2
// 005e8f49: CMP AL,0x0
// 005e8f4b: JNZ 0x005e8f35
//   XREF to: 005e8f35 (CONDITIONAL_JUMP)
// 005e8f4d: POP EDI
//   Label: LAB_005e8f4d
// 005e8f4e: MOV dword ptr [EBX + 0x3b0],0x41200000
// 005e8f58: PUSH 0x657018
//   XREF to: 00657018 (DATA)
// 005e8f5d: MOV dword ptr [EBX + 0x3c0],0x1
// 005e8f67: LEA EAX,[EBX + 0x66c]
// 005e8f6d: MOV dword ptr [EBX + 0x3b4],0x0
// 005e8f77: PUSH EAX
// 005e8f78: MOV dword ptr [EBX + 0x668],0x0
// 005e8f82: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 005e8f87: MOV dword ptr [EBX + 0x7e8],0x1
// 005e8f91: MOV dword ptr [EBX + 0xfc],0x1
// 005e8f9b: ADD ESP,0x8
// 005e8f9e: MOV dword ptr [EBX + 0x7ec],0x0
// 005e8fa8: MOV EAX,EBX
// 005e8faa: MOV dword ptr [EBX + 0x7f0],0x0
// 005e8fb4: POP EDI
// 005e8fb5: POP ESI
// 005e8fb6: POP EBX
// 005e8fb7: RET
