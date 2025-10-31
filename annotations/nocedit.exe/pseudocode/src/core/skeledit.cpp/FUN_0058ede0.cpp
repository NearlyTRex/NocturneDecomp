// Name: core_skeledit.cpp_FUN_0058ede0
// Address: 0058ede0
// Address Range: [[0058ede0, 0058f033]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_0058ede0()
// Cross-references:
//   core_skeledit.cpp_FUN_0058b9b0 (0058b9b0) at 0058bbd5 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Searching_for_duplicate__0064b125
//   TerminatedCString s_d_duplicate_faces_remove_0064b144
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CEditorTools g_CEditorToolsPtr
// Function calls:
//   crt_stack.c_stack_probe_FUN_005ff9f3
//   crt_string.c_memmove_FUN_005fe5e0
//   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790

#include "nocturne.h"

void core_skeledit_cpp_FUN_0058ede0(void)

{
  int *n;
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  int *in_stack_00000010;
  int *piVar5;
  int local_44;
  int local_30;
  int local_2c;
  int local_24;
  int local_14;
  int iStack_10;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(100);
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Searching for duplicate faces.");
  local_44 = 0;
  piVar5 = in_stack_00000010;
  if (0 < *in_stack_00000010) {
    do {
      local_30 = 0x24;
      local_24 = 1;
      local_2c = 0x12;
      n = piVar5;
LAB_0058ee5a:
      if (local_24 < in_stack_00000010[local_44 + 0x15]) {
        if (0 < local_24) {
          iStack_10 = 0;
          local_14 = 0;
          do {
            if (*(int *)(local_24 * 4 + piVar5[0x24]) == *(int *)(iStack_10 + piVar5[0x24])) {
              iVar3 = 0;
              do {
                iVar2 = 0;
                iVar1 = iVar3;
                psVar4 = (short *)(local_2c + in_stack_00000010[local_44 + 0x1f]);
                do {
                  if (*psVar4 != *(short *)(piVar5[0x1f] + local_14 + (iVar1 % 3) * 2)) break;
                  iVar1 = iVar1 + 1;
                  iVar2 = iVar2 + 1;
                  psVar4 = psVar4 + 1;
                } while (iVar2 < 3);
                if (iVar2 == 3) {
                  iVar3 = piVar5[0x15];
                  piVar5[0x15] = iVar3 + -1;
                  crt_string_c_memmove_FUN_005fe5e0
                            ((void *)(piVar5[0x1f] + local_2c),(void *)(local_30 + piVar5[0x1f]),
                             ((iVar3 + -1) - local_24) * 0x12);
                  n = (int *)((*(int *)(local_24 + 0x54) + local_24 * -4) * 4);
                  crt_string_c_memmove_FUN_005fe5e0
                            ((void *)(*(int *)(local_24 + 0x90) + local_24 * 0x10),
                             (void *)(local_30 + *(int *)(local_24 + 0x90)),(SIZE_T)n);
                  local_30 = local_30 + 1;
                  goto LAB_0058ee5a;
                }
                iVar3 = iVar3 + 1;
              } while (iVar3 < 3);
            }
            local_14 = local_14 + 0x12;
            iStack_10 = iStack_10 + 4;
          } while (iStack_10 < local_24 * 4);
        }
        local_2c = local_2c + 0x12;
        local_30 = local_30 + 0x12;
        local_24 = local_24 + 1;
        goto LAB_0058ee5a;
      }
      local_44 = local_44 + 1;
      piVar5 = n + 1;
    } while (local_44 < *in_stack_00000010);
  }
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"%d duplicate faces removed.");
  return;
}


