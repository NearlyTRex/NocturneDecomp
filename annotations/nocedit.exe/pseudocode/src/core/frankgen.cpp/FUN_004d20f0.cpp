// Name: core_frankgen.cpp_FUN_004d20f0
// Address: 004d20f0
// Address Range: [[004d20f0, 004d2165]]
// Convention: unknown
// Signature: undefined core_frankgen.cpp_FUN_004d20f0()
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   crt_math.c_round_FUN_005fe6b0

#include "nocturne.h"

/* Signature: undefined1 actors_other_frankgen.cpp_FUN_004d20f0(undefined4 param_1, undefined4
   param_2) */

float * core_frankgen_cpp_FUN_004d20f0
                  (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  int param_5,float *param_6)

{
  CKeyFramedModel *pCVar1;
  CVector3f *pCVar2;
  double dVar3;
  int unaff_retaddr;
  
  dVar3 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(param_2,param_5 + 0x184));
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(SUB84(dVar3,0));
  pCVar2 = pCVar1->frame_bounds + unaff_retaddr * 2;
  *param_6 = pCVar2->x;
  param_6[1] = pCVar2->y;
  param_6[2] = pCVar2->z;
  param_6[3] = pCVar2[1].x;
  param_6[4] = pCVar2[1].y;
  param_6[5] = pCVar2[1].z;
  return param_6;
}


// Assembly code:
// 004d20f0: PUSH EBX
//   Label: core_frankgen.cpp_FUN_004d20f0
// 004d20f1: SUB ESP,0x4
// 004d20f4: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004d20f8: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 004d20fc: FLD float ptr [EAX + 0x180]
// 004d2102: ADD EAX,0x184
// 004d2107: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004d210c: PUSH EAX
// 004d210d: FISTP dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x8] (WRITE)
// 004d2111: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 004d2116: ADD ESP,0x4
// 004d2119: MOV ECX,dword ptr [ESP]
//   XREF to: Stack[-0x8] (DATA)
// 004d211c: MOV EDX,EAX
// 004d211e: LEA EAX,[ECX*0x4 + 0x0]
// 004d2125: SUB EAX,ECX
// 004d2127: MOV EDX,dword ptr [EDX + 0x5690]
// 004d212d: SHL EAX,0x3
// 004d2130: ADD EAX,EDX
// 004d2132: MOV EDX,dword ptr [EAX]
// 004d2134: LEA ECX,[EAX + 0x4]
// 004d2137: MOV dword ptr [EBX],EDX
// 004d2139: LEA EDX,[EBX + 0x4]
// 004d213c: MOV ECX,dword ptr [ECX]
// 004d213e: MOV dword ptr [EDX],ECX
// 004d2140: LEA ECX,[EAX + 0x8]
// 004d2143: MOV ECX,dword ptr [ECX]
// 004d2145: MOV dword ptr [EDX + 0x4],ECX
// 004d2148: MOV ECX,dword ptr [EAX + 0xc]
// 004d214b: ADD EAX,0xc
// 004d214e: MOV dword ptr [EDX + 0x8],ECX
// 004d2151: LEA ECX,[EAX + 0x4]
// 004d2154: MOV ECX,dword ptr [ECX]
// 004d2156: MOV dword ptr [EDX + 0xc],ECX
// 004d2159: MOV EAX,dword ptr [EAX + 0x8]
// 004d215c: MOV dword ptr [EDX + 0x10],EAX
// 004d215f: MOV EAX,EBX
// 004d2161: ADD ESP,0x4
// 004d2164: POP EBX
// 004d2165: RET
