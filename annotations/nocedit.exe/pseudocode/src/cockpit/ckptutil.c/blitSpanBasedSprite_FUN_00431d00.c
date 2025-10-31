// Name: cockpit_ckptutil.c_blitSpanBasedSprite_FUN_00431d00
// Address: 00431d00
// Address Range: [[00431d00, 00431f3a]]
// Convention: __cdecl
// Signature: void cockpit_ckptutil.c_blitSpanBasedSprite_FUN_00431d00(void * sprite_data, void * span_data, int screen_x, int screen_y, int src_x, int src_y, int width, int height)
// Globals:
//   int g_WindowWidth = 0x140
//   int g_BitsPerPixel = 0x8
//   void*[1024] g_ScreenBufferArray
//   undefined4 g_ScreenBufferArray[1]
// Function calls:
//   cockpit_ckptutil.c_getColorConversionFunction_FUN_00431760

#include "nocturne.h"

void __cdecl
cockpit_ckptutil_c_blitSpanBasedSprite_FUN_00431d00
          (void *sprite_data,void *span_data,int screen_x,int screen_y,int src_x,int src_y,int width
          ,int height)

{
  ColorConversionFunc *pCVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int in_stack_00000024;
  int local_30;
  int local_2c;
  int local_28;
  int local_18;
  void *local_14;
  
  iVar5 = src_x + g_WindowWidth / 2;
  iVar7 = iVar5 + 1;
  if (sprite_data != (void *)0x0) {
    pCVar1 = cockpit_ckptutil_c_getColorConversionFunction_FUN_00431760();
    local_2c = screen_y * 0x84;
    if (g_BitsPerPixel == 8) {
      local_18 = screen_y + (int)g_ScreenBufferArray[width + screen_y];
      if (screen_y < in_stack_00000024) {
        do {
          iVar6 = 0;
          iVar8 = 0;
          while (piVar2 = (int *)(screen_x + local_2c), iVar8 < *piVar2) {
            iVar3 = *(int *)((int)piVar2 + iVar6 + 4);
            iVar4 = *(int *)((int)piVar2 + iVar6 + 0x44) + iVar3 + -1;
            if (((iVar3 < iVar5) && (iVar3 = iVar5, iVar4 < iVar5)) ||
               ((iVar7 < iVar4 && (iVar4 = iVar7, iVar7 < iVar3)))) {
              iVar8 = iVar8 + 1;
              iVar6 = iVar6 + 4;
            }
            else {
              (*pCVar1)((void *)(iVar3 + local_18),(void *)((int)span_data + iVar3),
                        (iVar4 - iVar3) + 1);
              iVar8 = iVar8 + 1;
              iVar6 = iVar6 + 4;
            }
          }
          iVar5 = iVar5 + -1;
          iVar7 = iVar7 + 1;
          local_2c = local_2c + 0x84;
          local_18 = local_18 + local_30;
          span_data = (void *)((int)span_data + height);
        } while (local_2c < in_stack_00000024 * 0x84);
      }
    }
    else {
      local_14 = (void *)((int)g_ScreenBufferArray[width + screen_y] + screen_y * 2);
      if (screen_y < in_stack_00000024) {
        local_28 = local_2c;
        do {
          iVar6 = 0;
          iVar8 = 0;
          while (piVar2 = (int *)(screen_x + local_28), iVar8 < *piVar2) {
            iVar3 = *(int *)((int)piVar2 + iVar6 + 4);
            iVar4 = *(int *)((int)piVar2 + iVar6 + 0x44) + iVar3 + -1;
            if (((iVar3 < iVar5) && (iVar3 = iVar5, iVar4 < iVar5)) ||
               ((iVar7 < iVar4 && (iVar4 = iVar7, iVar7 < iVar3)))) {
              iVar8 = iVar8 + 1;
              iVar6 = iVar6 + 4;
            }
            else {
              (*pCVar1)((void *)((int)local_14 + src_y * -2 + iVar3 * 2),
                        (void *)((int)span_data + iVar3),(iVar4 - iVar3) + 1);
              iVar8 = iVar8 + 1;
              iVar6 = iVar6 + 4;
            }
          }
          iVar5 = iVar5 + -1;
          iVar7 = iVar7 + 1;
          local_28 = local_28 + 0x84;
          local_14 = (void *)((int)local_14 + (local_30 / 2) * 2);
          span_data = (void *)((int)span_data + height);
        } while (local_28 < in_stack_00000024 * 0x84);
      }
    }
  }
  return;
}


