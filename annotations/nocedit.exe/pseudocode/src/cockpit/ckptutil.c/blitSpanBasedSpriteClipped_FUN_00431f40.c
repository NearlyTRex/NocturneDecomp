// Name: cockpit_ckptutil.c_blitSpanBasedSpriteClipped_FUN_00431f40
// Address: 00431f40
// Address Range: [[00431f40, 00432185]]
// Convention: __cdecl
// Signature: void cockpit_ckptutil.c_blitSpanBasedSpriteClipped_FUN_00431f40(void * sprite_data, void * span_data, int screen_x, int screen_y, int src_x, int src_y, int width, int height)
// Cross-references:
//   cockpit_ckptutil.c_blitSolidSprite_FUN_00432af0 (00432af0) at 00432b19 [UNCONDITIONAL_CALL]
// Globals:
//   int g_BitsPerPixel = 0x8
//   void*[1024] g_ScreenBufferArray
//   undefined4 g_ScreenBufferArray[1]
//   int g_ClipLeft
//   int g_ClipRight
// Function calls:
//   cockpit_ckptutil.c_getColorConversionFunction_FUN_00431760

#include "nocturne.h"

void __cdecl
cockpit_ckptutil_c_blitSpanBasedSpriteClipped_FUN_00431f40
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
  void *local_18;
  int local_14;
  
  iVar7 = src_x + g_ClipRight;
  iVar5 = src_x + g_ClipLeft;
  if (sprite_data != (void *)0x0) {
    pCVar1 = cockpit_ckptutil_c_getColorConversionFunction_FUN_00431760();
    local_2c = screen_y * 0x84;
    if (g_BitsPerPixel == 8) {
      local_14 = screen_y + (int)g_ScreenBufferArray[width + screen_y];
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
              (*pCVar1)((void *)((iVar3 + local_14) - src_y),(void *)((int)span_data + iVar3),
                        (iVar4 - iVar3) + 1);
              iVar8 = iVar8 + 1;
              iVar6 = iVar6 + 4;
            }
          }
          local_2c = local_2c + 0x84;
          local_14 = local_14 + local_30;
          span_data = (void *)((int)span_data + height);
        } while (local_2c < height * 0x84);
      }
    }
    else {
      local_18 = (void *)((int)g_ScreenBufferArray[width + screen_y] + screen_y * 2);
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
              (*pCVar1)((void *)((int)local_18 + src_y * -2 + iVar3 * 2),
                        (void *)((int)span_data + iVar3),(iVar4 - iVar3) + 1);
              iVar8 = iVar8 + 1;
              iVar6 = iVar6 + 4;
            }
          }
          local_28 = local_28 + 0x84;
          local_18 = (void *)((int)local_18 + (local_30 / 2) * 2);
          span_data = (void *)((int)span_data + height);
        } while (local_28 < height * 0x84);
      }
    }
  }
  return;
}


