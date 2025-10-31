// Name: core_dcamera.cpp_CDemonCamera_getFogValueAtPosition_FUN_00453700
// Address: 00453700
// Address Range: [[00453700, 004537cd]]
// Convention: __cdecl
// Signature: int core_dcamera.cpp_CDemonCamera_getFogValueAtPosition_FUN_00453700(CDemonCamera * this_ptr, CVector3i * world_position)
// Globals:
//   double g_CameraFogIntensityFixedPointScale8 = 256
//   float g_WorldToFloat = 0.00390625
//   SFogGrid g_CameraFogGrid
// Function calls:
//   core_dcamera.cpp_sampleFogAlongRay_FUN_0044bdd0
//   crt_math.c_round_FUN_005fe6b0

#include "nocturne.h"

int __cdecl
core_dcamera_cpp_CDemonCamera_getFogValueAtPosition_FUN_00453700
          (CDemonCamera *this_ptr,CVector3i *world_position)

{
  uint uVar1;
  CVector3i *end_pos;
  BADSPACEBASE *in_ESP;
  float10 fVar2;
  double dVar3;
  int local_1c;
  int local_18;
  int local_14;
  
  local_1c = world_position->x - (this_ptr->camera_origin).x;
  local_18 = world_position->y - (this_ptr->camera_origin).y;
  local_14 = world_position->z - (this_ptr->camera_origin).z;
  fVar2 = SQRT((float10)((float)local_14 * g_WorldToFloat) *
               (float10)((float)local_14 * g_WorldToFloat) +
               (float10)((float)local_1c * g_WorldToFloat) *
               (float10)((float)local_1c * g_WorldToFloat) +
               (float10)((float)local_18 * g_WorldToFloat) *
               (float10)((float)local_18 * g_WorldToFloat)) *
          (float10)g_CameraFogIntensityFixedPointScale8;
  dVar3 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(this_ptr,&local_1c));
  uVar1 = core_dcamera_cpp_sampleFogAlongRay_FUN_0044bdd0
                    (&g_CameraFogGrid,(CVector3i *)((int)((ulonglong)dVar3 >> 0x20) + 0x16c),end_pos
                     ,(int)ROUND(fVar2));
  uVar1 = uVar1 * 0xff >> 0xe;
  if (0xff < uVar1) {
    return 0xffff;
  }
  return uVar1 << 8;
}


// Assembly code:
// 00453700: PUSH EBX
//   Label: core_dcamera.cpp_CDemonCamera_getFogValueAtPosition_FUN_00453700
// 00453701: PUSH ESI
// 00453702: PUSH EBP
// 00453703: SUB ESP,0x1c
// 00453706: MOV EDX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 0045370a: MOV ECX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x8] (READ)
// 0045370e: MOV EAX,dword ptr [ECX]
// 00453710: MOV EBX,dword ptr [EDX + 0x16c]
// 00453716: SUB EAX,EBX
// 00453718: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0045371c: MOV EAX,dword ptr [ECX + 0x4]
// 0045371f: MOV ESI,dword ptr [EDX + 0x170]
// 00453725: SUB EAX,ESI
// 00453727: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0045372b: MOV EAX,dword ptr [ECX + 0x8]
// 0045372e: SUB EAX,dword ptr [EDX + 0x174]
// 00453734: MOV EBX,ESP
// 00453736: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0045373a: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x1c] (DATA)
// 0045373e: FILD dword ptr [EAX]
//   XREF to: Stack[-0x1c] (DATA)
// 00453740: FMUL float ptr [0x0065c644]
//   XREF to: 0065c644 (READ)
// 00453746: FSTP float ptr [EBX]
//   XREF to: Stack[-0x28] (DATA)
// 00453748: FILD dword ptr [EAX + 0x4]
//   XREF to: Stack[-0x18] (READ)
// 0045374b: FMUL float ptr [0x0065c644]
//   XREF to: 0065c644 (READ)
// 00453751: FSTP float ptr [EBX + 0x4]
//   XREF to: Stack[-0x24] (WRITE)
// 00453754: FILD dword ptr [EAX + 0x8]
//   XREF to: Stack[-0x14] (READ)
// 00453757: FMUL float ptr [0x0065c644]
//   XREF to: 0065c644 (READ)
// 0045375d: FSTP float ptr [EBX + 0x8]
//   XREF to: Stack[-0x20] (WRITE)
// 00453760: FLD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x24] (READ)
// 00453764: FMUL ST0
// 00453766: FLD float ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 00453769: FMUL ST0
// 0045376b: FADDP
// 0045376d: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (READ)
// 00453771: FMUL ST0
// 00453773: FADDP
// 00453775: FSQRT
// 00453777: FMUL double ptr [0x0061a452]
//   XREF to: 0061a452 (READ)
// 0045377d: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00453782: FISTP dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x10] (WRITE)
// 00453786: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x10] (READ)
// 0045378a: PUSH EBP
// 0045378b: PUSH ECX
// 0045378c: ADD EDX,0x16c
// 00453792: PUSH EDX
// 00453793: PUSH 0x1519384
//   XREF to: 01519384 (DATA)
// 00453798: CALL core_dcamera.cpp_sampleFogAlongRay_FUN_0044bdd0
//   XREF to: 0044bdd0 (UNCONDITIONAL_CALL)
// 0045379d: MOV EDX,EAX
// 0045379f: SHL EAX,0x4
// 004537a2: ADD EAX,EDX
// 004537a4: MOV EDX,EAX
// 004537a6: SHL EAX,0x4
// 004537a9: SUB EAX,EDX
// 004537ab: SHR EAX,0xe
// 004537ae: ADD ESP,0x10
// 004537b1: CMP EAX,0xff
// 004537b6: JBE 0x004537c4
//   XREF to: 004537c4 (CONDITIONAL_JUMP)
// 004537b8: MOV EAX,0xffff
// 004537bd: ADD ESP,0x1c
// 004537c0: POP EBP
// 004537c1: POP ESI
// 004537c2: POP EBX
// 004537c3: RET
// 004537c4: SHL EAX,0x8
//   Label: LAB_004537c4
// 004537c7: ADD ESP,0x1c
// 004537ca: POP EBP
// 004537cb: POP ESI
// 004537cc: POP EBX
// 004537cd: RET
