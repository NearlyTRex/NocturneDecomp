// Name: cockpit_ckptutil.c_applyActPalette_FUN_004319b0
// Address: 004319b0
// Address Range: [[004319b0, 00431a23]]
// Convention: __cdecl
// Signature: void cockpit_ckptutil.c_applyActPalette_FUN_004319b0(char * filename, void * bitmap_buffer, int bitmap_size, int palette_index)
// Cross-references:
//   cockpit_ckptutil.c_applyColorPalette_FUN_004319b0 (00431830) at 00431862 [UNCONDITIONAL_CALL]
//   cockpit_ckptutil.c_loadBitmapWithPalette_FUN_004317b0 (004317b0) at 004317e0 [UNCONDITIONAL_CALL]
//   cockpit_ckptutil.c_loadRotatedBitmapFile_FUN_00434690 (00434690) at 00434859 [UNCONDITIONAL_CALL]
// Function calls:
//   cockpit_ckptutil.c_loadACTToIndexedPalette_FUN_00431a30

#include "nocturne.h"

void __cdecl
cockpit_ckptutil_c_applyActPalette_FUN_004319b0
          (char *filename,void *bitmap_buffer,int bitmap_size,int palette_index)

{
  byte *pbVar1;
  uint uVar2;
  BADSPACEBASE *in_ESP;
  byte bStack00000014;
  char acStack_104 [4];
  byte abStack_100 [252];
  
  cockpit_ckptutil_c_loadACTToIndexedPalette_FUN_00431a30(filename,acStack_104);
  if ((-1 < _bStack00000014) && (_bStack00000014 < 0x100)) {
    abStack_100[_bStack00000014] = bStack00000014;
  }
  uVar2 = 0;
  pbVar1 = (byte *)bitmap_size;
  if (bitmap_size != 0) {
    do {
      uVar2 = uVar2 + 1;
      *pbVar1 = abStack_100[*pbVar1];
      pbVar1 = pbVar1 + 1;
    } while (uVar2 < (uint)bitmap_size);
  }
  return;
}


// Assembly code:
// 004319b0: PUSH EBX
//   Label: cockpit_ckptutil.c_applyActPalette_FUN_004319b0
// 004319b1: SUB ESP,0x100
// 004319b7: MOV EBX,dword ptr [ESP + 0x110]
//   XREF to: Stack[0xc] (READ)
// 004319be: MOV EAX,ESP
// 004319c0: PUSH EAX
// 004319c1: MOV EDX,dword ptr [ESP + 0x10c]
//   XREF to: Stack[0x4] (READ)
// 004319c8: PUSH EDX
// 004319c9: CALL cockpit_ckptutil.c_loadACTToIndexedPalette_FUN_00431a30
//   XREF to: 00431a30 (UNCONDITIONAL_CALL)
// 004319ce: ADD ESP,0x8
// 004319d1: MOV ECX,dword ptr [ESP + 0x114]
//   XREF to: Stack[0x10] (READ)
// 004319d8: TEST ECX,ECX
// 004319da: JL 0x004319e4
//   XREF to: 004319e4 (CONDITIONAL_JUMP)
// 004319dc: CMP ECX,0x100
// 004319e2: JL 0x00431a18
//   XREF to: 00431a18 (CONDITIONAL_JUMP)
// 004319e4: XOR EDX,EDX
//   Label: LAB_004319e4
// 004319e6: TEST EBX,EBX
// 004319e8: JBE 0x00431a10
//   XREF to: 00431a10 (CONDITIONAL_JUMP)
// 004319ea: MOV EAX,dword ptr [ESP + 0x10c]
//   XREF to: Stack[0x8] (READ)
// 004319f1: XOR ECX,ECX
//   Label: LAB_004319f1
// 004319f3: MOV CL,byte ptr [EAX]
// 004319f5: INC EAX
// 004319f6: MOV CL,byte ptr [ESP + ECX*0x1]
// 004319f9: INC EDX
// 004319fa: MOV byte ptr [EAX + -0x1],CL
// 004319fd: CMP EDX,EBX
// 004319ff: JC 0x004319f1
//   XREF to: 004319f1 (CONDITIONAL_JUMP)
// 00431a01: LEA EAX,[EAX]
// 00431a07: LEA EDX,[EDX]
// 00431a0d: LEA EAX,[EAX]
// 00431a10: ADD ESP,0x100
//   Label: LAB_00431a10
// 00431a16: POP EBX
// 00431a17: RET
// 00431a18: MOV DL,byte ptr [ESP + 0x114]
//   Label: LAB_00431a18
//   XREF to: Stack[0x10] (READ)
// 00431a1f: MOV byte ptr [ESP + ECX*0x1],DL
// 00431a22: JMP 0x004319e4
//   XREF to: 004319e4 (UNCONDITIONAL_JUMP)
