// Name: cockpit_ckptutil.c_blitSpanBasedSpriteVerticallyClipped_FUN_00432b60
// Address: 00432b60
// Address Range: [[00432b60, 00432cf6]]
// Convention: __cdecl
// Signature: void cockpit_ckptutil.c_blitSpanBasedSpriteVerticallyClipped_FUN_00432b60(void * sprite_data, void * span_data)
// Globals:
//   int g_WindowWidth = 0x140
//   int g_BitsPerPixel = 0x8
//   void*[1024] g_ScreenBufferArray
//   undefined4 g_ScreenBufferArray[1]
//   int g_ClipTop
//   int g_ClipBottom
// Function calls:
//   cockpit_ckptutil.c_getColorConversionFunction_FUN_00431760

#include "nocturne.h"

void __cdecl
cockpit_ckptutil_c_blitSpanBasedSpriteVerticallyClipped_FUN_00432b60
          (void *sprite_data,void *span_data)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ColorConversionFunc *pCVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  
  pCVar4 = cockpit_ckptutil_c_getColorConversionFunction_FUN_00431760();
  if (g_BitsPerPixel == 8) {
    local_28 = g_ClipTop;
    if (g_ClipTop <= g_ClipBottom) {
      local_30 = g_ClipTop * 0x84;
      local_34 = g_ClipTop << 2;
      do {
        iVar2 = *(int *)((int)g_ScreenBufferArray + local_34);
        iVar5 = local_28 * g_WindowWidth;
        iVar8 = 0;
        for (iVar7 = 0; piVar6 = (int *)(local_30 + (int)span_data), iVar7 < *piVar6;
            iVar7 = iVar7 + 1) {
          iVar1 = iVar8 + 0x44;
          iVar3 = *(int *)(iVar8 + 4 + (int)piVar6);
          iVar8 = iVar8 + 4;
          (*pCVar4)((void *)(iVar2 + iVar3),(void *)((int)span_data + iVar3 + iVar5),
                    *(int *)(iVar1 + (int)piVar6));
        }
        local_30 = local_30 + 0x84;
        local_34 = local_34 + 4;
        local_28 = local_28 + 1;
      } while (local_28 <= g_ClipBottom);
    }
  }
  else {
    local_2c = g_ClipTop;
    if (g_ClipTop <= g_ClipBottom) {
      local_38 = g_ClipTop * 0x84;
      local_3c = g_ClipTop << 2;
      do {
        iVar2 = *(int *)((int)g_ScreenBufferArray + local_3c);
        iVar5 = local_2c * g_WindowWidth;
        iVar7 = 0;
        for (iVar8 = 0; piVar6 = (int *)(local_38 + (int)span_data), iVar8 < *piVar6;
            iVar8 = iVar8 + 1) {
          iVar1 = iVar7 + 0x44;
          iVar3 = *(int *)(iVar7 + 4 + (int)piVar6);
          iVar7 = iVar7 + 4;
          (*pCVar4)((void *)(iVar3 * 2 + iVar2),(void *)((int)span_data + iVar3 + iVar5),
                    *(int *)(iVar1 + (int)piVar6));
        }
        local_38 = local_38 + 0x84;
        local_3c = local_3c + 4;
        local_2c = local_2c + 1;
      } while (local_2c <= g_ClipBottom);
    }
  }
  return;
}


