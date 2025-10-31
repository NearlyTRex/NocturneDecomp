// Name: core_boneguy.cpp_FUN_0041d8a0
// Address: 0041d8a0
// Address Range: [[0041d8a0, 0041d96d]]
// Convention: unknown
// Signature: undefined core_boneguy.cpp_FUN_0041d8a0()
// Cross-references:
//   core_boneguy.cpp_FUN_0041bf90 (0041bf90) at 0041c054 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_boneguy_comeback_wav_00616358
// Function calls:
//   core_xform.cpp_eulerToQuaternion_FUN_005f7b20

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_boneguy.cpp_FUN_0041d8a0(undefined4 param_1) */

void core_boneguy_cpp_FUN_0041d8a0(void)

{
  int iVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  byte bVar6;
  int in_stack_00000004;
  int aiStackY_1800 [1526];
  CVector3f *in_stack_ffffffdc;
  int local_14;
  
  bVar6 = 0;
  local_14 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0xbf38)) {
    puVar3 = (undefined4 *)(in_stack_00000004 + 0xbf74);
    iVar2 = in_stack_00000004;
    do {
      core_xform_cpp_eulerToQuaternion_FUN_005f7b20
                ((CQuaternion4f *)(*(int *)(iVar2 + 0xbf80) + 0x30),in_stack_ffffffdc);
      puVar4 = (undefined4 *)(iVar2 + 0xbf58 + (uint)bVar6 * -8);
      *(CVector3f **)(iVar2 + 0xbf54) = in_stack_ffffffdc;
      puVar5 = puVar4 + (uint)bVar6 * -2 + 1;
      *puVar4 = *(undefined4 *)(&stack0xffffffe0 + (uint)bVar6 * -8);
      *puVar5 = *(undefined4 *)(&stack0xffffffe4 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      puVar5[(uint)bVar6 * -2 + 1] =
           *(undefined4 *)
            ((int)(&stack0xffffffe4 + (uint)bVar6 * -8 + (uint)bVar6 * -8) +
            ((uint)bVar6 * -2 + 1) * 4);
      *(undefined4 *)(*(int *)(iVar2 + 0xbf80) + 0xf20) = 0;
      iVar1 = *(int *)(iVar2 + 0xbf80);
      if (puVar3 != (undefined4 *)(iVar1 + 0x20)) {
        *puVar3 = *(undefined4 *)(iVar1 + 0x20);
        puVar3[1] = *(undefined4 *)(iVar1 + 0x24);
        puVar3[2] = *(undefined4 *)(iVar1 + 0x28);
      }
      local_14 = local_14 + 1;
      puVar3 = puVar3 + 0x12;
      iVar2 = iVar2 + 0x48;
    } while (local_14 < *(int *)(in_stack_00000004 + 0xbf38));
  }
  *(undefined4 *)(in_stack_00000004 + 0xc4dc) = 2;
  *(undefined4 *)(in_stack_00000004 + 0xc4e0) = 0;
  (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x24))();
  return;
}


// Assembly code:
// 0041d8a0: PUSH EBX
//   Label: core_boneguy.cpp_FUN_0041d8a0
// 0041d8a1: PUSH ESI
// 0041d8a2: PUSH EDI
// 0041d8a3: PUSH EBP
// 0041d8a4: SUB ESP,0x14
// 0041d8a7: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 0041d8ab: XOR EDX,EDX
// 0041d8ad: MOV ECX,dword ptr [EAX + 0xbf38]
// 0041d8b3: MOV dword ptr [ESP + 0x10],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 0041d8b7: TEST ECX,ECX
// 0041d8b9: JLE 0x0041d938
//   XREF to: 0041d938 (CONDITIONAL_JUMP)
// 0041d8bf: LEA EBP,[EAX + 0xbf74]
// 0041d8c5: MOV EBX,EAX
// 0041d8c7: MOV EAX,dword ptr [EBX + 0xbf80]
//   Label: LAB_0041d8c7
// 0041d8cd: ADD EAX,0x30
// 0041d8d0: PUSH EAX
// 0041d8d1: LEA ESI,[ESP + 0x4]
//   XREF to: Stack[-0x24] (DATA)
// 0041d8d5: CALL core_xform.cpp_eulerToQuaternion_FUN_005f7b20
//   XREF to: 005f7b20 (UNCONDITIONAL_CALL)
// 0041d8da: LEA ESI,[ESP + 0x4]
//   XREF to: Stack[-0x24] (DATA)
// 0041d8de: LEA EDI,[EBX + 0xbf54]
// 0041d8e4: ADD ESP,0x4
// 0041d8e7: MOVSD ES:EDI,ESI
// 0041d8e8: MOVSD ES:EDI,ESI
// 0041d8e9: MOVSD ES:EDI,ESI
// 0041d8ea: MOVSD ES:EDI,ESI
// 0041d8eb: MOV EAX,dword ptr [EBX + 0xbf80]
// 0041d8f1: MOV dword ptr [EAX + 0xf20],0x0
// 0041d8fb: MOV EAX,dword ptr [EBX + 0xbf80]
// 0041d901: ADD EAX,0x20
// 0041d904: CMP EBP,EAX
// 0041d906: JZ 0x0041d919
//   XREF to: 0041d919 (CONDITIONAL_JUMP)
// 0041d908: MOV EDX,dword ptr [EAX]
// 0041d90a: MOV dword ptr [EBP],EDX
// 0041d90d: MOV EDX,dword ptr [EAX + 0x4]
// 0041d910: MOV dword ptr [EBP + 0x4],EDX
// 0041d913: MOV EDX,dword ptr [EAX + 0x8]
// 0041d916: MOV dword ptr [EBP + 0x8],EDX
// 0041d919: MOV ESI,dword ptr [ESP + 0x10]
//   Label: LAB_0041d919
//   XREF to: Stack[-0x14] (DATA)
// 0041d91d: INC ESI
// 0041d91e: MOV dword ptr [ESP + 0x10],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 0041d922: MOV EAX,ESI
// 0041d924: MOV ESI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 0041d928: ADD EBP,0x48
// 0041d92b: MOV EDI,dword ptr [ESI + 0xbf38]
// 0041d931: ADD EBX,0x48
// 0041d934: CMP EAX,EDI
// 0041d936: JL 0x0041d8c7
//   XREF to: 0041d8c7 (CONDITIONAL_JUMP)
// 0041d938: MOV EAX,dword ptr [ESP + 0x28]
//   Label: LAB_0041d938
//   XREF to: Stack[0x4] (READ)
// 0041d93c: PUSH 0x616358
//   XREF to: 00616358 (DATA)
// 0041d941: MOV dword ptr [EAX + 0xc4dc],0x2
// 0041d94b: MOV EBP,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 0041d94f: MOV dword ptr [EAX + 0xc4e0],0x0
// 0041d959: PUSH EBP
// 0041d95a: MOV EAX,dword ptr [EAX + 0x154]
// 0041d960: CALL dword ptr [EAX + 0x24]
// 0041d963: ADD ESP,0x8
// 0041d966: ADD ESP,0x14
// 0041d969: POP EBP
// 0041d96a: POP EDI
// 0041d96b: POP ESI
// 0041d96c: POP EBX
// 0041d96d: RET
