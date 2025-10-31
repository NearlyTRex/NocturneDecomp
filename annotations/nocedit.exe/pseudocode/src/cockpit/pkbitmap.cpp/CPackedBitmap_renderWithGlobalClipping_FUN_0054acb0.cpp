// Name: cockpit_pkbitmap.cpp_CPackedBitmap_renderWithGlobalClipping_FUN_0054acb0
// Address: 0054acb0
// Address Range: [[0054acb0, 0054ada1]]
// Convention: __cdecl
// Signature: void cockpit_pkbitmap.cpp_CPackedBitmap_renderWithGlobalClipping_FUN_0054acb0(CPackedBitmap * this_ptr, int dest_x, int dest_y, int src_left, int src_top, int width, int height)
// Cross-references:
//   cockpit_pkbitmap.cpp_CPackedBitmap_renderIfIntersectsRect_FUN_0054adb0 (0054adb0) at 0054ae55 [UNCONDITIONAL_CALL]
// Globals:
//   int g_ClipLeft
//   int g_ClipTop
//   int g_ClipRight
//   int g_ClipBottom
// Function calls:
//   cockpit_pkbitmap.cpp_CPackedBitmap_renderClippedRegion_FUN_0054ab30

#include "nocturne.h"

void __cdecl
cockpit_pkbitmap_cpp_CPackedBitmap_renderWithGlobalClipping_FUN_0054acb0
          (CPackedBitmap *this_ptr,int dest_x,int dest_y,int src_left,int src_top,int width,
          int height)

{
  if ((this_ptr->row_pointers != (void **)0x0) && (this_ptr->packed_data != (char *)0x0)) {
    if (dest_x < g_ClipLeft) {
      src_left = src_left + (g_ClipLeft - dest_x);
      dest_x = g_ClipLeft;
    }
    if (dest_y < g_ClipTop) {
      src_top = src_top + (g_ClipTop - dest_y);
      dest_y = g_ClipTop;
    }
    if (g_ClipRight < (width + dest_x) - src_left) {
      width = (g_ClipRight - dest_x) + src_left;
    }
    if (g_ClipBottom < (dest_y + height) - src_top) {
      height = (g_ClipBottom - dest_y) + src_top;
    }
    if ((((src_left <= width) && (src_top <= height)) && (0 < width)) &&
       (((0 < height && (src_left < this_ptr->width)) && (src_top < this_ptr->height)))) {
      if (src_left < 0) {
        dest_x = dest_x - src_left;
        src_left = 0;
      }
      if (src_top < 0) {
        dest_y = dest_y - src_top;
        src_top = 0;
      }
      if (this_ptr->width <= width) {
        width = this_ptr->width + -1;
      }
      if (this_ptr->height <= height) {
        height = this_ptr->height + -1;
      }
      cockpit_pkbitmap_cpp_CPackedBitmap_renderClippedRegion_FUN_0054ab30
                (this_ptr,dest_x,dest_y,src_left,src_top,width,height);
    }
  }
  return;
}


