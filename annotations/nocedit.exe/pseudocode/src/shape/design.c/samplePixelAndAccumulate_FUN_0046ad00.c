// Name: shape_design.c_samplePixelAndAccumulate_FUN_0046ad00
// Address: 0046ad00
// Address Range: [[0046ad00, 0046adba]]
// Convention: __cdecl
// Signature: void shape_design.c_samplePixelAndAccumulate_FUN_0046ad00(void * rgb_buffer, void * alpha_buffer, int atlas_width, int atlas_height, int pixel_x, int pixel_y, double weight, double * red_accumulator, double * green_accumulator, double * blue_accumulator, double * alpha_accumulator)
// Cross-references:
//   shape_design.c_sampleAndFilterPixel_FUN_0046ae20 (0046ae20) at 0046afb6 [UNCONDITIONAL_CALL]
// Function calls:
//   shape_design.c_wrapCoordinate_FUN_0046acc0

#include "nocturne.h"

void __cdecl
shape_design_c_samplePixelAndAccumulate_FUN_0046ad00
          (void *rgb_buffer,void *alpha_buffer,int atlas_width,int atlas_height,int pixel_x,
          int pixel_y,double weight,double *red_accumulator,double *green_accumulator,
          double *blue_accumulator,double *alpha_accumulator)

{
  int iVar1;
  int iVar2;
  
  iVar1 = shape_design_c_wrapCoordinate_FUN_0046acc0(pixel_x,atlas_width);
  iVar2 = shape_design_c_wrapCoordinate_FUN_0046acc0(pixel_y,atlas_height);
  iVar1 = iVar1 + iVar2 * atlas_width;
  iVar2 = iVar1 * 3;
  *red_accumulator = (double)*(byte *)((int)rgb_buffer + iVar2 + 2) * weight + *red_accumulator;
  *green_accumulator = (double)*(byte *)((int)rgb_buffer + iVar2 + 1) * weight + *green_accumulator;
  *blue_accumulator = (double)*(byte *)((int)rgb_buffer + iVar2) * weight + *blue_accumulator;
  *alpha_accumulator = (double)*(byte *)((int)alpha_buffer + iVar1) * weight + *alpha_accumulator;
  return;
}


// Assembly code:
// 0046ad00: PUSH EBX
//   Label: shape_design.c_samplePixelAndAccumulate_FUN_0046ad00
// 0046ad01: PUSH ESI
// 0046ad02: PUSH EDI
// 0046ad03: PUSH EBP
// 0046ad04: MOV EBP,ESP
// 0046ad06: SUB ESP,0xc
// 0046ad0c: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0046ad0f: PUSH EAX
// 0046ad10: MOV EAX,dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 0046ad13: PUSH EAX
// 0046ad14: CALL shape_design.c_wrapCoordinate_FUN_0046acc0
//   XREF to: 0046acc0 (UNCONDITIONAL_CALL)
// 0046ad19: ADD ESP,0x8
// 0046ad1c: MOV dword ptr [EBP + 0x24],EAX
//   XREF to: Stack[0x14] (WRITE)
// 0046ad1f: MOV EAX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0046ad22: PUSH EAX
// 0046ad23: MOV EAX,dword ptr [EBP + 0x28]
//   XREF to: Stack[0x18] (READ)
// 0046ad26: PUSH EAX
// 0046ad27: CALL shape_design.c_wrapCoordinate_FUN_0046acc0
//   XREF to: 0046acc0 (UNCONDITIONAL_CALL)
// 0046ad2c: ADD ESP,0x8
// 0046ad2f: MOV dword ptr [EBP + 0x28],EAX
//   XREF to: Stack[0x18] (WRITE)
// 0046ad32: MOV EAX,dword ptr [EBP + 0x28]
//   XREF to: Stack[0x18] (READ)
// 0046ad35: IMUL EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0046ad39: MOV EDX,dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 0046ad3c: ADD EDX,EAX
// 0046ad3e: MOV dword ptr [EBP + -0x4],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 0046ad41: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0046ad44: LEA EAX,[EAX + EAX*0x2]
// 0046ad47: MOV dword ptr [EBP + -0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0046ad4a: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046ad4d: ADD EDX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0046ad50: XOR EAX,EAX
// 0046ad52: MOV AL,byte ptr [EDX + 0x2]
// 0046ad55: MOV dword ptr [EBP + -0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0046ad58: FILD word ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0046ad5b: FMUL double ptr [EBP + 0x2c]
//   XREF to: Stack[0x1c] (READ)
// 0046ad5e: MOV EAX,dword ptr [EBP + 0x34]
//   XREF to: Stack[0x24] (READ)
// 0046ad61: FADD double ptr [EAX]
// 0046ad63: FSTP double ptr [EAX]
// 0046ad65: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046ad68: ADD EDX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0046ad6b: XOR EAX,EAX
// 0046ad6d: MOV AL,byte ptr [EDX + 0x1]
// 0046ad70: MOV dword ptr [EBP + -0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0046ad73: FILD word ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0046ad76: FMUL double ptr [EBP + 0x2c]
//   XREF to: Stack[0x1c] (READ)
// 0046ad79: MOV EAX,dword ptr [EBP + 0x38]
//   XREF to: Stack[0x28] (READ)
// 0046ad7c: FADD double ptr [EAX]
// 0046ad7e: FSTP double ptr [EAX]
// 0046ad80: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046ad83: ADD EDX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0046ad86: XOR EAX,EAX
// 0046ad88: MOV AL,byte ptr [EDX]
// 0046ad8a: MOV dword ptr [EBP + -0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0046ad8d: FILD word ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0046ad90: FMUL double ptr [EBP + 0x2c]
//   XREF to: Stack[0x1c] (READ)
// 0046ad93: MOV EAX,dword ptr [EBP + 0x3c]
//   XREF to: Stack[0x2c] (READ)
// 0046ad96: FADD double ptr [EAX]
// 0046ad98: FSTP double ptr [EAX]
// 0046ad9a: MOV EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0046ad9d: ADD EDX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0046ada0: XOR EAX,EAX
// 0046ada2: MOV AL,byte ptr [EDX]
// 0046ada4: MOV dword ptr [EBP + -0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0046ada7: FILD word ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0046adaa: FMUL double ptr [EBP + 0x2c]
//   XREF to: Stack[0x1c] (READ)
// 0046adad: MOV EAX,dword ptr [EBP + 0x40]
//   XREF to: Stack[0x30] (READ)
// 0046adb0: FADD double ptr [EAX]
// 0046adb2: FSTP double ptr [EAX]
// 0046adb4: MOV ESP,EBP
// 0046adb6: POP EBP
// 0046adb7: POP EDI
// 0046adb8: POP ESI
// 0046adb9: POP EBX
// 0046adba: RET
