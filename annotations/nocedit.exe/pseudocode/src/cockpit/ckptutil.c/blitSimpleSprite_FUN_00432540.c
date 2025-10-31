// Name: cockpit_ckptutil.c_blitSimpleSprite_FUN_00432540
// Address: 00432540
// Address Range: [[00432540, 00432690]]
// Convention: __cdecl
// Signature: void cockpit_ckptutil.c_blitSimpleSprite_FUN_00432540(void * sprite_data, int dest_x, int dest_y, int width, int height)
// Globals:
//   int g_BitsPerPixel = 0x8
//   void*[1024] g_ScreenBufferArray
//   undefined4 g_ScreenBufferArray[1]
// Function calls:
//   cockpit_ckptutil.c_getColorConversionFunction_FUN_00431760

#include "nocturne.h"

void __cdecl
cockpit_ckptutil_c_blitSimpleSprite_FUN_00432540
          (void *sprite_data,int dest_x,int dest_y,int width,int height)

{
  ColorConversionFunc *pCVar1;
  int unaff_EBX;
  void *pvVar2;
  void *dest_buffer;
  int unaff_ESI;
  int local_20;
  
  if (sprite_data != (void *)0x0) {
    pCVar1 = cockpit_ckptutil_c_getColorConversionFunction_FUN_00431760();
    if (g_BitsPerPixel == 8) {
      pvVar2 = (void *)((int)g_ScreenBufferArray[width] + dest_y);
      if (0 < height) {
        do {
          (*pCVar1)(pvVar2,sprite_data,width);
          sprite_data = (void *)((int)sprite_data + width);
          dest_x = dest_x + 1;
          pvVar2 = (void *)((int)pvVar2 + unaff_EBX);
        } while (dest_x < height);
        return;
      }
    }
    else if (g_BitsPerPixel == 0x10) {
      pvVar2 = (void *)((int)g_ScreenBufferArray[width] + dest_y * 2);
      if (0 < height) {
        do {
          (*pCVar1)(pvVar2,sprite_data,width);
          sprite_data = (void *)((int)sprite_data + width);
          dest_y = dest_y + 1;
          pvVar2 = (void *)((int)pvVar2 + (local_20 / 2) * 2);
        } while (dest_y < height);
        return;
      }
    }
    else {
      dest_buffer = (void *)((int)g_ScreenBufferArray[width] + dest_y * 4);
      pvVar2 = sprite_data;
      if (0 < height) {
        do {
          (*pCVar1)(dest_buffer,pvVar2,width);
          sprite_data = (void *)((int)sprite_data + 1);
          dest_buffer = (void *)((int)dest_buffer + unaff_ESI);
          pvVar2 = (void *)((int)pvVar2 + width);
        } while ((int)sprite_data < height);
        return;
      }
    }
  }
  return;
}


