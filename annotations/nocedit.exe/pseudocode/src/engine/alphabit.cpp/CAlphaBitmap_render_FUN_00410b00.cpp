// Name: engine_alphabit.cpp_CAlphaBitmap_render_FUN_00410b00
// Address: 00410b00
// Address Range: [[00410b00, 00410c14]]
// Convention: __cdecl
// Signature: void engine_alphabit.cpp_CAlphaBitmap_render_FUN_00410b00(CAlphaBitmap * this_ptr, int dest_y, int dest_x, int left_x, int top_y, int right_x, int bottom_y)
// Cross-references:
//   core_inv.cpp_CInventory_renderAllItems_FUN_00500690 (00500690) at 00500e73 [UNCONDITIONAL_CALL]
// Globals:
//   int g_BitsPerPixel = 0x8
//   void*[1024] g_ScreenBufferArray
//   undefined4 g_ScreenBufferArray[1]
// Function calls:
//   engine_alphabit.cpp_CAlphaBitmap_initPalette_FUN_00410cf0
//   wincore_windll.cpp_renderAlphaRow16_FUN_005b55f7
//   wincore_windll.cpp_renderAlphaRow32_FUN_005b555c

#include "nocturne.h"

void __cdecl
engine_alphabit_cpp_CAlphaBitmap_render_FUN_00410b00
          (CAlphaBitmap *this_ptr,int dest_y,int dest_x,int left_x,int top_y,int right_x,
          int bottom_y)

{
  int iVar1;
  int unaff_EBP;
  int iVar2;
  uchar *srcAlpha;
  int unaff_EDI;
  uchar *srcIndices;
  int in_stack_00000024;
  int local_18;
  
  engine_alphabit_cpp_CAlphaBitmap_initPalette_FUN_00410cf0(this_ptr);
  iVar1 = (bottom_y - top_y) + 1;
  iVar2 = top_y * this_ptr->width + left_x;
  srcIndices = (uchar *)(this_ptr->ptrRaw + iVar2);
  srcAlpha = (uchar *)(this_ptr->ptrOpa + iVar2);
  if (g_BitsPerPixel == 0x20) {
    if (0 < iVar1) {
      do {
        wincore_windll_cpp_renderAlphaRow32_FUN_005b555c
                  ((uint *)((int)g_ScreenBufferArray[left_x] + dest_x * 4),srcIndices,srcAlpha,
                   in_stack_00000024,local_18);
        srcIndices = srcIndices + this_ptr->width;
        unaff_EBP = unaff_EBP + 4;
        srcAlpha = srcAlpha + this_ptr->width;
      } while (unaff_EBP < iVar1 * 4 + left_x * 4);
    }
  }
  else if (0 < iVar1) {
    do {
      wincore_windll_cpp_renderAlphaRow16_FUN_005b55f7
                ((ushort *)((int)g_ScreenBufferArray[left_x] + dest_x * 2),srcIndices,srcAlpha,
                 in_stack_00000024,local_18);
      srcIndices = srcIndices + this_ptr->width;
      unaff_EDI = unaff_EDI + 4;
      srcAlpha = srcAlpha + this_ptr->width;
    } while (unaff_EDI < local_18);
    return;
  }
  return;
}


