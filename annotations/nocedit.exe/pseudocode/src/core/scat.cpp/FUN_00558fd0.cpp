// Name: core_scat.cpp_FUN_00558fd0
// Address: 00558fd0
// Address Range: [[00558fd0, 005590f1]]
// Convention: unknown
// Signature: undefined core_scat.cpp_FUN_00558fd0()
// Cross-references:
//   core_scat.cpp_FUN_005571f0 (005571f0) at 005575ab [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_03106194
// Function calls:
//   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   core_xform.cpp_getTranslation_FUN_005f6110
//   core_xform.cpp_matrixToEulerAngles_FUN_005f5690
//   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10

#include "nocturne.h"

/* Signature: undefined1 actors_hero_scat.cpp_FUN_00558fd0(undefined4 param_1) */

void core_scat_cpp_FUN_00558fd0(void)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  float *pfVar2;
  CMatrix3x4f *pCVar3;
  CVector3f *pCVar4;
  byte bVar5;
  int in_stack_00000004;
  CMatrix3x4f *in_stack_fffffea0;
  CMatrix3x4f local_130;
  float local_100 [12];
  float local_d0 [12];
  CVector3f local_a0 [4];
  CMatrix3x4f local_70;
  CVector3f local_40;
  CMatrix3x3f local_34;
  
  bVar5 = 0;
  if ((*(int *)(in_stack_00000004 + 0x1fbe8) != 0) &&
     (*(int *)(*(int *)(in_stack_00000004 + 0x1fbe8) + 0x2e0) != 8)) {
    local_40.x = 0.0;
    local_40.z = 1.5707964;
    local_40.y = 1.5707964;
    local_34.m[1].x = 0.390807;
    local_34.m[1].y = -0.103151;
    local_34.m[1].z = 0.109206;
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
              (&local_130,local_34.m + 1,&local_40);
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
              (&local_130,(CMatrix3x4f *)(in_stack_00000004 + 0xfd8 + DAT_03106194 * 0x30),
               in_stack_fffffea0);
    pfVar2 = local_d0;
    pCVar3 = &local_70;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      pCVar3->m[0].w = *pfVar2;
      pfVar2 = pfVar2 + (uint)bVar5 * -2 + 1;
      pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar5 * -2 + 1) * 4);
    }
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
              ((CMatrix3x4f *)&stack0xfffffea0,(CVector3f *)(in_stack_00000004 + 0x20),
               (CVector3f *)(in_stack_00000004 + 0x30));
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
              (&local_70,(CMatrix3x4f *)&stack0xfffffea0,in_stack_fffffea0);
    pfVar2 = local_100;
    pCVar4 = local_a0;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      pCVar4->x = *pfVar2;
      pfVar2 = pfVar2 + (uint)bVar5 * -2 + 1;
      pCVar4 = (CVector3f *)((int)pCVar4 + ((uint)bVar5 * -2 + 1) * 4);
    }
    iVar1 = *(int *)(*(int *)(in_stack_00000004 + 0x1fbe8) + 0x154);
    core_xform_cpp_matrixToEulerAngles_FUN_005f5690(local_a0,&local_34);
    core_xform_cpp_getTranslation_FUN_005f6110(local_a0,(CMatrix3x4f *)(local_34.m + 2));
    (**(code **)(iVar1 + 0x60))();
    return;
  }
  return;
}


