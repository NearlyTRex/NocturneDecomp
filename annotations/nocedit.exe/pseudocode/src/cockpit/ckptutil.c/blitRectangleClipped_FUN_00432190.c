// Name: cockpit_ckptutil.c_blitRectangleClipped_FUN_00432190
// Address: 00432190
// Address Range: [[00432190, 004322f5]]
// Convention: __cdecl
// Signature: void cockpit_ckptutil.c_blitRectangleClipped_FUN_00432190(void * sprite_data, int dest_x, int dest_y, int width, int height)
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
cockpit_ckptutil_c_blitRectangleClipped_FUN_00432190
          (void *sprite_data,int dest_x,int dest_y,int width,int height)

{
  ColorConversionFunc *pCVar1;
  int iVar2;
  int unaff_EBX;
  int iVar3;
  int iVar4;
  void *pvVar5;
  int in_stack_00000018;
  int in_stack_00000030;
  int in_stack_00000034;
  int local_28;
  
  iVar4 = g_ClipLeft - dest_x;
  if (sprite_data != (void *)0x0) {
    pCVar1 = cockpit_ckptutil_c_getColorConversionFunction_FUN_00431760();
    iVar2 = height + -1;
    if (g_BitsPerPixel == 8) {
      pvVar5 = g_ScreenBufferArray[width];
      iVar3 = 0;
      if (((iVar4 < 1) || (iVar3 = iVar4, iVar4 <= iVar2)) &&
         (((iVar2 <= local_28 || (iVar2 = local_28, iVar3 <= local_28)) &&
          (iVar4 = 0, 0 < in_stack_00000018)))) {
        do {
          pvVar5 = (void *)((int)pvVar5 + dest_x);
          (*pCVar1)((void *)((int)pvVar5 + iVar3),(void *)((int)sprite_data + iVar3),
                    (iVar2 - iVar3) + 1);
          iVar4 = iVar4 + 1;
          sprite_data = (void *)((int)sprite_data + in_stack_00000030);
        } while (iVar4 < in_stack_00000034);
        return;
      }
    }
    else {
      pvVar5 = (void *)((int)g_ScreenBufferArray[width] + dest_x * 2);
      iVar3 = 0;
      if ((((iVar4 < 1) || (iVar3 = iVar4, iVar4 <= iVar2)) &&
          ((iVar2 <= local_28 || (iVar2 = local_28, iVar3 <= local_28)))) &&
         (iVar4 = 0, 0 < in_stack_00000018)) {
        do {
          (*pCVar1)((void *)(iVar3 * 2 + (int)pvVar5),(void *)((int)sprite_data + iVar3),
                    (iVar2 - iVar3) + 1);
          iVar4 = iVar4 + 1;
          pvVar5 = (void *)((int)pvVar5 + unaff_EBX);
          sprite_data = (void *)((int)sprite_data + in_stack_00000030);
        } while (iVar4 < in_stack_00000034);
        return;
      }
    }
  }
  return;
}


