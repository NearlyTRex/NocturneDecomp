// Name: cockpit_ckptutil.c_blitDualModeSprite_FUN_004326a0
// Address: 004326a0
// Address Range: [[004326a0, 0043285a]]
// Convention: __cdecl
// Signature: void cockpit_ckptutil.c_blitDualModeSprite_FUN_004326a0(void * sprite_data, void * span_data, int dest_x, int dest_y, int width, int height)
// Cross-references:
//   cockpit_ckptutil.c_blitFullScreen_FUN_00432b30 (00432b30) at 00432b4e [UNCONDITIONAL_CALL]
// Globals:
//   int g_BitsPerPixel = 0x8
//   void*[1024] g_ScreenBufferArray
//   undefined4 g_ScreenBufferArray[1]
// Function calls:
//   cockpit_ckptutil.c_getColorConversionFunction_FUN_00431760

#include "nocturne.h"

void __cdecl
cockpit_ckptutil_c_blitDualModeSprite_FUN_004326a0
          (void *sprite_data,void *span_data,int dest_x,int dest_y,int width,int height)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ColorConversionFunc *pCVar4;
  int *piVar5;
  void *dest_buffer;
  int iVar6;
  int iVar7;
  int in_stack_0000001c;
  int local_28;
  int local_24;
  int local_20;
  void *local_14;
  
  if (sprite_data != (void *)0x0) {
    pCVar4 = cockpit_ckptutil_c_getColorConversionFunction_FUN_00431760();
    if (g_BitsPerPixel == 8) {
      local_14 = (void *)(dest_y + (int)g_ScreenBufferArray[width]);
      if (0 < in_stack_0000001c) {
        local_24 = 0;
        do {
          if (dest_x == 0) {
            (*pCVar4)(local_14,sprite_data,height);
          }
          else {
            iVar7 = 0;
            for (iVar6 = 0; piVar5 = (int *)(dest_x + local_24), iVar6 < *piVar5; iVar6 = iVar6 + 1)
            {
              iVar1 = iVar7 + 0x44;
              iVar2 = iVar7 + 4;
              iVar3 = iVar7 + 4;
              iVar7 = iVar7 + 4;
              (*pCVar4)((void *)((int)local_14 + *(int *)(iVar3 + (int)piVar5)),
                        (void *)(*(int *)(iVar2 + (int)piVar5) + (int)sprite_data),
                        *(int *)(iVar1 + (int)piVar5));
            }
          }
          local_24 = local_24 + 0x84;
          local_14 = (void *)((int)local_14 + local_28);
          sprite_data = (void *)((int)sprite_data + height);
        } while (local_24 < in_stack_0000001c * 0x84);
      }
    }
    else {
      dest_buffer = (void *)((int)g_ScreenBufferArray[width] + dest_y * 2);
      if (0 < in_stack_0000001c) {
        local_20 = 0;
        do {
          if (dest_x == 0) {
            (*pCVar4)(dest_buffer,sprite_data,height);
          }
          else {
            iVar7 = 0;
            for (iVar6 = 0; piVar5 = (int *)(dest_x + local_20), iVar6 < *piVar5; iVar6 = iVar6 + 1)
            {
              iVar1 = iVar7 + 0x44;
              iVar2 = iVar7 + 4;
              iVar3 = iVar7 + 4;
              iVar7 = iVar7 + 4;
              (*pCVar4)((void *)(*(int *)(iVar3 + (int)piVar5) * 2 + (int)dest_buffer),
                        (void *)(*(int *)(iVar2 + (int)piVar5) + (int)sprite_data),
                        *(int *)(iVar1 + (int)piVar5));
            }
          }
          local_20 = local_20 + 0x84;
          dest_buffer = (void *)((int)dest_buffer + (local_28 / 2) * 2);
          sprite_data = (void *)((int)sprite_data + height);
        } while (local_20 < in_stack_0000001c * 0x84);
      }
    }
  }
  return;
}


