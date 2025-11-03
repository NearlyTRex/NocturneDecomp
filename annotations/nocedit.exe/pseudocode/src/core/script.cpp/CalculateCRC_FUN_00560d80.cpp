// Name: core_script.cpp_CalculateCRC_FUN_00560d80
// Address: 00560d80
// Address Range: [[00560d80, 00560dd5]]
// Convention: unknown
// Signature: undefined core_script.cpp_CalculateCRC_FUN_00560d80()
// Cross-references:
//   core_script.cpp_CScript_WriteScriptFile_FUN_00560b50 (00560b50) at 00560d5f [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_loadState_FUN_00560820 (00560820) at 00560b17 [UNCONDITIONAL_CALL]
// Function calls:
//   core_actor.cpp_crc32ProcessByte_FUN_0040ce30

#include "nocturne.h"

/* Signature: int core_script.cpp_CalculateCRC(CScript* param_1) */

uint core_script_cpp_CalculateCRC_FUN_00560d80(void)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  BADSPACEBASE *in_ESP;
  int iVar4;
  int iVar5;
  int in_stack_00000004;
  uint local_14;
  
  local_14 = 0;
  iVar5 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0x30)) {
    iVar4 = 0;
    do {
      pbVar2 = *(byte **)(iVar4 + 4 + *(int *)(in_stack_00000004 + 0x34));
      bVar1 = *pbVar2;
      while (pbVar3 = pbVar2, bVar1 != 0) {
        bVar1 = *pbVar3;
        pbVar3 = pbVar3 + 1;
        core_actor_cpp_crc32ProcessByte_FUN_0040ce30(&local_14,bVar1);
        bVar1 = *pbVar3;
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 8;
    } while (iVar5 < *(int *)(in_stack_00000004 + 0x30));
  }
  return local_14;
}


// Assembly code:
// 00560d80: PUSH EBX
//   Label: core_script.cpp_CalculateCRC_FUN_00560d80
// 00560d81: PUSH ESI
// 00560d82: PUSH EDI
// 00560d83: PUSH EBP
// 00560d84: SUB ESP,0x4
// 00560d87: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 00560d8b: XOR EDX,EDX
// 00560d8d: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x14] (DATA)
// 00560d90: MOV ECX,dword ptr [EBP + 0x30]
// 00560d93: XOR EDI,EDI
// 00560d95: TEST ECX,ECX
// 00560d97: JLE 0x00560dcb
//   XREF to: 00560dcb (CONDITIONAL_JUMP)
// 00560d99: XOR ESI,ESI
// 00560d9b: MOV EAX,dword ptr [EBP + 0x34]
//   Label: LAB_00560d9b
// 00560d9e: MOV EBX,dword ptr [ESI + EAX*0x1 + 0x4]
// 00560da2: CMP byte ptr [EBX],0x0
// 00560da5: JZ 0x00560dc0
//   XREF to: 00560dc0 (CONDITIONAL_JUMP)
// 00560da7: XOR EAX,EAX
//   Label: LAB_00560da7
// 00560da9: MOV AL,byte ptr [EBX]
// 00560dab: PUSH EAX
// 00560dac: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x14] (DATA)
// 00560db0: PUSH EAX
// 00560db1: INC EBX
// 00560db2: CALL core_actor.cpp_crc32ProcessByte_FUN_0040ce30
//   XREF to: 0040ce30 (UNCONDITIONAL_CALL)
// 00560db7: MOV DL,byte ptr [EBX]
// 00560db9: ADD ESP,0x8
// 00560dbc: TEST DL,DL
// 00560dbe: JNZ 0x00560da7
//   XREF to: 00560da7 (CONDITIONAL_JUMP)
// 00560dc0: INC EDI
//   Label: LAB_00560dc0
// 00560dc1: MOV EBX,dword ptr [EBP + 0x30]
// 00560dc4: ADD ESI,0x8
// 00560dc7: CMP EDI,EBX
// 00560dc9: JL 0x00560d9b
//   XREF to: 00560d9b (CONDITIONAL_JUMP)
// 00560dcb: MOV EAX,dword ptr [ESP]
//   Label: LAB_00560dcb
//   XREF to: Stack[-0x14] (DATA)
// 00560dce: ADD ESP,0x4
// 00560dd1: POP EBP
// 00560dd2: POP EDI
// 00560dd3: POP ESI
// 00560dd4: POP EBX
// 00560dd5: RET