// Assembly code:
// 0058ede0: PUSH 0x64
//   Label: core_skeledit.cpp_FUN_0058ede0
// 0058ede5: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 0058edea: PUSH EBX
// 0058edeb: PUSH ESI
// 0058edec: PUSH EDI
// 0058eded: PUSH EBP
// 0058edee: SUB ESP,0x44
// 0058edf1: PUSH 0x64b125
//   XREF to: 0064b125 (DATA)
// 0058edf6: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0058edfc: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 0058edfd: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 0058ee02: ADD ESP,0x8
// 0058ee05: XOR ECX,ECX
// 0058ee07: MOV EAX,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x4] (READ)
// 0058ee0b: MOV dword ptr [ESP + 0x10],ECX
//   XREF to: Stack[-0x44] (WRITE)
// 0058ee0f: MOV ESI,dword ptr [EAX]
// 0058ee11: MOV dword ptr [ESP + 0x4],ECX
//   XREF to: Stack[-0x50] (WRITE)
// 0058ee15: TEST ESI,ESI
// 0058ee17: JLE 0x0058ef9b
//   XREF to: 0058ef9b (CONDITIONAL_JUMP)
// 0058ee1d: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x54] (DATA)
// 0058ee20: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_0058ee20
//   XREF to: Stack[-0x50] (READ)
// 0058ee24: MOV EBP,0x8
// 0058ee29: MOV EDX,0x24
// 0058ee2e: MOV EDI,0x1
// 0058ee33: SHL EAX,0x2
// 0058ee36: MOV dword ptr [ESP + 0x14],EBP
//   XREF to: Stack[-0x40] (WRITE)
// 0058ee3a: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 0058ee3e: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x54] (DATA)
// 0058ee41: MOV dword ptr [ESP + 0x18],EDX
//   XREF to: Stack[-0x3c] (WRITE)
// 0058ee45: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 0058ee49: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0058ee4d: MOV EAX,0x12
// 0058ee52: MOV dword ptr [ESP + 0x24],EDI
//   XREF to: Stack[-0x30] (WRITE)
// 0058ee56: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 0058ee5a: MOV EAX,dword ptr [ESP + 0x58]
//   Label: LAB_0058ee5a
//   XREF to: Stack[0x4] (READ)
// 0058ee5e: ADD EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x4c] (READ)
// 0058ee62: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x30] (READ)
// 0058ee66: CMP EDX,dword ptr [EAX + 0x54]
// 0058ee69: JGE 0x0058ef7b
//   XREF to: 0058ef7b (CONDITIONAL_JUMP)
// 0058ee6f: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x38] (READ)
// 0058ee73: MOV EAX,dword ptr [EAX + 0x7c]
// 0058ee76: ADD EDX,EAX
// 0058ee78: MOV dword ptr [ESP + 0x3c],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 0058ee7c: XOR EAX,EAX
// 0058ee7e: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x30] (READ)
// 0058ee82: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 0058ee86: TEST EDX,EDX
// 0058ee88: JLE 0x0058efe7
//   XREF to: 0058efe7 (CONDITIONAL_JUMP)
// 0058ee8e: XOR ECX,ECX
// 0058ee90: LEA EAX,[EDX*0x4 + 0x0]
// 0058ee97: MOV dword ptr [ESP + 0x38],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 0058ee9b: MOV dword ptr [ESP + 0x34],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 0058ee9f: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 0058eea3: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0058eea7: MOV EAX,dword ptr [ESP + 0x30]
//   Label: LAB_0058eea7
//   XREF to: Stack[-0x24] (READ)
// 0058eeab: MOV EDX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x1c] (READ)
// 0058eeaf: MOV EAX,dword ptr [EAX + 0x90]
// 0058eeb5: MOV ECX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x28] (READ)
// 0058eeb9: ADD EDX,EAX
// 0058eebb: MOV EAX,dword ptr [ECX + EAX*0x1]
// 0058eebe: CMP EAX,dword ptr [EDX]
// 0058eec0: JNZ 0x0058efc5
//   XREF to: 0058efc5 (CONDITIONAL_JUMP)
// 0058eec6: MOV EDI,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x24] (READ)
// 0058eeca: MOV EBP,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x20] (READ)
// 0058eece: MOV EDI,dword ptr [EDI + 0x7c]
// 0058eed1: ADD EDI,EBP
// 0058eed3: XOR EBP,EBP
// 0058eed5: MOV ESI,dword ptr [ESP + 0x3c]
//   Label: LAB_0058eed5
//   XREF to: Stack[-0x18] (READ)
// 0058eed9: MOV ECX,EBP
// 0058eedb: XOR EBX,EBX
// 0058eedd: MOV dword ptr [ESP + 0x40],0x3
//   Label: LAB_0058eedd
//   XREF to: Stack[-0x14] (WRITE)
// 0058eee5: MOV EDX,ECX
// 0058eee7: MOV EAX,ECX
// 0058eee9: SAR EDX,0x1f
// 0058eeec: IDIV dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x14] (READ)
// 0058eef0: ADD EDX,EDX
// 0058eef2: LEA EAX,[EDI + EDX*0x1]
// 0058eef5: MOV DX,word ptr [ESI]
// 0058eef8: CMP DX,word ptr [EAX]
// 0058eefb: JZ 0x0058f021
//   XREF to: 0058f021 (CONDITIONAL_JUMP)
// 0058ef01: CMP EBX,0x3
//   Label: LAB_0058ef01
// 0058ef04: JNZ 0x0058efbb
//   XREF to: 0058efbb (CONDITIONAL_JUMP)
// 0058ef0a: MOV EAX,dword ptr [ESP + 0x20]
//   Label: LAB_0058ef0a
//   XREF to: Stack[-0x34] (READ)
// 0058ef0e: MOV EDX,dword ptr [EAX + 0x54]
// 0058ef11: DEC EDX
// 0058ef12: MOV ECX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x30] (READ)
// 0058ef16: MOV dword ptr [EAX + 0x54],EDX
// 0058ef19: MOV EAX,EDX
// 0058ef1b: SUB EAX,ECX
// 0058ef1d: IMUL EAX,EAX,0x12
// 0058ef20: PUSH EAX
// 0058ef21: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x34] (READ)
// 0058ef25: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x3c] (READ)
// 0058ef29: MOV EAX,dword ptr [EAX + 0x7c]
// 0058ef2c: ADD EDX,EAX
// 0058ef2e: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x38] (READ)
// 0058ef32: PUSH EDX
// 0058ef33: ADD EAX,EBX
// 0058ef35: PUSH EAX
// 0058ef36: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 0058ef3b: ADD ESP,0xc
// 0058ef3e: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x34] (READ)
// 0058ef42: MOV ESI,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x30] (READ)
// 0058ef46: MOV EAX,dword ptr [EAX + 0x54]
// 0058ef49: SUB EAX,ESI
// 0058ef4b: SHL EAX,0x2
// 0058ef4e: PUSH EAX
// 0058ef4f: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x34] (READ)
// 0058ef53: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x40] (READ)
// 0058ef57: MOV EAX,dword ptr [EAX + 0x90]
// 0058ef5d: ADD ECX,EAX
// 0058ef5f: LEA EDX,[ESI*0x4 + 0x0]
// 0058ef66: PUSH ECX
// 0058ef67: ADD EAX,EDX
// 0058ef69: PUSH EAX
// 0058ef6a: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 0058ef6f: ADD ESP,0xc
// 0058ef72: INC dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x44] (READ_WRITE)
// 0058ef76: JMP 0x0058ee5a
//   XREF to: 0058ee5a (UNCONDITIONAL_JUMP)
// 0058ef7b: MOV EDI,dword ptr [ESP + 0x4]
//   Label: LAB_0058ef7b
//   XREF to: Stack[-0x50] (READ)
// 0058ef7f: MOV ESI,dword ptr [ESP]
//   XREF to: Stack[-0x54] (DATA)
// 0058ef82: MOV EDX,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x4] (READ)
// 0058ef86: INC EDI
// 0058ef87: ADD ESI,0x4
// 0058ef8a: MOV EBP,dword ptr [EDX]
// 0058ef8c: MOV dword ptr [ESP + 0x4],EDI
//   XREF to: Stack[-0x50] (WRITE)
// 0058ef90: MOV dword ptr [ESP],ESI
//   XREF to: Stack[-0x54] (DATA)
// 0058ef93: CMP EDI,EBP
// 0058ef95: JL 0x0058ee20
//   XREF to: 0058ee20 (CONDITIONAL_JUMP)
// 0058ef9b: MOV EBP,dword ptr [ESP + 0x10]
//   Label: LAB_0058ef9b
//   XREF to: Stack[-0x44] (READ)
// 0058ef9f: PUSH EBP
// 0058efa0: PUSH 0x64b144
//   XREF to: 0064b144 (DATA)
// 0058efa5: MOV EAX,[0x00678a60]
//   XREF to: 00678a60 (READ)
// 0058efaa: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 0058efab: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 0058efb0: ADD ESP,0xc
// 0058efb3: ADD ESP,0x44
// 0058efb6: POP EBP
// 0058efb7: POP EDI
// 0058efb8: POP ESI
// 0058efb9: POP EBX
// 0058efba: RET
// 0058efbb: INC EBP
//   Label: LAB_0058efbb
// 0058efbc: CMP EBP,0x3
// 0058efbf: JL 0x0058eed5
//   XREF to: 0058eed5 (CONDITIONAL_JUMP)
// 0058efc5: MOV EDX,dword ptr [ESP + 0x34]
//   Label: LAB_0058efc5
//   XREF to: Stack[-0x20] (READ)
// 0058efc9: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x1c] (READ)
// 0058efcd: MOV ECX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x2c] (READ)
// 0058efd1: ADD EDX,0x12
// 0058efd4: ADD EAX,0x4
// 0058efd7: MOV dword ptr [ESP + 0x34],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 0058efdb: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0058efdf: CMP EAX,ECX
// 0058efe1: JL 0x0058eea7
//   XREF to: 0058eea7 (CONDITIONAL_JUMP)
// 0058efe7: CMP dword ptr [ESP + 0xc],0x0
//   Label: LAB_0058efe7
//   XREF to: Stack[-0x48] (READ)
// 0058efec: JNZ 0x0058ef0a
//   XREF to: 0058ef0a (CONDITIONAL_JUMP)
// 0058eff2: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x38] (READ)
// 0058eff6: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x3c] (READ)
// 0058effa: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x30] (READ)
// 0058effe: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x40] (READ)
// 0058f002: ADD EDI,0x12
// 0058f005: ADD EBP,0x12
// 0058f008: INC EAX
// 0058f009: ADD ESI,0x4
// 0058f00c: MOV dword ptr [ESP + 0x1c],EDI
//   XREF to: Stack[-0x38] (WRITE)
// 0058f010: MOV dword ptr [ESP + 0x18],EBP
//   XREF to: Stack[-0x3c] (WRITE)
// 0058f014: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 0058f018: MOV dword ptr [ESP + 0x14],ESI
//   XREF to: Stack[-0x40] (WRITE)
// 0058f01c: JMP 0x0058ee5a
//   XREF to: 0058ee5a (UNCONDITIONAL_JUMP)
// 0058f021: INC ECX
//   Label: LAB_0058f021
// 0058f022: INC EBX
// 0058f023: ADD ESI,0x2
// 0058f026: CMP EBX,0x3
// 0058f029: JL 0x0058eedd
//   XREF to: 0058eedd (CONDITIONAL_JUMP)
// 0058f02f: JMP 0x0058ef01
//   XREF to: 0058ef01 (UNCONDITIONAL_JUMP)