// Assembly code:
// 00432190: PUSH EBX
//   Label: cockpit_ckptutil.c_blitRectangleClipped_FUN_00432190
// 00432191: PUSH ESI
// 00432192: PUSH EDI
// 00432193: PUSH EBP
// 00432194: SUB ESP,0x1c
// 00432197: MOV EBX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x4] (READ)
// 0043219b: MOV EBP,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x8] (READ)
// 0043219f: MOV EAX,[0x02d02560]
//   XREF to: 02d02560 (READ)
// 004321a4: SUB EAX,EBP
// 004321a6: MOV EDX,dword ptr [0x02cf6a9c]
//   XREF to: 02cf6a9c (READ)
// 004321ac: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x2c] (DATA)
// 004321af: MOV EAX,[0x02cf6aa0]
//   XREF to: 02cf6aa0 (READ)
// 004321b4: MOV ESI,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 004321ba: SUB EAX,EDX
// 004321bc: SUB ESI,EBP
// 004321be: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004321c2: TEST EBX,EBX
// 004321c4: JNZ 0x004321d8
//   XREF to: 004321d8 (CONDITIONAL_JUMP)
// 004321c6: LEA EAX,[EAX]
// 004321cc: LEA EDX,[EDX]
// 004321d0: ADD ESP,0x1c
//   Label: LAB_004321d0
// 004321d3: POP EBP
// 004321d4: POP EDI
// 004321d5: POP ESI
// 004321d6: POP EBX
// 004321d7: RET
// 004321d8: CALL cockpit_ckptutil.c_getColorConversionFunction_FUN_00431760
//   Label: LAB_004321d8
//   XREF to: 00431760 (UNCONDITIONAL_CALL)
// 004321dd: MOV ECX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0xc] (READ)
// 004321e1: MOV EDI,dword ptr [0x0067939c]
//   XREF to: 0067939c (READ)
// 004321e7: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004321eb: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x10] (READ)
// 004321ef: SHL ECX,0x2
// 004321f2: DEC EAX
// 004321f3: CMP EDI,0x8
// 004321f6: JNZ 0x0043225d
//   XREF to: 0043225d (CONDITIONAL_JUMP)
// 004321f8: MOV EDI,dword ptr [ECX + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
// 004321fe: MOV ECX,EAX
// 00432200: ADD EDI,EBP
// 00432202: XOR EBP,EBP
// 00432204: TEST ESI,ESI
// 00432206: JLE 0x0043220e
//   XREF to: 0043220e (CONDITIONAL_JUMP)
// 00432208: CMP EAX,ESI
// 0043220a: JL 0x004321d0
//   XREF to: 004321d0 (CONDITIONAL_JUMP)
// 0043220c: MOV EBP,ESI
// 0043220e: MOV EDX,dword ptr [ESP]
//   Label: LAB_0043220e
//   XREF to: Stack[-0x2c] (DATA)
// 00432211: CMP ECX,EDX
// 00432213: JLE 0x0043221b
//   XREF to: 0043221b (CONDITIONAL_JUMP)
// 00432215: CMP EBP,EDX
// 00432217: JG 0x004321d0
//   XREF to: 004321d0 (CONDITIONAL_JUMP)
// 00432219: MOV ECX,EDX
// 0043221b: MOV EAX,dword ptr [ESP + 0x40]
//   Label: LAB_0043221b
//   XREF to: Stack[0x14] (READ)
// 0043221f: XOR ESI,ESI
// 00432221: TEST EAX,EAX
// 00432223: JLE 0x004321d0
//   XREF to: 004321d0 (CONDITIONAL_JUMP)
// 00432225: SUB ECX,EBP
// 00432227: INC ECX
// 00432228: MOV dword ptr [ESP + 0x4],ECX
//   XREF to: Stack[-0x28] (WRITE)
// 0043222c: MOV ECX,dword ptr [ESP + 0x4]
//   Label: LAB_0043222c
//   XREF to: Stack[-0x28] (READ)
// 00432230: PUSH ECX
// 00432231: LEA EAX,[EBX + EBP*0x1]
// 00432234: PUSH EAX
// 00432235: LEA EAX,[EDI + EBP*0x1]
// 00432238: PUSH EAX
// 00432239: CALL dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x14] (READ)
// 0043223d: ADD ESP,0xc
// 00432240: INC ESI
// 00432241: MOV EAX,dword ptr [ESP + 0x14]
// 00432245: MOV EDX,dword ptr [ESP + 0x3c]
// 00432249: MOV ECX,dword ptr [ESP + 0x40]
// 0043224d: ADD EDI,EAX
// 0043224f: ADD EBX,EDX
// 00432251: CMP ESI,ECX
// 00432253: JL 0x0043222c
//   XREF to: 0043222c (CONDITIONAL_JUMP)
// 00432255: ADD ESP,0x1c
// 00432258: POP EBP
// 00432259: POP EDI
// 0043225a: POP ESI
// 0043225b: POP EBX
// 0043225c: RET
// 0043225d: MOV EDI,dword ptr [ECX + 0x2cf6a9c]
//   Label: LAB_0043225d
//   XREF to: 02cf6a9c (DATA)
// 00432263: ADD EBP,EBP
// 00432265: MOV ECX,EAX
// 00432267: ADD EDI,EBP
// 00432269: XOR EBP,EBP
// 0043226b: TEST ESI,ESI
// 0043226d: JLE 0x00432279
//   XREF to: 00432279 (CONDITIONAL_JUMP)
// 0043226f: CMP EAX,ESI
// 00432271: JL 0x004321d0
//   XREF to: 004321d0 (CONDITIONAL_JUMP)
// 00432277: MOV EBP,ESI
// 00432279: MOV EAX,dword ptr [ESP]
//   Label: LAB_00432279
//   XREF to: Stack[-0x2c] (DATA)
// 0043227c: CMP ECX,EAX
// 0043227e: JLE 0x0043228a
//   XREF to: 0043228a (CONDITIONAL_JUMP)
// 00432280: CMP EBP,EAX
// 00432282: JG 0x004321d0
//   XREF to: 004321d0 (CONDITIONAL_JUMP)
// 00432288: MOV ECX,EAX
// 0043228a: MOV EAX,dword ptr [ESP + 0x14]
//   Label: LAB_0043228a
//   XREF to: Stack[-0x18] (READ)
// 0043228e: MOV EDX,EAX
// 00432290: SAR EDX,0x1f
// 00432293: SUB EAX,EDX
// 00432295: SAR EAX,0x1
// 00432297: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0043229b: MOV EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x14] (READ)
// 0043229f: XOR ESI,ESI
// 004322a1: TEST EAX,EAX
// 004322a3: JLE 0x004321d0
//   XREF to: 004321d0 (CONDITIONAL_JUMP)
// 004322a9: SUB ECX,EBP
// 004322ab: LEA EAX,[EBP + EBP*0x1]
// 004322af: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 004322b3: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x18] (READ)
// 004322b7: INC ECX
// 004322b8: ADD EAX,EAX
// 004322ba: MOV dword ptr [ESP + 0x10],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 004322be: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 004322c2: MOV EDX,dword ptr [ESP + 0x10]
//   Label: LAB_004322c2
//   XREF to: Stack[-0x1c] (READ)
// 004322c6: PUSH EDX
// 004322c7: LEA EAX,[EBX + EBP*0x1]
// 004322ca: PUSH EAX
// 004322cb: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x20] (READ)
// 004322cf: ADD EAX,EDI
// 004322d1: PUSH EAX
// 004322d2: CALL dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x14] (READ)
// 004322d6: ADD ESP,0xc
// 004322d9: INC ESI
// 004322da: MOV ECX,dword ptr [ESP + 0x8]
// 004322de: MOV EAX,dword ptr [ESP + 0x3c]
// 004322e2: MOV EDX,dword ptr [ESP + 0x40]
// 004322e6: ADD EDI,ECX
// 004322e8: ADD EBX,EAX
// 004322ea: CMP ESI,EDX
// 004322ec: JL 0x004322c2
//   XREF to: 004322c2 (CONDITIONAL_JUMP)
// 004322ee: ADD ESP,0x1c
// 004322f1: POP EBP
// 004322f2: POP EDI
// 004322f3: POP ESI
// 004322f4: POP EBX
// 004322f5: RET
