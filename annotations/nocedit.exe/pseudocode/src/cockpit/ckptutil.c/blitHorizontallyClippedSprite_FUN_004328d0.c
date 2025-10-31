// Name: cockpit_ckptutil.c_blitHorizontallyClippedSprite_FUN_004328d0
// Address: 004328d0
// Address Range: [[004328d0, 00432a0a]]
// Convention: __cdecl
// Signature: void cockpit_ckptutil.c_blitHorizontallyClippedSprite_FUN_004328d0(void * sprite_data, int start_x, int dest_y, int end_x, int max_height, int unused_param, int src_y_offset, int src_stride)
// Globals:
//   int g_WindowWidth = 0x140
//   int g_BitsPerPixel = 0x8
//   void*[1024] g_ScreenBufferArray
//   undefined4 g_ScreenBufferArray[1]
// Function calls:
//   cockpit_ckptutil.c_getColorConversionFunction_FUN_00431760

#include "nocturne.h"

void __cdecl
cockpit_ckptutil_c_blitHorizontallyClippedSprite_FUN_004328d0
          (void *sprite_data,int start_x,int dest_y,int end_x,int max_height,int unused_param,
          int src_y_offset,int src_stride)

{
  ColorConversionFunc *pCVar1;
  int unaff_EBX;
  void *src_buffer;
  int unaff_EBP;
  void *pvVar2;
  int unaff_retaddr;
  int in_stack_00000024;
  int in_stack_00000040;
  
  if (sprite_data != (void *)0x0) {
    pCVar1 = cockpit_ckptutil_c_getColorConversionFunction_FUN_00431760();
    src_buffer = (void *)((int)sprite_data + start_x + g_WindowWidth / 2 + end_x * in_stack_00000024
                         );
    if (g_BitsPerPixel == 8) {
      pvVar2 = g_ScreenBufferArray[end_x + src_y_offset];
      if (end_x < unused_param - src_y_offset) {
        do {
          pvVar2 = (void *)((int)pvVar2 + start_x);
          (*pCVar1)((void *)((int)pvVar2 - src_y_offset),src_buffer,unaff_EBP);
          end_x = end_x + 1;
          src_buffer = (void *)((int)src_buffer + in_stack_00000040);
        } while (end_x < unaff_retaddr);
        return;
      }
    }
    else {
      pvVar2 = (void *)((int)g_ScreenBufferArray[end_x + src_y_offset] + start_x * 2);
      if (end_x < unused_param - src_y_offset) {
        do {
          (*pCVar1)((void *)((int)pvVar2 + src_y_offset * -2),src_buffer,unaff_EBP);
          end_x = end_x + 1;
          pvVar2 = (void *)((int)pvVar2 + unaff_EBX);
          src_buffer = (void *)((int)src_buffer + in_stack_00000040);
        } while (end_x < (int)sprite_data);
        return;
      }
    }
  }
  return;
}


