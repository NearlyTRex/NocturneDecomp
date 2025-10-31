// Name: core_set.cpp_FUN_0056e2b0
// Address: 0056e2b0
// Address Range: [[0056e2b0, 0056e3de]]
// Convention: unknown
// Signature: undefined core_set.cpp_FUN_0056e2b0()
// Globals:
//   double DOUBLE_00645e83 = 65535
//   int g_LightAttenuationMax

#include "nocturne.h"

void core_set_cpp_FUN_0056e2b0(void)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int *piVar6;
  int *piVar7;
  int in_stack_00000004;
  ushort *in_stack_00000008;
  float *in_stack_0000000c;
  
  piVar6 = (int *)((uint)in_stack_00000008[1] * 0xc + in_stack_00000004);
  piVar1 = (int *)((uint)*in_stack_00000008 * 0xc + in_stack_00000004);
  piVar7 = (int *)(in_stack_00000004 + (uint)in_stack_00000008[2] * 0xc);
  fVar2 = (float)(piVar6[1] - piVar1[1]) * (float)(piVar7[2] - piVar6[2]) -
          (float)(piVar7[1] - piVar6[1]) * (float)(piVar6[2] - piVar1[2]);
  fVar5 = (float)(*piVar7 - *piVar6) * (float)(piVar6[2] - piVar1[2]) -
          (float)(*piVar6 - *piVar1) * (float)(piVar7[2] - piVar6[2]);
  fVar4 = (float)(*piVar6 - *piVar1) * (float)(piVar7[1] - piVar6[1]) -
          (float)(*piVar7 - *piVar6) * (float)(piVar6[1] - piVar1[1]);
  fVar3 = (float)(g_LightAttenuationMax -
                 ((int)(fVar4 * fVar4 + fVar5 * fVar5 + fVar2 * fVar2) >> 1)) *
          (float)DOUBLE_00645e83;
  *in_stack_0000000c = fVar2 * fVar3;
  in_stack_0000000c[1] = fVar5 * fVar3;
  in_stack_0000000c[2] = fVar4 * fVar3;
  return;
}


