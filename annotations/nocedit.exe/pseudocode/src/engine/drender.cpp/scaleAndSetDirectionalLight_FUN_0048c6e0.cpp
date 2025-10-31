// Name: engine_drender.cpp_scaleAndSetDirectionalLight_FUN_0048c6e0
// Address: 0048c6e0
// Address Range: [[0048c6e0, 0048c736]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_scaleAndSetDirectionalLight_FUN_0048c6e0(CVector3f * light_direction)
// Globals:
//   double g_LightDirectionalScale = 65536
// Function calls:
//   crt_math.c_round_FUN_005fe6b0
//   engine_light.cpp_setDirectionalLightVector_FUN_005054d0

#include "nocturne.h"

void __cdecl engine_drender_cpp_scaleAndSetDirectionalLight_FUN_0048c6e0(CVector3f *light_direction)

{
  int dir_y;
  undefined4 in_EDX;
  float10 fVar1;
  float10 fVar2;
  double dVar3;
  float *in_stack_00000008;
  int dir_z;
  
  fVar1 = (float10)in_stack_00000008[2] * (float10)g_LightDirectionalScale;
  fVar2 = (float10)*in_stack_00000008 * (float10)g_LightDirectionalScale;
  dVar3 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(in_EDX,in_stack_00000008));
  dVar3 = crt_math_c_round_FUN_005fe6b0(dVar3);
  dir_z = (int)ROUND(fVar1);
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44(dir_z,SUB84(dVar3,0)));
  engine_light_cpp_setDirectionalLightVector_FUN_005054d0((int)ROUND(fVar2),dir_y,dir_z);
  return;
}


// Assembly code:
// 0048c6e0: PUSH EBX
//   Label: engine_drender.cpp_scaleAndSetDirectionalLight_FUN_0048c6e0
// 0048c6e1: SUB ESP,0x8
// 0048c6e4: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0048c6e8: FLD double ptr [0x00622055]
//   XREF to: 00622055 (READ)
// 0048c6ee: FLD float ptr [EAX + 0x8]
// 0048c6f1: FMUL ST1
// 0048c6f3: FLD float ptr [EAX + 0x4]
// 0048c6f6: FMUL ST2
// 0048c6f8: FLD float ptr [EAX]
// 0048c6fa: FMULP ST3
// 0048c6fc: FXCH
// 0048c6fe: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0048c703: FXCH
// 0048c705: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0048c70a: FXCH
// 0048c70c: FISTP dword ptr [ESP]
//   XREF to: Stack[-0xc] (DATA)
// 0048c70f: FISTP dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x8] (WRITE)
// 0048c713: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0xc] (DATA)
// 0048c716: MOV ECX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x8] (READ)
// 0048c71a: PUSH EDX
// 0048c71b: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0048c720: PUSH ECX
// 0048c721: FISTP dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x8] (WRITE)
// 0048c725: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x8] (READ)
// 0048c729: PUSH EBX
// 0048c72a: CALL engine_light.cpp_setDirectionalLightVector_FUN_005054d0
//   XREF to: 005054d0 (UNCONDITIONAL_CALL)
// 0048c72f: ADD ESP,0xc
// 0048c732: ADD ESP,0x8
// 0048c735: POP EBX
// 0048c736: RET