// Assembly code:
// 004328d0: PUSH EBX
//   Label: cockpit_ckptutil.c_blitHorizontallyClippedSprite_FUN_004328d0
// 004328d1: PUSH ESI
// 004328d2: PUSH EDI
// 004328d3: PUSH EBP
// 004328d4: SUB ESP,0x18
// 004328d7: MOV EBX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 004328db: MOV ESI,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x8] (READ)
// 004328df: MOV EDI,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x1c] (READ)
// 004328e3: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x10] (READ)
// 004328e7: SUB EAX,ESI
// 004328e9: INC EAX
// 004328ea: MOV EDX,dword ptr [0x02cf6a9c]
//   XREF to: 02cf6a9c (READ)
// 004328f0: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004328f4: MOV EAX,[0x02cf6aa0]
//   XREF to: 02cf6aa0 (READ)
// 004328f9: SUB EAX,EDX
// 004328fb: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004328ff: TEST EBX,EBX
// 00432901: JNZ 0x00432918
//   XREF to: 00432918 (CONDITIONAL_JUMP)
// 00432903: LEA EAX,[EAX]
// 00432909: LEA EDX,[EDX]
// 0043290f: NOP
// 00432910: ADD ESP,0x18
//   Label: LAB_00432910
// 00432913: POP EBP
// 00432914: POP EDI
// 00432915: POP ESI
// 00432916: POP EBX
// 00432917: RET
// 00432918: CALL cockpit_ckptutil.c_getColorConversionFunction_FUN_00431760
//   Label: LAB_00432918
//   XREF to: 00431760 (UNCONDITIONAL_CALL)
// 0043291d: MOV ECX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0xc] (READ)
// 00432921: MOV EBP,EAX
// 00432923: IMUL ECX,dword ptr [ESP + 0x48]
//   XREF to: Stack[0x20] (READ)
// 00432928: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 0043292d: MOV EDX,EAX
// 0043292f: SAR EDX,0x1f
// 00432932: SUB EAX,EDX
// 00432934: SAR EAX,0x1
// 00432936: ADD ECX,EBX
// 00432938: ADD EAX,ECX
// 0043293a: LEA EBX,[EAX + ESI*0x1]
// 0043293d: MOV EDX,dword ptr [0x0067939c]
//   XREF to: 0067939c (READ)
// 00432943: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0xc] (READ)
// 00432947: MOV ECX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x14] (READ)
// 0043294b: ADD EAX,EDI
// 0043294d: SUB ECX,EDI
// 0043294f: SHL EAX,0x2
// 00432952: CMP EDX,0x8
// 00432955: JNZ 0x0043299c
//   XREF to: 0043299c (CONDITIONAL_JUMP)
// 00432957: MOV EDI,dword ptr [EAX + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
// 0043295d: ADD EDI,ESI
// 0043295f: MOV ESI,dword ptr [ESP + 0x34]
//   XREF to: Stack[0xc] (READ)
// 00432963: MOV dword ptr [ESP + 0x8],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 00432967: CMP ECX,ESI
// 00432969: JLE 0x00432910
//   XREF to: 00432910 (CONDITIONAL_JUMP)
// 0043296b: MOV ECX,dword ptr [ESP + 0x14]
//   Label: LAB_0043296b
//   XREF to: Stack[-0x14] (READ)
// 0043296f: PUSH ECX
// 00432970: MOV EDX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x18] (READ)
// 00432974: MOV EAX,EDI
// 00432976: PUSH EBX
// 00432977: SUB EAX,EDX
// 00432979: PUSH EAX
// 0043297a: CALL EBP
// 0043297c: ADD ESP,0xc
// 0043297f: INC ESI
// 00432980: MOV ECX,dword ptr [ESP + 0x10]
// 00432984: MOV EAX,dword ptr [ESP + 0x48]
// 00432988: MOV EDX,dword ptr [ESP + 0x8]
// 0043298c: ADD EDI,ECX
// 0043298e: ADD EBX,EAX
// 00432990: CMP ESI,EDX
// 00432992: JL 0x0043296b
//   XREF to: 0043296b (CONDITIONAL_JUMP)
// 00432994: ADD ESP,0x18
// 00432997: POP EBP
// 00432998: POP EDI
// 00432999: POP ESI
// 0043299a: POP EBX
// 0043299b: RET
// 0043299c: MOV EDI,dword ptr [EAX + 0x2cf6a9c]
//   Label: LAB_0043299c
//   XREF to: 02cf6a9c (DATA)
// 004329a2: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x18] (READ)
// 004329a6: MOV EDX,EAX
// 004329a8: SAR EDX,0x1f
// 004329ab: SUB EAX,EDX
// 004329ad: SAR EAX,0x1
// 004329af: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004329b3: MOV EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x18] (READ)
// 004329b7: MOV dword ptr [ESP + 0xc],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 004329bb: ADD EAX,EAX
// 004329bd: ADD ESI,ESI
// 004329bf: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x28] (DATA)
// 004329c2: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x18] (READ)
// 004329c6: ADD EDI,ESI
// 004329c8: ADD EAX,EAX
// 004329ca: MOV ESI,dword ptr [ESP + 0x34]
//   XREF to: Stack[0xc] (READ)
// 004329ce: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 004329d2: CMP ECX,ESI
// 004329d4: JLE 0x00432910
//   XREF to: 00432910 (CONDITIONAL_JUMP)
// 004329da: MOV ECX,dword ptr [ESP + 0x14]
//   Label: LAB_004329da
//   XREF to: Stack[-0x14] (READ)
// 004329de: PUSH ECX
// 004329df: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x28] (READ)
// 004329e3: MOV EAX,EDI
// 004329e5: PUSH EBX
// 004329e6: SUB EAX,EDX
// 004329e8: PUSH EAX
// 004329e9: CALL EBP
// 004329eb: ADD ESP,0xc
// 004329ee: INC ESI
// 004329ef: MOV ECX,dword ptr [ESP + 0x4]
// 004329f3: MOV EAX,dword ptr [ESP + 0x48]
// 004329f7: MOV EDX,dword ptr [ESP + 0xc]
// 004329fb: ADD EDI,ECX
// 004329fd: ADD EBX,EAX
// 004329ff: CMP ESI,EDX
// 00432a01: JL 0x004329da
//   XREF to: 004329da (CONDITIONAL_JUMP)
// 00432a03: ADD ESP,0x18
// 00432a06: POP EBP
// 00432a07: POP EDI
// 00432a08: POP ESI
// 00432a09: POP EBX
// 00432a0a: RET