// Assembly code:
// 00410b00: PUSH EBX
//   Label: engine_alphabit.cpp_CAlphaBitmap_render_FUN_00410b00
// 00410b01: PUSH ESI
// 00410b02: PUSH EDI
// 00410b03: PUSH EBP
// 00410b04: SUB ESP,0x1c
// 00410b07: MOV EBP,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x4] (READ)
// 00410b0b: MOV EDI,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x10] (READ)
// 00410b0f: MOV ESI,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x14] (READ)
// 00410b13: MOV EAX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x18] (READ)
// 00410b17: SUB EAX,EDI
// 00410b19: PUSH EBP
// 00410b1a: INC EAX
// 00410b1b: MOV EBX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0x1c] (READ)
// 00410b1f: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00410b23: CALL engine_alphabit.cpp_CAlphaBitmap_initPalette_FUN_00410cf0
//   XREF to: 00410cf0 (UNCONDITIONAL_CALL)
// 00410b28: MOV EDX,dword ptr [EBP + 0xc]
// 00410b2b: SUB EBX,ESI
// 00410b2d: IMUL ESI,EDX
// 00410b30: INC EBX
// 00410b31: ADD ESP,0x4
// 00410b34: ADD ESI,EDI
// 00410b36: MOV EDI,dword ptr [EBP]
// 00410b39: MOV EAX,dword ptr [EBP + 0x4]
// 00410b3c: ADD EDI,ESI
// 00410b3e: ADD ESI,EAX
// 00410b40: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0xc] (READ)
// 00410b44: LEA EDX,[EBX*0x4 + 0x0]
// 00410b4b: SHL EAX,0x2
// 00410b4e: MOV ECX,dword ptr [0x0067939c]
//   XREF to: 0067939c (READ)
// 00410b54: ADD EDX,EAX
// 00410b56: CMP ECX,0x20
// 00410b59: JNZ 0x00410bb8
//   XREF to: 00410bb8 (CONDITIONAL_JUMP)
// 00410b5b: TEST EBX,EBX
// 00410b5d: JLE 0x00410bb0
//   XREF to: 00410bb0 (CONDITIONAL_JUMP)
// 00410b5f: MOV EBX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x8] (READ)
// 00410b63: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00410b67: SHL EBX,0x2
// 00410b6a: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x2c] (DATA)
// 00410b6d: MOV dword ptr [ESP + 0x8],EBX
//   XREF to: Stack[-0x24] (WRITE)
// 00410b71: MOV EDX,dword ptr [ESP + 0x10]
//   Label: LAB_00410b71
//   XREF to: Stack[-0x1c] (READ)
// 00410b75: PUSH EDX
// 00410b76: MOV ECX,dword ptr [ESP + 0x50]
//   XREF to: Stack[0x20] (READ)
// 00410b7a: PUSH ECX
// 00410b7b: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x18] (READ)
// 00410b7f: PUSH ESI
// 00410b80: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x24] (READ)
// 00410b84: MOV EAX,dword ptr [EAX + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
//   XREF to: 02cf6aa0 (DATA)
// 00410b8a: PUSH EDI
// 00410b8b: ADD EAX,EBX
// 00410b8d: PUSH EAX
// 00410b8e: CALL wincore_windll.cpp_renderAlphaRow32_FUN_005b555c
//   XREF to: 005b555c (UNCONDITIONAL_CALL)
// 00410b93: ADD ESP,0x14
// 00410b96: MOV EBX,dword ptr [EBP + 0xc]
// 00410b99: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x18] (READ)
// 00410b9d: MOV ECX,dword ptr [ESP]
//   XREF to: Stack[-0x2c] (DATA)
// 00410ba0: ADD EDI,EBX
// 00410ba2: ADD EDX,0x4
// 00410ba5: ADD ESI,EBX
// 00410ba7: MOV dword ptr [ESP + 0x14],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 00410bab: CMP EDX,ECX
// 00410bad: JL 0x00410b71
//   XREF to: 00410b71 (CONDITIONAL_JUMP)
// 00410baf: NOP
// 00410bb0: ADD ESP,0x1c
//   Label: LAB_00410bb0
// 00410bb3: POP EBP
// 00410bb4: POP EDI
// 00410bb5: POP ESI
// 00410bb6: POP EBX
// 00410bb7: RET
// 00410bb8: TEST EBX,EBX
//   Label: LAB_00410bb8
// 00410bba: JLE 0x00410bb0
//   XREF to: 00410bb0 (CONDITIONAL_JUMP)
// 00410bbc: MOV EBX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x8] (READ)
// 00410bc0: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00410bc4: ADD EBX,EBX
// 00410bc6: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 00410bca: MOV dword ptr [ESP + 0x4],EBX
//   XREF to: Stack[-0x28] (WRITE)
// 00410bce: MOV EDX,dword ptr [ESP + 0x10]
//   Label: LAB_00410bce
//   XREF to: Stack[-0x1c] (READ)
// 00410bd2: PUSH EDX
// 00410bd3: MOV ECX,dword ptr [ESP + 0x50]
//   XREF to: Stack[0x20] (READ)
// 00410bd7: PUSH ECX
// 00410bd8: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x14] (READ)
// 00410bdc: PUSH ESI
// 00410bdd: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x28] (READ)
// 00410be1: MOV EAX,dword ptr [EAX + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
//   XREF to: 02cf6aa0 (DATA)
// 00410be7: PUSH EDI
// 00410be8: ADD EAX,EBX
// 00410bea: PUSH EAX
// 00410beb: CALL wincore_windll.cpp_renderAlphaRow16_FUN_005b55f7
//   XREF to: 005b55f7 (UNCONDITIONAL_CALL)
// 00410bf0: ADD ESP,0x14
// 00410bf3: MOV EBX,dword ptr [EBP + 0xc]
// 00410bf6: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x14] (READ)
// 00410bfa: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x20] (READ)
// 00410bfe: ADD EDI,EBX
// 00410c00: ADD EDX,0x4
// 00410c03: ADD ESI,EBX
// 00410c05: MOV dword ptr [ESP + 0x18],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 00410c09: CMP EDX,ECX
// 00410c0b: JL 0x00410bce
//   XREF to: 00410bce (CONDITIONAL_JUMP)
// 00410c0d: ADD ESP,0x1c
// 00410c10: POP EBP
// 00410c11: POP EDI
// 00410c12: POP ESI
// 00410c13: POP EBX
// 00410c14: RET
