// Name: core_set.cpp_FUN_0056e180
// Address: 0056e180
// Address Range: [[0056e180, 0056e2a3]]
// Convention: unknown
// Signature: undefined core_set.cpp_FUN_0056e180()
// Globals:
//   double DOUBLE_00645e7b = 65535
//   int g_LightAttenuationMax

#include "nocturne.h"

void core_set_cpp_FUN_0056e180(void)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int *piVar6;
  int *piVar7;
  int in_stack_00000004;
  int in_stack_00000008;
  
  piVar6 = (int *)(*(int *)(in_stack_00000008 + 0x24) * 0xc + in_stack_00000004);
  piVar1 = (int *)(*(int *)(in_stack_00000008 + 0x18) * 0xc + in_stack_00000004);
  piVar7 = (int *)(in_stack_00000004 + *(int *)(in_stack_00000008 + 0x30) * 0xc);
  fVar2 = (float)(piVar6[1] - piVar1[1]) * (float)(piVar7[2] - piVar6[2]) -
          (float)(piVar7[1] - piVar6[1]) * (float)(piVar6[2] - piVar1[2]);
  fVar5 = (float)(*piVar7 - *piVar6) * (float)(piVar6[2] - piVar1[2]) -
          (float)(*piVar6 - *piVar1) * (float)(piVar7[2] - piVar6[2]);
  fVar4 = (float)(*piVar6 - *piVar1) * (float)(piVar7[1] - piVar6[1]) -
          (float)(*piVar7 - *piVar6) * (float)(piVar6[1] - piVar1[1]);
  fVar3 = (float)(g_LightAttenuationMax -
                 ((int)(fVar4 * fVar4 + fVar5 * fVar5 + fVar2 * fVar2) >> 1)) *
          (float)DOUBLE_00645e7b;
  *(float *)(in_stack_00000008 + 8) = fVar2 * fVar3;
  *(float *)(in_stack_00000008 + 0xc) = fVar5 * fVar3;
  *(float *)(in_stack_00000008 + 0x10) = fVar4 * fVar3;
  return;
}


