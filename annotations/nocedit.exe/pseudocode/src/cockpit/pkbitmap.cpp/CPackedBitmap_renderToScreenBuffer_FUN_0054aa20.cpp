// Name: cockpit_pkbitmap.cpp_CPackedBitmap_renderToScreenBuffer_FUN_0054aa20
// Address: 0054aa20
// Address Range: [[0054aa20, 0054ab27]]
// Convention: __cdecl
// Signature: void cockpit_pkbitmap.cpp_CPackedBitmap_renderToScreenBuffer_FUN_0054aa20(CPackedBitmap * this_ptr, int dest_x, int dest_y)
// Globals:
//   int g_BitsPerPixel = 0x8
//   void*[1024] g_ScreenBufferArray
//   undefined4 g_ScreenBufferArray[1]
// Function calls:
//   cockpit_ckptutil.c_getColorConversionFunction_FUN_00431760

#include "nocturne.h"

void __cdecl
cockpit_pkbitmap_cpp_CPackedBitmap_renderToScreenBuffer_FUN_0054aa20
          (CPackedBitmap *this_ptr,int dest_x,int dest_y)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ColorConversionFunc *pCVar5;
  int iVar6;
  ushort *puVar7;
  int in_stack_00000010;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  if ((this_ptr->row_pointers != (void **)0x0) && (this_ptr->packed_data != (char *)0x0)) {
    pCVar5 = cockpit_ckptutil_c_getColorConversionFunction_FUN_00431760();
    local_14 = 0;
    local_18 = 0;
    local_1c = in_stack_00000010 << 2;
    puVar7 = (ushort *)(*(int *)(dest_x + 0x14) + **(int **)(dest_x + 0x20));
    do {
      iVar2 = *(int *)(dest_x + 0x14);
      iVar3 = *(int *)(*(int *)(dest_x + 0x20) + local_18 + 4);
      iVar4 = *(int *)((int)g_ScreenBufferArray + local_1c);
      for (; puVar7 < (ushort *)(iVar2 + iVar3);
          puVar7 = (ushort *)((uVar1 + 3 & 0xfffffffc) + (int)(puVar7 + 2))) {
        iVar6 = (int)((uint)*puVar7 * g_BitsPerPixel) >> 0x1f;
        uVar1 = puVar7[1];
        (*pCVar5)((void *)(((int)(((uint)*puVar7 * g_BitsPerPixel + iVar6 * -8) -
                                 (uint)(iVar6 << 2 < 0)) >> 3) + iVar4 + local_20),puVar7 + 2,
                  (uint)uVar1);
      }
      local_18 = local_18 + 4;
      local_14 = local_14 + 1;
      local_1c = local_1c + 4;
    } while (local_14 < *(int *)(dest_x + 0x1c));
  }
  return;
}


