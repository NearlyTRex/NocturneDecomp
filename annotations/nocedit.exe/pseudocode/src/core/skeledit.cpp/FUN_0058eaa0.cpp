// Name: core_skeledit.cpp_FUN_0058eaa0
// Address: 0058eaa0
// Address Range: [[0058eaa0, 0058ec5c]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_0058eaa0()
// Globals:
//   TerminatedCString s_Optimizing_deformable_mo_0064b072
//   TerminatedCString s_Optimized_deformable_mod_0064b09a
//   double DOUBLE_0064b0c2 = 0.0100000000000000
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CEditorTools g_CEditorToolsPtr
// Function calls:
//   crt_stack.c_stack_probe_FUN_005ff9f3
//   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790

#include "nocturne.h"

void core_skeledit_cpp_FUN_0058eaa0(void)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  float *pfVar5;
  int *in_stack_0000000c;
  int local_34;
  int local_30;
  int local_28;
  float *local_20;
  float *local_1c;
  float local_18;
  float *local_14;
  int iStack_10;
  int iVar6;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x4c);
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Optimizing deformable model vertices...");
  local_30 = 0;
  if (0 < *in_stack_0000000c) {
    local_34 = 0;
    do {
      iVar6 = 0;
      for (local_28 = 0; local_28 < *(int *)((int)in_stack_0000000c + local_34 + 0x2c);
          local_28 = local_28 + 1) {
        pfVar1 = (float *)(iVar6 + *(int *)((int)in_stack_0000000c + local_34 + 0x40));
        if (1 < *(byte *)pfVar1) {
          pfVar2 = pfVar1 + 4;
          iVar4 = 0;
          iStack_10 = 0;
          pfVar3 = pfVar2;
          pfVar5 = pfVar1;
          local_20 = pfVar1;
          local_1c = pfVar1;
          local_14 = pfVar1;
          while( true ) {
            if ((int)(uint)*(byte *)pfVar1 <= iVar4) break;
            if ((float)DOUBLE_0064b0c2 < pfVar5[1]) {
              if (iStack_10 < iVar4) {
                *(undefined1 *)((int)local_20 + 1) = *(undefined1 *)((int)local_1c + 1);
                local_14[1] = pfVar5[1];
                if (pfVar3 != pfVar2) {
                  *pfVar3 = *pfVar2;
                  pfVar3[1] = pfVar2[1];
                  pfVar3[2] = pfVar2[2];
                }
              }
              local_14 = local_14 + 1;
              pfVar3 = pfVar3 + 3;
              local_20 = (float *)((int)local_20 + 1);
              iStack_10 = iStack_10 + 1;
            }
            pfVar2 = pfVar2 + 3;
            iVar4 = iVar4 + 1;
            local_1c = (float *)((int)local_1c + 1);
            pfVar5 = pfVar5 + 1;
          }
          if (iStack_10 < (int)(uint)*(byte *)pfVar1) {
            local_18 = 0.0;
            *(undefined1 *)pfVar1 = (undefined1)iStack_10;
            pfVar2 = pfVar1;
            for (iVar4 = 0; iVar4 < (int)(uint)*(byte *)pfVar1; iVar4 = iVar4 + 1) {
              pfVar2 = pfVar2 + 1;
              local_18 = local_18 + *pfVar2;
            }
            pfVar2 = pfVar1;
            for (iVar4 = 0; iVar4 < (int)(uint)*(byte *)pfVar1; iVar4 = iVar4 + 1) {
              pfVar3 = pfVar2 + 1;
              pfVar2 = pfVar2 + 1;
              *pfVar2 = *pfVar3 / local_18;
            }
          }
        }
        iVar6 = iVar6 + 0x34;
      }
      local_34 = local_34 + 4;
      local_30 = local_30 + 1;
    } while (local_30 < *in_stack_0000000c);
  }
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Optimized deformable model vertices OK");
  return;
}