// Assembly code:
// 00558fd0: PUSH EBX
//   Label: core_scat.cpp_FUN_00558fd0
// 00558fd1: PUSH ESI
// 00558fd2: PUSH EDI
// 00558fd3: PUSH EBP
// 00558fd4: MOV EBP,ESP
// 00558fd6: SUB ESP,0x150
// 00558fdc: SUB EBP,0x7e
// 00558fdf: MOV EBX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 00558fe5: MOV EDX,dword ptr [EBX + 0x1fbe8]
// 00558feb: TEST EDX,EDX
// 00558fed: JZ 0x00558ff8
//   XREF to: 00558ff8 (CONDITIONAL_JUMP)
// 00558fef: CMP dword ptr [EDX + 0x2e0],0x8
// 00558ff6: JNZ 0x00559000
//   XREF to: 00559000 (CONDITIONAL_JUMP)
// 00558ff8: LEA ESP,[EBP + 0x7e]
//   Label: LAB_00558ff8
//   XREF to: Stack[-0x10] (DATA)
// 00558ffb: POP EBP
// 00558ffc: POP EDI
// 00558ffd: POP ESI
// 00558ffe: POP EBX
// 00558fff: RET
// 00559000: MOV EDI,0x3fc90fdb
//   Label: LAB_00559000
// 00559005: LEA EAX,[EBP + 0x4e]
//   XREF to: Stack[-0x40] (DATA)
// 00559008: MOV EDX,0x3ec817db
// 0055900d: XOR ESI,ESI
// 0055900f: MOV ECX,0xbdd340d5
// 00559014: MOV dword ptr [EBP + 0x4e],ESI
//   XREF to: Stack[-0x40] (WRITE)
// 00559017: MOV dword ptr [EBP + 0x56],EDI
//   XREF to: Stack[-0x38] (WRITE)
// 0055901a: MOV dword ptr [EBP + 0x52],EDI
//   XREF to: Stack[-0x3c] (WRITE)
// 0055901d: PUSH EAX
// 0055901e: LEA EAX,[EBP + 0x66]
//   XREF to: Stack[-0x28] (DATA)
// 00559021: MOV dword ptr [EBP + 0x66],EDX
//   XREF to: Stack[-0x28] (WRITE)
// 00559024: PUSH EAX
// 00559025: LEA EAX,[EBP + 0xffffff5e]
//   XREF to: Stack[-0x130] (DATA)
// 0055902b: MOV ESI,0x3ddfa765
// 00559030: PUSH EAX
// 00559031: MOV dword ptr [EBP + 0x6a],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 00559034: MOV dword ptr [EBP + 0x6e],ESI
//   XREF to: Stack[-0x20] (WRITE)
// 00559037: CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   XREF to: 005f54c0 (UNCONDITIONAL_CALL)
// 0055903c: MOV ESI,dword ptr [0x03106194]
//   XREF to: 03106194 (READ)
// 00559042: LEA EAX,[ESI*0x4 + 0x0]
// 00559049: SUB EAX,ESI
// 0055904b: MOV ESI,EAX
// 0055904d: SHL ESI,0x4
// 00559050: LEA EAX,[EBX + 0xfd8]
// 00559056: ADD ESP,0xc
// 00559059: ADD EAX,ESI
// 0055905b: PUSH EAX
// 0055905c: LEA EAX,[EBP + 0xffffff5e]
//   XREF to: Stack[-0x130] (DATA)
// 00559062: PUSH EAX
// 00559063: LEA ESI,[EBP + -0x42]
//   XREF to: Stack[-0xd0] (DATA)
// 00559066: CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
// 0055906b: ADD ESP,0x8
// 0055906e: LEA EAX,[EBX + 0x30]
// 00559071: LEA EDI,[EBP + 0x1e]
//   XREF to: Stack[-0x70] (DATA)
// 00559074: PUSH EAX
// 00559075: LEA EAX,[EBX + 0x20]
// 00559078: MOV ECX,0xc
// 0055907d: PUSH EAX
// 0055907e: LEA EAX,[EBP + 0xffffff2e]
//   XREF to: Stack[-0x160] (DATA)
// 00559084: LEA ESI,[EBP + -0x42]
//   XREF to: Stack[-0xd0] (DATA)
// 00559087: PUSH EAX
// 00559088: MOVSD.REP ES:EDI,ESI
// 0055908a: CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   XREF to: 005f54c0 (UNCONDITIONAL_CALL)
// 0055908f: ADD ESP,0xc
// 00559092: LEA EAX,[EBP + 0xffffff2e]
//   XREF to: Stack[-0x160] (DATA)
// 00559098: PUSH EAX
// 00559099: LEA EAX,[EBP + 0x1e]
//   XREF to: Stack[-0x70] (DATA)
// 0055909c: PUSH EAX
// 0055909d: LEA ESI,[EBP + -0x72]
//   XREF to: Stack[-0x100] (DATA)
// 005590a0: LEA EDI,[EBP + -0x12]
//   XREF to: Stack[-0xa0] (DATA)
// 005590a3: CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
// 005590a8: MOV ECX,0xc
// 005590ad: ADD ESP,0x8
// 005590b0: LEA EAX,[EBP + 0x5a]
//   XREF to: Stack[-0x34] (DATA)
// 005590b3: LEA ESI,[EBP + -0x72]
//   XREF to: Stack[-0x100] (DATA)
// 005590b6: PUSH EAX
// 005590b7: MOVSD.REP ES:EDI,ESI
// 005590b9: LEA EAX,[EBP + -0x12]
//   XREF to: Stack[-0xa0] (DATA)
// 005590bc: MOV EBX,dword ptr [EBX + 0x1fbe8]
// 005590c2: PUSH EAX
// 005590c3: MOV ESI,dword ptr [EBX + 0x154]
// 005590c9: CALL core_xform.cpp_matrixToEulerAngles_FUN_005f5690
//   XREF to: 005f5690 (UNCONDITIONAL_CALL)
// 005590ce: ADD ESP,0x8
// 005590d1: PUSH EAX
// 005590d2: LEA EAX,[EBP + 0x72]
//   XREF to: Stack[-0x1c] (DATA)
// 005590d5: PUSH EAX
// 005590d6: LEA EAX,[EBP + -0x12]
//   XREF to: Stack[-0xa0] (DATA)
// 005590d9: PUSH EAX
// 005590da: CALL core_xform.cpp_getTranslation_FUN_005f6110
//   XREF to: 005f6110 (UNCONDITIONAL_CALL)
// 005590df: ADD ESP,0x8
// 005590e2: PUSH EAX
// 005590e3: PUSH EBX
// 005590e4: CALL dword ptr [ESI + 0x60]
// 005590e7: ADD ESP,0xc
// 005590ea: LEA ESP,[EBP + 0x7e]
//   XREF to: Stack[-0x10] (DATA)
// 005590ed: POP EBP
// 005590ee: POP EDI
// 005590ef: POP ESI
// 005590f0: POP EBX
// 005590f1: RET