// Assembly code:
// 00432b60: PUSH EBX
//   Label: cockpit_ckptutil.c_blitSpanBasedSpriteVerticallyClipped_FUN_00432b60
// 00432b61: PUSH ESI
// 00432b62: PUSH EDI
// 00432b63: PUSH EBP
// 00432b64: SUB ESP,0x30
// 00432b67: MOV EBP,dword ptr [ESP + 0x48]
//   XREF to: Stack[0x8] (READ)
// 00432b6b: CALL cockpit_ckptutil.c_getColorConversionFunction_FUN_00431760
//   XREF to: 00431760 (UNCONDITIONAL_CALL)
// 00432b70: MOV EDX,dword ptr [0x0067939c]
//   XREF to: 0067939c (READ)
// 00432b76: MOV EDI,EAX
// 00432b78: CMP EDX,0x8
// 00432b7b: JNZ 0x00432c41
//   XREF to: 00432c41 (CONDITIONAL_JUMP)
// 00432b81: MOV EAX,[0x02d0255c]
//   XREF to: 02d0255c (READ)
// 00432b86: MOV EBX,dword ptr [0x02d02564]
//   XREF to: 02d02564 (READ)
// 00432b8c: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 00432b90: CMP EAX,EBX
// 00432b92: JG 0x00432c16
//   XREF to: 00432c16 (CONDITIONAL_JUMP)
// 00432b98: MOV EDX,EAX
// 00432b9a: SHL EAX,0x5
// 00432b9d: ADD EAX,EDX
// 00432b9f: SHL EAX,0x2
// 00432ba2: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 00432ba6: MOV EAX,EDX
// 00432ba8: SHL EAX,0x2
// 00432bab: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 00432baf: MOV EAX,dword ptr [ESP + 0x8]
//   Label: LAB_00432baf
//   XREF to: Stack[-0x38] (READ)
// 00432bb3: MOV EAX,dword ptr [EAX + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
//   XREF to: 02cf6aa0 (DATA)
// 00432bb9: MOV ECX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 00432bbf: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 00432bc3: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x2c] (READ)
// 00432bc7: IMUL EAX,ECX
// 00432bca: MOV EDX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x4] (READ)
// 00432bce: XOR EBX,EBX
// 00432bd0: XOR ESI,ESI
// 00432bd2: ADD EDX,EAX
// 00432bd4: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x34] (READ)
// 00432bd8: MOV dword ptr [ESP + 0x24],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 00432bdc: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00432be0: MOV EAX,dword ptr [ESP + 0x1c]
//   Label: LAB_00432be0
//   XREF to: Stack[-0x24] (READ)
// 00432be4: ADD EAX,EBP
// 00432be6: CMP EBX,dword ptr [EAX]
// 00432be8: JL 0x00432c1e
//   XREF to: 00432c1e (CONDITIONAL_JUMP)
// 00432bea: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x34] (READ)
// 00432bee: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x38] (READ)
// 00432bf2: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x2c] (READ)
// 00432bf6: MOV EDX,dword ptr [0x02d02564]
//   XREF to: 02d02564 (READ)
// 00432bfc: ADD ECX,0x84
// 00432c02: ADD EBX,0x4
// 00432c05: INC ESI
// 00432c06: MOV dword ptr [ESP + 0xc],ECX
//   XREF to: Stack[-0x34] (WRITE)
// 00432c0a: MOV dword ptr [ESP + 0x8],EBX
//   XREF to: Stack[-0x38] (WRITE)
// 00432c0e: MOV dword ptr [ESP + 0x14],ESI
//   XREF to: Stack[-0x2c] (WRITE)
// 00432c12: CMP ESI,EDX
// 00432c14: JLE 0x00432baf
//   XREF to: 00432baf (CONDITIONAL_JUMP)
// 00432c16: ADD ESP,0x30
//   Label: LAB_00432c16
// 00432c19: POP EBP
// 00432c1a: POP EDI
// 00432c1b: POP ESI
// 00432c1c: POP EBX
// 00432c1d: RET
// 00432c1e: MOV ECX,dword ptr [ESI + EAX*0x1 + 0x44]
//   Label: LAB_00432c1e
// 00432c22: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x1c] (READ)
// 00432c26: PUSH ECX
// 00432c27: MOV ECX,dword ptr [ESI + EAX*0x1 + 0x4]
// 00432c2b: ADD EDX,ECX
// 00432c2d: PUSH EDX
// 00432c2e: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x28] (READ)
// 00432c32: LEA EAX,[EDX + ECX*0x1]
// 00432c35: PUSH EAX
// 00432c36: ADD ESI,0x4
// 00432c39: INC EBX
// 00432c3a: CALL EDI
// 00432c3c: ADD ESP,0xc
// 00432c3f: JMP 0x00432be0
//   XREF to: 00432be0 (UNCONDITIONAL_JUMP)
// 00432c41: MOV EAX,[0x02d0255c]
//   Label: LAB_00432c41
//   XREF to: 02d0255c (READ)
// 00432c46: MOV ECX,dword ptr [0x02d02564]
//   XREF to: 02d02564 (READ)
// 00432c4c: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 00432c50: CMP EAX,ECX
// 00432c52: JG 0x00432c16
//   XREF to: 00432c16 (CONDITIONAL_JUMP)
// 00432c54: MOV EDX,EAX
// 00432c56: SHL EAX,0x5
// 00432c59: ADD EAX,EDX
// 00432c5b: SHL EAX,0x2
// 00432c5e: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 00432c62: MOV EAX,EDX
// 00432c64: SHL EAX,0x2
// 00432c67: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x40] (DATA)
// 00432c6a: MOV EAX,dword ptr [ESP]
//   Label: LAB_00432c6a
//   XREF to: Stack[-0x40] (DATA)
// 00432c6d: MOV EAX,dword ptr [EAX + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
//   XREF to: 02cf6aa0 (DATA)
// 00432c73: MOV EBX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 00432c79: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00432c7d: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x30] (READ)
// 00432c81: IMUL EAX,EBX
// 00432c84: MOV EDX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x4] (READ)
// 00432c88: XOR ESI,ESI
// 00432c8a: ADD EDX,EAX
// 00432c8c: XOR EBX,EBX
// 00432c8e: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x3c] (READ)
// 00432c92: MOV dword ptr [ESP + 0x2c],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 00432c96: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00432c9a: MOV EAX,dword ptr [ESP + 0x20]
//   Label: LAB_00432c9a
//   XREF to: Stack[-0x20] (READ)
// 00432c9e: ADD EAX,EBP
// 00432ca0: CMP ESI,dword ptr [EAX]
// 00432ca2: JL 0x00432cd4
//   XREF to: 00432cd4 (CONDITIONAL_JUMP)
// 00432ca4: MOV ESI,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x3c] (READ)
// 00432ca8: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 00432cab: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x30] (READ)
// 00432caf: MOV ECX,dword ptr [0x02d02564]
//   XREF to: 02d02564 (READ)
// 00432cb5: ADD ESI,0x84
// 00432cbb: ADD EAX,0x4
// 00432cbe: INC EDX
// 00432cbf: MOV dword ptr [ESP + 0x4],ESI
//   XREF to: Stack[-0x3c] (WRITE)
// 00432cc3: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x40] (DATA)
// 00432cc6: MOV dword ptr [ESP + 0x10],EDX
//   XREF to: Stack[-0x30] (WRITE)
// 00432cca: CMP EDX,ECX
// 00432ccc: JG 0x00432c16
//   XREF to: 00432c16 (CONDITIONAL_JUMP)
// 00432cd2: JMP 0x00432c6a
//   XREF to: 00432c6a (UNCONDITIONAL_JUMP)
// 00432cd4: MOV ECX,dword ptr [EBX + EAX*0x1 + 0x44]
//   Label: LAB_00432cd4
// 00432cd8: MOV EDX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x14] (READ)
// 00432cdc: PUSH ECX
// 00432cdd: MOV ECX,dword ptr [EBX + EAX*0x1 + 0x4]
// 00432ce1: ADD EDX,ECX
// 00432ce3: PUSH EDX
// 00432ce4: LEA EAX,[ECX + ECX*0x1]
// 00432ce7: ADD EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x18] (READ)
// 00432ceb: PUSH EAX
// 00432cec: ADD EBX,0x4
// 00432cef: INC ESI
// 00432cf0: CALL EDI
// 00432cf2: ADD ESP,0xc
// 00432cf5: JMP 0x00432c9a
//   XREF to: 00432c9a (UNCONDITIONAL_JUMP)
