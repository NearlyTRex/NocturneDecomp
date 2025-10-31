// Name: core_setedit.cpp_CDemonSet_FUN_0057ff70
// Address: 0057ff70
// Address Range: [[0057ff70, 005800cf]]
// Convention: __cdecl
// Signature: void core_setedit.cpp_CDemonSet_FUN_0057ff70(CDemonSet * this_ptr)
// Cross-references:
//   core_setedit.cpp_CDemonSet_ViewerVisitSet_FUN_0057a940 (0057a940) at 0057ab2e [UNCONDITIONAL_CALL]
//   core_setedit.cpp_UserInputCreate_FUN_0057d660 (0057d660) at 0057dfca [UNCONDITIONAL_CALL]
// Globals:
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   void*[1024] g_ScreenBufferArray
//   undefined4 g_ScreenBufferArray[1]

#include "nocturne.h"

void __cdecl core_setedit_cpp_CDemonSet_FUN_0057ff70(CDemonSet *this_ptr)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  char *in_stack_00000008;
  int local_28;
  int local_24;
  char *local_1c;
  int local_18;
  int local_14;
  
  local_28 = 0;
  local_1c = in_stack_00000008;
  if (0 < g_WindowHeight) {
    local_24 = 0;
    do {
      local_14 = 0;
      if (0 < g_WindowWidth) {
        local_18 = 0;
        do {
          cVar1 = *local_1c;
          if (cVar1 != '\0') {
            puVar5 = (uint *)(*(int *)((int)g_ScreenBufferArray + local_24) + local_18);
            uVar2 = ((*puVar5 & 0xff) + (*puVar5 >> 0x10 & 0xff) + (*puVar5 >> 8 & 0xff)) / 3;
            if (cVar1 == '\x01') {
              uVar3 = 0;
              uVar4 = uVar2;
            }
            else {
              uVar4 = (int)(uVar2 * 3) >> 2;
              uVar3 = (int)uVar2 >> 2;
              if (cVar1 != '\x02') {
                if (cVar1 == '\x03') {
                  uVar3 = uVar2 / 2;
                  uVar4 = uVar2 / 2;
                }
                else {
                  uVar3 = uVar4;
                  uVar4 = (int)uVar2 >> 2;
                  if (cVar1 != '\x04') {
                    uVar3 = uVar2;
                    uVar4 = 0;
                  }
                }
              }
            }
            *puVar5 = uVar3 * 0x10000 + uVar4;
          }
          local_1c = local_1c + 1;
          local_18 = local_18 + 4;
          local_14 = local_14 + 1;
        } while (local_14 < g_WindowWidth);
      }
      local_24 = local_24 + 4;
      local_28 = local_28 + 1;
    } while (local_28 < g_WindowHeight);
  }
  return;
}


