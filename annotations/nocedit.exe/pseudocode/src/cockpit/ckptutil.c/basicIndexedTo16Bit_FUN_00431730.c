// Name: cockpit_ckptutil.c_basicIndexedTo16Bit_FUN_00431730
// Address: 00431730
// Address Range: [[00431730, 0043175f]]
// Convention: __cdecl
// Signature: void cockpit_ckptutil.c_basicIndexedTo16Bit_FUN_00431730(void * output_buffer, void * input_buffer, int pixel_count)
// Cross-references:
//   cockpit_ckptutil.c_get16BitConversionFunction_FUN_004317a0 (004317a0) at 004317a0 [DATA]
// Globals:
//   ushort[256] g_Hardware16BitPalette

#include "nocturne.h"

void __cdecl
cockpit_ckptutil_c_basicIndexedTo16Bit_FUN_00431730
          (void *output_buffer,void *input_buffer,int pixel_count)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (pixel_count != 0) {
    do {
                    /* WARNING: Load size is inaccurate */
      bVar1 = *input_buffer;
      input_buffer = (void *)((int)input_buffer + 1);
      uVar2 = uVar2 + 1;
      *(ushort *)output_buffer = g_Hardware16BitPalette[bVar1];
      output_buffer = (ushort *)((int)output_buffer + 2);
    } while (uVar2 < (uint)pixel_count);
  }
  return;
}


// Assembly code:
// 00431730: PUSH ESI
//   Label: cockpit_ckptutil.c_basicIndexedTo16Bit_FUN_00431730
// 00431731: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00431735: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00431739: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 0043173d: XOR EAX,EAX
// 0043173f: TEST ESI,ESI
// 00431741: JBE 0x0043175e
//   XREF to: 0043175e (CONDITIONAL_JUMP)
// 00431743: PUSH EBX
// 00431744: XOR EBX,EBX
//   Label: LAB_00431744
// 00431746: MOV BL,byte ptr [EDX]
// 00431748: INC EDX
// 00431749: ADD ECX,0x2
// 0043174c: MOV BX,word ptr [EBX*0x2 + 0x2d01d24]
//   XREF to: 02d01d24 (DATA)
// 00431754: INC EAX
// 00431755: MOV word ptr [ECX + -0x2],BX
// 00431759: CMP EAX,ESI
// 0043175b: JC 0x00431744
//   XREF to: 00431744 (CONDITIONAL_JUMP)
// 0043175d: POP EBX
// 0043175e: POP ESI
//   Label: LAB_0043175e
// 0043175f: RET
