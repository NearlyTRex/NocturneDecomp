// Name: core_manpuz.cpp_FUN_00509720
// Address: 00509720
// Address Range: [[00509720, 005097c1]]
// Convention: unknown
// Signature: undefined core_manpuz.cpp_FUN_00509720()
// Globals:
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CDemonSet g_CDemonSetInstance
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   core_setcolid.cpp_CDemonSet_testOBBCylinderCollision_FUN_00573140

#include "nocturne.h"

/* Signature: undefined1 actors_other_manpuz.cpp_FUN_00509720(undefined4 param_1, undefined4
   param_2) */

void core_manpuz_cpp_FUN_00509720(void)

{
  CKeyFramedModel *pCVar1;
  BADSPACEBASE *in_ESP;
  int *piVar2;
  int in_stack_00000004;
  CBoundingBox3D *in_stack_00000008;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)(in_stack_00000004 + 0x158));
  local_20 = (pCVar1->bounds_min).x;
  local_1c = (pCVar1->bounds_min).y;
  local_18 = (pCVar1->bounds_min).z;
  local_14 = (pCVar1->bounds_max).x;
  local_10 = (pCVar1->bounds_max).y;
  piVar2 = (int *)(in_stack_00000004 + 0x5f0);
  do {
    while (*piVar2 != 0) {
      core_setcolid_cpp_CDemonSet_testOBBCylinderCollision_FUN_00573140
                (g_CDemonSetPtr,in_stack_00000008,(CMatrix3x3f *)&local_20,
                 (SIntersectXZCylinder *)(piVar2 + 3),(SIntersectXZCylinder *)(piVar2 + 9));
      piVar2 = piVar2 + 0x19;
      if (piVar2 == (int *)(in_stack_00000004 + 0xaa0)) {
        return;
      }
    }
    piVar2 = piVar2 + 0x19;
  } while (piVar2 != (int *)(in_stack_00000004 + 0xaa0));
  return;
}


// Assembly code:
// 00509720: PUSH EBX
//   Label: core_manpuz.cpp_FUN_00509720
// 00509721: PUSH ESI
// 00509722: PUSH EDI
// 00509723: SUB ESP,0x18
// 00509726: MOV ESI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 0050972a: MOV EDI,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x8] (READ)
// 0050972e: LEA EAX,[ESI + 0x158]
// 00509734: PUSH EAX
// 00509735: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 0050973a: LEA EBX,[EAX + 0x5678]
// 00509740: ADD ESP,0x4
// 00509743: MOV EAX,dword ptr [EBX]
// 00509745: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x24] (DATA)
// 00509748: LEA EAX,[EBX + 0x4]
// 0050974b: MOV EAX,dword ptr [EAX]
// 0050974d: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00509751: LEA EAX,[EBX + 0x8]
// 00509754: MOV EAX,dword ptr [EAX]
// 00509756: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0050975a: MOV EAX,dword ptr [EBX + 0xc]
// 0050975d: ADD EBX,0xc
// 00509760: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00509764: LEA EAX,[EBX + 0x4]
// 00509767: MOV EAX,dword ptr [EAX]
// 00509769: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0050976d: LEA EAX,[EBX + 0x8]
// 00509770: ADD ESI,0x5f0
// 00509776: MOV EAX,dword ptr [EAX]
// 00509778: MOV EBX,ESI
// 0050977a: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 0050977e: ADD ESI,0x4b0
// 00509784: CMP dword ptr [EBX],0x0
//   Label: LAB_00509784
// 00509787: JNZ 0x00509797
//   XREF to: 00509797 (CONDITIONAL_JUMP)
// 00509789: ADD EBX,0x64
// 0050978c: CMP EBX,ESI
// 0050978e: JNZ 0x00509784
//   XREF to: 00509784 (CONDITIONAL_JUMP)
// 00509790: ADD ESP,0x18
// 00509793: POP EDI
// 00509794: POP ESI
// 00509795: POP EBX
// 00509796: RET
// 00509797: LEA EAX,[EBX + 0x24]
//   Label: LAB_00509797
// 0050979a: PUSH EAX
// 0050979b: LEA EAX,[EBX + 0xc]
// 0050979e: PUSH EAX
// 0050979f: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x24] (DATA)
// 005097a3: PUSH EAX
// 005097a4: PUSH EDI
// 005097a5: MOV ECX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 005097ab: PUSH ECX
//   XREF to: 03114278 (DATA)
// 005097ac: CALL core_setcolid.cpp_CDemonSet_testOBBCylinderCollision_FUN_00573140
//   XREF to: 00573140 (UNCONDITIONAL_CALL)
// 005097b1: ADD ESP,0x14
// 005097b4: ADD EBX,0x64
// 005097b7: CMP EBX,ESI
// 005097b9: JNZ 0x00509784
//   XREF to: 00509784 (CONDITIONAL_JUMP)
// 005097bb: ADD ESP,0x18
// 005097be: POP EDI
// 005097bf: POP ESI
// 005097c0: POP EBX
// 005097c1: RET