// Assembly code:
// 0057ff70: PUSH EBX
//   Label: core_setedit.cpp_CDemonSet_FUN_0057ff70
// 0057ff71: PUSH ESI
// 0057ff72: PUSH EDI
// 0057ff73: PUSH EBP
// 0057ff74: SUB ESP,0x18
// 0057ff77: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x8] (READ)
// 0057ff7b: XOR EDX,EDX
// 0057ff7d: MOV ECX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 0057ff83: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x28] (DATA)
// 0057ff86: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0057ff8a: TEST ECX,ECX
// 0057ff8c: JLE 0x00580063
//   XREF to: 00580063 (CONDITIONAL_JUMP)
// 0057ff92: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 0057ff96: XOR EAX,EAX
//   Label: LAB_0057ff96
// 0057ff98: MOV EDX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 0057ff9e: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0057ffa2: TEST EDX,EDX
// 0057ffa4: JLE 0x00580043
//   XREF to: 00580043 (CONDITIONAL_JUMP)
// 0057ffaa: XOR EBP,EBP
// 0057ffac: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x24] (READ)
// 0057ffb0: MOV dword ptr [ESP + 0x10],EBP
//   XREF to: Stack[-0x18] (WRITE)
// 0057ffb4: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0057ffb8: MOV EAX,dword ptr [ESP + 0xc]
//   Label: LAB_0057ffb8
//   XREF to: Stack[-0x1c] (READ)
// 0057ffbc: XOR EBX,EBX
// 0057ffbe: MOV BL,byte ptr [EAX]
// 0057ffc0: TEST EBX,EBX
// 0057ffc2: JLE 0x00580018
//   XREF to: 00580018 (CONDITIONAL_JUMP)
// 0057ffc4: MOV ESI,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (READ)
// 0057ffc8: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x18] (READ)
// 0057ffcc: MOV ESI,dword ptr [ESI + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
//   XREF to: 02cf6aa0 (DATA)
// 0057ffd2: ADD ESI,EAX
// 0057ffd4: MOV ECX,dword ptr [ESI]
// 0057ffd6: MOV EAX,dword ptr [ESI]
// 0057ffd8: MOV EDX,dword ptr [ESI]
// 0057ffda: SHR ECX,0x10
// 0057ffdd: SHR EAX,0x8
// 0057ffe0: AND ECX,0xff
// 0057ffe6: AND EAX,0xff
// 0057ffeb: AND EDX,0xff
// 0057fff1: ADD ECX,EAX
// 0057fff3: ADD EDX,ECX
// 0057fff5: MOV ECX,0x3
// 0057fffa: MOV EAX,EDX
// 0057fffc: SAR EDX,0x1f
// 0057ffff: IDIV ECX
// 00580001: MOV ECX,EAX
// 00580003: CMP EBX,0x1
// 00580006: JNZ 0x0058006b
//   XREF to: 0058006b (CONDITIONAL_JUMP)
// 00580008: XOR EDX,EDX
// 0058000a: XOR EAX,EAX
// 0058000c: SHL EDX,0x8
//   Label: LAB_0058000c
// 0058000f: SHL EAX,0x10
// 00580012: ADD EAX,EDX
// 00580014: ADD EAX,ECX
// 00580016: MOV dword ptr [ESI],EAX
// 00580018: MOV ECX,dword ptr [ESP + 0xc]
//   Label: LAB_00580018
//   XREF to: Stack[-0x1c] (READ)
// 0058001c: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x18] (READ)
// 00580020: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x14] (READ)
// 00580024: MOV EDI,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 0058002a: INC ECX
// 0058002b: ADD EBX,0x4
// 0058002e: INC ESI
// 0058002f: MOV dword ptr [ESP + 0xc],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 00580033: MOV dword ptr [ESP + 0x10],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 00580037: MOV dword ptr [ESP + 0x14],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 0058003b: CMP ESI,EDI
// 0058003d: JL 0x0057ffb8
//   XREF to: 0057ffb8 (CONDITIONAL_JUMP)
// 00580043: MOV EBX,dword ptr [ESP + 0x4]
//   Label: LAB_00580043
//   XREF to: Stack[-0x24] (READ)
// 00580047: MOV ESI,dword ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 0058004a: MOV EDI,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 00580050: ADD EBX,0x4
// 00580053: INC ESI
// 00580054: MOV dword ptr [ESP + 0x4],EBX
//   XREF to: Stack[-0x24] (WRITE)
// 00580058: MOV dword ptr [ESP],ESI
//   XREF to: Stack[-0x28] (DATA)
// 0058005b: CMP ESI,EDI
// 0058005d: JL 0x0057ff96
//   XREF to: 0057ff96 (CONDITIONAL_JUMP)
// 00580063: ADD ESP,0x18
//   Label: LAB_00580063
// 00580066: POP EBP
// 00580067: POP EDI
// 00580068: POP ESI
// 00580069: POP EBX
// 0058006a: RET
// 0058006b: LEA EDI,[EAX + EAX*0x2]
//   Label: LAB_0058006b
// 0058006e: MOV EDX,EAX
// 00580070: SAR EDX,0x1f
// 00580073: SHL EDX,0x2
// 00580076: SBB EAX,EDX
// 00580078: SAR EAX,0x2
// 0058007b: MOV EBP,EAX
// 0058007d: MOV EDX,EDI
// 0058007f: MOV EAX,EDI
// 00580081: SAR EDX,0x1f
// 00580084: SHL EDX,0x2
// 00580087: SBB EAX,EDX
// 00580089: SAR EAX,0x2
// 0058008c: MOV EDI,EAX
// 0058008e: CMP EBX,0x2
// 00580091: JNZ 0x0058009e
//   XREF to: 0058009e (CONDITIONAL_JUMP)
// 00580093: MOV ECX,EDI
// 00580095: MOV EAX,EBP
// 00580097: XOR EDX,EDX
// 00580099: JMP 0x0058000c
//   XREF to: 0058000c (UNCONDITIONAL_JUMP)
// 0058009e: CMP EBX,0x3
//   Label: LAB_0058009e
// 005800a1: JNZ 0x005800b7
//   XREF to: 005800b7 (CONDITIONAL_JUMP)
// 005800a3: MOV EDX,ECX
// 005800a5: MOV EAX,ECX
// 005800a7: SAR EDX,0x1f
// 005800aa: SUB EAX,EDX
// 005800ac: SAR EAX,0x1
// 005800ae: MOV ECX,EAX
// 005800b0: XOR EDX,EDX
// 005800b2: JMP 0x0058000c
//   XREF to: 0058000c (UNCONDITIONAL_JUMP)
// 005800b7: CMP EBX,0x4
//   Label: LAB_005800b7
// 005800ba: JNZ 0x005800c5
//   XREF to: 005800c5 (CONDITIONAL_JUMP)
// 005800bc: MOV ECX,EBP
// 005800be: XOR EDX,EDX
// 005800c0: JMP 0x0058000c
//   XREF to: 0058000c (UNCONDITIONAL_JUMP)
// 005800c5: MOV EAX,ECX
//   Label: LAB_005800c5
// 005800c7: XOR EDX,EDX
// 005800c9: XOR ECX,ECX
// 005800cb: JMP 0x0058000c
//   XREF to: 0058000c (UNCONDITIONAL_JUMP)
