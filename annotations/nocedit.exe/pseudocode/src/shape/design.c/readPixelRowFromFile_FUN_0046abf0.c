// Name: shape_design.c_readPixelRowFromFile_FUN_0046abf0
// Address: 0046abf0
// Address Range: [[0046abf0, 0046ac6a]]
// Convention: __cdecl
// Signature: void shape_design.c_readPixelRowFromFile_FUN_0046abf0(FILE * file_handle, byte * rgb_buffer, byte * alpha_buffer, int pixel_count, int file_flags)
// Cross-references:
//   shape_design.c_loadTextureData_FUN_0046b060 (0046b060) at 0046b1e7 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_stdio.c_fgetc_FUN_005fe840

#include "nocturne.h"

void __cdecl
shape_design_c_readPixelRowFromFile_FUN_0046abf0
          (FILE *file_handle,byte *rgb_buffer,byte *alpha_buffer,int pixel_count,int file_flags)

{
  byte *pbVar1;
  int iVar2;
  
  for (; 0 < pixel_count; pixel_count = pixel_count + -1) {
    iVar2 = crt_stdio_c_fgetc_FUN_005fe840(file_handle);
    *rgb_buffer = (byte)iVar2;
    iVar2 = crt_stdio_c_fgetc_FUN_005fe840(file_handle);
    pbVar1 = rgb_buffer + 2;
    rgb_buffer[1] = (byte)iVar2;
    iVar2 = crt_stdio_c_fgetc_FUN_005fe840(file_handle);
    rgb_buffer = rgb_buffer + 3;
    *pbVar1 = (byte)iVar2;
    if (file_flags == 0x20) {
      iVar2 = crt_stdio_c_fgetc_FUN_005fe840(file_handle);
      *alpha_buffer = (byte)iVar2;
    }
    else {
      *alpha_buffer = 0xff;
    }
    alpha_buffer = alpha_buffer + 1;
  }
  return;
}


// Assembly code:
// 0046abf0: PUSH EBX
//   Label: shape_design.c_readPixelRowFromFile_FUN_0046abf0
// 0046abf1: PUSH ESI
// 0046abf2: PUSH EDI
// 0046abf3: PUSH EBP
// 0046abf4: MOV EBP,ESP
// 0046abf6: SUB ESP,0x0
// 0046abfc: CMP dword ptr [EBP + 0x20],0x0
//   Label: LAB_0046abfc
//   XREF to: Stack[0x10] (READ)
// 0046ac00: JLE 0x0046ac66
//   XREF to: 0046ac66 (CONDITIONAL_JUMP)
// 0046ac02: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046ac05: PUSH EAX
// 0046ac06: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0046ac0b: ADD ESP,0x4
// 0046ac0e: MOV EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0046ac11: INC dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ_WRITE)
// 0046ac14: MOV byte ptr [EDX],AL
// 0046ac16: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046ac19: PUSH EAX
// 0046ac1a: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0046ac1f: ADD ESP,0x4
// 0046ac22: MOV EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0046ac25: INC dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ_WRITE)
// 0046ac28: MOV byte ptr [EDX],AL
// 0046ac2a: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046ac2d: PUSH EAX
// 0046ac2e: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0046ac33: ADD ESP,0x4
// 0046ac36: MOV EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0046ac39: INC dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ_WRITE)
// 0046ac3c: MOV byte ptr [EDX],AL
// 0046ac3e: CMP dword ptr [EBP + 0x24],0x20
//   XREF to: Stack[0x14] (READ)
// 0046ac42: JNZ 0x0046ac57
//   XREF to: 0046ac57 (CONDITIONAL_JUMP)
// 0046ac44: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046ac47: PUSH EAX
// 0046ac48: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0046ac4d: ADD ESP,0x4
// 0046ac50: MOV EDX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0046ac53: MOV byte ptr [EDX],AL
// 0046ac55: JMP 0x0046ac5d
//   XREF to: 0046ac5d (UNCONDITIONAL_JUMP)
// 0046ac57: MOV EAX,dword ptr [EBP + 0x1c]
//   Label: LAB_0046ac57
//   XREF to: Stack[0xc] (READ)
// 0046ac5a: MOV byte ptr [EAX],0xff
// 0046ac5d: INC dword ptr [EBP + 0x1c]
//   Label: LAB_0046ac5d
//   XREF to: Stack[0xc] (READ_WRITE)
// 0046ac60: ADD dword ptr [EBP + 0x20],-0x1
//   XREF to: Stack[0x10] (READ_WRITE)
// 0046ac64: JMP 0x0046abfc
//   XREF to: 0046abfc (UNCONDITIONAL_JUMP)
// 0046ac66: POP EBP
//   Label: LAB_0046ac66
// 0046ac67: POP EDI
// 0046ac68: POP ESI
// 0046ac69: POP EBX
// 0046ac6a: RET