// Assembly code:
// 004326a0: PUSH EBX
//   Label: cockpit_ckptutil.c_blitDualModeSprite_FUN_004326a0
// 004326a1: PUSH ESI
// 004326a2: PUSH EDI
// 004326a3: PUSH EBP
// 004326a4: SUB ESP,0x28
// 004326a7: MOV EDI,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x4] (READ)
// 004326ab: MOV EDX,dword ptr [0x02cf6a9c]
//   XREF to: 02cf6a9c (READ)
// 004326b1: MOV EAX,[0x02cf6aa0]
//   XREF to: 02cf6aa0 (READ)
// 004326b6: SUB EAX,EDX
// 004326b8: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 004326bc: TEST EDI,EDI
// 004326be: JNZ 0x004326c8
//   XREF to: 004326c8 (CONDITIONAL_JUMP)
// 004326c0: ADD ESP,0x28
//   Label: LAB_004326c0
// 004326c3: POP EBP
// 004326c4: POP EDI
// 004326c5: POP ESI
// 004326c6: POP EBX
// 004326c7: RET
// 004326c8: CALL cockpit_ckptutil.c_getColorConversionFunction_FUN_00431760
//   Label: LAB_004326c8
//   XREF to: 00431760 (UNCONDITIONAL_CALL)
// 004326cd: MOV EDX,dword ptr [ESP + 0x50]
//   XREF to: Stack[0x18] (READ)
// 004326d1: MOV ESI,dword ptr [ESP + 0x48]
//   XREF to: Stack[0x10] (READ)
// 004326d5: MOV EBX,EDX
// 004326d7: MOV ECX,dword ptr [0x0067939c]
//   XREF to: 0067939c (READ)
// 004326dd: SHL EBX,0x5
// 004326e0: MOV EBP,EAX
// 004326e2: ADD EBX,EDX
// 004326e4: SHL ESI,0x2
// 004326e7: SHL EBX,0x2
// 004326ea: CMP ECX,0x8
// 004326ed: JNZ 0x00432799
//   XREF to: 00432799 (CONDITIONAL_JUMP)
// 004326f3: MOV EDX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0xc] (READ)
// 004326f7: MOV EAX,dword ptr [ESI + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
// 004326fd: ADD EDX,EAX
// 004326ff: MOV EAX,dword ptr [ESP + 0x50]
//   XREF to: Stack[0x18] (READ)
// 00432703: MOV dword ptr [ESP + 0x20],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 00432707: TEST EAX,EAX
// 00432709: JLE 0x004326c0
//   XREF to: 004326c0 (CONDITIONAL_JUMP)
// 0043270b: XOR ECX,ECX
// 0043270d: MOV dword ptr [ESP + 0x8],EBX
//   XREF to: Stack[-0x30] (WRITE)
// 00432711: MOV dword ptr [ESP + 0x10],ECX
//   XREF to: Stack[-0x28] (WRITE)
// 00432715: CMP dword ptr [ESP + 0x40],0x0
//   Label: LAB_00432715
//   XREF to: Stack[0x8] (READ)
// 0043271a: JZ 0x00432787
//   XREF to: 00432787 (CONDITIONAL_JUMP)
// 0043271c: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x28] (READ)
// 00432720: XOR ESI,ESI
// 00432722: XOR EBX,EBX
// 00432724: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00432728: MOV EAX,dword ptr [ESP + 0x40]
//   Label: LAB_00432728
//   XREF to: Stack[0x8] (READ)
// 0043272c: ADD EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x1c] (READ)
// 00432730: CMP EBX,dword ptr [EAX]
// 00432732: JGE 0x00432757
//   XREF to: 00432757 (CONDITIONAL_JUMP)
// 00432734: MOV EDX,dword ptr [ESI + EAX*0x1 + 0x44]
// 00432738: PUSH EDX
// 00432739: MOV EDX,dword ptr [ESI + EAX*0x1 + 0x4]
// 0043273d: ADD EDX,EDI
// 0043273f: MOV ECX,dword ptr [ESI + EAX*0x1 + 0x4]
// 00432743: PUSH EDX
// 00432744: MOV EDX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x18] (READ)
// 00432748: LEA EAX,[EDX + ECX*0x1]
// 0043274b: PUSH EAX
// 0043274c: ADD ESI,0x4
// 0043274f: INC EBX
// 00432750: CALL EBP
// 00432752: ADD ESP,0xc
// 00432755: JMP 0x00432728
//   XREF to: 00432728 (UNCONDITIONAL_JUMP)
// 00432757: MOV EBX,dword ptr [ESP + 0x10]
//   Label: LAB_00432757
// 0043275b: MOV EAX,dword ptr [ESP + 0xc]
// 0043275f: MOV ESI,dword ptr [ESP + 0x20]
// 00432763: MOV EDX,dword ptr [ESP + 0x8]
// 00432767: ADD EBX,0x84
// 0043276d: ADD ESI,EAX
// 0043276f: MOV EAX,dword ptr [ESP + 0x4c]
// 00432773: MOV dword ptr [ESP + 0x10],EBX
// 00432777: MOV dword ptr [ESP + 0x20],ESI
// 0043277b: ADD EDI,EAX
// 0043277d: CMP EBX,EDX
// 0043277f: JGE 0x004326c0
//   XREF to: 004326c0 (CONDITIONAL_JUMP)
// 00432785: JMP 0x00432715
//   XREF to: 00432715 (UNCONDITIONAL_JUMP)
// 00432787: MOV ESI,dword ptr [ESP + 0x4c]
//   Label: LAB_00432787
// 0043278b: PUSH ESI
// 0043278c: PUSH EDI
// 0043278d: MOV EAX,dword ptr [ESP + 0x28]
// 00432791: PUSH EAX
// 00432792: CALL EBP
// 00432794: ADD ESP,0xc
// 00432797: JMP 0x00432757
//   XREF to: 00432757 (UNCONDITIONAL_JUMP)
// 00432799: MOV EDX,dword ptr [ESP + 0x44]
//   Label: LAB_00432799
//   XREF to: Stack[0xc] (READ)
// 0043279d: MOV EAX,dword ptr [ESI + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
// 004327a3: ADD EDX,EDX
// 004327a5: ADD EAX,EDX
// 004327a7: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004327ab: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x2c] (READ)
// 004327af: MOV EDX,EAX
// 004327b1: SAR EDX,0x1f
// 004327b4: SUB EAX,EDX
// 004327b6: SAR EAX,0x1
// 004327b8: MOV ESI,dword ptr [ESP + 0x50]
//   XREF to: Stack[0x18] (READ)
// 004327bc: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 004327c0: TEST ESI,ESI
// 004327c2: JLE 0x004326c0
//   XREF to: 004326c0 (CONDITIONAL_JUMP)
// 004327c8: ADD EAX,EAX
// 004327ca: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x38] (DATA)
// 004327cd: XOR EAX,EAX
// 004327cf: MOV dword ptr [ESP + 0x4],EBX
//   XREF to: Stack[-0x34] (WRITE)
// 004327d3: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 004327d7: CMP dword ptr [ESP + 0x40],0x0
//   Label: LAB_004327d7
//   XREF to: Stack[0x8] (READ)
// 004327dc: JZ 0x00432849
//   XREF to: 00432849 (CONDITIONAL_JUMP)
// 004327de: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x24] (READ)
// 004327e2: XOR ESI,ESI
// 004327e4: XOR EBX,EBX
// 004327e6: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 004327ea: MOV EAX,dword ptr [ESP + 0x40]
//   Label: LAB_004327ea
//   XREF to: Stack[0x8] (READ)
// 004327ee: ADD EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x20] (READ)
// 004327f2: CMP EBX,dword ptr [EAX]
// 004327f4: JGE 0x0043281a
//   XREF to: 0043281a (CONDITIONAL_JUMP)
// 004327f6: MOV EDX,dword ptr [ESI + EAX*0x1 + 0x44]
// 004327fa: MOV ECX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x14] (READ)
// 004327fe: PUSH EDX
// 004327ff: MOV EDX,dword ptr [ESI + EAX*0x1 + 0x4]
// 00432803: MOV EAX,dword ptr [ESI + EAX*0x1 + 0x4]
// 00432807: ADD EDX,EDI
// 00432809: ADD EAX,EAX
// 0043280b: PUSH EDX
// 0043280c: ADD EAX,ECX
// 0043280e: PUSH EAX
// 0043280f: ADD ESI,0x4
// 00432812: INC EBX
// 00432813: CALL EBP
// 00432815: ADD ESP,0xc
// 00432818: JMP 0x004327ea
//   XREF to: 004327ea (UNCONDITIONAL_JUMP)
// 0043281a: MOV EDX,dword ptr [ESP + 0x14]
//   Label: LAB_0043281a
// 0043281e: MOV EAX,dword ptr [ESP]
// 00432821: MOV ECX,dword ptr [ESP + 0x24]
// 00432825: MOV EBX,dword ptr [ESP + 0x4c]
// 00432829: MOV ESI,dword ptr [ESP + 0x4]
// 0043282d: ADD EDX,0x84
// 00432833: ADD ECX,EAX
// 00432835: ADD EDI,EBX
// 00432837: MOV dword ptr [ESP + 0x14],EDX
// 0043283b: MOV dword ptr [ESP + 0x24],ECX
// 0043283f: CMP EDX,ESI
// 00432841: JGE 0x004326c0
//   XREF to: 004326c0 (CONDITIONAL_JUMP)
// 00432847: JMP 0x004327d7
//   XREF to: 004327d7 (UNCONDITIONAL_JUMP)
// 00432849: MOV ECX,dword ptr [ESP + 0x4c]
//   Label: LAB_00432849
// 0043284d: PUSH ECX
// 0043284e: PUSH EDI
// 0043284f: MOV EBX,dword ptr [ESP + 0x2c]
// 00432853: PUSH EBX
// 00432854: CALL EBP
// 00432856: ADD ESP,0xc
// 00432859: JMP 0x0043281a
//   XREF to: 0043281a (UNCONDITIONAL_JUMP)