// Assembly code:
// 00431d00: PUSH EBX
//   Label: cockpit_ckptutil.c_blitSpanBasedSprite_FUN_00431d00
// 00431d01: PUSH ESI
// 00431d02: PUSH EDI
// 00431d03: PUSH EBP
// 00431d04: SUB ESP,0x34
// 00431d07: MOV EDI,dword ptr [ESP + 0x54]
//   XREF to: Stack[0x10] (READ)
// 00431d0b: MOV EDX,dword ptr [0x02cf6a9c]
//   XREF to: 02cf6a9c (READ)
// 00431d11: MOV EAX,[0x02cf6aa0]
//   XREF to: 02cf6aa0 (READ)
// 00431d16: SUB EAX,EDX
// 00431d18: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 00431d1c: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 00431d21: MOV EDX,EAX
// 00431d23: SAR EDX,0x1f
// 00431d26: SUB EAX,EDX
// 00431d28: SAR EAX,0x1
// 00431d2a: MOV EBX,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x14] (READ)
// 00431d2e: ADD EBX,EAX
// 00431d30: MOV ECX,dword ptr [ESP + 0x48]
//   XREF to: Stack[0x4] (READ)
// 00431d34: LEA ESI,[EBX + 0x1]
// 00431d37: TEST ECX,ECX
// 00431d39: JNZ 0x00431d43
//   XREF to: 00431d43 (CONDITIONAL_JUMP)
// 00431d3b: ADD ESP,0x34
//   Label: LAB_00431d3b
// 00431d3e: POP EBP
// 00431d3f: POP EDI
// 00431d40: POP ESI
// 00431d41: POP EBX
// 00431d42: RET
// 00431d43: MOV EAX,dword ptr [ESP + 0x60]
//   Label: LAB_00431d43
//   XREF to: Stack[0x1c] (READ)
// 00431d47: IMUL EAX,EDI
// 00431d4a: ADD EAX,dword ptr [ESP + 0x50]
//   XREF to: Stack[0xc] (READ)
// 00431d4e: LEA EDX,[ECX + EAX*0x1]
// 00431d51: MOV EBP,EDI
// 00431d53: MOV dword ptr [ESP + 0x48],EDX
//   XREF to: Stack[0x4] (WRITE)
// 00431d57: CALL cockpit_ckptutil.c_getColorConversionFunction_FUN_00431760
//   XREF to: 00431760 (UNCONDITIONAL_CALL)
// 00431d5c: SHL EBP,0x5
// 00431d5f: MOV EDX,dword ptr [ESP + 0x64]
//   XREF to: Stack[0x20] (READ)
// 00431d63: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00431d67: MOV EAX,EDX
// 00431d69: MOV ECX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[0x18] (READ)
// 00431d6d: SHL EAX,0x5
// 00431d70: ADD EBP,EDI
// 00431d72: ADD EAX,EDX
// 00431d74: SHL EBP,0x2
// 00431d77: SHL EAX,0x2
// 00431d7a: ADD ECX,EDI
// 00431d7c: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x44] (DATA)
// 00431d7f: MOV EAX,[0x0067939c]
//   XREF to: 0067939c (READ)
// 00431d84: SHL ECX,0x2
// 00431d87: CMP EAX,0x8
// 00431d8a: JNZ 0x00431e4b
//   XREF to: 00431e4b (CONDITIONAL_JUMP)
// 00431d90: MOV EDX,dword ptr [ESP + 0x50]
//   XREF to: Stack[0xc] (READ)
// 00431d94: MOV EAX,dword ptr [ECX + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
// 00431d9a: ADD EDX,EAX
// 00431d9c: MOV ECX,dword ptr [ESP + 0x64]
//   XREF to: Stack[0x20] (READ)
// 00431da0: MOV dword ptr [ESP + 0x28],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 00431da4: CMP EDI,ECX
// 00431da6: JGE 0x00431d3b
//   XREF to: 00431d3b (CONDITIONAL_JUMP)
// 00431da8: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x44] (DATA)
// 00431dab: MOV dword ptr [ESP + 0x14],EBP
//   XREF to: Stack[-0x30] (WRITE)
// 00431daf: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 00431db3: MOV EAX,dword ptr [ESP + 0x14]
//   Label: LAB_00431db3
//   XREF to: Stack[-0x30] (READ)
// 00431db7: XOR EBP,EBP
// 00431db9: XOR EDI,EDI
// 00431dbb: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00431dbf: MOV EAX,dword ptr [ESP + 0x4c]
//   Label: LAB_00431dbf
//   XREF to: Stack[0x8] (READ)
// 00431dc3: ADD EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x24] (READ)
// 00431dc7: CMP EDI,dword ptr [EAX]
// 00431dc9: JGE 0x00431de5
//   XREF to: 00431de5 (CONDITIONAL_JUMP)
// 00431dcb: LEA EDX,[EAX + EBP*0x1]
// 00431dce: MOV EAX,dword ptr [EDX + 0x4]
// 00431dd1: MOV EDX,dword ptr [EDX + 0x44]
// 00431dd4: ADD EDX,EAX
// 00431dd6: DEC EDX
// 00431dd7: CMP EAX,EBX
// 00431dd9: JGE 0x00431e21
//   XREF to: 00431e21 (CONDITIONAL_JUMP)
// 00431ddb: CMP EDX,EBX
// 00431ddd: JGE 0x00431e1f
//   XREF to: 00431e1f (CONDITIONAL_JUMP)
// 00431ddf: INC EDI
//   Label: LAB_00431ddf
// 00431de0: ADD EBP,0x4
// 00431de3: JMP 0x00431dbf
//   XREF to: 00431dbf (UNCONDITIONAL_JUMP)
// 00431de5: MOV EDI,dword ptr [ESP + 0x14]
//   Label: LAB_00431de5
// 00431de9: MOV EAX,dword ptr [ESP + 0x10]
// 00431ded: MOV EBP,dword ptr [ESP + 0x28]
// 00431df1: MOV EDX,dword ptr [ESP + 0x48]
// 00431df5: MOV ECX,dword ptr [ESP + 0xc]
// 00431df9: DEC EBX
// 00431dfa: INC ESI
// 00431dfb: ADD EDI,0x84
// 00431e01: ADD EBP,EAX
// 00431e03: MOV EAX,dword ptr [ESP + 0x60]
// 00431e07: MOV dword ptr [ESP + 0x14],EDI
// 00431e0b: ADD EDX,EAX
// 00431e0d: MOV dword ptr [ESP + 0x28],EBP
// 00431e11: MOV dword ptr [ESP + 0x48],EDX
// 00431e15: CMP EDI,ECX
// 00431e17: JGE 0x00431d3b
//   XREF to: 00431d3b (CONDITIONAL_JUMP)
// 00431e1d: JMP 0x00431db3
//   XREF to: 00431db3 (UNCONDITIONAL_JUMP)
// 00431e1f: MOV EAX,EBX
//   Label: LAB_00431e1f
// 00431e21: CMP EDX,ESI
//   Label: LAB_00431e21
// 00431e23: JLE 0x00431e2b
//   XREF to: 00431e2b (CONDITIONAL_JUMP)
// 00431e25: CMP EAX,ESI
// 00431e27: JG 0x00431ddf
//   XREF to: 00431ddf (CONDITIONAL_JUMP)
// 00431e29: MOV EDX,ESI
// 00431e2b: SUB EDX,EAX
//   Label: LAB_00431e2b
// 00431e2d: INC EDX
// 00431e2e: PUSH EDX
// 00431e2f: MOV EDX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0x4] (READ)
// 00431e33: ADD EDX,EAX
// 00431e35: PUSH EDX
// 00431e36: ADD EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x1c] (READ)
// 00431e3a: PUSH EAX
// 00431e3b: CALL dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x14] (READ)
// 00431e3f: ADD ESP,0xc
// 00431e42: INC EDI
// 00431e43: ADD EBP,0x4
// 00431e46: JMP 0x00431dbf
//   XREF to: 00431dbf (UNCONDITIONAL_JUMP)
// 00431e4b: MOV EAX,dword ptr [ESP + 0x50]
//   Label: LAB_00431e4b
//   XREF to: Stack[0xc] (READ)
// 00431e4f: MOV EDX,dword ptr [ECX + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
// 00431e55: ADD EAX,EAX
// 00431e57: ADD EDX,EAX
// 00431e59: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x34] (READ)
// 00431e5d: MOV dword ptr [ESP + 0x2c],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 00431e61: MOV EDX,EAX
// 00431e63: SAR EDX,0x1f
// 00431e66: SUB EAX,EDX
// 00431e68: SAR EAX,0x1
// 00431e6a: MOV EDX,dword ptr [ESP + 0x64]
//   XREF to: Stack[0x20] (READ)
// 00431e6e: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 00431e72: CMP EDI,EDX
// 00431e74: JGE 0x00431d3b
//   XREF to: 00431d3b (CONDITIONAL_JUMP)
// 00431e7a: MOV EAX,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x14] (READ)
// 00431e7e: ADD EAX,EAX
// 00431e80: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 00431e84: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x34] (READ)
// 00431e88: ADD EAX,EAX
// 00431e8a: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 00431e8e: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x44] (DATA)
// 00431e91: MOV dword ptr [ESP + 0x18],EBP
//   XREF to: Stack[-0x2c] (WRITE)
// 00431e95: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 00431e99: MOV EAX,dword ptr [ESP + 0x18]
//   Label: LAB_00431e99
//   XREF to: Stack[-0x2c] (READ)
// 00431e9d: XOR EBP,EBP
// 00431e9f: XOR EDI,EDI
// 00431ea1: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00431ea5: MOV EAX,dword ptr [ESP + 0x4c]
//   Label: LAB_00431ea5
//   XREF to: Stack[0x8] (READ)
// 00431ea9: ADD EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x20] (READ)
// 00431ead: CMP EDI,dword ptr [EAX]
// 00431eaf: JGE 0x00431ecb
//   XREF to: 00431ecb (CONDITIONAL_JUMP)
// 00431eb1: LEA EDX,[EAX + EBP*0x1]
// 00431eb4: MOV EAX,dword ptr [EDX + 0x4]
// 00431eb7: MOV EDX,dword ptr [EDX + 0x44]
// 00431eba: ADD EDX,EAX
// 00431ebc: DEC EDX
// 00431ebd: CMP EAX,EBX
// 00431ebf: JGE 0x00431f07
//   XREF to: 00431f07 (CONDITIONAL_JUMP)
// 00431ec1: CMP EDX,EBX
// 00431ec3: JGE 0x00431f05
//   XREF to: 00431f05 (CONDITIONAL_JUMP)
// 00431ec5: INC EDI
//   Label: LAB_00431ec5
// 00431ec6: ADD EBP,0x4
// 00431ec9: JMP 0x00431ea5
//   XREF to: 00431ea5 (UNCONDITIONAL_JUMP)
// 00431ecb: MOV EDI,dword ptr [ESP + 0x18]
//   Label: LAB_00431ecb
// 00431ecf: MOV EAX,dword ptr [ESP + 0x4]
// 00431ed3: MOV EBP,dword ptr [ESP + 0x2c]
// 00431ed7: MOV EDX,dword ptr [ESP + 0x48]
// 00431edb: MOV ECX,dword ptr [ESP + 0x8]
// 00431edf: DEC EBX
// 00431ee0: INC ESI
// 00431ee1: ADD EDI,0x84
// 00431ee7: ADD EBP,EAX
// 00431ee9: MOV EAX,dword ptr [ESP + 0x60]
// 00431eed: MOV dword ptr [ESP + 0x18],EDI
// 00431ef1: ADD EDX,EAX
// 00431ef3: MOV dword ptr [ESP + 0x2c],EBP
// 00431ef7: MOV dword ptr [ESP + 0x48],EDX
// 00431efb: CMP EDI,ECX
// 00431efd: JGE 0x00431d3b
//   XREF to: 00431d3b (CONDITIONAL_JUMP)
// 00431f03: JMP 0x00431e99
//   XREF to: 00431e99 (UNCONDITIONAL_JUMP)
// 00431f05: MOV EAX,EBX
//   Label: LAB_00431f05
// 00431f07: CMP EDX,ESI
//   Label: LAB_00431f07
// 00431f09: JLE 0x00431f11
//   XREF to: 00431f11 (CONDITIONAL_JUMP)
// 00431f0b: CMP EAX,ESI
// 00431f0d: JG 0x00431ec5
//   XREF to: 00431ec5 (CONDITIONAL_JUMP)
// 00431f0f: MOV EDX,ESI
// 00431f11: SUB EDX,EAX
//   Label: LAB_00431f11
// 00431f13: INC EDX
// 00431f14: PUSH EDX
// 00431f15: MOV EDX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0x4] (READ)
// 00431f19: ADD EDX,EAX
// 00431f1b: PUSH EDX
// 00431f1c: ADD EAX,EAX
// 00431f1e: MOV EDX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x18] (READ)
// 00431f22: MOV ECX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x28] (READ)
// 00431f26: ADD EAX,EDX
// 00431f28: SUB EAX,ECX
// 00431f2a: PUSH EAX
// 00431f2b: CALL dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x14] (READ)
// 00431f2f: ADD ESP,0xc
// 00431f32: INC EDI
// 00431f33: ADD EBP,0x4
// 00431f36: JMP 0x00431ea5
//   XREF to: 00431ea5 (UNCONDITIONAL_JUMP)