// Assembly code:
// 0054aa20: PUSH EBX
//   Label: cockpit_pkbitmap.cpp_CPackedBitmap_renderToScreenBuffer_FUN_0054aa20
// 0054aa21: PUSH ESI
// 0054aa22: PUSH EDI
// 0054aa23: PUSH EBP
// 0054aa24: SUB ESP,0x14
// 0054aa27: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 0054aa2b: CMP dword ptr [EAX + 0x20],0x0
// 0054aa2f: JZ 0x0054aa37
//   XREF to: 0054aa37 (CONDITIONAL_JUMP)
// 0054aa31: CMP dword ptr [EAX + 0x14],0x0
// 0054aa35: JNZ 0x0054aa3f
//   XREF to: 0054aa3f (CONDITIONAL_JUMP)
// 0054aa37: ADD ESP,0x14
//   Label: LAB_0054aa37
// 0054aa3a: POP EBP
// 0054aa3b: POP EDI
// 0054aa3c: POP ESI
// 0054aa3d: POP EBX
// 0054aa3e: RET
// 0054aa3f: MOV EDX,dword ptr [ESP + 0x2c]
//   Label: LAB_0054aa3f
//   XREF to: Stack[0x8] (READ)
// 0054aa43: MOV ESI,dword ptr [0x0067939c]
//   XREF to: 0067939c (READ)
// 0054aa49: IMUL EDX,ESI
// 0054aa4c: MOV EAX,EDX
// 0054aa4e: SAR EDX,0x1f
// 0054aa51: SHL EDX,0x3
// 0054aa54: SBB EAX,EDX
// 0054aa56: SAR EAX,0x3
// 0054aa59: XOR EBX,EBX
// 0054aa5b: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x24] (DATA)
// 0054aa5e: CALL cockpit_ckptutil.c_getColorConversionFunction_FUN_00431760
//   XREF to: 00431760 (UNCONDITIONAL_CALL)
// 0054aa63: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0054aa67: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 0054aa6b: XOR EBP,EBP
// 0054aa6d: MOV dword ptr [ESP + 0xc],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 0054aa71: MOV EAX,dword ptr [EAX + 0x20]
// 0054aa74: MOV dword ptr [ESP + 0x8],EBP
//   XREF to: Stack[-0x1c] (WRITE)
// 0054aa78: MOV EBX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 0054aa7c: MOV EDI,dword ptr [EAX]
// 0054aa7e: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0xc] (READ)
// 0054aa82: MOV EBX,dword ptr [EBX + 0x14]
// 0054aa85: SHL EAX,0x2
// 0054aa88: ADD EBX,EDI
// 0054aa8a: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0054aa8e: MOV EAX,dword ptr [ESP + 0x28]
//   Label: LAB_0054aa8e
//   XREF to: Stack[0x4] (READ)
// 0054aa92: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x1c] (READ)
// 0054aa96: MOV EDI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 0054aa9a: MOV EAX,dword ptr [EAX + 0x20]
// 0054aa9d: MOV EBP,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x20] (READ)
// 0054aaa1: ADD EAX,EDX
// 0054aaa3: MOV ESI,dword ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 0054aaa6: MOV EDI,dword ptr [EDI + 0x14]
// 0054aaa9: MOV ECX,dword ptr [EAX + 0x4]
// 0054aaac: MOV EBP,dword ptr [EBP + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
//   XREF to: 02cf6aa0 (DATA)
// 0054aab2: ADD EDI,ECX
// 0054aab4: ADD EBP,ESI
// 0054aab6: CMP EBX,EDI
// 0054aab8: JNC 0x0054aaf5
//   XREF to: 0054aaf5 (CONDITIONAL_JUMP)
// 0054aaba: XOR EDX,EDX
//   Label: LAB_0054aaba
// 0054aabc: MOV EAX,[0x0067939c]
//   XREF to: 0067939c (READ)
// 0054aac1: MOV DX,word ptr [EBX]
// 0054aac4: IMUL EDX,EAX
// 0054aac7: MOV EAX,EDX
// 0054aac9: SAR EDX,0x1f
// 0054aacc: SHL EDX,0x3
// 0054aacf: SBB EAX,EDX
// 0054aad1: SAR EAX,0x3
// 0054aad4: XOR ESI,ESI
// 0054aad6: LEA ECX,[EBX + 0x4]
// 0054aad9: MOV SI,word ptr [EBX + 0x2]
// 0054aadd: LEA EBX,[ESI + 0x3]
// 0054aae0: PUSH ESI
// 0054aae1: PUSH ECX
// 0054aae2: ADD EAX,EBP
// 0054aae4: AND BL,0xfc
// 0054aae7: PUSH EAX
// 0054aae8: ADD EBX,ECX
// 0054aaea: CALL dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x14] (READ)
// 0054aaee: ADD ESP,0xc
// 0054aaf1: CMP EBX,EDI
// 0054aaf3: JC 0x0054aaba
//   XREF to: 0054aaba (CONDITIONAL_JUMP)
// 0054aaf5: MOV EDX,dword ptr [ESP + 0x8]
//   Label: LAB_0054aaf5
// 0054aaf9: MOV ECX,dword ptr [ESP + 0xc]
// 0054aafd: MOV ESI,dword ptr [ESP + 0x4]
// 0054ab01: ADD EDX,0x4
// 0054ab04: INC ECX
// 0054ab05: MOV dword ptr [ESP + 0x8],EDX
// 0054ab09: MOV EDX,dword ptr [ESP + 0x28]
// 0054ab0d: ADD ESI,0x4
// 0054ab10: MOV dword ptr [ESP + 0xc],ECX
// 0054ab14: MOV EDI,dword ptr [EDX + 0x1c]
// 0054ab17: MOV dword ptr [ESP + 0x4],ESI
// 0054ab1b: CMP ECX,EDI
// 0054ab1d: JGE 0x0054aa37
//   XREF to: 0054aa37 (CONDITIONAL_JUMP)
// 0054ab23: JMP 0x0054aa8e
//   XREF to: 0054aa8e (UNCONDITIONAL_JUMP)
