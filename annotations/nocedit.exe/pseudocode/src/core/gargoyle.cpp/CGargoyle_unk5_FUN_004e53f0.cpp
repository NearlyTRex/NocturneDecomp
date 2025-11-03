// Name: core_gargoyle.cpp_CGargoyle_unk5_FUN_004e53f0
// Address: 004e53f0
// Address Range: [[004e53f0, 004e5462]]
// Convention: unknown
// Signature: undefined core_gargoyle.cpp_CGargoyle_unk5_FUN_004e53f0()
// Globals:
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CDemonMission g_CDemonMissionInstance
//   undefined4 DAT_02f33744
//   CDemonSet g_CDemonSetInstance
//   undefined4 g_CDemonSetInstance.lighting_quality_mode
//   undefined4 DAT_0326f100
//   undefined4 DAT_0326f104
//   undefined4 DAT_0326f108
// Function calls:
//   core_charactr.cpp_CCharacter_FUN_0042a2c0

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_gargoyle.cpp_CGargoyle_unk5(CGargoyle* param_1) */

void core_gargoyle_cpp_CGargoyle_unk5_FUN_004e53f0(void)

{
  int iVar1;
  CDemonSet *pCVar2;
  CCharacter *in_stack_00000004;
  
  pCVar2 = g_CDemonSetPtr;
  if (*(int *)(g_CDemonMissionPtr->field0_0x0 + 4) != 0) {
    iVar1 = g_CDemonSetPtr->lighting_quality_mode;
    g_CDemonSetPtr->lighting_quality_mode = 3;
    pCVar2->light_scale_factor = *(int *)(in_stack_00000004[1].base_actor.create_event + 0x50) << 8;
    pCVar2->color_scale_factor = *(int *)(in_stack_00000004[1].base_actor.create_event + 0x54) << 8;
    pCVar2->fog_scale_factor = *(int *)(in_stack_00000004[1].base_actor.create_event + 0x58) << 8;
    core_charactr_cpp_CCharacter_FUN_0042a2c0(in_stack_00000004);
    g_CDemonSetPtr->lighting_quality_mode = iVar1;
    return;
  }
  core_charactr_cpp_CCharacter_FUN_0042a2c0(in_stack_00000004);
  return;
}


// Assembly code:
// 004e53f0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_gargoyle.cpp_CGargoyle_unk5_FUN_004e53f0
//   XREF to: Stack[0x4] (READ)
// 004e53f4: MOV EAX,[0x0067d550]
//   XREF to: 02f33740 (PARAM)
//   XREF to: 0067d550 (READ)
// 004e53f9: CMP dword ptr [EAX + 0x4],0x0
//   XREF to: 02f33744 (READ)
// 004e53fd: JZ 0x004e5459
//   XREF to: 004e5459 (CONDITIONAL_JUMP)
// 004e53ff: PUSH EBX
// 004e5400: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 004e5405: MOV EBX,dword ptr [EAX + 0x15ac80]
//   XREF to: 0326eef8 (READ)
// 004e540b: MOV dword ptr [EAX + 0x15ac80],0x3
//   XREF to: 0326eef8 (WRITE)
// 004e5415: MOV ECX,dword ptr [EDX + 0xbeec]
// 004e541b: SHL ECX,0x8
// 004e541e: MOV dword ptr [EAX + 0x15ae88],ECX
//   XREF to: 0326f100 (WRITE)
// 004e5424: MOV ECX,dword ptr [EDX + 0xbef0]
// 004e542a: SHL ECX,0x8
// 004e542d: MOV dword ptr [EAX + 0x15ae8c],ECX
//   XREF to: 0326f104 (WRITE)
// 004e5433: MOV ECX,dword ptr [EDX + 0xbef4]
// 004e5439: SHL ECX,0x8
// 004e543c: PUSH EDX
// 004e543d: MOV dword ptr [EAX + 0x15ae90],ECX
//   XREF to: 0326f108 (WRITE)
// 004e5443: CALL core_charactr.cpp_CCharacter_FUN_0042a2c0
//   XREF to: 0042a2c0 (UNCONDITIONAL_CALL)
// 004e5448: MOV EDX,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 004e544e: ADD ESP,0x4
// 004e5451: MOV dword ptr [EDX + 0x15ac80],EBX
//   XREF to: 0326eef8 (WRITE)
// 004e5457: POP EBX
// 004e5458: RET
// 004e5459: PUSH EDX
//   Label: LAB_004e5459
// 004e545a: CALL core_charactr.cpp_CCharacter_FUN_0042a2c0
//   XREF to: 0042a2c0 (UNCONDITIONAL_CALL)
// 004e545f: ADD ESP,0x4
// 004e5462: RET