// Assembly code:
// 00432540: PUSH EBX
//   Label: cockpit_ckptutil.c_blitSimpleSprite_FUN_00432540
// 00432541: PUSH ESI
// 00432542: PUSH EDI
// 00432543: PUSH EBP
// 00432544: SUB ESP,0x1c
// 00432547: MOV EBX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x4] (READ)
// 0043254b: MOV ESI,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x10] (READ)
// 0043254f: MOV EDI,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x14] (READ)
// 00432553: MOV EDX,dword ptr [0x02cf6a9c]
//   XREF to: 02cf6a9c (READ)
// 00432559: MOV EBP,dword ptr [0x02cf6aa0]
//   XREF to: 02cf6aa0 (READ)
// 0043255f: SUB EBP,EDX
// 00432561: MOV dword ptr [ESP + 0x8],EBP
//   XREF to: Stack[-0x24] (WRITE)
// 00432565: TEST EBX,EBX
// 00432567: JNZ 0x00432578
//   XREF to: 00432578 (CONDITIONAL_JUMP)
// 00432569: LEA EAX,[EAX]
// 0043256f: NOP
// 00432570: ADD ESP,0x1c
//   Label: LAB_00432570
// 00432573: POP EBP
// 00432574: POP EDI
// 00432575: POP ESI
// 00432576: POP EBX
// 00432577: RET
// 00432578: CALL cockpit_ckptutil.c_getColorConversionFunction_FUN_00431760
//   Label: LAB_00432578
//   XREF to: 00431760 (UNCONDITIONAL_CALL)
// 0043257d: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00432581: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0xc] (READ)
// 00432585: MOV ECX,dword ptr [0x0067939c]
//   XREF to: 0067939c (READ)
// 0043258b: SHL EAX,0x2
// 0043258e: CMP ECX,0x8
// 00432591: JNZ 0x004325d0
//   XREF to: 004325d0 (CONDITIONAL_JUMP)
// 00432593: MOV ECX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x8] (READ)
// 00432597: MOV EBP,dword ptr [EAX + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
// 0043259d: XOR EAX,EAX
// 0043259f: ADD EBP,ECX
// 004325a1: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004325a5: TEST EDI,EDI
// 004325a7: JLE 0x00432570
//   XREF to: 00432570 (CONDITIONAL_JUMP)
// 004325a9: PUSH ESI
//   Label: LAB_004325a9
// 004325aa: PUSH EBX
// 004325ab: PUSH EBP
// 004325ac: CALL dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x20] (READ)
// 004325b0: ADD ESP,0xc
// 004325b3: ADD EBX,ESI
// 004325b5: MOV EDX,dword ptr [ESP + 0x14]
// 004325b9: MOV ECX,dword ptr [ESP + 0x8]
// 004325bd: INC EDX
// 004325be: ADD EBP,ECX
// 004325c0: MOV dword ptr [ESP + 0x14],EDX
// 004325c4: CMP EDI,EDX
// 004325c6: JG 0x004325a9
//   XREF to: 004325a9 (CONDITIONAL_JUMP)
// 004325c8: ADD ESP,0x1c
// 004325cb: POP EBP
// 004325cc: POP EDI
// 004325cd: POP ESI
// 004325ce: POP EBX
// 004325cf: RET
// 004325d0: CMP ECX,0x10
//   Label: LAB_004325d0
// 004325d3: JNZ 0x0043262d
//   XREF to: 0043262d (CONDITIONAL_JUMP)
// 004325d5: MOV EDX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x8] (READ)
// 004325d9: MOV EBP,dword ptr [EAX + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
// 004325df: ADD EDX,EDX
// 004325e1: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x24] (READ)
// 004325e5: ADD EBP,EDX
// 004325e7: MOV EDX,EAX
// 004325e9: SAR EDX,0x1f
// 004325ec: SUB EAX,EDX
// 004325ee: SAR EAX,0x1
// 004325f0: XOR EDX,EDX
// 004325f2: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 004325f6: MOV dword ptr [ESP + 0x18],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 004325fa: TEST EDI,EDI
// 004325fc: JLE 0x00432570
//   XREF to: 00432570 (CONDITIONAL_JUMP)
// 00432602: ADD EAX,EAX
// 00432604: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x2c] (DATA)
// 00432607: PUSH ESI
//   Label: LAB_00432607
// 00432608: PUSH EBX
// 00432609: PUSH EBP
// 0043260a: CALL dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x20] (READ)
// 0043260e: ADD ESP,0xc
// 00432611: ADD EBX,ESI
// 00432613: MOV EDX,dword ptr [ESP + 0x18]
// 00432617: MOV ECX,dword ptr [ESP]
// 0043261a: INC EDX
// 0043261b: ADD EBP,ECX
// 0043261d: MOV dword ptr [ESP + 0x18],EDX
// 00432621: CMP EDI,EDX
// 00432623: JG 0x00432607
//   XREF to: 00432607 (CONDITIONAL_JUMP)
// 00432625: ADD ESP,0x1c
// 00432628: POP EBP
// 00432629: POP EDI
// 0043262a: POP ESI
// 0043262b: POP EBX
// 0043262c: RET
// 0043262d: MOV EDX,dword ptr [ESP + 0x34]
//   Label: LAB_0043262d
//   XREF to: Stack[0x8] (READ)
// 00432631: MOV EBP,dword ptr [EAX + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
// 00432637: SHL EDX,0x2
// 0043263a: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x24] (READ)
// 0043263e: ADD EBP,EDX
// 00432640: MOV EDX,EAX
// 00432642: SAR EDX,0x1f
// 00432645: SHL EDX,0x2
// 00432648: SBB EAX,EDX
// 0043264a: SAR EAX,0x2
// 0043264d: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00432651: XOR EAX,EAX
// 00432653: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00432657: TEST EDI,EDI
// 00432659: JLE 0x00432570
//   XREF to: 00432570 (CONDITIONAL_JUMP)
// 0043265f: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x24] (READ)
// 00432663: SHL EAX,0x2
// 00432666: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0043266a: PUSH ESI
//   Label: LAB_0043266a
// 0043266b: PUSH EBX
// 0043266c: PUSH EBP
// 0043266d: CALL dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x20] (READ)
// 00432671: ADD ESP,0xc
// 00432674: ADD EBX,ESI
// 00432676: MOV EDX,dword ptr [ESP + 0x10]
// 0043267a: MOV ECX,dword ptr [ESP + 0x4]
// 0043267e: INC EDX
// 0043267f: ADD EBP,ECX
// 00432681: MOV dword ptr [ESP + 0x10],EDX
// 00432685: CMP EDI,EDX
// 00432687: JG 0x0043266a
//   XREF to: 0043266a (CONDITIONAL_JUMP)
// 00432689: ADD ESP,0x1c
// 0043268c: POP EBP
// 0043268d: POP EDI
// 0043268e: POP ESI
// 0043268f: POP EBX
// 00432690: RET
