// Name: cockpit_pkbitmap.cpp_CPackedBitmap_renderClippedRegion_FUN_0054ab30
// Address: 0054ab30
// Address Range: [[0054ab30, 0054aca2]]
// Convention: __cdecl
// Signature: void cockpit_pkbitmap.cpp_CPackedBitmap_renderClippedRegion_FUN_0054ab30(CPackedBitmap * this_ptr, int dest_x, int dest_y, int clip_left, int start_row, int clip_right, int end_row)
// Cross-references:
//   cockpit_pkbitmap.cpp_CPackedBitmap_renderWithGlobalClipping_FUN_0054acb0 (0054acb0) at 0054ad89 [UNCONDITIONAL_CALL]
// Globals:
//   int g_BitsPerPixel = 0x8
//   void*[1024] g_ScreenBufferArray
//   undefined4 g_ScreenBufferArray[1]
// Function calls:
//   cockpit_ckptutil.c_getColorConversionFunction_FUN_00431760

#include "nocturne.h"

void __cdecl
cockpit_pkbitmap_cpp_CPackedBitmap_renderClippedRegion_FUN_0054ab30
          (CPackedBitmap *this_ptr,int dest_x,int dest_y,int clip_left,int start_row,int clip_right,
          int end_row)

{
  int iVar1;
  ColorConversionFunc *pCVar2;
  uint uVar3;
  void *dest_buffer;
  uint count;
  int *piVar4;
  int iVar5;
  ushort *puVar6;
  ushort *src_buffer;
  int iVar7;
  int in_stack_00000020;
  int local_28;
  int local_20;
  int local_1c;
  
  if ((this_ptr->row_pointers != (void **)0x0) && (this_ptr->packed_data != (char *)0x0)) {
    pCVar2 = cockpit_ckptutil_c_getColorConversionFunction_FUN_00431760();
    local_20 = clip_left << 2;
    local_1c = clip_right << 2;
    do {
      piVar4 = (int *)(*(int *)(dest_x + 0x20) + local_1c);
      puVar6 = (ushort *)(*piVar4 + *(int *)(dest_x + 0x14));
      iVar1 = *(int *)((int)g_ScreenBufferArray + local_20);
      do {
        if ((ushort *)(piVar4[1] + *(int *)(dest_x + 0x14)) <= puVar6) goto LAB_0054abe8;
        uVar3 = (uint)*puVar6;
        src_buffer = puVar6 + 2;
        if (clip_right < (int)uVar3) goto LAB_0054abe8;
        count = (uint)puVar6[1];
        iVar7 = uVar3 + count + -1;
        puVar6 = (ushort *)((int)src_buffer + (count + 3 & 0xfffffffc));
      } while (iVar7 < start_row);
      if ((int)uVar3 < start_row) {
        src_buffer = (ushort *)((int)src_buffer + (start_row - uVar3));
        count = count - (start_row - uVar3);
        uVar3 = start_row;
      }
      while (iVar5 = (int)(g_BitsPerPixel * uVar3) >> 0x1f,
            dest_buffer = (void *)(((int)((g_BitsPerPixel * uVar3 + iVar5 * -8) -
                                         (uint)(iVar5 << 2 < 0)) >> 3) + local_28 + iVar1),
            iVar7 <= clip_right) {
        (*pCVar2)(dest_buffer,src_buffer,count);
        if ((uint)dest_y <= puVar6) goto LAB_0054abe8;
        uVar3 = (uint)*puVar6;
        src_buffer = puVar6 + 2;
        if (clip_right < (int)uVar3) goto LAB_0054abe8;
        count = (uint)puVar6[1];
        puVar6 = (ushort *)((count + 3 & 0xfffffffc) + (int)src_buffer);
        iVar7 = uVar3 + count + -1;
      }
      (*pCVar2)(dest_buffer,src_buffer,count - (iVar7 - clip_right));
LAB_0054abe8:
      local_20 = local_20 + 4;
      local_1c = local_1c + 4;
    } while (local_1c <= in_stack_00000020 << 2);
  }
  return;
}


