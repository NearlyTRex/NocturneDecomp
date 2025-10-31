// Name: cockpit_ckptutil.c_blitUnifiedSprite_FUN_00432300
// Address: 00432300
// Address Range: [[00432300, 00432530]]
// Convention: __cdecl
// Signature: void cockpit_ckptutil.c_blitUnifiedSprite_FUN_00432300(void * sprite_data, void * span_data, int dest_x, int dest_y, int width, int height)
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
cockpit_ckptutil_c_blitUnifiedSprite_FUN_00432300
          (void *sprite_data,void *span_data,int dest_x,int dest_y,int width,int height)

{
  ColorConversionFunc *pCVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int in_stack_0000001c;
  int local_2c;
  int local_28;
  int local_24;
  void *local_18;
  void *local_14;
  
  iVar5 = g_ClipRight - dest_x;
  iVar7 = g_ClipLeft - dest_x;
  if (sprite_data != (void *)0x0) {
    pCVar1 = cockpit_ckptutil_c_getColorConversionFunction_FUN_00431760();
    if (g_BitsPerPixel == 8) {
      local_14 = (void *)(dest_y + (int)g_ScreenBufferArray[width]);
      if (0 < in_stack_0000001c) {
        local_24 = 0;
        do {
          if (dest_x == 0) {
            (*pCVar1)(local_14,span_data,height);
          }
          else {
            iVar6 = 0;
            iVar8 = 0;
            while (piVar3 = (int *)(dest_x + local_24), iVar8 < *piVar3) {
              iVar2 = *(int *)((int)piVar3 + iVar6 + 4);
              iVar4 = *(int *)((int)piVar3 + iVar6 + 0x44) + iVar2 + -1;
              if (((iVar2 < iVar7) && (iVar2 = iVar7, iVar4 < iVar7)) ||
                 ((iVar5 < iVar4 && (iVar4 = iVar5, iVar5 < iVar2)))) {
                iVar8 = iVar8 + 1;
                iVar6 = iVar6 + 4;
              }
              else {
                (*pCVar1)((void *)(iVar2 + (int)local_14),(void *)((int)span_data + iVar2),
                          (iVar4 - iVar2) + 1);
                iVar8 = iVar8 + 1;
                iVar6 = iVar6 + 4;
              }
            }
          }
          local_24 = local_24 + 0x84;
          local_14 = (void *)((int)local_14 + local_2c);
          span_data = (void *)((int)span_data + height);
        } while (local_24 < in_stack_0000001c * 0x84);
      }
    }
    else {
      local_18 = (void *)((int)g_ScreenBufferArray[width] + dest_y * 2);
      if (0 < in_stack_0000001c) {
        local_28 = 0;
        do {
          if (dest_x == 0) {
            (*pCVar1)(local_18,span_data,height);
          }
          else {
            iVar6 = 0;
            iVar8 = 0;
            while (piVar3 = (int *)(dest_x + local_28), iVar8 < *piVar3) {
              iVar2 = *(int *)((int)piVar3 + iVar6 + 4);
              iVar4 = *(int *)((int)piVar3 + iVar6 + 0x44) + iVar2 + -1;
              if (((iVar2 < iVar7) && (iVar2 = iVar7, iVar4 < iVar7)) ||
                 ((iVar5 < iVar4 && (iVar4 = iVar5, iVar5 < iVar2)))) {
                iVar8 = iVar8 + 1;
                iVar6 = iVar6 + 4;
              }
              else {
                (*pCVar1)((void *)(iVar2 * 2 + (int)local_18),(void *)((int)span_data + iVar2),
                          (iVar4 - iVar2) + 1);
                iVar8 = iVar8 + 1;
                iVar6 = iVar6 + 4;
              }
            }
          }
          local_28 = local_28 + 0x84;
          local_18 = (void *)((int)local_18 + (local_2c / 2) * 2);
          span_data = (void *)((int)span_data + height);
        } while (local_28 < in_stack_0000001c * 0x84);
      }
    }
  }
  return;
}