// Assembly code:
// 0058eaa0: PUSH 0x4c
//   Label: core_skeledit.cpp_FUN_0058eaa0
// 0058eaa5: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 0058eaaa: PUSH EBX
// 0058eaab: PUSH ESI
// 0058eaac: PUSH EDI
// 0058eaad: PUSH EBP
// 0058eaae: MOV EBP,ESP
// 0058eab0: SUB ESP,0x30
// 0058eab3: AND ESP,0xfffffff8
// 0058eab6: PUSH 0x64b072
//   XREF to: 0064b072 (DATA)
// 0058eabb: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0058eac1: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 0058eac2: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 0058eac7: ADD ESP,0x8
// 0058eaca: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0058eacd: XOR ECX,ECX
// 0058eacf: MOV EBX,dword ptr [EAX]
// 0058ead1: MOV dword ptr [ESP + 0x4],ECX
//   XREF to: Stack[-0x3c] (WRITE)
// 0058ead5: TEST EBX,EBX
// 0058ead7: JLE 0x0058eb44
//   XREF to: 0058eb44 (CONDITIONAL_JUMP)
// 0058ead9: MOV dword ptr [ESP],ECX
//   XREF to: Stack[-0x40] (DATA)
// 0058eadc: XOR ESI,ESI
//   Label: LAB_0058eadc
// 0058eade: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 0058eae1: MOV dword ptr [ESP + 0xc],ESI
//   XREF to: Stack[-0x34] (WRITE)
// 0058eae5: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0x38] (WRITE)
// 0058eae9: MOV dword ptr [ESP + 0x2c],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 0058eaed: MOV EDX,dword ptr [EBP + 0x14]
//   Label: LAB_0058eaed
//   XREF to: Stack[0x4] (READ)
// 0058eaf0: ADD EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x38] (READ)
// 0058eaf4: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x34] (READ)
// 0058eaf8: CMP ECX,dword ptr [EDX + 0x2c]
// 0058eafb: JGE 0x0058eb29
//   XREF to: 0058eb29 (CONDITIONAL_JUMP)
// 0058eafd: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x14] (READ)
// 0058eb01: MOV EDX,dword ptr [EDX + 0x40]
// 0058eb04: ADD EAX,EDX
// 0058eb06: XOR EDX,EDX
// 0058eb08: MOV DL,byte ptr [EAX]
// 0058eb0a: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0058eb0e: CMP EDX,0x2
// 0058eb11: JGE 0x0058eb5f
//   XREF to: 0058eb5f (CONDITIONAL_JUMP)
// 0058eb13: MOV EDX,dword ptr [ESP + 0xc]
//   Label: LAB_0058eb13
//   XREF to: Stack[-0x34] (READ)
// 0058eb17: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x14] (READ)
// 0058eb1b: INC EDX
// 0058eb1c: ADD EAX,0x34
// 0058eb1f: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x34] (WRITE)
// 0058eb23: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0058eb27: JMP 0x0058eaed
//   XREF to: 0058eaed (UNCONDITIONAL_JUMP)
// 0058eb29: MOV ESI,dword ptr [ESP]
//   Label: LAB_0058eb29
//   XREF to: Stack[-0x40] (DATA)
// 0058eb2c: MOV EDI,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x3c] (READ)
// 0058eb30: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0058eb33: ADD ESI,0x4
// 0058eb36: INC EDI
// 0058eb37: MOV ECX,dword ptr [EAX]
// 0058eb39: MOV dword ptr [ESP],ESI
//   XREF to: Stack[-0x40] (DATA)
// 0058eb3c: MOV dword ptr [ESP + 0x4],EDI
//   XREF to: Stack[-0x3c] (WRITE)
// 0058eb40: CMP EDI,ECX
// 0058eb42: JL 0x0058eadc
//   XREF to: 0058eadc (CONDITIONAL_JUMP)
// 0058eb44: PUSH 0x64b09a
//   Label: LAB_0058eb44
//   XREF to: 0064b09a (DATA)
// 0058eb49: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0058eb4f: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 0058eb50: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 0058eb55: ADD ESP,0x8
// 0058eb58: MOV ESP,EBP
// 0058eb5a: POP EBP
// 0058eb5b: POP EDI
// 0058eb5c: POP ESI
// 0058eb5d: POP EBX
// 0058eb5e: RET
// 0058eb5f: LEA ECX,[EAX + 0x10]
//   Label: LAB_0058eb5f
// 0058eb62: XOR ESI,ESI
// 0058eb64: XOR EBX,EBX
// 0058eb66: MOV dword ptr [ESP + 0x24],ESI
//   XREF to: Stack[-0x1c] (WRITE)
// 0058eb6a: MOV EDX,ECX
// 0058eb6c: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0058eb70: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 0058eb74: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0058eb78: MOV ESI,EAX
// 0058eb7a: MOV EDI,dword ptr [ESP + 0x28]
//   Label: LAB_0058eb7a
//   XREF to: Stack[-0x18] (READ)
// 0058eb7e: XOR EAX,EAX
// 0058eb80: MOV AL,byte ptr [EDI]
// 0058eb82: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 0058eb86: CMP EBX,EAX
// 0058eb88: JGE 0x0058ec02
//   XREF to: 0058ec02 (CONDITIONAL_JUMP)
// 0058eb8e: FLD float ptr [ESI + 0x4]
// 0058eb91: FCOMP double ptr [0x0064b0c2]
//   XREF to: 0064b0c2 (READ)
// 0058eb97: FNSTSW AX
// 0058eb99: SAHF
// 0058eb9a: JA 0x0058ebae
//   XREF to: 0058ebae (CONDITIONAL_JUMP)
// 0058eb9c: MOV EDI,dword ptr [ESP + 0x18]
//   Label: LAB_0058eb9c
//   XREF to: Stack[-0x28] (READ)
// 0058eba0: ADD ECX,0xc
// 0058eba3: INC EBX
// 0058eba4: INC EDI
// 0058eba5: ADD ESI,0x4
// 0058eba8: MOV dword ptr [ESP + 0x18],EDI
//   XREF to: Stack[-0x28] (WRITE)
// 0058ebac: JMP 0x0058eb7a
//   XREF to: 0058eb7a (UNCONDITIONAL_JUMP)
// 0058ebae: CMP EBX,dword ptr [ESP + 0x24]
//   Label: LAB_0058ebae
//   XREF to: Stack[-0x1c] (READ)
// 0058ebb2: JLE 0x0058ebe0
//   XREF to: 0058ebe0 (CONDITIONAL_JUMP)
// 0058ebb4: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x28] (READ)
// 0058ebb8: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x2c] (READ)
// 0058ebbc: MOV AL,byte ptr [EAX + 0x1]
// 0058ebbf: MOV byte ptr [EDI + 0x1],AL
// 0058ebc2: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x20] (READ)
// 0058ebc6: MOV EDI,dword ptr [ESI + 0x4]
// 0058ebc9: MOV dword ptr [EAX + 0x4],EDI
// 0058ebcc: CMP EDX,ECX
// 0058ebce: JZ 0x0058ebe0
//   XREF to: 0058ebe0 (CONDITIONAL_JUMP)
// 0058ebd0: MOV EAX,dword ptr [ECX]
// 0058ebd2: MOV dword ptr [EDX],EAX
// 0058ebd4: MOV EAX,dword ptr [ECX + 0x4]
// 0058ebd7: MOV dword ptr [EDX + 0x4],EAX
// 0058ebda: MOV EAX,dword ptr [ECX + 0x8]
// 0058ebdd: MOV dword ptr [EDX + 0x8],EAX
// 0058ebe0: MOV EAX,dword ptr [ESP + 0x20]
//   Label: LAB_0058ebe0
//   XREF to: Stack[-0x20] (READ)
// 0058ebe4: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x2c] (READ)
// 0058ebe8: ADD EAX,0x4
// 0058ebeb: ADD EDX,0xc
// 0058ebee: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0058ebf2: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x1c] (READ)
// 0058ebf6: INC EDI
// 0058ebf7: INC EAX
// 0058ebf8: MOV dword ptr [ESP + 0x14],EDI
//   XREF to: Stack[-0x2c] (WRITE)
// 0058ebfc: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0058ec00: JMP 0x0058eb9c
//   XREF to: 0058eb9c (UNCONDITIONAL_JUMP)
// 0058ec02: MOV EAX,dword ptr [ESP + 0x24]
//   Label: LAB_0058ec02
//   XREF to: Stack[-0x1c] (READ)
// 0058ec06: CMP EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x30] (READ)
// 0058ec0a: JGE 0x0058eb13
//   XREF to: 0058eb13 (CONDITIONAL_JUMP)
// 0058ec10: MOV AL,byte ptr [ESP + 0x24]
//   XREF to: Stack[-0x1c] (READ)
// 0058ec14: XOR ECX,ECX
// 0058ec16: MOV EDX,EDI
// 0058ec18: MOV dword ptr [ESP + 0x1c],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 0058ec1c: MOV byte ptr [EDI],AL
// 0058ec1e: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x18] (READ)
// 0058ec22: XOR EBX,EBX
//   Label: LAB_0058ec22
// 0058ec24: MOV BL,byte ptr [EAX]
// 0058ec26: CMP ECX,EBX
// 0058ec28: JGE 0x0058ec3a
//   XREF to: 0058ec3a (CONDITIONAL_JUMP)
// 0058ec2a: ADD EDX,0x4
// 0058ec2d: FLD float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x24] (READ)
// 0058ec31: FADD float ptr [EDX]
// 0058ec33: INC ECX
// 0058ec34: FSTP float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x24] (WRITE)
// 0058ec38: JMP 0x0058ec22
//   XREF to: 0058ec22 (UNCONDITIONAL_JUMP)
// 0058ec3a: MOV EDX,EAX
//   Label: LAB_0058ec3a
// 0058ec3c: XOR ECX,ECX
// 0058ec3e: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x18] (READ)
// 0058ec42: XOR EBX,EBX
//   Label: LAB_0058ec42
// 0058ec44: MOV BL,byte ptr [EAX]
// 0058ec46: CMP ECX,EBX
// 0058ec48: JGE 0x0058eb13
//   XREF to: 0058eb13 (CONDITIONAL_JUMP)
// 0058ec4e: FLD float ptr [EDX + 0x4]
// 0058ec51: FDIV float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x24] (READ)
// 0058ec55: ADD EDX,0x4
// 0058ec58: INC ECX
// 0058ec59: FSTP float ptr [EDX]
// 0058ec5b: JMP 0x0058ec42
//   XREF to: 0058ec42 (UNCONDITIONAL_JUMP)
