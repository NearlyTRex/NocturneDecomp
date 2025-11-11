// Name: sound_sndmain.cpp_FUN_005a5e10
// Address: 005a5e10
// Address Range: [[005a5e10, 005a5e6e]]
// Convention: unknown
// Signature: undefined sound_sndmain.cpp_FUN_005a5e10()
// Globals:
//   double DOUBLE_0064fca7 = 4294967296
// Function calls:
//   crt_math.c_floor_FUN_005feb90
//   crt_math.c_round_FUN_005fe6b0

#include "nocturne.h"

void sound_sndmain_cpp_FUN_005a5e10(void)

{
  undefined4 extraout_EAX;
  undefined4 extraout_EDX;
  float10 in_ST0;
  float10 fVar1;
  double dVar2;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 *in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 local_c;
  undefined4 uStack_8;
  
  crt_math_c_floor_FUN_005feb90((double)in_ST0);
  fVar1 = (float10)(double)CONCAT44(extraout_EDX,extraout_EAX);
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX,extraout_EAX));
  local_c = (undefined4)(longlong)ROUND(fVar1);
  fVar1 = ((float10)(double)CONCAT44(in_stack_00000008,in_stack_00000004) -
          (float10)((longlong)ROUND(fVar1) & 0xffffffff)) * (float10)DOUBLE_0064fca7;
  *in_stack_0000000c = local_c;
  dVar2 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(in_stack_00000010,local_c));
  uStack_8 = (undefined4)(longlong)ROUND(fVar1);
  *(undefined4 *)((ulonglong)dVar2 >> 0x20) = uStack_8;
  return;
}


// Assembly code:
// 005a5e10: PUSH EBX
//   Label: sound_sndmain.cpp_FUN_005a5e10
// 005a5e11: SUB ESP,0x8
// 005a5e14: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005a5e18: PUSH EDX
// 005a5e19: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005a5e1d: PUSH ECX
// 005a5e1e: CALL crt_math.c_floor_FUN_005feb90
//   XREF to: 005feb90 (UNCONDITIONAL_CALL)
// 005a5e23: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 005a5e27: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x8] (WRITE)
// 005a5e2b: XOR EBX,EBX
// 005a5e2d: FLD double ptr [ESP + 0x8]
//   XREF to: Stack[-0xc] (READ)
// 005a5e31: ADD ESP,0x8
// 005a5e34: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 005a5e39: FISTP qword ptr [ESP]
//   XREF to: Stack[-0xc] (DATA)
// 005a5e3c: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0xc] (DATA)
// 005a5e3f: MOV dword ptr [ESP + 0x4],EBX
//   XREF to: Stack[-0x8] (WRITE)
// 005a5e43: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0xc] (DATA)
// 005a5e46: FILD qword ptr [ESP]
//   XREF to: Stack[-0xc] (DATA)
// 005a5e49: FSUBR double ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005a5e4d: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 005a5e51: FMUL double ptr [0x0064fca7]
//   XREF to: 0064fca7 (READ)
// 005a5e57: MOV dword ptr [EDX],EAX
// 005a5e59: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x10] (READ)
// 005a5e5d: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 005a5e62: FISTP qword ptr [ESP]
//   XREF to: Stack[-0xc] (DATA)
// 005a5e65: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0xc] (DATA)
// 005a5e68: MOV dword ptr [EDX],EAX
// 005a5e6a: ADD ESP,0x8
// 005a5e6d: POP EBX
// 005a5e6e: RET