// Assembly code:
// 00432300: PUSH EBX
//   Label: cockpit_ckptutil.c_blitUnifiedSprite_FUN_00432300
// 00432301: PUSH ESI
// 00432302: PUSH EDI
// 00432303: PUSH EBP
// 00432304: SUB ESP,0x2c
// 00432307: MOV EDX,dword ptr [ESP + 0x48]
//   XREF to: Stack[0xc] (READ)
// 0043230b: MOV EBP,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x4] (READ)
// 0043230f: MOV EBX,dword ptr [0x02d02560]
//   XREF to: 02d02560 (READ)
// 00432315: MOV EAX,[0x02cf6aa0]
//   XREF to: 02cf6aa0 (READ)
// 0043231a: MOV EDI,dword ptr [0x02cf6a9c]
//   XREF to: 02cf6a9c (READ)
// 00432320: MOV ESI,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 00432326: SUB EBX,EDX
// 00432328: SUB EAX,EDI
// 0043232a: SUB ESI,EDX
// 0043232c: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 00432330: TEST EBP,EBP
// 00432332: JNZ 0x0043233c
//   XREF to: 0043233c (CONDITIONAL_JUMP)
// 00432334: ADD ESP,0x2c
//   Label: LAB_00432334
// 00432337: POP EBP
// 00432338: POP EDI
// 00432339: POP ESI
// 0043233a: POP EBX
// 0043233b: RET
// 0043233c: CALL cockpit_ckptutil.c_getColorConversionFunction_FUN_00431760
//   Label: LAB_0043233c
//   XREF to: 00431760 (UNCONDITIONAL_CALL)
// 00432341: MOV EDX,dword ptr [ESP + 0x54]
//   XREF to: Stack[0x18] (READ)
// 00432345: MOV EBP,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0x10] (READ)
// 00432349: MOV EDI,EDX
// 0043234b: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0043234f: SHL EDI,0x5
// 00432352: MOV EAX,[0x0067939c]
//   XREF to: 0067939c (READ)
// 00432357: ADD EDI,EDX
// 00432359: SHL EBP,0x2
// 0043235c: SHL EDI,0x2
// 0043235f: CMP EAX,0x8
// 00432362: JNZ 0x0043243e
//   XREF to: 0043243e (CONDITIONAL_JUMP)
// 00432368: MOV EDX,dword ptr [ESP + 0x48]
//   XREF to: Stack[0xc] (READ)
// 0043236c: MOV EAX,dword ptr [EBP + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
// 00432372: ADD EDX,EAX
// 00432374: MOV ECX,dword ptr [ESP + 0x54]
//   XREF to: Stack[0x18] (READ)
// 00432378: MOV dword ptr [ESP + 0x24],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 0043237c: TEST ECX,ECX
// 0043237e: JLE 0x00432334
//   XREF to: 00432334 (CONDITIONAL_JUMP)
// 00432380: XOR ECX,ECX
// 00432382: MOV dword ptr [ESP + 0x8],EDI
//   XREF to: Stack[-0x34] (WRITE)
// 00432386: MOV dword ptr [ESP + 0x14],ECX
//   XREF to: Stack[-0x28] (WRITE)
// 0043238a: CMP dword ptr [ESP + 0x44],0x0
//   Label: LAB_0043238a
//   XREF to: Stack[0x8] (READ)
// 0043238f: JZ 0x004323fa
//   XREF to: 004323fa (CONDITIONAL_JUMP)
// 00432391: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x28] (READ)
// 00432395: XOR EBP,EBP
// 00432397: XOR EDI,EDI
// 00432399: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0043239d: MOV EDX,dword ptr [ESP + 0x44]
//   Label: LAB_0043239d
//   XREF to: Stack[0x8] (READ)
// 004323a1: ADD EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x20] (READ)
// 004323a5: CMP EDI,dword ptr [EDX]
// 004323a7: JGE 0x004323c2
//   XREF to: 004323c2 (CONDITIONAL_JUMP)
// 004323a9: MOV EAX,dword ptr [EDX + EBP*0x1 + 0x4]
// 004323ad: MOV EDX,dword ptr [EDX + EBP*0x1 + 0x44]
// 004323b1: ADD EDX,EAX
// 004323b3: DEC EDX
// 004323b4: CMP EAX,ESI
// 004323b6: JGE 0x00432414
//   XREF to: 00432414 (CONDITIONAL_JUMP)
// 004323b8: CMP EDX,ESI
// 004323ba: JGE 0x00432412
//   XREF to: 00432412 (CONDITIONAL_JUMP)
// 004323bc: INC EDI
//   Label: LAB_004323bc
// 004323bd: ADD EBP,0x4
// 004323c0: JMP 0x0043239d
//   XREF to: 0043239d (UNCONDITIONAL_JUMP)
// 004323c2: MOV ECX,dword ptr [ESP + 0x14]
//   Label: LAB_004323c2
// 004323c6: MOV EAX,dword ptr [ESP + 0xc]
// 004323ca: MOV EDI,dword ptr [ESP + 0x24]
// 004323ce: MOV EBP,dword ptr [ESP + 0x40]
// 004323d2: MOV EDX,dword ptr [ESP + 0x8]
// 004323d6: ADD ECX,0x84
// 004323dc: ADD EDI,EAX
// 004323de: MOV EAX,dword ptr [ESP + 0x50]
// 004323e2: MOV dword ptr [ESP + 0x14],ECX
// 004323e6: ADD EBP,EAX
// 004323e8: MOV dword ptr [ESP + 0x24],EDI
// 004323ec: MOV dword ptr [ESP + 0x40],EBP
// 004323f0: CMP ECX,EDX
// 004323f2: JGE 0x00432334
//   XREF to: 00432334 (CONDITIONAL_JUMP)
// 004323f8: JMP 0x0043238a
//   XREF to: 0043238a (UNCONDITIONAL_JUMP)
// 004323fa: MOV EBP,dword ptr [ESP + 0x50]
//   Label: LAB_004323fa
// 004323fe: PUSH EBP
// 004323ff: MOV EAX,dword ptr [ESP + 0x44]
// 00432403: PUSH EAX
// 00432404: MOV EDX,dword ptr [ESP + 0x2c]
// 00432408: PUSH EDX
// 00432409: CALL dword ptr [ESP + 0x34]
// 0043240d: ADD ESP,0xc
// 00432410: JMP 0x004323c2
//   XREF to: 004323c2 (UNCONDITIONAL_JUMP)
// 00432412: MOV EAX,ESI
//   Label: LAB_00432412
// 00432414: CMP EDX,EBX
//   Label: LAB_00432414
// 00432416: JLE 0x0043241e
//   XREF to: 0043241e (CONDITIONAL_JUMP)
// 00432418: CMP EAX,EBX
// 0043241a: JG 0x004323bc
//   XREF to: 004323bc (CONDITIONAL_JUMP)
// 0043241c: MOV EDX,EBX
// 0043241e: SUB EDX,EAX
//   Label: LAB_0043241e
// 00432420: INC EDX
// 00432421: PUSH EDX
// 00432422: MOV EDX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x4] (READ)
// 00432426: ADD EDX,EAX
// 00432428: PUSH EDX
// 00432429: ADD EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x18] (READ)
// 0043242d: PUSH EAX
// 0043242e: CALL dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x14] (READ)
// 00432432: ADD ESP,0xc
// 00432435: INC EDI
// 00432436: ADD EBP,0x4
// 00432439: JMP 0x0043239d
//   XREF to: 0043239d (UNCONDITIONAL_JUMP)
// 0043243e: MOV EAX,dword ptr [ESP + 0x48]
//   Label: LAB_0043243e
//   XREF to: Stack[0xc] (READ)
// 00432442: MOV EDX,dword ptr [EBP + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
// 00432448: ADD EAX,EAX
// 0043244a: ADD EDX,EAX
// 0043244c: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x30] (READ)
// 00432450: MOV dword ptr [ESP + 0x20],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 00432454: MOV EDX,EAX
// 00432456: SAR EDX,0x1f
// 00432459: SUB EAX,EDX
// 0043245b: SAR EAX,0x1
// 0043245d: MOV EDX,dword ptr [ESP + 0x54]
//   XREF to: Stack[0x18] (READ)
// 00432461: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 00432465: TEST EDX,EDX
// 00432467: JLE 0x00432334
//   XREF to: 00432334 (CONDITIONAL_JUMP)
// 0043246d: MOV dword ptr [ESP + 0x4],EDI
//   XREF to: Stack[-0x38] (WRITE)
// 00432471: XOR EBP,EBP
// 00432473: ADD EAX,EAX
// 00432475: MOV dword ptr [ESP + 0x10],EBP
//   XREF to: Stack[-0x2c] (WRITE)
// 00432479: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x3c] (DATA)
// 0043247c: CMP dword ptr [ESP + 0x44],0x0
//   Label: LAB_0043247c
//   XREF to: Stack[0x8] (READ)
// 00432481: JZ 0x004324eb
//   XREF to: 004324eb (CONDITIONAL_JUMP)
// 00432483: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x2c] (READ)
// 00432487: XOR EBP,EBP
// 00432489: XOR EDI,EDI
// 0043248b: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0043248f: MOV EDX,dword ptr [ESP + 0x44]
//   Label: LAB_0043248f
//   XREF to: Stack[0x8] (READ)
// 00432493: ADD EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x24] (READ)
// 00432497: CMP EDI,dword ptr [EDX]
// 00432499: JGE 0x004324b4
//   XREF to: 004324b4 (CONDITIONAL_JUMP)
// 0043249b: MOV EAX,dword ptr [EDX + EBP*0x1 + 0x4]
// 0043249f: MOV EDX,dword ptr [EDX + EBP*0x1 + 0x44]
// 004324a3: ADD EDX,EAX
// 004324a5: DEC EDX
// 004324a6: CMP EAX,ESI
// 004324a8: JGE 0x00432505
//   XREF to: 00432505 (CONDITIONAL_JUMP)
// 004324aa: CMP EDX,ESI
// 004324ac: JGE 0x00432503
//   XREF to: 00432503 (CONDITIONAL_JUMP)
// 004324ae: INC EDI
//   Label: LAB_004324ae
// 004324af: ADD EBP,0x4
// 004324b2: JMP 0x0043248f
//   XREF to: 0043248f (UNCONDITIONAL_JUMP)
// 004324b4: MOV EDI,dword ptr [ESP + 0x10]
//   Label: LAB_004324b4
// 004324b8: MOV EAX,dword ptr [ESP]
// 004324bb: MOV EBP,dword ptr [ESP + 0x20]
// 004324bf: MOV EDX,dword ptr [ESP + 0x40]
// 004324c3: MOV ECX,dword ptr [ESP + 0x4]
// 004324c7: ADD EDI,0x84
// 004324cd: ADD EBP,EAX
// 004324cf: MOV EAX,dword ptr [ESP + 0x50]
// 004324d3: MOV dword ptr [ESP + 0x10],EDI
// 004324d7: ADD EDX,EAX
// 004324d9: MOV dword ptr [ESP + 0x20],EBP
// 004324dd: MOV dword ptr [ESP + 0x40],EDX
// 004324e1: CMP EDI,ECX
// 004324e3: JGE 0x00432334
//   XREF to: 00432334 (CONDITIONAL_JUMP)
// 004324e9: JMP 0x0043247c
//   XREF to: 0043247c (UNCONDITIONAL_JUMP)
// 004324eb: MOV EDX,dword ptr [ESP + 0x50]
//   Label: LAB_004324eb
// 004324ef: PUSH EDX
// 004324f0: MOV ECX,dword ptr [ESP + 0x44]
// 004324f4: PUSH ECX
// 004324f5: MOV EDI,dword ptr [ESP + 0x28]
// 004324f9: PUSH EDI
// 004324fa: CALL dword ptr [ESP + 0x34]
// 004324fe: ADD ESP,0xc
// 00432501: JMP 0x004324b4
//   XREF to: 004324b4 (UNCONDITIONAL_JUMP)
// 00432503: MOV EAX,ESI
//   Label: LAB_00432503
// 00432505: CMP EDX,EBX
//   Label: LAB_00432505
// 00432507: JLE 0x0043250f
//   XREF to: 0043250f (CONDITIONAL_JUMP)
// 00432509: CMP EAX,EBX
// 0043250b: JG 0x004324ae
//   XREF to: 004324ae (CONDITIONAL_JUMP)
// 0043250d: MOV EDX,EBX
// 0043250f: SUB EDX,EAX
//   Label: LAB_0043250f
// 00432511: INC EDX
// 00432512: PUSH EDX
// 00432513: MOV EDX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x4] (READ)
// 00432517: ADD EDX,EAX
// 00432519: PUSH EDX
// 0043251a: ADD EAX,EAX
// 0043251c: ADD EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x1c] (READ)
// 00432520: PUSH EAX
// 00432521: CALL dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x14] (READ)
// 00432525: ADD ESP,0xc
// 00432528: INC EDI
// 00432529: ADD EBP,0x4
// 0043252c: JMP 0x0043248f
//   XREF to: 0043248f (UNCONDITIONAL_JUMP)
