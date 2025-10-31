// Name: core_ghoul.cpp_FUN_004e84a0
// Address: 004e84a0
// Address Range: [[004e84a0, 004e8502]]
// Convention: unknown
// Signature: undefined core_ghoul.cpp_FUN_004e84a0()
// Globals:
//   undefined4 DAT_02d832fc
// Function calls:
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059f820
//   core_xform.cpp_transformVector3x4_FUN_005f4dc0

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_ghoul.cpp_FUN_004e84a0(undefined4 param_1, undefined4 param_2)
    */

CVector3f * core_ghoul_cpp_FUN_004e84a0(void)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  undefined4 *puVar2;
  undefined4 *puVar3;
  byte bVar4;
  CVector3f *in_stack_00000008;
  undefined4 local_4c [12];
  CVector3f local_1c;
  
  bVar4 = 0;
  core_skeleton_cpp_CDeformableModelInstance_FUN_0059f820();
  puVar2 = local_4c;
  puVar3 = (undefined4 *)&stack0xffffff84;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  local_1c.y = 0.7;
  local_1c.x = 0.0;
  local_1c.z = 0.3;
  core_xform_cpp_transformVector3x4_FUN_005f4dc0
            (in_stack_00000008,&local_1c,(CMatrix3x4f *)&stack0xffffff84);
  return in_stack_00000008;
}


// Assembly code:
// 004e84a0: PUSH EBX
//   Label: core_ghoul.cpp_FUN_004e84a0
// 004e84a1: PUSH ESI
// 004e84a2: PUSH EDI
// 004e84a3: PUSH EBP
// 004e84a4: MOV EBP,ESP
// 004e84a6: SUB ESP,0x6c
// 004e84a9: MOV EBX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004e84ac: MOV EDX,dword ptr [0x02d832fc]
//   XREF to: 02d832fc (READ)
// 004e84b2: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004e84b5: PUSH EDX
// 004e84b6: ADD ESI,0x158
// 004e84bc: PUSH ESI
// 004e84bd: LEA ESI,[EBP + -0x3c]
//   XREF to: Stack[-0x4c] (DATA)
// 004e84c0: LEA EDI,[EBP + -0x6c]
//   XREF to: Stack[-0x7c] (DATA)
// 004e84c3: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059f820
//   XREF to: 0059f820 (UNCONDITIONAL_CALL)
// 004e84c8: MOV ECX,0xc
// 004e84cd: LEA ESI,[EBP + -0x3c]
//   XREF to: Stack[-0x4c] (DATA)
// 004e84d0: MOVSD.REP ES:EDI,ESI
// 004e84d2: ADD ESP,0x8
// 004e84d5: LEA ESI,[EBP + -0x6c]
//   XREF to: Stack[-0x7c] (DATA)
// 004e84d8: PUSH ESI
// 004e84d9: MOV dword ptr [EBP + -0x8],0x3f333333
//   XREF to: Stack[-0x18] (WRITE)
// 004e84e0: LEA ESI,[EBP + -0xc]
//   XREF to: Stack[-0x1c] (DATA)
// 004e84e3: PUSH ESI
// 004e84e4: MOV EDI,0x3e99999a
// 004e84e9: XOR ECX,ECX
// 004e84eb: PUSH EBX
// 004e84ec: MOV dword ptr [EBP + -0xc],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 004e84ef: MOV dword ptr [EBP + -0x4],EDI
//   XREF to: Stack[-0x14] (WRITE)
// 004e84f2: CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
// 004e84f7: ADD ESP,0xc
// 004e84fa: MOV EAX,EBX
// 004e84fc: MOV ESP,EBP
// 004e84fe: POP EBP
// 004e84ff: POP EDI
// 004e8500: POP ESI
// 004e8501: POP EBX
// 004e8502: RET
