// Name: core_boxactor.cpp_FUN_00421fe0
// Address: 00421fe0
// Address Range: [[00421fe0, 00422055]]
// Convention: unknown
// Signature: undefined core_boxactor.cpp_FUN_00421fe0()
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   crt_math.c_round_FUN_005fe6b0

#include "nocturne.h"

/* Signature: undefined1 actors_other_boxactor.cpp_FUN_00421fe0(undefined4 param_1, undefined4
   param_2) */

float * core_boxactor_cpp_FUN_00421fe0
                  (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  int param_5,float *param_6)

{
  CKeyFramedModel *pCVar1;
  CVector3f *pCVar2;
  double dVar3;
  int unaff_retaddr;
  
  dVar3 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(param_2,param_5 + 0x158));
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
// 00421fe0: PUSH EBX
//   Label: core_boxactor.cpp_FUN_00421fe0
// 00421fe1: SUB ESP,0x4
// 00421fe4: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00421fe8: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 00421fec: FLD float ptr [EAX + 0x310]
// 00421ff2: ADD EAX,0x158
// 00421ff7: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00421ffc: PUSH EAX
// 00421ffd: FISTP dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x8] (WRITE)
// 00422001: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 00422006: ADD ESP,0x4
// 00422009: MOV ECX,dword ptr [ESP]
//   XREF to: Stack[-0x8] (DATA)
// 0042200c: MOV EDX,EAX
// 0042200e: LEA EAX,[ECX*0x4 + 0x0]
// 00422015: SUB EAX,ECX
// 00422017: MOV EDX,dword ptr [EDX + 0x5690]
// 0042201d: SHL EAX,0x3
// 00422020: ADD EAX,EDX
// 00422022: MOV EDX,dword ptr [EAX]
// 00422024: LEA ECX,[EAX + 0x4]
// 00422027: MOV dword ptr [EBX],EDX
// 00422029: LEA EDX,[EBX + 0x4]
// 0042202c: MOV ECX,dword ptr [ECX]
// 0042202e: MOV dword ptr [EDX],ECX
// 00422030: LEA ECX,[EAX + 0x8]
// 00422033: MOV ECX,dword ptr [ECX]
// 00422035: MOV dword ptr [EDX + 0x4],ECX
// 00422038: MOV ECX,dword ptr [EAX + 0xc]
// 0042203b: ADD EAX,0xc
// 0042203e: MOV dword ptr [EDX + 0x8],ECX
// 00422041: LEA ECX,[EAX + 0x4]
// 00422044: MOV ECX,dword ptr [ECX]
// 00422046: MOV dword ptr [EDX + 0xc],ECX
// 00422049: MOV EAX,dword ptr [EAX + 0x8]
// 0042204c: MOV dword ptr [EDX + 0x10],EAX
// 0042204f: MOV EAX,EBX
// 00422051: ADD ESP,0x4
// 00422054: POP EBX
// 00422055: RET
