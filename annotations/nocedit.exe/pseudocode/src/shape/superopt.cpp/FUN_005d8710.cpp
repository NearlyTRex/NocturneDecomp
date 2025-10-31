// Name: shape_superopt.cpp_FUN_005d8710
// Address: 005d8710
// Address Range: [[005d8710, 005d87b2]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005d8710()

#include "nocturne.h"

void shape_superopt_cpp_FUN_005d8710(void)

{
  undefined4 *in_stack_00000004;
  undefined4 *in_stack_00000008;
  
  *in_stack_00000004 = *in_stack_00000008;
  in_stack_00000004[1] = in_stack_00000008[1];
  in_stack_00000004[2] = in_stack_00000008[2];
  in_stack_00000004[3] = in_stack_00000008[3];
  in_stack_00000004[4] = in_stack_00000008[4];
  in_stack_00000004[5] = in_stack_00000008[5];
  in_stack_00000004[6] = in_stack_00000008[6];
  in_stack_00000004[7] = in_stack_00000008[7];
  in_stack_00000004[8] = in_stack_00000008[8];
  in_stack_00000004[9] = in_stack_00000008[9];
  in_stack_00000004[10] = in_stack_00000008[10];
  in_stack_00000004[0xb] = in_stack_00000008[0xb];
  in_stack_00000004[0xc] = in_stack_00000008[0xc];
  in_stack_00000004[0xd] = in_stack_00000008[0xd];
  *(undefined8 *)(in_stack_00000004 + 0xe) = *(undefined8 *)(in_stack_00000008 + 0xe);
  in_stack_00000004[0x10] = in_stack_00000008[0x10];
  in_stack_00000004[0x11] = in_stack_00000008[0x11];
  in_stack_00000004[0x12] = in_stack_00000008[0x12];
  in_stack_00000004[0x13] = in_stack_00000008[0x13];
  in_stack_00000004[0x14] = in_stack_00000008[0x14];
  in_stack_00000004[0x15] = in_stack_00000008[0x15];
  in_stack_00000004[0x16] = in_stack_00000008[0x16];
  in_stack_00000004[0x17] = in_stack_00000008[0x17];
  return;
}


// Assembly code:
// 005d8710: PUSH EBX
//   Label: shape_superopt.cpp_FUN_005d8710
// 005d8711: PUSH ESI
// 005d8712: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005d8716: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005d871a: MOV ECX,dword ptr [EDX]
// 005d871c: MOV dword ptr [EAX],ECX
// 005d871e: MOV ECX,dword ptr [EDX + 0x4]
// 005d8721: MOV dword ptr [EAX + 0x4],ECX
// 005d8724: MOV ECX,dword ptr [EDX + 0x8]
// 005d8727: MOV dword ptr [EAX + 0x8],ECX
// 005d872a: MOV ECX,dword ptr [EDX + 0xc]
// 005d872d: MOV dword ptr [EAX + 0xc],ECX
// 005d8730: LEA ECX,[EDX + 0x10]
// 005d8733: LEA EBX,[EAX + 0x10]
// 005d8736: MOV ESI,dword ptr [ECX]
// 005d8738: MOV dword ptr [EBX],ESI
// 005d873a: MOV ESI,dword ptr [ECX + 0x4]
// 005d873d: MOV dword ptr [EBX + 0x4],ESI
// 005d8740: MOV ESI,dword ptr [ECX + 0x8]
// 005d8743: MOV dword ptr [EBX + 0x8],ESI
// 005d8746: MOV ESI,dword ptr [ECX + 0xc]
// 005d8749: MOV dword ptr [EBX + 0xc],ESI
// 005d874c: MOV ESI,dword ptr [ECX + 0x10]
// 005d874f: MOV dword ptr [EBX + 0x10],ESI
// 005d8752: MOV ESI,dword ptr [ECX + 0x14]
// 005d8755: MOV dword ptr [EBX + 0x14],ESI
// 005d8758: LEA EBX,[EDX + 0x28]
// 005d875b: LEA ECX,[EAX + 0x28]
// 005d875e: MOV ESI,dword ptr [EBX]
// 005d8760: MOV dword ptr [ECX],ESI
// 005d8762: MOV ESI,dword ptr [EBX + 0x4]
// 005d8765: MOV dword ptr [ECX + 0x4],ESI
// 005d8768: MOV ESI,dword ptr [EBX + 0x8]
// 005d876b: MOV dword ptr [ECX + 0x8],ESI
// 005d876e: MOV ESI,dword ptr [EBX + 0xc]
// 005d8771: MOV dword ptr [ECX + 0xc],ESI
// 005d8774: FLD double ptr [EBX + 0x10]
// 005d8777: LEA EBX,[EDX + 0x40]
// 005d877a: FSTP double ptr [ECX + 0x10]
// 005d877d: LEA ECX,[EAX + 0x40]
// 005d8780: MOV ESI,dword ptr [EBX]
// 005d8782: MOV dword ptr [ECX],ESI
// 005d8784: MOV ESI,dword ptr [EBX + 0x4]
// 005d8787: MOV dword ptr [ECX + 0x4],ESI
// 005d878a: MOV ESI,dword ptr [EBX + 0x8]
// 005d878d: MOV dword ptr [ECX + 0x8],ESI
// 005d8790: MOV ESI,dword ptr [EBX + 0xc]
// 005d8793: MOV dword ptr [ECX + 0xc],ESI
// 005d8796: LEA ECX,[EAX + 0x50]
// 005d8799: MOV EBX,dword ptr [EDX + 0x50]
// 005d879c: MOV dword ptr [ECX],EBX
// 005d879e: MOV EBX,dword ptr [EDX + 0x54]
// 005d87a1: MOV dword ptr [ECX + 0x4],EBX
// 005d87a4: MOV EBX,dword ptr [EDX + 0x58]
// 005d87a7: MOV dword ptr [ECX + 0x8],EBX
// 005d87aa: MOV EBX,dword ptr [EDX + 0x5c]
// 005d87ad: MOV dword ptr [ECX + 0xc],EBX
// 005d87b0: POP ESI
// 005d87b1: POP EBX
// 005d87b2: RET
