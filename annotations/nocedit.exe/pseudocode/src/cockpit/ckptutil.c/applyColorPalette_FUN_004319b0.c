// Name: cockpit_ckptutil.c_applyColorPalette_FUN_004319b0
// Address: 00431830
// Address Range: [[00431830, 0043186e]]
// Convention: __cdecl
// Signature: void cockpit_ckptutil.c_applyColorPalette_FUN_004319b0(char * filename, void * bitmap_buffer, int bitmap_size, int palette_index)
// Function calls:
//   cockpit_ckptutil.c_applyActPalette_FUN_004319b0
//   cockpit_ckptutil.c_readBitmapFile_FUN_00431870

#include "nocturne.h"

void __cdecl
cockpit_ckptutil_c_applyColorPalette_FUN_004319b0
          (char *filename,void *bitmap_buffer,int bitmap_size,int palette_index)

{
  int in_stack_00000014;
  
  if (bitmap_buffer == (void *)0x0) {
    return;
  }
  cockpit_ckptutil_c_readBitmapFile_FUN_00431870(filename,bitmap_buffer,bitmap_size);
  cockpit_ckptutil_c_applyActPalette_FUN_004319b0
            ((char *)bitmap_buffer,bitmap_buffer,palette_index,in_stack_00000014);
  return;
}


// Assembly code:
// 00431830: PUSH EBX
//   Label: cockpit_ckptutil.c_applyColorPalette_FUN_004319b0
// 00431831: PUSH EBP
// 00431832: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 00431836: TEST EBX,EBX
// 00431838: JNZ 0x0043183d
//   XREF to: 0043183d (CONDITIONAL_JUMP)
// 0043183a: POP EBP
// 0043183b: POP EBX
// 0043183c: RET
// 0043183d: PUSH EDI
//   Label: LAB_0043183d
// 0043183e: PUSH ESI
// 0043183f: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00431843: PUSH EDX
// 00431844: PUSH EBX
// 00431845: MOV ECX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 00431849: PUSH ECX
// 0043184a: CALL cockpit_ckptutil.c_readBitmapFile_FUN_00431870
//   XREF to: 00431870 (UNCONDITIONAL_CALL)
// 0043184f: ADD ESP,0xc
// 00431852: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 00431856: PUSH ESI
// 00431857: MOV EDI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 0043185b: PUSH EDI
// 0043185c: PUSH EBX
// 0043185d: MOV EBP,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 00431861: PUSH EBP
// 00431862: CALL cockpit_ckptutil.c_applyActPalette_FUN_004319b0
//   XREF to: 004319b0 (UNCONDITIONAL_CALL)
// 00431867: ADD ESP,0x10
// 0043186a: POP ESI
// 0043186b: POP EDI
// 0043186c: POP EBP
// 0043186d: POP EBX
// 0043186e: RET