// Assembly code:
// 0054acb0: PUSH EBX
//   Label: cockpit_pkbitmap.cpp_CPackedBitmap_renderWithGlobalClipping_FUN_0054acb0
// 0054acb1: PUSH ESI
// 0054acb2: PUSH EDI
// 0054acb3: PUSH EBP
// 0054acb4: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0054acb8: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0054acbc: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0054acc0: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0054acc4: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 0054acc8: MOV EDI,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x1c] (READ)
// 0054accc: CMP dword ptr [ECX + 0x20],0x0
// 0054acd0: JZ 0x0054ad91
//   XREF to: 0054ad91 (CONDITIONAL_JUMP)
// 0054acd6: CMP dword ptr [ECX + 0x14],0x0
// 0054acda: JZ 0x0054ad91
//   XREF to: 0054ad91 (CONDITIONAL_JUMP)
// 0054ace0: MOV EBP,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 0054ace6: CMP EBX,EBP
// 0054ace8: JGE 0x0054acf4
//   XREF to: 0054acf4 (CONDITIONAL_JUMP)
// 0054acea: SUB EBP,EBX
// 0054acec: MOV EBX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 0054acf2: ADD EDX,EBP
// 0054acf4: MOV EBP,dword ptr [0x02d0255c]
//   Label: LAB_0054acf4
//   XREF to: 02d0255c (READ)
// 0054acfa: CMP ESI,EBP
// 0054acfc: JGE 0x0054ad08
//   XREF to: 0054ad08 (CONDITIONAL_JUMP)
// 0054acfe: SUB EBP,ESI
// 0054ad00: MOV ESI,dword ptr [0x02d0255c]
//   XREF to: 02d0255c (READ)
// 0054ad06: ADD EAX,EBP
// 0054ad08: MOV EBP,dword ptr [ESP + 0x28]
//   Label: LAB_0054ad08
//   XREF to: Stack[0x18] (READ)
// 0054ad0c: ADD EBP,EBX
// 0054ad0e: SUB EBP,EDX
// 0054ad10: CMP EBP,dword ptr [0x02d02560]
//   XREF to: 02d02560 (READ)
// 0054ad16: JLE 0x0054ad26
//   XREF to: 0054ad26 (CONDITIONAL_JUMP)
// 0054ad18: MOV EBP,dword ptr [0x02d02560]
//   XREF to: 02d02560 (READ)
// 0054ad1e: SUB EBP,EBX
// 0054ad20: ADD EBP,EDX
// 0054ad22: MOV dword ptr [ESP + 0x28],EBP
//   XREF to: Stack[0x18] (WRITE)
// 0054ad26: LEA EBP,[ESI + EDI*0x1]
//   Label: LAB_0054ad26
// 0054ad29: SUB EBP,EAX
// 0054ad2b: CMP EBP,dword ptr [0x02d02564]
//   XREF to: 02d02564 (READ)
// 0054ad31: JLE 0x0054ad3d
//   XREF to: 0054ad3d (CONDITIONAL_JUMP)
// 0054ad33: MOV EDI,dword ptr [0x02d02564]
//   XREF to: 02d02564 (READ)
// 0054ad39: SUB EDI,ESI
// 0054ad3b: ADD EDI,EAX
// 0054ad3d: MOV EBP,dword ptr [ESP + 0x28]
//   Label: LAB_0054ad3d
//   XREF to: Stack[0x18] (READ)
// 0054ad41: CMP EDX,EBP
// 0054ad43: JG 0x0054ad91
//   XREF to: 0054ad91 (CONDITIONAL_JUMP)
// 0054ad45: CMP EAX,EDI
// 0054ad47: JG 0x0054ad91
//   XREF to: 0054ad91 (CONDITIONAL_JUMP)
// 0054ad49: TEST EBP,EBP
// 0054ad4b: JLE 0x0054ad91
//   XREF to: 0054ad91 (CONDITIONAL_JUMP)
// 0054ad4d: TEST EDI,EDI
// 0054ad4f: JLE 0x0054ad91
//   XREF to: 0054ad91 (CONDITIONAL_JUMP)
// 0054ad51: CMP EDX,dword ptr [ECX + 0x18]
// 0054ad54: JGE 0x0054ad91
//   XREF to: 0054ad91 (CONDITIONAL_JUMP)
// 0054ad56: CMP EAX,dword ptr [ECX + 0x1c]
// 0054ad59: JGE 0x0054ad91
//   XREF to: 0054ad91 (CONDITIONAL_JUMP)
// 0054ad5b: TEST EDX,EDX
// 0054ad5d: JL 0x0054ad96
//   XREF to: 0054ad96 (CONDITIONAL_JUMP)
// 0054ad5f: TEST EAX,EAX
//   Label: LAB_0054ad5f
// 0054ad61: JL 0x0054ad9c
//   XREF to: 0054ad9c (CONDITIONAL_JUMP)
// 0054ad63: MOV EBP,dword ptr [ESP + 0x28]
//   Label: LAB_0054ad63
//   XREF to: Stack[0x18] (READ)
// 0054ad67: CMP EBP,dword ptr [ECX + 0x18]
// 0054ad6a: JL 0x0054ad74
//   XREF to: 0054ad74 (CONDITIONAL_JUMP)
// 0054ad6c: MOV EBP,dword ptr [ECX + 0x18]
// 0054ad6f: DEC EBP
// 0054ad70: MOV dword ptr [ESP + 0x28],EBP
//   XREF to: Stack[0x18] (WRITE)
// 0054ad74: MOV EBP,dword ptr [ECX + 0x1c]
//   Label: LAB_0054ad74
// 0054ad77: CMP EDI,EBP
// 0054ad79: JL 0x0054ad7e
//   XREF to: 0054ad7e (CONDITIONAL_JUMP)
// 0054ad7b: LEA EDI,[EBP + -0x1]
// 0054ad7e: PUSH EDI
//   Label: LAB_0054ad7e
// 0054ad7f: MOV EDI,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x18] (READ)
// 0054ad83: PUSH EDI
// 0054ad84: PUSH EAX
// 0054ad85: PUSH EDX
// 0054ad86: PUSH ESI
// 0054ad87: PUSH EBX
// 0054ad88: PUSH ECX
// 0054ad89: CALL cockpit_pkbitmap.cpp_CPackedBitmap_renderClippedRegion_FUN_0054ab30
//   XREF to: 0054ab30 (UNCONDITIONAL_CALL)
// 0054ad8e: ADD ESP,0x1c
// 0054ad91: POP EBP
//   Label: LAB_0054ad91
// 0054ad92: POP EDI
// 0054ad93: POP ESI
// 0054ad94: POP EBX
// 0054ad95: RET
// 0054ad96: SUB EBX,EDX
//   Label: LAB_0054ad96
// 0054ad98: XOR EDX,EDX
// 0054ad9a: JMP 0x0054ad5f
//   XREF to: 0054ad5f (UNCONDITIONAL_JUMP)
// 0054ad9c: SUB ESI,EAX
//   Label: LAB_0054ad9c
// 0054ad9e: XOR EAX,EAX
// 0054ada0: JMP 0x0054ad63
//   XREF to: 0054ad63 (UNCONDITIONAL_JUMP)