// Assembly code:
// 0056e2b0: PUSH EBX
//   Label: core_set.cpp_FUN_0056e2b0
// 0056e2b1: PUSH ESI
// 0056e2b2: PUSH EDI
// 0056e2b3: PUSH EBP
// 0056e2b4: SUB ESP,0x40
// 0056e2b7: MOV EDX,dword ptr [ESP + 0x54]
//   XREF to: Stack[0x4] (READ)
// 0056e2bb: MOV EAX,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x8] (READ)
// 0056e2bf: MOV EBX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[0xc] (READ)
// 0056e2c3: XOR ESI,ESI
// 0056e2c5: XOR ECX,ECX
// 0056e2c7: XOR EDI,EDI
// 0056e2c9: MOV SI,word ptr [EAX]
// 0056e2cc: MOV CX,word ptr [EAX + 0x2]
// 0056e2d0: MOV DI,word ptr [EAX + 0x4]
// 0056e2d4: LEA EAX,[ECX*0x4 + 0x0]
// 0056e2db: SUB EAX,ECX
// 0056e2dd: LEA ECX,[ESI*0x4 + 0x0]
// 0056e2e4: SUB ECX,ESI
// 0056e2e6: SHL EAX,0x2
// 0056e2e9: SHL ECX,0x2
// 0056e2ec: ADD EAX,EDX
// 0056e2ee: LEA ESI,[ECX + EDX*0x1]
// 0056e2f1: MOV ECX,dword ptr [EAX]
// 0056e2f3: MOV EBP,dword ptr [ESI]
// 0056e2f5: SUB ECX,EBP
// 0056e2f7: MOV dword ptr [ESP + 0x30],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 0056e2fb: MOV EBP,dword ptr [ESI + 0x4]
// 0056e2fe: MOV ECX,dword ptr [EAX + 0x4]
// 0056e301: SUB ECX,EBP
// 0056e303: MOV dword ptr [ESP + 0x34],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 0056e307: MOV EBP,dword ptr [ESI + 0x8]
// 0056e30a: MOV ECX,dword ptr [EAX + 0x8]
// 0056e30d: SUB ECX,EBP
// 0056e30f: MOV dword ptr [ESP + 0x38],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 0056e313: LEA ECX,[EDI*0x4 + 0x0]
// 0056e31a: SUB ECX,EDI
// 0056e31c: SHL ECX,0x2
// 0056e31f: ADD EDX,ECX
// 0056e321: MOV ESI,dword ptr [EAX]
// 0056e323: MOV ECX,dword ptr [EDX]
// 0056e325: SUB ECX,ESI
// 0056e327: MOV dword ptr [ESP + 0x3c],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 0056e32b: FILD dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x18] (READ)
// 0056e32f: FILD dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x14] (READ)
// 0056e333: FST float ptr [ESP + 0x18]
//   XREF to: Stack[-0x38] (WRITE)
// 0056e337: FMUL ST1
// 0056e339: MOV EBP,dword ptr [EAX + 0x8]
// 0056e33c: MOV ECX,dword ptr [EDX + 0x4]
// 0056e33f: MOV EDX,dword ptr [EDX + 0x8]
// 0056e342: MOV EDI,dword ptr [EAX + 0x4]
// 0056e345: MOV EAX,EDX
// 0056e347: FILD dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x1c] (READ)
// 0056e34b: SUB EAX,EBP
// 0056e34d: FLD ST0
// 0056e34f: MOV dword ptr [ESP + 0x3c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0056e353: SUB ECX,EDI
// 0056e355: FILD dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x14] (READ)
// 0056e359: FSTP float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x24] (WRITE)
// 0056e35d: FMUL float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x24] (READ)
// 0056e361: MOV dword ptr [ESP + 0x3c],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 0056e365: FILD dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x14] (READ)
// 0056e369: FILD dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x20] (READ)
// 0056e36d: FST float ptr [ESP + 0xc]
//   XREF to: Stack[-0x44] (WRITE)
// 0056e371: FMUL ST1
// 0056e373: FXCH
// 0056e375: FMULP ST5
// 0056e377: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x44] (READ)
// 0056e37b: FMUL float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x24] (READ)
// 0056e37f: FXCH ST5
// 0056e381: FSUBP ST2,ST0
// 0056e383: FLD ST1
// 0056e385: FMUL ST2
// 0056e387: FXCH ST5
// 0056e389: FSUBP ST4,ST0
// 0056e38b: FLD ST3
// 0056e38d: FMUL ST4
// 0056e38f: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x38] (READ)
// 0056e393: FMULP ST4
// 0056e395: FADDP ST5,ST0
// 0056e397: FSUBRP ST2,ST0
// 0056e399: FLD ST1
// 0056e39b: FMUL ST2
// 0056e39d: FADDP ST4,ST0
// 0056e39f: FXCH ST3
// 0056e3a1: FSTP float ptr [ESP + 0x20]
//   XREF to: Stack[-0x30] (WRITE)
// 0056e3a5: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x30] (READ)
// 0056e3a9: MOV EDX,dword ptr [0x02d7a7bc]
//   XREF to: 02d7a7bc (READ)
// 0056e3af: SAR EAX,0x1
// 0056e3b1: SUB EDX,EAX
// 0056e3b3: MOV dword ptr [ESP + 0x24],EDX
//   XREF to: Stack[-0x2c] (WRITE)
// 0056e3b7: FLD float ptr [ESP + 0x24]
//   XREF to: Stack[-0x2c] (READ)
// 0056e3bb: FMUL double ptr [0x00645e83]
//   XREF to: 00645e83 (READ)
// 0056e3c1: FXCH ST3
// 0056e3c3: FMUL ST3
// 0056e3c5: FXCH ST2
// 0056e3c7: FMUL ST3
// 0056e3c9: FXCH
// 0056e3cb: FMULP ST3
// 0056e3cd: FXCH
// 0056e3cf: FSTP float ptr [EBX]
// 0056e3d1: FSTP float ptr [EBX + 0x4]
// 0056e3d4: FSTP float ptr [EBX + 0x8]
// 0056e3d7: ADD ESP,0x40
// 0056e3da: POP EBP
// 0056e3db: POP EDI
// 0056e3dc: POP ESI
// 0056e3dd: POP EBX
// 0056e3de: RET