// Assembly code:
// 00431f40: PUSH EBX
//   Label: cockpit_ckptutil.c_blitSpanBasedSpriteClipped_FUN_00431f40
// 00431f41: PUSH ESI
// 00431f42: PUSH EDI
// 00431f43: PUSH EBP
// 00431f44: SUB ESP,0x34
// 00431f47: MOV EDI,dword ptr [ESP + 0x54]
//   XREF to: Stack[0x10] (READ)
// 00431f4b: MOV ESI,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x14] (READ)
// 00431f4f: MOV EBX,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x14] (READ)
// 00431f53: MOV ECX,dword ptr [0x02d02560]
//   XREF to: 02d02560 (READ)
// 00431f59: MOV EAX,[0x02cf6aa0]
//   XREF to: 02cf6aa0 (READ)
// 00431f5e: MOV EBP,dword ptr [0x02cf6a9c]
//   XREF to: 02cf6a9c (READ)
// 00431f64: MOV EDX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 00431f6a: SUB EAX,EBP
// 00431f6c: ADD ESI,ECX
// 00431f6e: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 00431f72: MOV EAX,dword ptr [ESP + 0x48]
//   XREF to: Stack[0x4] (READ)
// 00431f76: ADD EBX,EDX
// 00431f78: TEST EAX,EAX
// 00431f7a: JNZ 0x00431f84
//   XREF to: 00431f84 (CONDITIONAL_JUMP)
// 00431f7c: ADD ESP,0x34
//   Label: LAB_00431f7c
// 00431f7f: POP EBP
// 00431f80: POP EDI
// 00431f81: POP ESI
// 00431f82: POP EBX
// 00431f83: RET
// 00431f84: MOV EAX,dword ptr [ESP + 0x60]
//   Label: LAB_00431f84
//   XREF to: Stack[0x1c] (READ)
// 00431f88: IMUL EAX,EDI
// 00431f8b: MOV EDX,dword ptr [ESP + 0x50]
//   XREF to: Stack[0xc] (READ)
// 00431f8f: MOV ECX,dword ptr [ESP + 0x48]
//   XREF to: Stack[0x4] (READ)
// 00431f93: ADD EAX,EDX
// 00431f95: ADD ECX,EAX
// 00431f97: MOV EBP,dword ptr [ESP + 0x64]
//   XREF to: Stack[0x20] (READ)
// 00431f9b: MOV dword ptr [ESP + 0x48],ECX
//   XREF to: Stack[0x4] (WRITE)
// 00431f9f: CALL cockpit_ckptutil.c_getColorConversionFunction_FUN_00431760
//   XREF to: 00431760 (UNCONDITIONAL_CALL)
// 00431fa4: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00431fa8: MOV EAX,EBP
// 00431faa: SHL EAX,0x5
// 00431fad: ADD EAX,EBP
// 00431faf: SHL EAX,0x2
// 00431fb2: MOV EDX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[0x18] (READ)
// 00431fb6: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x44] (DATA)
// 00431fb9: MOV EAX,EDI
// 00431fbb: ADD EDX,EDI
// 00431fbd: SHL EAX,0x5
// 00431fc0: SHL EDX,0x2
// 00431fc3: LEA EBP,[EDI + EAX*0x1]
// 00431fc6: MOV EAX,[0x0067939c]
//   XREF to: 0067939c (READ)
// 00431fcb: SHL EBP,0x2
// 00431fce: CMP EAX,0x8
// 00431fd1: JNZ 0x00432098
//   XREF to: 00432098 (CONDITIONAL_JUMP)
// 00431fd7: MOV EAX,dword ptr [EDX + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
// 00431fdd: MOV EDX,dword ptr [ESP + 0x50]
//   XREF to: Stack[0xc] (READ)
// 00431fe1: ADD EDX,EAX
// 00431fe3: MOV ECX,dword ptr [ESP + 0x64]
//   XREF to: Stack[0x20] (READ)
// 00431fe7: MOV dword ptr [ESP + 0x2c],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 00431feb: CMP EDI,ECX
// 00431fed: JGE 0x00431f7c
//   XREF to: 00431f7c (CONDITIONAL_JUMP)
// 00431fef: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x44] (DATA)
// 00431ff2: MOV dword ptr [ESP + 0x14],EBP
//   XREF to: Stack[-0x30] (WRITE)
// 00431ff6: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 00431ffa: MOV EAX,dword ptr [ESP + 0x14]
//   Label: LAB_00431ffa
//   XREF to: Stack[-0x30] (READ)
// 00431ffe: XOR EBP,EBP
// 00432000: XOR EDI,EDI
// 00432002: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00432006: MOV EAX,dword ptr [ESP + 0x4c]
//   Label: LAB_00432006
//   XREF to: Stack[0x8] (READ)
// 0043200a: ADD EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x20] (READ)
// 0043200e: CMP EDI,dword ptr [EAX]
// 00432010: JGE 0x0043202c
//   XREF to: 0043202c (CONDITIONAL_JUMP)
// 00432012: LEA EDX,[EAX + EBP*0x1]
// 00432015: MOV EAX,dword ptr [EDX + 0x4]
// 00432018: MOV EDX,dword ptr [EDX + 0x44]
// 0043201b: ADD EDX,EAX
// 0043201d: DEC EDX
// 0043201e: CMP EAX,EBX
// 00432020: JGE 0x00432066
//   XREF to: 00432066 (CONDITIONAL_JUMP)
// 00432022: CMP EDX,EBX
// 00432024: JGE 0x00432064
//   XREF to: 00432064 (CONDITIONAL_JUMP)
// 00432026: INC EDI
//   Label: LAB_00432026
// 00432027: ADD EBP,0x4
// 0043202a: JMP 0x00432006
//   XREF to: 00432006 (UNCONDITIONAL_JUMP)
// 0043202c: MOV EDI,dword ptr [ESP + 0x14]
//   Label: LAB_0043202c
// 00432030: MOV EAX,dword ptr [ESP + 0x10]
// 00432034: MOV EBP,dword ptr [ESP + 0x2c]
// 00432038: MOV EDX,dword ptr [ESP + 0x48]
// 0043203c: MOV ECX,dword ptr [ESP + 0x8]
// 00432040: ADD EDI,0x84
// 00432046: ADD EBP,EAX
// 00432048: MOV EAX,dword ptr [ESP + 0x60]
// 0043204c: MOV dword ptr [ESP + 0x14],EDI
// 00432050: ADD EDX,EAX
// 00432052: MOV dword ptr [ESP + 0x2c],EBP
// 00432056: MOV dword ptr [ESP + 0x48],EDX
// 0043205a: CMP EDI,ECX
// 0043205c: JGE 0x00431f7c
//   XREF to: 00431f7c (CONDITIONAL_JUMP)
// 00432062: JMP 0x00431ffa
//   XREF to: 00431ffa (UNCONDITIONAL_JUMP)
// 00432064: MOV EAX,EBX
//   Label: LAB_00432064
// 00432066: CMP EDX,ESI
//   Label: LAB_00432066
// 00432068: JLE 0x00432070
//   XREF to: 00432070 (CONDITIONAL_JUMP)
// 0043206a: CMP EAX,ESI
// 0043206c: JG 0x00432026
//   XREF to: 00432026 (CONDITIONAL_JUMP)
// 0043206e: MOV EDX,ESI
// 00432070: SUB EDX,EAX
//   Label: LAB_00432070
// 00432072: INC EDX
// 00432073: PUSH EDX
// 00432074: MOV EDX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0x4] (READ)
// 00432078: ADD EDX,EAX
// 0043207a: PUSH EDX
// 0043207b: MOV EDX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x18] (READ)
// 0043207f: MOV ECX,dword ptr [ESP + 0x60]
//   XREF to: Stack[0x14] (READ)
// 00432083: ADD EAX,EDX
// 00432085: SUB EAX,ECX
// 00432087: PUSH EAX
// 00432088: CALL dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x14] (READ)
// 0043208c: ADD ESP,0xc
// 0043208f: INC EDI
// 00432090: ADD EBP,0x4
// 00432093: JMP 0x00432006
//   XREF to: 00432006 (UNCONDITIONAL_JUMP)
// 00432098: MOV EAX,dword ptr [ESP + 0x50]
//   Label: LAB_00432098
//   XREF to: Stack[0xc] (READ)
// 0043209c: MOV EDX,dword ptr [EDX + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
// 004320a2: ADD EAX,EAX
// 004320a4: ADD EDX,EAX
// 004320a6: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x34] (READ)
// 004320aa: MOV dword ptr [ESP + 0x28],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 004320ae: MOV EDX,EAX
// 004320b0: SAR EDX,0x1f
// 004320b3: SUB EAX,EDX
// 004320b5: SAR EAX,0x1
// 004320b7: MOV EDX,dword ptr [ESP + 0x64]
//   XREF to: Stack[0x20] (READ)
// 004320bb: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 004320bf: CMP EDI,EDX
// 004320c1: JGE 0x00431f7c
//   XREF to: 00431f7c (CONDITIONAL_JUMP)
// 004320c7: MOV EAX,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x14] (READ)
// 004320cb: ADD EAX,EAX
// 004320cd: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 004320d1: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x34] (READ)
// 004320d5: ADD EAX,EAX
// 004320d7: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 004320db: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x44] (DATA)
// 004320de: MOV dword ptr [ESP + 0x18],EBP
//   XREF to: Stack[-0x2c] (WRITE)
// 004320e2: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 004320e6: MOV EAX,dword ptr [ESP + 0x18]
//   Label: LAB_004320e6
//   XREF to: Stack[-0x2c] (READ)
// 004320ea: XOR EBP,EBP
// 004320ec: XOR EDI,EDI
// 004320ee: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 004320f2: MOV EAX,dword ptr [ESP + 0x4c]
//   Label: LAB_004320f2
//   XREF to: Stack[0x8] (READ)
// 004320f6: ADD EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x24] (READ)
// 004320fa: CMP EDI,dword ptr [EAX]
// 004320fc: JGE 0x00432118
//   XREF to: 00432118 (CONDITIONAL_JUMP)
// 004320fe: LEA EDX,[EAX + EBP*0x1]
// 00432101: MOV EAX,dword ptr [EDX + 0x4]
// 00432104: MOV EDX,dword ptr [EDX + 0x44]
// 00432107: ADD EDX,EAX
// 00432109: DEC EDX
// 0043210a: CMP EAX,EBX
// 0043210c: JGE 0x00432152
//   XREF to: 00432152 (CONDITIONAL_JUMP)
// 0043210e: CMP EDX,EBX
// 00432110: JGE 0x00432150
//   XREF to: 00432150 (CONDITIONAL_JUMP)
// 00432112: INC EDI
//   Label: LAB_00432112
// 00432113: ADD EBP,0x4
// 00432116: JMP 0x004320f2
//   XREF to: 004320f2 (UNCONDITIONAL_JUMP)
// 00432118: MOV EDI,dword ptr [ESP + 0x18]
//   Label: LAB_00432118
// 0043211c: MOV EAX,dword ptr [ESP + 0x4]
// 00432120: MOV EBP,dword ptr [ESP + 0x28]
// 00432124: MOV EDX,dword ptr [ESP + 0x48]
// 00432128: MOV ECX,dword ptr [ESP + 0xc]
// 0043212c: ADD EDI,0x84
// 00432132: ADD EBP,EAX
// 00432134: MOV EAX,dword ptr [ESP + 0x60]
// 00432138: MOV dword ptr [ESP + 0x18],EDI
// 0043213c: ADD EDX,EAX
// 0043213e: MOV dword ptr [ESP + 0x28],EBP
// 00432142: MOV dword ptr [ESP + 0x48],EDX
// 00432146: CMP EDI,ECX
// 00432148: JGE 0x00431f7c
//   XREF to: 00431f7c (CONDITIONAL_JUMP)
// 0043214e: JMP 0x004320e6
//   XREF to: 004320e6 (UNCONDITIONAL_JUMP)
// 00432150: MOV EAX,EBX
//   Label: LAB_00432150
// 00432152: CMP EDX,ESI
//   Label: LAB_00432152
// 00432154: JLE 0x0043215c
//   XREF to: 0043215c (CONDITIONAL_JUMP)
// 00432156: CMP EAX,ESI
// 00432158: JG 0x00432112
//   XREF to: 00432112 (CONDITIONAL_JUMP)
// 0043215a: MOV EDX,ESI
// 0043215c: SUB EDX,EAX
//   Label: LAB_0043215c
// 0043215e: INC EDX
// 0043215f: PUSH EDX
// 00432160: MOV EDX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0x4] (READ)
// 00432164: ADD EDX,EAX
// 00432166: PUSH EDX
// 00432167: ADD EAX,EAX
// 00432169: MOV EDX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x1c] (READ)
// 0043216d: MOV ECX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x28] (READ)
// 00432171: ADD EAX,EDX
// 00432173: SUB EAX,ECX
// 00432175: PUSH EAX
// 00432176: CALL dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x14] (READ)
// 0043217a: ADD ESP,0xc
// 0043217d: INC EDI
// 0043217e: ADD EBP,0x4
// 00432181: JMP 0x004320f2
//   XREF to: 004320f2 (UNCONDITIONAL_JUMP)