// Assembly code:
// 0056e180: PUSH EBX
//   Label: core_set.cpp_FUN_0056e180
// 0056e181: PUSH ESI
// 0056e182: PUSH EDI
// 0056e183: PUSH EBP
// 0056e184: SUB ESP,0x40
// 0056e187: MOV ECX,dword ptr [ESP + 0x54]
//   XREF to: Stack[0x4] (READ)
// 0056e18b: MOV EDX,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x8] (READ)
// 0056e18f: MOV EBX,dword ptr [EDX + 0x24]
// 0056e192: LEA EAX,[EBX*0x4 + 0x0]
// 0056e199: MOV ESI,dword ptr [EDX + 0x18]
// 0056e19c: SUB EAX,EBX
// 0056e19e: LEA EBX,[ESI*0x4 + 0x0]
// 0056e1a5: SUB EBX,ESI
// 0056e1a7: SHL EAX,0x2
// 0056e1aa: SHL EBX,0x2
// 0056e1ad: ADD EAX,ECX
// 0056e1af: LEA ESI,[EBX + ECX*0x1]
// 0056e1b2: MOV EBX,dword ptr [EAX]
// 0056e1b4: MOV EBP,dword ptr [ESI]
// 0056e1b6: SUB EBX,EBP
// 0056e1b8: MOV dword ptr [ESP + 0x30],EBX
//   XREF to: Stack[-0x20] (WRITE)
// 0056e1bc: MOV EBP,dword ptr [ESI + 0x4]
// 0056e1bf: MOV EBX,dword ptr [EAX + 0x4]
// 0056e1c2: SUB EBX,EBP
// 0056e1c4: MOV dword ptr [ESP + 0x34],EBX
//   XREF to: Stack[-0x1c] (WRITE)
// 0056e1c8: MOV EBP,dword ptr [ESI + 0x8]
// 0056e1cb: MOV EBX,dword ptr [EAX + 0x8]
// 0056e1ce: SUB EBX,EBP
// 0056e1d0: MOV EDI,dword ptr [EDX + 0x30]
// 0056e1d3: MOV dword ptr [ESP + 0x38],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 0056e1d7: LEA EBX,[EDI*0x4 + 0x0]
// 0056e1de: SUB EBX,EDI
// 0056e1e0: SHL EBX,0x2
// 0056e1e3: ADD ECX,EBX
// 0056e1e5: MOV ESI,dword ptr [EAX]
// 0056e1e7: MOV EBX,dword ptr [ECX]
// 0056e1e9: SUB EBX,ESI
// 0056e1eb: MOV dword ptr [ESP + 0x3c],EBX
//   XREF to: Stack[-0x14] (WRITE)
// 0056e1ef: FILD dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x18] (READ)
// 0056e1f3: FILD dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x14] (READ)
// 0056e1f7: FST float ptr [ESP + 0x14]
//   XREF to: Stack[-0x3c] (WRITE)
// 0056e1fb: FMUL ST1
// 0056e1fd: MOV EBP,dword ptr [EAX + 0x8]
// 0056e200: MOV EBX,dword ptr [ECX + 0x4]
// 0056e203: MOV ECX,dword ptr [ECX + 0x8]
// 0056e206: MOV EDI,dword ptr [EAX + 0x4]
// 0056e209: MOV EAX,ECX
// 0056e20b: FILD dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x1c] (READ)
// 0056e20f: SUB EAX,EBP
// 0056e211: FLD ST0
// 0056e213: MOV dword ptr [ESP + 0x3c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0056e217: SUB EBX,EDI
// 0056e219: FILD dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x14] (READ)
// 0056e21d: FSTP float ptr [ESP + 0x28]
//   XREF to: Stack[-0x28] (WRITE)
// 0056e221: FMUL float ptr [ESP + 0x28]
//   XREF to: Stack[-0x28] (READ)
// 0056e225: MOV dword ptr [ESP + 0x3c],EBX
//   XREF to: Stack[-0x14] (WRITE)
// 0056e229: FILD dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x14] (READ)
// 0056e22d: FILD dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x20] (READ)
// 0056e231: FST float ptr [ESP + 0x8]
//   XREF to: Stack[-0x48] (WRITE)
// 0056e235: FMUL ST1
// 0056e237: FXCH
// 0056e239: FMULP ST5
// 0056e23b: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x48] (READ)
// 0056e23f: FMUL float ptr [ESP + 0x28]
//   XREF to: Stack[-0x28] (READ)
// 0056e243: FXCH ST5
// 0056e245: FSUBP ST2,ST0
// 0056e247: FLD ST1
// 0056e249: FMUL ST2
// 0056e24b: FXCH ST5
// 0056e24d: FSUBP ST4,ST0
// 0056e24f: FLD ST3
// 0056e251: FMUL ST4
// 0056e253: FLD float ptr [ESP + 0x14]
//   XREF to: Stack[-0x3c] (READ)
// 0056e257: FMULP ST4
// 0056e259: FADDP ST5,ST0
// 0056e25b: FSUBRP ST2,ST0
// 0056e25d: FLD ST1
// 0056e25f: FMUL ST2
// 0056e261: FADDP ST4,ST0
// 0056e263: FXCH ST3
// 0056e265: FSTP float ptr [ESP + 0x20]
//   XREF to: Stack[-0x30] (WRITE)
// 0056e269: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x30] (READ)
// 0056e26d: MOV ECX,dword ptr [0x02d7a7bc]
//   XREF to: 02d7a7bc (READ)
// 0056e273: SAR EAX,0x1
// 0056e275: SUB ECX,EAX
// 0056e277: MOV dword ptr [ESP + 0x24],ECX
//   XREF to: Stack[-0x2c] (WRITE)
// 0056e27b: FLD float ptr [ESP + 0x24]
//   XREF to: Stack[-0x2c] (READ)
// 0056e27f: FMUL double ptr [0x00645e7b]
//   XREF to: 00645e7b (READ)
// 0056e285: FXCH ST3
// 0056e287: FMUL ST3
// 0056e289: FXCH ST2
// 0056e28b: FMUL ST3
// 0056e28d: FXCH
// 0056e28f: FMULP ST3
// 0056e291: FXCH
// 0056e293: FSTP float ptr [EDX + 0x8]
// 0056e296: FSTP float ptr [EDX + 0xc]
// 0056e299: FSTP float ptr [EDX + 0x10]
// 0056e29c: ADD ESP,0x40
// 0056e29f: POP EBP
// 0056e2a0: POP EDI
// 0056e2a1: POP ESI
// 0056e2a2: POP EBX
// 0056e2a3: RET