// Assembly code:
// 0054ab30: PUSH EBX
//   Label: cockpit_pkbitmap.cpp_CPackedBitmap_renderClippedRegion_FUN_0054ab30
// 0054ab31: PUSH ESI
// 0054ab32: PUSH EDI
// 0054ab33: PUSH EBP
// 0054ab34: SUB ESP,0x1c
// 0054ab37: MOV EBP,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x18] (READ)
// 0054ab3b: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x4] (READ)
// 0054ab3f: CMP dword ptr [EAX + 0x20],0x0
// 0054ab43: JZ 0x0054ab4b
//   XREF to: 0054ab4b (CONDITIONAL_JUMP)
// 0054ab45: CMP dword ptr [EAX + 0x14],0x0
// 0054ab49: JNZ 0x0054ab53
//   XREF to: 0054ab53 (CONDITIONAL_JUMP)
// 0054ab4b: ADD ESP,0x1c
//   Label: LAB_0054ab4b
// 0054ab4e: POP EBP
// 0054ab4f: POP EDI
// 0054ab50: POP ESI
// 0054ab51: POP EBX
// 0054ab52: RET
// 0054ab53: MOV EDX,dword ptr [ESP + 0x34]
//   Label: LAB_0054ab53
//   XREF to: Stack[0x8] (READ)
// 0054ab57: MOV EBX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x10] (READ)
// 0054ab5b: MOV ESI,dword ptr [0x0067939c]
//   XREF to: 0067939c (READ)
// 0054ab61: SUB EDX,EBX
// 0054ab63: IMUL EDX,ESI
// 0054ab66: MOV EAX,EDX
// 0054ab68: SAR EDX,0x1f
// 0054ab6b: SHL EDX,0x3
// 0054ab6e: SBB EAX,EDX
// 0054ab70: SAR EAX,0x3
// 0054ab73: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x2c] (DATA)
// 0054ab76: CALL cockpit_ckptutil.c_getColorConversionFunction_FUN_00431760
//   XREF to: 00431760 (UNCONDITIONAL_CALL)
// 0054ab7b: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0054ab7f: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0xc] (READ)
// 0054ab83: SHL EAX,0x2
// 0054ab86: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0054ab8a: MOV EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x14] (READ)
// 0054ab8e: SHL EAX,0x2
// 0054ab91: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0054ab95: MOV EAX,dword ptr [ESP + 0x48]
//   XREF to: Stack[0x1c] (READ)
// 0054ab99: SHL EAX,0x2
// 0054ab9c: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0054aba0: MOV EDX,dword ptr [ESP + 0x30]
//   Label: LAB_0054aba0
//   XREF to: Stack[0x4] (READ)
// 0054aba4: MOV EDI,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x20] (READ)
// 0054aba8: MOV EDX,dword ptr [EDX + 0x20]
// 0054abab: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x4] (READ)
// 0054abaf: ADD EDX,EDI
// 0054abb1: MOV EAX,dword ptr [EAX + 0x14]
// 0054abb4: MOV EBX,dword ptr [EDX]
// 0054abb6: MOV EDX,dword ptr [EDX + 0x4]
// 0054abb9: ADD EBX,EAX
// 0054abbb: ADD EDX,EAX
// 0054abbd: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x24] (READ)
// 0054abc1: MOV dword ptr [ESP + 0x18],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 0054abc5: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x2c] (DATA)
// 0054abc8: MOV EAX,dword ptr [EAX + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
//   XREF to: 02cf6aa0 (DATA)
// 0054abce: ADD EDX,EAX
// 0054abd0: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x14] (READ)
// 0054abd4: MOV dword ptr [ESP + 0x10],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 0054abd8: CMP EBX,EAX
// 0054abda: JNC 0x0054abe8
//   Label: LAB_0054abda
//   XREF to: 0054abe8 (CONDITIONAL_JUMP)
// 0054abdc: XOR EAX,EAX
// 0054abde: MOV AX,word ptr [EBX]
// 0054abe1: LEA ESI,[EBX + 0x4]
// 0054abe4: CMP EAX,EBP
// 0054abe6: JLE 0x0054ac0c
//   XREF to: 0054ac0c (CONDITIONAL_JUMP)
// 0054abe8: MOV ESI,dword ptr [ESP + 0x8]
//   Label: LAB_0054abe8
//   XREF to: Stack[-0x24] (READ)
// 0054abec: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x20] (READ)
// 0054abf0: MOV EDI,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x28] (READ)
// 0054abf4: ADD ESI,0x4
// 0054abf7: ADD EBX,0x4
// 0054abfa: MOV dword ptr [ESP + 0x8],ESI
//   XREF to: Stack[-0x24] (WRITE)
// 0054abfe: MOV dword ptr [ESP + 0xc],EBX
//   XREF to: Stack[-0x20] (WRITE)
// 0054ac02: CMP EBX,EDI
// 0054ac04: JG 0x0054ab4b
//   XREF to: 0054ab4b (CONDITIONAL_JUMP)
// 0054ac0a: JMP 0x0054aba0
//   XREF to: 0054aba0 (UNCONDITIONAL_JUMP)
// 0054ac0c: XOR ECX,ECX
//   Label: LAB_0054ac0c
// 0054ac0e: MOV CX,word ptr [EBX + 0x2]
// 0054ac12: LEA EDX,[ECX + 0x3]
// 0054ac15: LEA EDI,[EAX + ECX*0x1]
// 0054ac18: AND DL,0xfc
// 0054ac1b: DEC EDI
// 0054ac1c: LEA EBX,[ESI + EDX*0x1]
// 0054ac1f: MOV EDX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x10] (READ)
// 0054ac23: CMP EDI,EDX
// 0054ac25: JGE 0x0054ac2d
//   XREF to: 0054ac2d (CONDITIONAL_JUMP)
// 0054ac27: CMP EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x14] (READ)
// 0054ac2b: JMP 0x0054abda
//   XREF to: 0054abda (UNCONDITIONAL_JUMP)
// 0054ac2d: CMP EAX,EDX
//   Label: LAB_0054ac2d
// 0054ac2f: JL 0x0054ac5f
//   XREF to: 0054ac5f (CONDITIONAL_JUMP)
// 0054ac31: MOV EDX,dword ptr [0x0067939c]
//   Label: LAB_0054ac31
//   XREF to: 0067939c (READ)
// 0054ac37: IMUL EDX,EAX
// 0054ac3a: MOV EAX,EDX
// 0054ac3c: SAR EDX,0x1f
// 0054ac3f: SHL EDX,0x3
// 0054ac42: SBB EAX,EDX
// 0054ac44: SAR EAX,0x3
// 0054ac47: ADD EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x1c] (READ)
// 0054ac4b: CMP EDI,EBP
// 0054ac4d: JLE 0x0054ac6b
//   XREF to: 0054ac6b (CONDITIONAL_JUMP)
// 0054ac4f: SUB EDI,EBP
// 0054ac51: SUB ECX,EDI
// 0054ac53: PUSH ECX
// 0054ac54: PUSH ESI
// 0054ac55: PUSH EAX
// 0054ac56: CALL dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x18] (READ)
// 0054ac5a: ADD ESP,0xc
// 0054ac5d: JMP 0x0054abe8
//   XREF to: 0054abe8 (UNCONDITIONAL_JUMP)
// 0054ac5f: SUB EDX,EAX
//   Label: LAB_0054ac5f
// 0054ac61: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x10] (READ)
// 0054ac65: ADD ESI,EDX
// 0054ac67: SUB ECX,EDX
// 0054ac69: JMP 0x0054ac31
//   XREF to: 0054ac31 (UNCONDITIONAL_JUMP)
// 0054ac6b: PUSH ECX
//   Label: LAB_0054ac6b
// 0054ac6c: PUSH ESI
// 0054ac6d: PUSH EAX
// 0054ac6e: CALL dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x18] (READ)
// 0054ac72: ADD ESP,0xc
// 0054ac75: CMP EBX,dword ptr [ESP + 0x18]
// 0054ac79: JNC 0x0054abe8
//   XREF to: 0054abe8 (CONDITIONAL_JUMP)
// 0054ac7f: XOR EAX,EAX
// 0054ac81: MOV AX,word ptr [EBX]
// 0054ac84: LEA ESI,[EBX + 0x4]
// 0054ac87: CMP EAX,EBP
// 0054ac89: JG 0x0054abe8
//   XREF to: 0054abe8 (CONDITIONAL_JUMP)
// 0054ac8f: XOR ECX,ECX
// 0054ac91: MOV CX,word ptr [EBX + 0x2]
// 0054ac95: LEA EBX,[ECX + 0x3]
// 0054ac98: LEA EDI,[EAX + ECX*0x1]
// 0054ac9b: AND BL,0xfc
// 0054ac9e: DEC EDI
// 0054ac9f: ADD EBX,ESI
// 0054aca1: JMP 0x0054ac31
//   XREF to: 0054ac31 (UNCONDITIONAL_JUMP)
